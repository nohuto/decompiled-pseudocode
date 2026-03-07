__int64 __fastcall RtlpHpVsChunkSetExtraPresent(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  int v3; // r9d
  unsigned int v4; // ecx
  __int64 result; // rax

  v2 = a2 - 16;
  v3 = *(_DWORD *)(a1 + 176) & 1;
  if ( v3 && (a2 & 0xFFF) == 0 )
    v2 = a2 - 32;
  v4 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v2) ^ *(unsigned __int16 *)(v2 + 2)) - 16;
  if ( v3 && ((v2 + 32) & 0xFFF) == 0 )
    v4 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v2) ^ *(unsigned __int16 *)(v2 + 2)) - 32;
  result = v4;
  *(_WORD *)(v4 + a2 - 2) |= 0x4000u;
  return result;
}
