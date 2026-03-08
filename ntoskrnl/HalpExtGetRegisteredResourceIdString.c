/*
 * XREFs of HalpExtGetRegisteredResourceIdString @ 0x14050B59C
 * Callers:
 *     HalpExtRegisterResourceDescriptor @ 0x14050B5F0 (HalpExtRegisterResourceDescriptor.c)
 * Callees:
 *     HalpExtBuildResourceIdString @ 0x140374218 (HalpExtBuildResourceIdString.c)
 */

__int64 __fastcall HalpExtGetRegisteredResourceIdString(__int64 a1, __int64 a2, wchar_t *Dst)
{
  __int64 v3; // r10
  size_t SizeInWords; // [rsp+38h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 24);
  LODWORD(SizeInWords) = 75;
  return HalpExtBuildResourceIdString(
           *(_DWORD *)(v3 + 4),
           *(_DWORD *)(v3 + 8),
           *(_WORD *)(v3 + 12),
           *(_WORD *)(v3 + 14),
           *(_WORD *)(v3 + 16),
           *(_WORD *)(v3 + 18),
           *(_DWORD *)(a1 + 36),
           SizeInWords,
           Dst);
}
