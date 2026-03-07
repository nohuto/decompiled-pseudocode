__int64 __fastcall CComputeScribbleStopwatch::ResolveDelayedResources(CComputeScribbleStopwatch *this)
{
  int v2; // edi
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_BYTE *)this + 64) )
  {
    v2 = CComputeScribbleStopwatch::Calibrate(this);
    if ( v2 < 0 )
    {
      v3 = 78LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v3,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblestopwatch.cpp",
        (const char *)(unsigned int)v2);
      return (unsigned int)v2;
    }
    v2 = CComputeScribbleStopwatch::ResolveGpuTimestamp(this);
    if ( v2 < 0 )
    {
      v3 = 81LL;
      goto LABEL_4;
    }
    *((_BYTE *)this + 64) = 1;
  }
  return 0LL;
}
