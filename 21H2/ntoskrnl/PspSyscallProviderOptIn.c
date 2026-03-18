/*
 * XREFs of PspSyscallProviderOptIn @ 0x140659AD4
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     PspUnlockProcessExclusive @ 0x14025302C (PspUnlockProcessExclusive.c)
 *     PspLockProcessExclusive @ 0x1402A0880 (PspLockProcessExclusive.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     PspDereferenceSyscallProvider @ 0x140419D6C (PspDereferenceSyscallProvider.c)
 *     PspLookupSyscallProviderById @ 0x140419E5C (PspLookupSyscallProviderById.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PspAttachProcessToSyscallProvider @ 0x1406595AC (PspAttachProcessToSyscallProvider.c)
 */

__int64 __fastcall PspSyscallProviderOptIn(__int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rax
  struct _EX_RUNDOWN_REF *v6; // rbx
  struct _EX_RUNDOWN_REF *v7; // rbp
  __int64 (__fastcall *Count)(__int64, __int64 *); // rax
  struct _KTHREAD *CurrentThread; // rbx
  volatile signed __int32 *i; // rax
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  int v13; // [rsp+28h] [rbp-10h]
  int v14; // [rsp+2Ch] [rbp-Ch]
  struct _EX_RUNDOWN_REF *v15; // [rsp+40h] [rbp+8h] BYREF

  v15 = 0LL;
  if ( (*(_DWORD *)(a1 + 2172) & 1) != 0 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    v4 = PspLookupSyscallProviderById(a2, (__int64)&v15);
    if ( v4 >= 0 )
    {
      v5 = *(unsigned __int8 *)(a2 + 16);
      if ( (_BYTE)v5 || HIDWORD(v15[v5 + 11].Ptr) == -1 )
      {
        v4 = -1073741811;
      }
      else if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 2172), 0x19u) )
      {
        v4 = -1073741823;
      }
      else
      {
        if ( *(_QWORD *)(a1 + 2896) )
        {
          v4 = -1073741790;
        }
        else
        {
          v6 = v15;
          v7 = v15 + 7;
          if ( ExAcquireRundownProtection(v15 + 7) )
          {
            v14 = 0;
            Count = (__int64 (__fastcall *)(__int64, __int64 *))v6[5].Count;
            if ( !Count
              || (v12 = *(_QWORD *)(a1 + 1344), v13 = *(unsigned __int8 *)(a2 + 16), v4 = Count(a1, &v12), v4 >= 0) )
            {
              CurrentThread = KeGetCurrentThread();
              PspLockProcessExclusive(a1, (__int64)CurrentThread);
              PspAttachProcessToSyscallProvider((_QWORD *)a1, (__int64)v15, *(unsigned __int8 *)(a2 + 16));
              for ( i = *(volatile signed __int32 **)(a1 + 1504);
                    i != (volatile signed __int32 *)(a1 + 1504);
                    i = *(volatile signed __int32 **)i )
              {
                _interlockedbittestandset(i - 334, 0x1Du);
              }
              PspUnlockProcessExclusive(a1, (__int64)CurrentThread);
              v4 = 0;
            }
            ExReleaseRundownProtection(v7);
          }
          else
          {
            v4 = -1073741738;
          }
        }
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 2172), 0x19u);
      }
    }
    if ( v15 )
      PspDereferenceSyscallProvider((volatile signed __int64 *)v15);
  }
  return (unsigned int)v4;
}
