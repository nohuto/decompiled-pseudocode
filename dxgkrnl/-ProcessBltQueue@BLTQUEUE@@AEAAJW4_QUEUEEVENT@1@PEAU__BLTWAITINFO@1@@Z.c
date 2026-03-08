/*
 * XREFs of ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C01CB6F0
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C01CB020 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C000B374 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C003FFEC (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x1C01CB880 (-SignalVSyncEvent@BLTQUEUE@@AEAAXXZ.c)
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1C01CBAB0 (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 *     ?InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z @ 0x1C0225296 (-InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z.c)
 *     ?AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ @ 0x1C02D24A4 (-AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ.c)
 *     ?Blt@BLTENTRY@@QEAAJXZ @ 0x1C03CC2E4 (-Blt@BLTENTRY@@QEAAJXZ.c)
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1C03CD0F0 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?IndirectBlt@BLTENTRY@@QEAAJXZ @ 0x1C03CD34C (-IndirectBlt@BLTENTRY@@QEAAJXZ.c)
 *     ?InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z @ 0x1C03CD3D8 (-InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z.c)
 *     ?ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z @ 0x1C03CEE38 (-ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z.c)
 *     ?ReleaseRenderingDoneEvent@BLTENTRY@@QEAAXXZ @ 0x1C03CEE84 (-ReleaseRenderingDoneEvent@BLTENTRY@@QEAAXXZ.c)
 *     ?UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z @ 0x1C03D03F8 (-UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z.c)
 */

