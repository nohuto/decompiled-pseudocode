/*
 * XREFs of NtGdiSetColorAdjustment @ 0x1C02C7490
 * Callers:
 *     <none>
 * Callees:
 *     GreSetColorAdjustment @ 0x1C02AA960 (GreSetColorAdjustment.c)
 */

__int64 __fastcall NtGdiSetColorAdjustment(HDC a1, ULONG64 a2)
{
  __int128 v3; // [rsp+28h] [rbp-20h] BYREF
  __int64 v4; // [rsp+38h] [rbp-10h]

  v3 = 0LL;
  v4 = 0LL;
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  v3 = *(_OWORD *)a2;
  v4 = *(_QWORD *)(a2 + 16);
  if ( (_WORD)v3 == 24
    && WORD2(v3) <= 8u
    && (unsigned __int16)(WORD3(v3) - 1344) <= 0xF8A8u
    && (unsigned __int16)(WORD4(v3) - 1344) <= 0xF8A8u
    && (unsigned __int16)(WORD5(v3) - 1344) <= 0xF8A8u
    && WORD6(v3) <= 0xFA0u
    && (unsigned __int16)(HIWORD(v3) - 6000) <= 0xFA0u
    && (unsigned __int16)(v4 + 100) <= 0xC8u
    && (unsigned __int16)(WORD1(v4) + 100) <= 0xC8u
    && (unsigned __int16)(WORD2(v4) + 100) <= 0xC8u
    && (unsigned __int16)(HIWORD(v4) + 100) <= 0xC8u )
  {
    return GreSetColorAdjustment(a1, &v3);
  }
  else
  {
    return 0LL;
  }
}
