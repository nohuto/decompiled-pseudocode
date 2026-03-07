_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_Dcr_23_05_NonSec>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int *a4)
{
  unsigned int FeatureEnabledState; // eax
  int v6; // edx
  unsigned int v7; // r10d
  __int64 v8; // r8
  int v9; // r9d
  int v10; // eax
  int v11; // eax
  _QWORD *result; // rax

  FeatureEnabledState = (unsigned int)wil::details::WilApi_GetFeatureEnabledState(
                                        (wil::details *)0x2AF2CC2,
                                        3LL,
                                        a3,
                                        a4);
  v6 = 0;
  v7 = FeatureEnabledState & 0xFFFFFF3F;
  *a2 = 0LL;
  v8 = -(FeatureEnabledState & 0x80);
  v9 = ((FeatureEnabledState & 3) << 7) | ((FeatureEnabledState & 0x80) != 0 ? 0x400 : 0) | ((FeatureEnabledState & 0x40) != 0
                                                                                           ? 0x800
                                                                                           : 0);
  *(_DWORD *)a2 = v9;
  if ( (FeatureEnabledState & 0xFFFFFF3F) != 0 )
  {
    v10 = 0;
    if ( v7 == 2 )
      v10 = 64;
  }
  else
  {
    v10 = 64;
  }
  v11 = v9 | v10;
  *(_DWORD *)a2 = v11;
  if ( (v11 & 0x40) != 0 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_Dcr_23_04_NonSec>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_Servicing_Dcr_23_04_NonSec>::GetImpl'::`2'::impl,
      0LL,
      v8);
    v6 = 1;
  }
  *(_DWORD *)a2 &= ~1u;
  result = a2;
  *(_DWORD *)a2 |= v6;
  return result;
}
