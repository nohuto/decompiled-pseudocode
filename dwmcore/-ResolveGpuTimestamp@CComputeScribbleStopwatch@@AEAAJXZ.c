/*
 * XREFs of ?ResolveGpuTimestamp@CComputeScribbleStopwatch@@AEAAJXZ @ 0x180206B80
 * Callers:
 *     ?ResolveDelayedResources@CComputeScribbleStopwatch@@AEAAJXZ @ 0x180206B18 (-ResolveDelayedResources@CComputeScribbleStopwatch@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CComputeScribbleStopwatch::ResolveGpuTimestamp(CComputeScribbleStopwatch *this)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  __int64 result; // rax
  __int64 v6; // rcx
  _QWORD *v7; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v8[2]; // [rsp+38h] [rbp-30h] BYREF
  __int128 v9; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v8[0] = 0LL;
  v2 = *((_QWORD *)this + 5);
  v8[1] = 8LL;
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *, _QWORD **))(*(_QWORD *)v2 + 64LL))(v2, 0LL, v8, &v7);
  v4 = v3;
  if ( v3 >= 0 )
  {
    *((_QWORD *)this + 7) = *v7;
    v6 = *((_QWORD *)this + 5);
    v9 = 0LL;
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v6 + 72LL))(v6, 0LL, &v9);
    result = 0LL;
    *((_BYTE *)this + 64) = 1;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5E,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblestopwatch.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
  return result;
}
