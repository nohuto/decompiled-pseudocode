__int64 __fastcall DxgkCddSetPointerShape(
        void *const a1,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        const struct _DXGKARG_SETPOINTERSHAPE *a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  struct DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  if ( Global && *((_BYTE *)Global + 1616) )
    return 3221225659LL;
  else
    return DxgkSetPointerShape(a1, a2, a3, a4, a5, a6, 0, 0);
}
