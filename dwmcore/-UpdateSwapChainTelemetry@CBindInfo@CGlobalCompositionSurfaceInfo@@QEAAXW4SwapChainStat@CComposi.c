unsigned __int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::UpdateSwapChainTelemetry(
        __int64 a1,
        int a2,
        char a3)
{
  __int64 v3; // r11
  unsigned __int64 result; // rax

  if ( *(_QWORD *)(a1 + 296) )
  {
    v3 = *((_QWORD *)g_pComposition + 76);
    result = 2LL * a2;
    if ( a3 )
    {
      *(_QWORD *)(a1 + 16LL * a2 + 232) = v3;
    }
    else
    {
      result = (v3 - *(_QWORD *)(a1 + 16LL * a2 + 232)) / (unsigned __int64)(g_qpcFrequency.QuadPart / 1000);
      *(_QWORD *)(a1 + 16 * (a2 + 15LL)) += result;
    }
  }
  return result;
}
