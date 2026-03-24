/*
 * XREFs of ?ZeroIfNeeded@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z @ 0x1C0075560
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00178A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024D70 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0074C60 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?AccessZeroTransition@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C0075738 (-AccessZeroTransition@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0075770 (-ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C00857BC (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C00857DC (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::ZeroIfNeeded(VIDMM_RECYCLE_HEAP_MGR *this, VIDMM_RECYCLE_MULTIRANGE *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  struct _KTHREAD **v7; // rbx
  __int64 v8; // rdx
  VIDMM_PROCESS *v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  struct VIDMM_RECYCLE_RANGE *i; // rax
  VIDMM_RECYCLE_RANGE *j; // rbx
  struct _KTHREAD **v14; // rbx
  int v15; // eax
  int v16; // eax
  int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rax
  struct _KTHREAD **v28; // [rsp+20h] [rbp-58h] BYREF
  char v29; // [rsp+28h] [rbp-50h]
  struct _KAPC_STATE v30; // [rsp+30h] [rbp-48h] BYREF
  VIDMM_PROCESS *v31; // [rsp+60h] [rbp-18h]

  v31 = (VIDMM_PROCESS *)*((_QWORD *)this + 1);
  VIDMM_PROCESS::SafeAttach(v31, &v30);
  v29 = 0;
  v28 = (struct _KTHREAD **)((char *)this + 1328);
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-1328LL )
  {
    v18 = WdLogNewEntry5_WdAssertion(v5, v4, v6);
    *(_QWORD *)(v18 + 24) = 762LL;
    WdLogEvent5_WdAssertion(v18);
    if ( v29 )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v19);
      v21[5] = &v28;
      v21[3] = 275LL;
      v21[4] = 4LL;
      v21[6] = 0LL;
      v21[7] = 0LL;
      WdLogEvent5_WdCriticalError(v21);
    }
  }
  v7 = v28;
  KeEnterCriticalRegion();
  if ( v7[2] == KeGetCurrentThread() )
  {
    v22 = *((_DWORD *)v7 + 6);
    if ( v22 <= 0 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v9, v8, v10);
      *(_QWORD *)(v23 + 24) = 661LL;
      WdLogEvent5_WdAssertion(v23);
      v22 = *((_DWORD *)v7 + 6);
    }
    v11 = v22 + 1;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v7, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v17 = *((_DWORD *)v7 + 7);
        if ( v17 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer((__int64)v9, (const EVENT_DESCRIPTOR *)"g", v10, v17);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v7 + 1);
      ExAcquirePushLockExclusiveEx(v7, 0LL);
    }
    if ( v7[2] )
    {
      v24 = WdLogNewEntry5_WdAssertion(v9, v8, v10);
      *(_QWORD *)(v24 + 24) = 685LL;
      WdLogEvent5_WdAssertion(v24);
    }
    if ( *((_DWORD *)v7 + 6) )
    {
      v25 = WdLogNewEntry5_WdAssertion(v9, v8, v10);
      *(_QWORD *)(v25 + 24) = 686LL;
      WdLogEvent5_WdAssertion(v25);
    }
    v7[2] = KeGetCurrentThread();
    v11 = 1;
  }
  *((_DWORD *)v7 + 6) = v11;
  v29 = 1;
  if ( !dword_1C00503E0 )
    goto LABEL_16;
  for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8);
        *((_DWORD *)i + 20) != 3;
        i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    if ( i == *((struct VIDMM_RECYCLE_RANGE **)a2 + 9) )
      goto LABEL_13;
  }
  VIDMM_RECYCLE_MULTIRANGE::ZeroMultirangeMemory(a2);
LABEL_13:
  for ( j = (VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8); ; j = VIDMM_RECYCLE_RANGE::GetNextRange(j) )
  {
    VIDMM_RECYCLE_RANGE::AccessZeroTransition(j);
    if ( j == *((VIDMM_RECYCLE_RANGE **)a2 + 9) )
      break;
  }
  if ( v29 )
  {
LABEL_16:
    v14 = v28;
    v29 = 0;
    if ( v28[2] != KeGetCurrentThread() )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8);
      v26[3] = 275LL;
      v26[4] = 4LL;
      v26[5] = v14;
      v26[6] = 0LL;
      v26[7] = 0LL;
      WdLogEvent5_WdCriticalError(v26);
    }
    v15 = *((_DWORD *)v14 + 6);
    if ( v15 <= 0 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v9, v8, v10);
      *(_QWORD *)(v27 + 24) = 705LL;
      WdLogEvent5_WdAssertion(v27);
      v15 = *((_DWORD *)v14 + 6);
    }
    v16 = v15 - 1;
    *((_DWORD *)v14 + 6) = v16;
    if ( !v16 )
    {
      v14[2] = 0LL;
      ExReleasePushLockExclusiveEx(v14, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  VIDMM_PROCESS::SafeDetach(v9, &v30);
}
