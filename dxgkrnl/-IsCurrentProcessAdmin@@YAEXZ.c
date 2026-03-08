/*
 * XREFs of ?IsCurrentProcessAdmin@@YAEXZ @ 0x1C003EFF4
 * Callers:
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x1C004FF30 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z.c)
 *     DxgkEscape @ 0x1C01A3EE0 (DxgkEscape.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01AB2A0 (DxgkDisplayConfigDeviceInfo.c)
 *     ?IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ @ 0x1C02B3618 (-IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ.c)
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
