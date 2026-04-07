/*
 * XREFs of ?SetIconicData@CIconicAnimatedVisual@@QEAAJPEAVCWindowData@@PEBUtagRECT@@PEAU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@@Z @ 0x1800B97A0
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180014FCC (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?GetIconicThumbnailRepresentation@CTransitionVisualController@@QEAAJPEAVCWindowData@@PEAVCAnimationComponent@@PEBUtagRECT@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAPEAVCVisual@@@Z @ 0x1800AB260 (-GetIconicThumbnailRepresentation@CTransitionVisualController@@QEAAJPEAVCWindowData@@PEAVCAnimat.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CIconicAnimatedVisual::SetIconicData(__int64 a1, __int64 a2, _OWORD *a3, _DWORD *a4)
{
  _OWORD *v8; // rbx
  int v9; // edx
  int v10; // eax
  int v11; // edx
  int v12; // eax

  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, 128LL);
  *(_QWORD *)(a1 + 296) = a2;
  v8 = (_OWORD *)(a1 + 352);
  SetRectEmpty((LPRECT)(a1 + 352));
  SetRectEmpty((LPRECT)(a1 + 368));
  if ( a3 )
  {
    *v8 = *a3;
    if ( *(int *)a3 < 0 && (*a4 & 0x2000) == 0 )
    {
      v9 = *(_DWORD *)(a1 + 360);
      v10 = *(_DWORD *)v8;
      *(_OWORD *)(a1 + 368) = *a3;
      v11 = *(_DWORD *)a3 + v9;
      v12 = v10 - *(_DWORD *)a3;
      *(_DWORD *)(a1 + 360) = v11;
      if ( v12 >= v11 )
        v12 = v11;
      *(_DWORD *)v8 = v12;
    }
  }
  if ( a4 )
    *(_DWORD *)(a1 + 384) = *a4;
  return 0LL;
}
