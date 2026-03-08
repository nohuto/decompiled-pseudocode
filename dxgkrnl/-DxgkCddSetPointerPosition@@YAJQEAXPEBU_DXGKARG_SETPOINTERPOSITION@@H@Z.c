/*
 * XREFs of ?DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C0334050
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z @ 0x1C03340B0 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z.c)
 */

__int64 __fastcall DxgkCddSetPointerPosition(
        struct DXGADAPTER *a1,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        int a3)
{
  struct DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  if ( Global && *((_BYTE *)Global + 1616) )
    return 3221225659LL;
  else
    return DxgkSetPointerPosition(a1, a2, a3, 0, 0);
}
