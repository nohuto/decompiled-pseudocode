__int64 __fastcall KiConvertDynamicHeteroPolicy(__int64 a1)
{
  unsigned int v2; // eax
  __int64 v3; // r9
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  v2 = KiComputeHeteroThreadQos(a1, &v5);
  v3 = (int)v2;
  if ( v2 != (unsigned __int8)*(_DWORD *)(a1 + 512) )
    KiSetThreadQosLevelUnsafe(a1, v2);
  return (unsigned int)KiDynamicHeteroCpuPolicy[2 * v3 + v5];
}
