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
