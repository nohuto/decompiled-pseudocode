/*
 * XREFs of RtlpHpVsChunkSize @ 0x1405B4FE4
 * Callers:
 *     RtlpSizeHeapInternal @ 0x1405ABE4C (RtlpSizeHeapInternal.c)
 *     RtlpHpSegSizeInternal @ 0x1405B47A8 (RtlpHpSegSizeInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpVsChunkSize(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  __int64 v5; // r8
  int v6; // edx
  __int64 v7; // rcx
  unsigned int v8; // edx
  __int16 v9; // ax
  int v10; // edx
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v5 = a2 - 16;
  v6 = *(_DWORD *)(a1 + 176) & 1;
  if ( v6 && (a2 & 0xFFF) == 0 )
    v5 -= 16LL;
  if ( ((HIDWORD(v5) ^ HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(*(_QWORD *)v5)) & 0xFF0000) == 0 )
    return -1LL;
  v7 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v5) ^ *(unsigned __int16 *)(v5 + 2)) - 16;
  if ( v6 && ((v5 + 32) & 0xFFF) == 0 )
    v7 -= 16LL;
  if ( (*(_DWORD *)(v5 + 8) & 0x100) != 0 )
  {
    v8 = *(unsigned __int16 *)((unsigned int)v7 + a2 - 2);
    v9 = *(_WORD *)((unsigned int)v7 + a2 - 2);
    if ( (v8 & 0x4000) != 0 )
    {
      _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
      v9 = *(_WORD *)((unsigned int)v7 + a2 - 2);
    }
    v10 = (v8 >> 14) & 1;
    if ( v9 >= 0 )
      v7 -= v9 & 0x1FFF;
    else
      --v7;
  }
  else
  {
    v10 = 0;
  }
  if ( a4 )
    *a4 = v10;
  return v7;
}
