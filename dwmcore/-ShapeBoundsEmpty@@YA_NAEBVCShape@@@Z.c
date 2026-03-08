/*
 * XREFs of ?ShapeBoundsEmpty@@YA_NAEBVCShape@@@Z @ 0x18001D60C
 * Callers:
 *     ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180014ECC (-SubtractOverdraw@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 *     ?AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x18001D508 (-AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall ShapeBoundsEmpty(const struct CShape *a1)
{
  __int64 v1; // rax
  char v2; // bl
  float v4; // [rsp+20h] [rbp-28h]
  float v5; // [rsp+20h] [rbp-28h]
  __int128 v6; // [rsp+28h] [rbp-20h] BYREF

  v1 = *(_QWORD *)a1;
  v6 = 0LL;
  v2 = 0;
  if ( (*(int (__fastcall **)(const struct CShape *, __int128 *, _QWORD))(v1 + 48))(a1, &v6, 0LL) < 0 )
    return 1;
  v4 = (float)(*((float *)&v6 + 2) - *(float *)&v6) + 6291456.25;
  if ( (LODWORD(v4) & 0x200000) != 0 || (LODWORD(v4) & 0xFFFFFFFE) << 10 == 0 )
    return 1;
  v5 = (float)(*((float *)&v6 + 3) - *((float *)&v6 + 1)) + 6291456.25;
  if ( (LODWORD(v5) & 0x200000) != 0 || (LODWORD(v5) & 0xFFFFFFFE) << 10 == 0 )
    return 1;
  return v2;
}
