/*
 * XREFs of VidSchiRedirectedFlipWaitOnSyncObject @ 0x1C0030850
 * Callers:
 *     VidSchSubmitCommandContextless @ 0x1C00357F0 (VidSchSubmitCommandContextless.c)
 * Callees:
 *     VidSchiSubmitPresentHistoryToken @ 0x1C000288C (VidSchiSubmitPresentHistoryToken.c)
 *     ?VidSchiAcquirePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1C00070E4 (-VidSchiAcquirePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C000B050 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0011E50 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00128EC (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018AA0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0018AC0 (memmove.c)
 *     VidSchIsVSyncEnabled @ 0x1C0079F70 (VidSchIsVSyncEnabled.c)
 */

__int64 __fastcall VidSchiRedirectedFlipWaitOnSyncObject(struct _VIDSCH_GLOBAL *a1, char *Src, __int64 a3, _DWORD *a4)
{
  unsigned int v7; // r12d
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // r15
  __int64 v11; // rdx
  void (__fastcall *v12)(_QWORD, __int64, __int64); // rax
  struct _VIDSCH_GLOBAL *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned __int64 v16; // rcx
  unsigned __int64 *v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v21; // rax
  PSLIST_ENTRY v22; // r15
  __int64 v23; // rdx
  __int64 (__fastcall *v24)(__int64, __int64, __int64, char *); // rax
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rdx
  char *v32; // rdi
  char *v33; // r15
  char **v34; // rax
  _QWORD v35[2]; // [rsp+30h] [rbp-40h] BYREF
  char v36; // [rsp+40h] [rbp-30h]
  _QWORD v37[4]; // [rsp+48h] [rbp-28h] BYREF
  __int16 v38; // [rsp+68h] [rbp-8h]

  v7 = 0;
  v8 = *(_QWORD *)&Src[*((_DWORD *)Src + 145) * ((8 * *((_DWORD *)Src + 146) + 199) & 0xFFFFFFF8) + 624];
  if ( v8 )
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 8) + 32LL);
  else
    v9 = 0LL;
  v10 = *((unsigned int *)Src + 29);
  if ( (*(_DWORD *)Src & 0x1000000) != 0 && (_DWORD)v10 != -1 )
  {
    v11 = *(unsigned int *)(*((_QWORD *)a1 + v10 + 388) + 33288LL);
    if ( (_DWORD)v11 != -1 )
    {
      v12 = (void (__fastcall *)(_QWORD, __int64, __int64))*((_QWORD *)a1 + 370);
      if ( v12 )
        v12(*((_QWORD *)a1 + 378), v11, 0xFFFFFFFFLL);
    }
  }
  if ( (*a4 & 0x1000) != 0 && (*a4 & 0xC00) != 0x400 && (_DWORD)v10 != -1 && (*(_DWORD *)Src & 0x1040000) == 0x1040000 )
  {
    _InterlockedIncrement((volatile signed __int32 *)a1 + 182);
    v13 = a1;
    if ( *((_BYTE *)a1 + 2132) )
      v13 = (struct _VIDSCH_GLOBAL *)((char *)a1 + 4 * v10);
    _InterlockedIncrement((volatile signed __int32 *)v13 + 183);
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 1572));
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 4 * v10 + 1508));
    if ( (*(_DWORD *)(v9 + 48) & 2) != 0 || *((int *)Src + 30) >= 4 || *((_BYTE *)a1 + 148) )
      VidSchIsVSyncEnabled(a1, (unsigned int)v10);
  }
  v38 = 0;
  v37[0] = (char *)a1 + 1712;
  AcquireSpinLock::Acquire((Acquire *)v37);
  v16 = *((_QWORD *)Src + 58);
  v35[1] = v35;
  v35[0] = v35;
  v36 = 0;
  if ( *(_BYTE *)(a3 + 28) )
    goto LABEL_22;
  v17 = *(unsigned __int64 **)(a3 + 64);
  if ( *(_BYTE *)(a3 + 29) )
  {
    if ( *v17 >= v16 )
    {
LABEL_22:
      v18 = (_QWORD *)WdLogNewEntry5_WdEvent(v16, v14);
      v18[3] = a3;
      v18[4] = **(_QWORD **)(a3 + 64);
      v18[5] = *((_QWORD *)Src + 58);
      WdLogEvent5_WdEvent(v18);
      VidSchiAcquirePrivateDataReference(a1, (struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)(Src + 576));
      v19 = *((_QWORD *)Src + 4);
      if ( v19 )
        _InterlockedIncrement((volatile signed __int32 *)(v19 + 12));
      VidSchiSubmitPresentHistoryToken((struct HwQueueStagingList *)v35, 0LL, Src, 0LL, (__int64)a1);
      goto LABEL_25;
    }
  }
  else if ( *(_DWORD *)v17 - (int)v16 >= 0 )
  {
    goto LABEL_22;
  }
  if ( *(_DWORD *)(a3 + 32) == 0x7FFFFFFF )
  {
    v21 = WdLogNewEntry5_WdAssertion(v16, v14, v15);
    WdLogEvent5_WdAssertion(v21);
    v7 = -1073741823;
  }
  else
  {
    ++*((_DWORD *)a1 + 221);
    v22 = ExpInterlockedPopEntrySList((PSLIST_HEADER)a1 + 54);
    if ( v22
      || (v23 = *((unsigned int *)a1 + 227),
          v24 = (__int64 (__fastcall *)(__int64, __int64, __int64, char *))*((_QWORD *)a1 + 114),
          v25 = *((unsigned int *)a1 + 226),
          v26 = *((unsigned int *)a1 + 225),
          ++*((_DWORD *)a1 + 222),
          (v22 = (PSLIST_ENTRY)v24(v26, v23, v25, (char *)a1 + 864)) != 0LL) )
    {
      *((_QWORD *)&v22->Next + 1) = a3;
      v22[1].Next = (struct _SLIST_ENTRY *)*((_QWORD *)Src + 58);
      memmove(&v22[2].Next + 1, Src, *((unsigned int *)Src + 135));
      VidSchiAcquirePrivateDataReference(a1, (struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)(&v22[38].Next + 1));
      v31 = *((_QWORD *)&v22[4].Next + 1);
      if ( v31 )
        _InterlockedIncrement((volatile signed __int32 *)(v31 + 12));
      v32 = (char *)a1 + 848;
      v33 = (char *)(&v22[1].Next + 1);
      v34 = (char **)*((_QWORD *)v32 + 1);
      if ( *v34 != v32 )
        __fastfail(3u);
      *(_QWORD *)v33 = v32;
      *((_QWORD *)v33 + 1) = v34;
      *v34 = v33;
      *((_QWORD *)v32 + 1) = v33;
      ++*(_DWORD *)(a3 + 40);
      _InterlockedIncrement((volatile signed __int32 *)(a3 + 32));
    }
    else
    {
      v30 = WdLogNewEntry5_WdAssertion(v28, v27, v29);
      WdLogEvent5_WdAssertion(v30);
      v7 = -1073741801;
    }
  }
LABEL_25:
  if ( !v36 )
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v35);
  AcquireSpinLock::Release((AcquireSpinLock *)v37);
  return v7;
}
