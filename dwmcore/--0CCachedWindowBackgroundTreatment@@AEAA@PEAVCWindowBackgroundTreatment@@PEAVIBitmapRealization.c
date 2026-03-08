/*
 * XREFs of ??0CCachedWindowBackgroundTreatment@@AEAA@PEAVCWindowBackgroundTreatment@@PEAVIBitmapRealization@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18000B940
 * Callers:
 *     ?Create@CCachedWindowBackgroundTreatment@@SAJPEAVCWindowBackgroundTreatment@@PEAVIBitmapRealization@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x18000B7D0 (-Create@CCachedWindowBackgroundTreatment@@SAJPEAVCWindowBackgroundTreatment@@PEAVIBitmapRealizat.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedWindowBackgroundTreatment::CCachedWindowBackgroundTreatment(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6)
{
  __int64 v9; // rcx
  __int64 v10; // xmm1_8
  __int64 result; // rax

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &CCachedWindowBackgroundTreatment::`vftable';
  *(_QWORD *)(a1 + 16) = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  *(_QWORD *)(a1 + 24) = a3;
  if ( a3 )
  {
    v9 = a3 + *(int *)(*(_QWORD *)(a3 + 8) + 4LL) + 8LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  }
  *(_OWORD *)(a1 + 32) = *(_OWORD *)a4;
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a4 + 16);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a4 + 32);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a4 + 48);
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a4 + 64);
  *(_BYTE *)(a1 + 140) = 0;
  v10 = *(_QWORD *)(a5 + 16);
  *(_OWORD *)(a1 + 100) = *(_OWORD *)a5;
  *(_QWORD *)(a1 + 116) = v10;
  result = a1;
  *(_OWORD *)(a1 + 124) = *a6;
  return result;
}
