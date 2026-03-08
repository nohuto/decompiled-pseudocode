/*
 * XREFs of ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C00BBD4C
 * Callers:
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00BAFD8 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     UmfdDispatchEscape @ 0x1C00BB270 (UmfdDispatchEscape.c)
 *     ?UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00BBC94 (-UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C00F2EE4 (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 *     ?UmfdEscFONTOBJ_pifi@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A9DD8 (-UmfdEscFONTOBJ_pifi@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z @ 0x1C02A9E20 (-UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ?Create@UmfdTls@@CAPEAV1@XZ @ 0x1C00BC724 (-Create@UmfdTls@@CAPEAV1@XZ.c)
 */

struct UmfdTls *UmfdTls::EnsureTls(void)
{
  struct UmfdTls *result; // rax
  struct UmfdTls *v1; // rbx

  result = (struct UmfdTls *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v1 = result;
  if ( result )
  {
    if ( !*((_QWORD *)result + 44) )
      *((_QWORD *)result + 44) = UmfdTls::Create();
    return (struct UmfdTls *)*((_QWORD *)v1 + 44);
  }
  return result;
}
