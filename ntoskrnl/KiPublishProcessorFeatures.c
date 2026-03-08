/*
 * XREFs of KiPublishProcessorFeatures @ 0x140B71D38
 * Callers:
 *     KiSetProcessorSignature @ 0x140A8B504 (KiSetProcessorSignature.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiPublishProcessorFeatures(__int64 a1)
{
  __int16 v1; // r8
  __int64 v2; // r9
  __int64 result; // rax

  v1 = KeFeatureBits2;
  v2 = MmWriteableSharedUserData;
  *(_BYTE *)(MmWriteableSharedUserData + 661) = (KeFeatureBits2 & 2) != 0;
  if ( (*(_DWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 132LL) & 0x2000) == 0 )
    *(_BYTE *)(v2 + 663) = (v1 & 0x2000) != 0LL;
  result = KeLoaderBlock_0;
  if ( (*(_DWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 132LL) & 0x8000) == 0 )
  {
    result = (*(_QWORD *)(a1 + 35232) >> 33) & 1LL;
    KeSmapEnabled = (*(_QWORD *)(a1 + 35232) >> 33) & 1;
  }
  return result;
}
