/*
 * XREFs of ?GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z @ 0x1C0003C90
 * Callers:
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C0184BC0 (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z.c)
 *     ?SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ @ 0x1C01EA108 (-SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ.c)
 *     ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C0302E08 (-WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
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
    *((_QWORD *)this + 2342) = operator new[](v5, 1265072196LL, 256LL);
    *((_WORD *)this + 9365) = a2;
  }
  return (struct _UNICODE_STRING *)((char *)this + 18728);
}
