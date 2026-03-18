/*
 * XREFs of ?IsCurrentProcessAdmin@@YAEXZ @ 0x1C003FFE4
 * Callers:
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x1C0050F90 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01AD190 (DxgkDisplayConfigDeviceInfo.c)
 *     DxgkEscape @ 0x1C01B43F0 (DxgkEscape.c)
 *     ?IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ @ 0x1C02B84D8 (-IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ.c)
 * Callees:
 *     <none>
 */

bool IsCurrentProcessAdmin(void)
{
  char v0; // bl
  char v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v2 = 0;
  if ( (int)RtlCheckTokenMembership(0LL, SeExports->SeAliasAdminsSid, &v2) >= 0 )
    return v2 != 0;
  return v0;
}