__int64 __fastcall BLTQUEUE::ProcessBltQueue(__int64 a1, int a2, __int64 a3)
{
  int v3; // r12d
  struct BLTQUEUE::__BLTWAITINFO *v4; // rbx
  int v5; // ebp
  int v7; // eax
  __int64 *v8; // r15
  __int64 v9; // r8
  __int64 *v10; // rax
  char v11; // cl
  char v12; // al
  __int64 v14; // rbx
  __int64 *v15; // r13
  __int64 v16; // rcx
  _DWORD *v17; // rsi
  bool v18; // zf
  int v19; // eax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-68h]
  __int64 v21; // [rsp+28h] [rbp-60h]
  struct _KEVENT *v22; // [rsp+90h] [rbp+8h]

  v3 = 0;
  v4 = (struct BLTQUEUE::__BLTWAITINFO *)a3;
  v5 = a2;
  if ( *(int *)(a1 + 956) < 0 )
  {
    if ( a2 == 1 )
      BLTQUEUE::SignalVSyncEvent((BLTQUEUE *)a1);
    BLTQUEUE::DiscardPendingPresent((BLTQUEUE *)a1);
    return *(unsigned int *)(a1 + 956);
  }
  if ( a2 == 1 )
  {
    v7 = *(_DWORD *)(a1 + 488);
    if ( v7 )
      *(_DWORD *)(a1 + 488) = v7 - 1;
  }
  v8 = (__int64 *)(a1 + 216);
  while ( 1 )
  {
    if ( *(_DWORD *)(a1 + 488) )
      *(_DWORD *)v4 |= 2u;
    KeWaitForSingleObject((PVOID)(a1 + 160), Executive, 0, 0, 0LL);
    v10 = (__int64 *)*v8;
    if ( (__int64 *)*v8 == v8 )
    {
      KeReleaseMutex((PRKMUTEX)(a1 + 160), 0);
LABEL_10:
      v11 = *(_BYTE *)(a1 + 573);
      v12 = *(_BYTE *)(a1 + 574);
      if ( v11 )
      {
        if ( v12 )
        {
          *(_DWORD *)(a1 + 944) |= 2u;
          goto LABEL_17;
        }
      }
      else if ( !v12 )
      {
        goto LABEL_12;
      }
      *(_DWORD *)(a1 + 944) &= ~2u;
      if ( !v11 )
      {
LABEL_18:
        *(_WORD *)(a1 + 573) = 0;
        BLTQUEUE::FinishCommand((BLTQUEUE *)a1, 0);
        goto LABEL_12;
      }
LABEL_17:
      v14 = *(unsigned int *)(a1 + 856);
      *(LARGE_INTEGER *)(a1 + 40 * v14 + 872) = KeQueryPerformanceCounter(0LL);
      *(_DWORD *)(a1 + 40 * v14 + 880) = v5;
      goto LABEL_18;
    }
    if ( (__int64 *)v10[1] != v8 || (v16 = *v10, *(__int64 **)(*v10 + 8) != v10) )
      __fastfail(3u);
    *v8 = v16;
    *(_QWORD *)(v16 + 8) = v8;
    v15 = v10 - 1;
    if ( v10 == (__int64 *)8 || (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
    {
      KeReleaseMutex((PRKMUTEX)(a1 + 160), 0);
      if ( !v15 )
        goto LABEL_10;
    }
    else
    {
      LODWORD(v21) = *((_DWORD *)v10 + 13);
      LODWORD(Timeout) = *(_DWORD *)(a1 + 260);
      McTemplateK0pqq_EtwWriteTransfer(v16, &EventBltQueueRemoveEntry, v9, *(_QWORD *)(a1 + 248), Timeout, v21);
      KeReleaseMutex((PRKMUTEX)(a1 + 160), 0);
    }
    v17 = v15 + 65;
    if ( v5 == 2 )
    {
      *v17 |= 1u;
      BLTENTRY::ReleaseRenderingDoneEvent((BLTENTRY *)v15);
    }
    if ( (*v17 & 1) != 0 )
      goto LABEL_35;
    v22 = (struct _KEVENT *)v15[5];
    if ( KeReadStateEvent(v22) )
    {
      *v17 |= 1u;
      BLTENTRY::ReleaseRenderingDoneEvent((BLTENTRY *)v15);
LABEL_35:
      v4 = (struct BLTQUEUE::__BLTWAITINFO *)a3;
      goto LABEL_36;
    }
    v4 = (struct BLTQUEUE::__BLTWAITINFO *)a3;
    *(_DWORD *)a3 |= 1u;
    *(_QWORD *)(a3 + 8) = v22;
    if ( ++*((_DWORD *)v15 + 131) > (unsigned int)(5 * *(_DWORD *)(a1 + 368)) / *(_DWORD *)(a1 + 372) )
    {
      *v17 |= 1u;
      *v17 |= 2u;
      *(_DWORD *)(a1 + 952) |= 4u;
      WdLogSingleEntry1(2LL, a1);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"BLTQUEUE 0x%I64x : rendering timeout hit",
        a1,
        0LL,
        0LL,
        0LL,
        0LL);
      *(_DWORD *)a3 &= ~1u;
      BLTENTRY::ReleaseRenderingDoneEvent((BLTENTRY *)v15);
    }
LABEL_36:
    if ( v5 != 1 && (*v17 & 1) != 0 && !*(_DWORD *)(a1 + 488) && *((_DWORD *)v15 + 14) && !*(_BYTE *)(a1 + 352) )
      *(_DWORD *)v4 |= 2u;
    if ( (*(_DWORD *)v4 & 2) != 0 || (*(_DWORD *)v4 & 1) != 0 )
      break;
    KeWaitForSingleObject((PVOID)(a1 + 264), Executive, 0, 0, 0LL);
    BLTQUEUE::UpdatePresentStats((BLTQUEUE *)a1, (struct BLTENTRY *)v15, v4);
    if ( v5 == 1 )
      BLTQUEUE::SignalVSyncEvent((BLTQUEUE *)a1);
    if ( (*(_DWORD *)v4 & 2) != 0 )
    {
      BLTQUEUE::InsertQueueHead(a1, v8, v15, 2LL);
      KeReleaseMutex((PRKMUTEX)(a1 + 264), 0);
      goto LABEL_12;
    }
    v5 = -1;
    if ( (*((_DWORD *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)a1) + 109) & 0x100) != 0 )
    {
      KeWaitForSingleObject((PVOID)(a1 + 2720), Executive, 0, 0, 0LL);
      v3 = BLTENTRY::IndirectBlt((BLTENTRY *)v15);
      KeReleaseMutex((PRKMUTEX)(a1 + 2720), 0);
      v4 = (struct BLTQUEUE::__BLTWAITINFO *)a3;
    }
    else
    {
      v3 = BLTENTRY::Blt((BLTENTRY *)v15);
      BLTENTRY::ReleasePresentDoneEvent((BLTENTRY *)v15, 1u);
    }
    if ( v3 >= 0 )
    {
      v18 = *(_BYTE *)(a1 + 352) == 0;
      *(_DWORD *)(a1 + 484) = *((_DWORD *)v15 + 14);
      if ( v18 )
        v19 = *((_DWORD *)v15 + 14);
      else
        v19 = 0;
      *(_DWORD *)(a1 + 488) = v19;
    }
    DXGALLOCATIONREFERENCE::AssignNull((DXGALLOCATIONREFERENCE *)(v15 + 4));
    BLTQUEUE::InsertQueueTail(a1, a1 + 232, v15, 1LL);
    if ( *(_BYTE *)(a1 + 574) )
    {
      *(_BYTE *)(a1 + 574) = 0;
      BLTQUEUE::FinishCommand((BLTQUEUE *)a1, v3);
    }
    KeReleaseMutex((PRKMUTEX)(a1 + 264), 0);
    if ( v3 < 0 )
    {
      BLTQUEUE::DiscardPendingPresent((BLTQUEUE *)a1);
      *(_DWORD *)(a1 + 956) = v3;
      return (unsigned int)v3;
    }
  }
  BLTQUEUE::InsertQueueHead(a1, v8, v15, 2LL);
LABEL_12:
  if ( v5 == 1 )
    BLTQUEUE::SignalVSyncEvent((BLTQUEUE *)a1);
  return (unsigned int)v3;
}
