/*
 * XREFs of SepDeleteSessionLowboxEntries @ 0x1402235F4
 * Callers:
 *     SepDeReferenceLogonSession @ 0x14069BBC0 (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x14069BDD0 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     RtlDeleteHashTable @ 0x1403A3620 (RtlDeleteHashTable.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void SepDeleteSessionLowboxEntries()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // r8
  unsigned int v2; // r15d
  char *i; // r14
  struct _KTHREAD *v4; // rax
  volatile signed __int64 *v5; // rsi
  char *v6; // r12
  int v7; // edx
  __int64 v8; // rcx
  int v9; // r10d
  unsigned int v10; // edi
  _QWORD *v11; // r9
  _QWORD *v12; // rdx
  __int64 j; // r8
  unsigned __int64 v14; // rax
  unsigned int v15; // edx
  struct _KTHREAD *v16; // rbp
  unsigned int v17; // ecx
  char *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // edx
  char *v22; // rcx
  void **v23; // rax
  struct _KTHREAD *v24; // rbp
  unsigned int SessionId; // ecx
  char *p_Process; // rdi
  __int64 v27; // rdx
  __int64 v28; // r8
  int v29; // edx
  struct _KTHREAD *v30; // rdi
  unsigned __int64 v31; // rdx
  char *v32; // rbx
  unsigned int v33; // ecx
  int v34; // r9d

  if ( g_SessionLowboxMap )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&LowboxSessionMapLock, 0LL);
    v2 = -1;
    for ( i = *(char **)g_SessionLowboxMap; i != (char *)g_SessionLowboxMap; i = v6 )
    {
      v4 = KeGetCurrentThread();
      v5 = (volatile signed __int64 *)(i + 24);
      v6 = *(char **)i;
      --v4->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(i + 24), 0LL);
      v7 = *((_DWORD *)i + 8);
      v8 = *((_QWORD *)i + 5) & 4LL;
      v9 = (unsigned int)v8 != 0LL ? 0x20 : 0;
      v10 = v7 + v9 - 1;
      v11 = (_QWORD *)(*((_QWORD *)i + 5) - (v8 != 0 ? 4 : 0));
      if ( !v7 )
        goto LABEL_31;
      v12 = (_QWORD *)(*((_QWORD *)i + 5) - (v8 != 0 ? 4 : 0));
      for ( j = ~*v11 | ((1LL << v9) - 1); j == -1; j = ~*v12 )
      {
        if ( ++v12 > &v11[(unsigned __int64)v10 >> 6] )
          goto LABEL_31;
      }
      _BitScanForward64(&v14, ~j);
      v15 = v14 + ((unsigned int)(v12 - v11) << 6);
      if ( v15 > v10 || v15 == -1 || v15 - v9 == -1 )
      {
LABEL_31:
        RtlDeleteHashTable(*((PRTL_DYNAMIC_HASH_TABLE *)i + 6));
        ExFreePoolWithTag(*((PVOID *)i + 5), 0);
        v22 = *(char **)i;
        if ( *(char **)(*(_QWORD *)i + 8LL) != i || (v23 = (void **)*((_QWORD *)i + 1), *v23 != i) )
          __fastfail(3u);
        *v23 = v22;
        *((_QWORD *)v22 + 1) = v23;
        if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(i + 24);
        v24 = KeGetCurrentThread();
        if ( (unsigned __int64)v5 - qword_140C50630 >= 0x8000000000LL )
          SessionId = -1;
        else
          SessionId = MmGetSessionIdEx(v24->ApcState.Process);
        _disable();
        p_Process = (char *)&v24[1].Process;
        v27 = 0LL;
        v28 = (unsigned __int64)v5 & 0x7FFFFFFFFFFFFFFCLL;
        while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != v28
             || !p_Process[18]
             || (*(_DWORD *)p_Process & 1) != 0
             || *((_DWORD *)p_Process + 2) != SessionId )
        {
          v27 = (unsigned int)(v27 + 1);
          p_Process += 96;
          if ( (unsigned int)v27 >= 6 )
            goto LABEL_49;
        }
        p_Process[18] = 0;
        if ( p_Process )
        {
          if ( *(__int64 *)p_Process < 0 )
          {
            *p_Process |= 2u;
            _enable();
            KiAbEntryRemoveFromTree(p_Process, v27, v28);
            _disable();
          }
          v29 = *((_DWORD *)p_Process + 22);
          *((_DWORD *)p_Process + 22) = 0;
          p_Process[17] = 0;
          *(_QWORD *)p_Process = 0LL;
          v24->AbEntrySummary |= 1 << p_Process[16];
          _enable();
          if ( v29 )
            KiAbThreadRemoveBoostsSlow((ULONG_PTR)v24);
          goto LABEL_51;
        }
LABEL_49:
        if ( (*((_DWORD *)&v24->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v24, (ULONG_PTR)(i + 24), SessionId, 0LL);
        _enable();
LABEL_51:
        KeLeaveCriticalRegion();
        ExFreePoolWithTag(i, 0);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(i + 24);
        v16 = KeGetCurrentThread();
        if ( (unsigned __int64)v5 - qword_140C50630 >= 0x8000000000LL )
          v17 = -1;
        else
          v17 = MmGetSessionIdEx(v16->ApcState.Process);
        _disable();
        v18 = (char *)&v16[1].Process;
        v19 = 0LL;
        v20 = (unsigned __int64)v5 & 0x7FFFFFFFFFFFFFFCLL;
        while ( (*(_QWORD *)v18 & 0x7FFFFFFFFFFFFFFCLL) != v20
             || !v18[18]
             || (*(_DWORD *)v18 & 1) != 0
             || *((_DWORD *)v18 + 2) != v17 )
        {
          v19 = (unsigned int)(v19 + 1);
          v18 += 96;
          if ( (unsigned int)v19 >= 6 )
            goto LABEL_28;
        }
        v18[18] = 0;
        if ( v18 )
        {
          if ( *(__int64 *)v18 < 0 )
          {
            *v18 |= 2u;
            _enable();
            KiAbEntryRemoveFromTree(v18, v19, v20);
            _disable();
          }
          v21 = *((_DWORD *)v18 + 22);
          *((_DWORD *)v18 + 22) = 0;
          v18[17] = 0;
          *(_QWORD *)v18 = 0LL;
          v16->AbEntrySummary |= 1 << v18[16];
          _enable();
          if ( v21 )
            KiAbThreadRemoveBoostsSlow((ULONG_PTR)v16);
          goto LABEL_30;
        }
LABEL_28:
        if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v16, (ULONG_PTR)(i + 24), v17, 0LL);
        _enable();
LABEL_30:
        KeLeaveCriticalRegion();
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&LowboxSessionMapLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&LowboxSessionMapLock);
    v30 = KeGetCurrentThread();
    if ( (unsigned __int64)&LowboxSessionMapLock - qword_140C50630 < 0x8000000000LL )
      v2 = MmGetSessionIdEx(v30->ApcState.Process);
    _disable();
    v31 = (unsigned __int64)&LowboxSessionMapLock & 0x7FFFFFFFFFFFFFFCLL;
    v32 = (char *)&v30[1].Process;
    v33 = 0;
    while ( (*(_QWORD *)v32 & 0x7FFFFFFFFFFFFFFCLL) != v31
         || !v32[18]
         || (*(_DWORD *)v32 & 1) != 0
         || *((_DWORD *)v32 + 2) != v2 )
    {
      ++v33;
      v32 += 96;
      if ( v33 >= 6 )
        goto LABEL_71;
    }
    v32[18] = 0;
    if ( v32 )
    {
      if ( *(__int64 *)v32 < 0 )
      {
        *v32 |= 2u;
        _enable();
        KiAbEntryRemoveFromTree(v32, v31, v1);
        _disable();
      }
      v34 = *((_DWORD *)v32 + 22);
      *((_DWORD *)v32 + 22) = 0;
      v32[17] = 0;
      *(_QWORD *)v32 = 0LL;
      v30->AbEntrySummary |= 1 << v32[16];
      _enable();
      if ( v34 )
        KiAbThreadRemoveBoostsSlow((ULONG_PTR)v30);
      goto LABEL_74;
    }
LABEL_71:
    if ( (*((_DWORD *)&v30->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v30, (ULONG_PTR)&LowboxSessionMapLock, v2, 0LL);
    _enable();
LABEL_74:
    KeLeaveCriticalRegion();
  }
}
