/*
 * XREFs of PspQueryWorkingSetWatch @ 0x1409083B0
 * Callers:
 *     NtQueryInformationProcess @ 0x14068AF10 (NtQueryInformationProcess.c)
 * Callees:
 *     KeWaitForGate @ 0x14022A4E4 (KeWaitForGate.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     ExIsRestrictedCaller @ 0x1406017E4 (ExIsRestrictedCaller.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140707F60 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __fastcall PspQueryWorkingSetWatch(
        HANDLE Handle,
        int a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        KPROCESSOR_MODE AccessMode)
{
  NTSTATUS result; // eax
  int v8; // r13d
  __int64 v9; // rdx
  __int64 j; // r8
  __int64 v11; // r9
  PVOID v12; // rcx
  __int64 v13; // rdi
  int v14; // esi
  struct _KTHREAD *CurrentThread; // r12
  __int64 v16; // r14
  signed __int32 v17; // eax
  unsigned int v18; // r15d
  __int64 i; // rcx
  PVOID Object; // [rsp+50h] [rbp-48h] BYREF
  __int64 v21; // [rsp+58h] [rbp-40h]
  struct _KTHREAD *v22; // [rsp+60h] [rbp-38h]
  __int64 v23; // [rsp+68h] [rbp-30h]

  Object = 0LL;
  if ( a2 == 42 )
  {
    if ( (a4 & 0x1F) != 0 )
      return -1073741820;
    v8 = 32;
  }
  else
  {
    v8 = 16;
  }
  if ( ExIsRestrictedCaller(AccessMode) )
    return -1073741790;
  result = ObReferenceObjectByHandleWithTag(
             Handle,
             0x400u,
             (POBJECT_TYPE)PsProcessType,
             AccessMode,
             0x79517350u,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v12 = Object;
    v13 = *((_QWORD *)Object + 166);
    v23 = v13;
    if ( !v13 )
    {
      v14 = -1073741823;
LABEL_17:
      ObfDereferenceObjectWithTag(v12, 0x79517350u);
      return v14;
    }
    CurrentThread = KeGetCurrentThread();
    v22 = CurrentThread;
    v14 = 0;
    v16 = 0LL;
    --CurrentThread->KernelApcDisable;
    _m_prefetchw((const void *)v13);
    v17 = _InterlockedOr((volatile signed __int32 *)v13, 1u);
    if ( (v17 & 1) != 0 )
    {
      v14 = -2147483622;
    }
    else
    {
      v18 = (unsigned __int16)v17 >> 1;
      if ( (unsigned __int16)v17 >> 1 )
      {
        if ( (v17 & 0x7FFF0000) != 0 )
          KeWaitForGate(v13 + 16, 0);
        v11 = v8 * (v18 + 1);
        if ( a4 >= (unsigned int)v11 )
        {
          _m_prefetchw((const void *)(v13 + 8));
          v16 = *(_QWORD *)(v13 + 8);
          if ( a2 == 42 )
          {
            for ( i = 0LL; ; i = (unsigned int)(i + 1) )
            {
              v9 = a3 + 32LL * (unsigned int)i;
              if ( (unsigned int)i >= v18 )
                break;
              *(_OWORD *)v9 = *(_OWORD *)(v13 + 24 * i + 40);
              *(_OWORD *)(v9 + 16) = *(unsigned __int64 *)(v13 + 24 * i + 56);
            }
            v21 = a3 + 32LL * (unsigned int)i;
            *(_QWORD *)(v9 + 16) = 0LL;
            *(_QWORD *)(v9 + 24) = 0LL;
          }
          else
          {
            v9 = a3;
            v21 = a3;
            for ( j = 0LL; (unsigned int)j < v18; j = (unsigned int)(j + 1) )
            {
              *(_OWORD *)v9 = *(_OWORD *)(v13 + 24 * j + 40);
              v9 += 16LL;
              v21 = v9;
            }
          }
          *(_QWORD *)v9 = 0LL;
          *(_QWORD *)(v9 + 8) = v16;
          if ( a5 )
            *a5 = v11;
        }
        else
        {
          v14 = -1073741789;
          if ( a5 )
            *a5 = v11;
        }
        if ( v14 >= 0 )
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 8), -v16);
          *(_DWORD *)v13 = 0;
          goto LABEL_16;
        }
      }
      else
      {
        v14 = -2147483622;
      }
      _interlockedbittestandreset((volatile signed __int32 *)v13, 0);
    }
LABEL_16:
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v9, j, v11);
    v12 = Object;
    goto LABEL_17;
  }
  return result;
}
