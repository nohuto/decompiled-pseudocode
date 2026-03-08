/*
 * XREFs of ?InitWithPoint@?$LinearFitT@$0BAA@@@QEAAXAEBUPoint@1@@Z @ 0x1C0034CCC
 * Callers:
 *     ?VidSchiRecordVSyncTiming@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C0009F90 (-VidSchiRecordVSyncTiming@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 * Callees:
 *     ?Reset@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x1C0011828 (-Reset@-$LinearFitT@$0BAA@@@QEAAXXZ.c)
 */

__int64 __fastcall LinearFitT<256>::InitWithPoint(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax

  LinearFitT<256>::Reset(a1);
  *(_OWORD *)(a1 + 104) = *a2;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 104);
  result = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 48) = result;
  *(_DWORD *)(a1 + 8) = 1;
  return result;
}
