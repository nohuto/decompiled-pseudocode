/*
 * XREFs of SmcStoreResize @ 0x1409D8984
 * Callers:
 *     SmcProcessResizeRequest @ 0x1409D53B4 (SmcProcessResizeRequest.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     RtlSetAllBits @ 0x14028BD00 (RtlSetAllBits.c)
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     SSHSupportAllocateNonPaged @ 0x1402A4AEC (SSHSupportAllocateNonPaged.c)
 *     RtlClearAllBits @ 0x1402B24A0 (RtlClearAllBits.c)
 *     SmStoreResize @ 0x1409D4F20 (SmStoreResize.c)
 *     SmcCacheReference @ 0x1409D8000 (SmcCacheReference.c)
 *     SmcStoreEntryFind @ 0x1409D8838 (SmcStoreEntryFind.c)
 *     SmcStorePlacementGet @ 0x1409D8878 (SmcStorePlacementGet.c)
 */

__int64 __fastcall SmcStoreResize(__int64 a1, _DWORD *a2)
{
  struct _PRIVILEGE_SET *NonPaged; // rsi
  unsigned int v4; // edx
  __int64 v5; // rax
  __int64 v6; // rdi
  int v7; // edi
  __int64 v8; // rax
  unsigned __int64 v9; // r13
  bool v10; // zf
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v12; // r15
  struct _EX_RUNDOWN_REF *v13; // rax
  struct _EX_RUNDOWN_REF *v14; // r14
  struct _PRIVILEGE_SET *v15; // rcx
  _DWORD *Count; // rdx
  struct _PRIVILEGE_SET *v17; // r8
  ULONG PrivilegeCount; // eax
  struct _KTHREAD *v19; // rax
  struct _PRIVILEGE_SET *v20; // rcx
  _DWORD *v21; // rdx
  struct _PRIVILEGE_SET *v22; // r8
  ULONG v23; // eax
  RTL_BITMAP BitMapHeader; // [rsp+30h] [rbp-38h] BYREF
  __int128 v26; // [rsp+40h] [rbp-28h] BYREF
  __int64 v27; // [rsp+50h] [rbp-18h]
  int v29; // [rsp+B8h] [rbp+50h]
  struct _EX_RUNDOWN_REF *v30; // [rsp+C0h] [rbp+58h]
  int v31; // [rsp+C8h] [rbp+60h]

  v29 = 0;
  NonPaged = 0LL;
  v4 = a2[1];
  v27 = 0LL;
  v31 = a1 - 2128;
  v26 = 0LL;
  BitMapHeader = 0LL;
  v5 = SmcCacheReference(a1, v4);
  v6 = v5;
  if ( !v5 )
    return (unsigned int)-1073741672;
  v8 = *(unsigned int *)(v5 + 8);
  if ( a2[4] > (unsigned int)v8 )
  {
    v7 = -1073741811;
    goto LABEL_29;
  }
  v9 = (unsigned __int64)(v8 + 31) >> 5;
  NonPaged = (struct _PRIVILEGE_SET *)SSHSupportAllocateNonPaged((unsigned int)(4 * v9), 0x72436D73u);
  if ( NonPaged )
  {
    v10 = (*a2 & 0x100) == 0;
    BitMapHeader.SizeOfBitMap = *(_DWORD *)(v6 + 8);
    BitMapHeader.Buffer = &NonPaged->PrivilegeCount;
    if ( v10 )
    {
      RtlClearAllBits(&BitMapHeader);
    }
    else
    {
      RtlSetAllBits(&BitMapHeader);
      v27 = 0LL;
      DWORD1(v26) |= 4u;
      *((_QWORD *)&v26 + 1) = NonPaged;
    }
    CurrentThread = KeGetCurrentThread();
    v12 = (volatile signed __int64 *)(v6 + 160);
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v6 + 160, 0LL);
    v13 = (struct _EX_RUNDOWN_REF *)SmcStoreEntryFind(v6, a2[2], a2[3]);
    v30 = v13;
    v14 = v13 + 2;
    if ( v13 )
    {
      v29 = ExAcquireRundownProtection_0(v13 + 2);
      if ( (*a2 & 0x100) != 0 )
      {
        v7 = SmcStorePlacementGet(v6, a2[4], (__int64)&v26);
        if ( v7 < 0 )
          goto LABEL_24;
        v15 = NonPaged;
        Count = (_DWORD *)v30[1].Count;
        v17 = (struct _PRIVILEGE_SET *)((char *)NonPaged + 4 * (unsigned int)v9);
        if ( NonPaged < v17 )
        {
          do
          {
            PrivilegeCount = v15->PrivilegeCount;
            v15 = (struct _PRIVILEGE_SET *)((char *)v15 + 4);
            *Count++ |= PrivilegeCount;
          }
          while ( v15 < v17 );
        }
      }
      if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v12);
      KeAbPostRelease((ULONG_PTR)v12);
      KeLeaveCriticalRegion();
      SmStoreResize(v31, a2[3], a2[2], (unsigned int)&BitMapHeader, (__int64)(a2 + 4), (*a2 >> 8) & 1);
      if ( (*a2 & 0x100) != 0 || !a2[4] )
      {
        v7 = 0;
LABEL_27:
        if ( v29 )
          ExReleaseRundownProtection_0(v14);
        goto LABEL_29;
      }
      v19 = KeGetCurrentThread();
      --v19->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v12, 0LL);
      v20 = NonPaged;
      v21 = (_DWORD *)v30[1].Count;
      v22 = (struct _PRIVILEGE_SET *)((char *)NonPaged + 4 * (unsigned int)v9);
      if ( NonPaged < v22 )
      {
        do
        {
          v23 = v20->PrivilegeCount;
          v20 = (struct _PRIVILEGE_SET *)((char *)v20 + 4);
          *v21++ ^= v23;
        }
        while ( v20 < v22 );
      }
      v7 = 0;
    }
    else
    {
      v7 = -1073741672;
    }
LABEL_24:
    if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v12);
    KeAbPostRelease((ULONG_PTR)v12);
    KeLeaveCriticalRegion();
    goto LABEL_27;
  }
  v7 = -1073741670;
LABEL_29:
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(32LL * (a2[1] & 0xF) + a1 + 8));
  if ( NonPaged )
    CmSiFreeMemory(NonPaged);
  return (unsigned int)v7;
}
