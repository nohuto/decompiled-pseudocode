/*
 * XREFs of ?GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z @ 0x1C000AF84
 * Callers:
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C01C1E30 (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z.c)
 *     ?SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ @ 0x1C01C3988 (-SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ.c)
 *     ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C02FDFD8 (-WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

struct _UNICODE_STRING *__fastcall DXGSESSIONDATA::GetUserRegistryPath(DXGSESSIONDATA *this, unsigned __int16 a2)
{
  unsigned __int64 v5; // rax

  if ( !*((_QWORD *)this + 2342) && a2 )
  {
    *((_WORD *)this + 9364) = 0;
    v5 = 2 * ((unsigned __int64)a2 >> 1);
    if ( !is_mul_ok((unsigned __int64)a2 >> 1, 2uLL) )
      v5 = -1LL;
    *((_QWORD *)this + 2342) = operator new[](v5, 0x4B677844u, 256LL);
    *((_WORD *)this + 9365) = a2;
  }
  return (struct _UNICODE_STRING *)((char *)this + 18728);
}
