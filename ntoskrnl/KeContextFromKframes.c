/*
 * XREFs of KeContextFromKframes @ 0x1403620F0
 * Callers:
 *     KiDispatchException @ 0x140362740 (KiDispatchException.c)
 *     KiInitializeUserApc @ 0x1403664E8 (KiInitializeUserApc.c)
 *     KiSaveProcessorState @ 0x14036A140 (KiSaveProcessorState.c)
 * Callees:
 *     RtlXSaveS @ 0x140302524 (RtlXSaveS.c)
 *     KeCopyLastBranchInformation @ 0x140362500 (KeCopyLastBranchInformation.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiCopyXStateArea @ 0x140570100 (KiCopyXStateArea.c)
 */

__int64 __fastcall KeContextFromKframes(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // r14
  int v7; // esi
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // r9
  _QWORD *SparePtr; // rcx
  _QWORD *i; // rax
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v19; // zf

  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
  {
    KeGetCurrentIrql();
    __writecr8(1uLL);
  }
  v7 = *(_DWORD *)(a3 + 48);
  if ( (v7 & 0x100001) == 0x100001 )
  {
    *(_QWORD *)(a3 + 248) = *(_QWORD *)(a1 + 360);
    *(_WORD *)(a3 + 56) = *(_WORD *)(a1 + 368);
    *(_WORD *)(a3 + 66) = *(_WORD *)(a1 + 392);
    *(_QWORD *)(a3 + 152) = *(_QWORD *)(a1 + 384);
    *(_DWORD *)(a3 + 68) = *(_DWORD *)(a1 + 376);
  }
  if ( (v7 & 0x100004) == 0x100004 )
  {
    *(_DWORD *)(a3 + 58) = 2818091;
    *(_DWORD *)(a3 + 62) = 2818131;
  }
  if ( (v7 & 0x100002) == 0x100002 )
  {
    *(_QWORD *)(a3 + 120) = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a3 + 128) = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a3 + 136) = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a3 + 184) = *(_QWORD *)(a1 + 72);
    *(_QWORD *)(a3 + 192) = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a3 + 200) = *(_QWORD *)(a1 + 88);
    *(_QWORD *)(a3 + 208) = *(_QWORD *)(a1 + 96);
    *(_QWORD *)(a3 + 160) = *(_QWORD *)(a1 + 344);
    *(_QWORD *)(a3 + 144) = *(_QWORD *)(a2 + 256);
    *(_QWORD *)(a3 + 176) = *(_QWORD *)(a2 + 264);
    *(_QWORD *)(a3 + 168) = *(_QWORD *)(a2 + 272);
    *(_QWORD *)(a3 + 216) = *(_QWORD *)(a2 + 280);
    *(_QWORD *)(a3 + 224) = *(_QWORD *)(a2 + 288);
    *(_QWORD *)(a3 + 232) = *(_QWORD *)(a2 + 296);
    *(_QWORD *)(a3 + 240) = *(_QWORD *)(a2 + 304);
  }
  if ( (v7 & 0x100040) == 0x100040 )
  {
    if ( (*(_BYTE *)(a1 + 368) & 1) != 0 )
    {
      v10 = *(int *)(a3 + 1248);
      SparePtr = KeGetCurrentThread()->WaitBlock[1].SparePtr;
      if ( !SparePtr )
        goto LABEL_29;
      for ( i = (_QWORD *)*SparePtr; i; i = (_QWORD *)*i )
        SparePtr = i;
      v13 = SparePtr[5];
      if ( v13 )
        KiCopyXStateArea(a3 + v10 + 720, MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFFFFFCuLL, v13);
      else
LABEL_29:
        RtlXSaveS(a3 + v10 + 720, (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & 0xFFFFFFFFFFFFFFFCuLL);
    }
    *(_DWORD *)(a3 + 52) = *(_DWORD *)(a1 + 44);
    *(_DWORD *)(a3 + 280) = *(_DWORD *)(a1 + 44);
  }
  if ( (v7 & 0x100080) == 0x100080 && (*(_BYTE *)(a1 + 368) & 1) == 0 )
  {
    v14 = *(_QWORD *)(a1 + 216);
    v15 = *(int *)(a3 + 1256);
    *(_QWORD *)(v15 + a3 + 1232) = *(_QWORD *)v14;
    *(_QWORD *)(v15 + a3 + 1240) = *(_QWORD *)(v14 + 8);
    *(_WORD *)(v15 + a3 + 1248) = *(_WORD *)(v14 + 16);
    *(_WORD *)(v15 + a3 + 1250) = 0;
    *(_DWORD *)(v15 + a3 + 1252) = 0;
  }
  if ( (v7 & 0x100008) == 0x100008 )
  {
    if ( (*(_BYTE *)(a1 + 368) & 1) != 0 )
      _fxsave((void *)(a3 + 256));
    *(_OWORD *)(a3 + 416) = *(_OWORD *)(a1 + 112);
    *(_OWORD *)(a3 + 432) = *(_OWORD *)(a1 + 128);
    *(_OWORD *)(a3 + 448) = *(_OWORD *)(a1 + 144);
    *(_OWORD *)(a3 + 464) = *(_OWORD *)(a1 + 160);
    *(_OWORD *)(a3 + 480) = *(_OWORD *)(a1 + 176);
    *(_OWORD *)(a3 + 496) = *(_OWORD *)(a1 + 192);
    *(_OWORD *)(a3 + 512) = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(a3 + 528) = *(_OWORD *)(a2 + 64);
    *(_OWORD *)(a3 + 544) = *(_OWORD *)(a2 + 80);
    *(_OWORD *)(a3 + 560) = *(_OWORD *)(a2 + 96);
    *(_OWORD *)(a3 + 576) = *(_OWORD *)(a2 + 112);
    *(_OWORD *)(a3 + 592) = *(_OWORD *)(a2 + 128);
    *(_OWORD *)(a3 + 608) = *(_OWORD *)(a2 + 144);
    *(_OWORD *)(a3 + 624) = *(_OWORD *)(a2 + 160);
    *(_OWORD *)(a3 + 640) = *(_OWORD *)(a2 + 176);
    *(_OWORD *)(a3 + 656) = *(_OWORD *)(a2 + 192);
    *(_DWORD *)(a3 + 52) = *(_DWORD *)(a1 + 44);
    *(_DWORD *)(a3 + 280) = *(_DWORD *)(a1 + 44);
  }
  result = 1048592LL;
  if ( (v7 & 0x100010) == 0x100010 )
  {
    if ( (*(_DWORD *)(a1 + 256) & 0x355LL) != 0 )
    {
      *(_QWORD *)(a3 + 72) = *(_QWORD *)(a1 + 216);
      *(_QWORD *)(a3 + 80) = *(_QWORD *)(a1 + 224);
      *(_QWORD *)(a3 + 88) = *(_QWORD *)(a1 + 232);
      *(_QWORD *)(a3 + 96) = *(_QWORD *)(a1 + 240);
      *(_QWORD *)(a3 + 104) = *(_QWORD *)(a1 + 248);
      v9 = *(_QWORD *)(a1 + 256);
    }
    else
    {
      *(_QWORD *)(a3 + 72) = 0LL;
      v9 = 0LL;
      *(_QWORD *)(a3 + 80) = 0LL;
      *(_QWORD *)(a3 + 88) = 0LL;
      *(_QWORD *)(a3 + 96) = 0LL;
      *(_QWORD *)(a3 + 104) = 0LL;
    }
    *(_QWORD *)(a3 + 112) = v9;
    result = KeCopyLastBranchInformation(a3, a1);
  }
  if ( !CurrentIrql )
  {
    if ( KiIrqlFlags )
    {
      v16 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v16 - 2) <= 0xDu )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v19 = (SchedulerAssist[5] & 0xFFFF0001) == 0;
        SchedulerAssist[5] &= 0xFFFF0001;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    result = 0LL;
    __writecr8(0LL);
  }
  return result;
}
