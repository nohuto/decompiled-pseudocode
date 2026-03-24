/*
 * XREFs of ?SetIntegerProperty@CLocalAppRenderTarget@@UEAAJI_J@Z @ 0x18018ACC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014E3DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CLocalAppRenderTarget::SetIntegerProperty(CLocalAppRenderTarget *this, int a2, int a3)
{
  int v3; // edx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a2 - 1;
  if ( v3 )
  {
    if ( v3 != 1 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4A,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\localapprendertarget.cpp",
        (const char *)0x80070057LL);
      return 2147942487LL;
    }
    *((_DWORD *)this + 21) = a3;
  }
  else
  {
    *((_DWORD *)this + 20) = a3;
  }
  return 0LL;
}
