/*
 * XREFs of ?Calibrate@CComputeScribbleStopwatch@@AEAAJXZ @ 0x1802066B4
 * Callers:
 *     ?ResolveDelayedResources@CComputeScribbleStopwatch@@AEAAJXZ @ 0x180206B18 (-ResolveDelayedResources@CComputeScribbleStopwatch@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CComputeScribbleStopwatch::Calibrate(CComputeScribbleStopwatch *this)
{
  int v2; // ebx
  __int64 v3; // rdx
  float v5; // xmm0_4
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**(_QWORD **)this + 136LL))(
         *(_QWORD *)this,
         (char *)this + 16,
         (char *)this + 24);
  if ( v2 < 0 )
  {
    v3 = 132LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblestopwatch.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)this + 128LL))(*(_QWORD *)this, &v7);
  if ( v2 < 0 )
  {
    v3 = 136LL;
    goto LABEL_3;
  }
  if ( v7 < 0 )
    v5 = (float)(v7 & 1 | (unsigned int)((unsigned __int64)v7 >> 1))
       + (float)(v7 & 1 | (unsigned int)((unsigned __int64)v7 >> 1));
  else
    v5 = (float)(int)v7;
  *((float *)this + 3) = v5;
  return 0LL;
}
