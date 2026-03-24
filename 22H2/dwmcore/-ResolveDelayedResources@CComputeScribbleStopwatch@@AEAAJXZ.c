/*
 * XREFs of ?ResolveDelayedResources@CComputeScribbleStopwatch@@AEAAJXZ @ 0x1801AA1C8
 * Callers:
 *     ?GetElapsedTimeMs@CComputeScribbleStopwatch@@QEAAMXZ @ 0x1801A9F28 (-GetElapsedTimeMs@CComputeScribbleStopwatch@@QEAAMXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014E3DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Calibrate@CComputeScribbleStopwatch@@AEAAJXZ @ 0x1801A9D84 (-Calibrate@CComputeScribbleStopwatch@@AEAAJXZ.c)
 *     ?ResolveGpuTimestamp@CComputeScribbleStopwatch@@AEAAJXZ @ 0x1801AA230 (-ResolveGpuTimestamp@CComputeScribbleStopwatch@@AEAAJXZ.c)
 */

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
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblestopwatch.cpp",
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
