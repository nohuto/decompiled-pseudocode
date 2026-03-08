/*
 * XREFs of KiUpdateSpecCtrlEnhancedIBRS @ 0x140458628
 * Callers:
 *     KiUpdateSpeculationControl @ 0x1402BEF60 (KiUpdateSpeculationControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiUpdateSpecCtrlEnhancedIBRS(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int16 v4; // ax
  __int16 v5; // ax
  unsigned __int16 v6; // dx
  __int64 v7; // r10
  __int64 result; // rax
  __int64 v9; // [rsp+0h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 1752);
  v9 = KiSpeculationFeatures;
  if ( !v2 || v2 == *(_QWORD *)(a2 + 2528) || (KiSpeculationFeatures & 0x400) != 0 )
  {
    v5 = *(_WORD *)(a1 + 1760) & 0xFFDB;
  }
  else
  {
    v4 = *(_WORD *)(a1 + 1760) | 4;
    *(_WORD *)(a1 + 1760) = v4;
    if ( (v9 & 8) != 0 )
      goto LABEL_8;
    v5 = v4 | 0x20;
  }
  *(_WORD *)(a1 + 1760) = v5;
LABEL_8:
  v6 = *(_WORD *)(a1 + 1764) | 1;
  *(_WORD *)(a1 + 1766) = 1;
  *(_WORD *)(a1 + 1744) = 1;
  *(_WORD *)(a1 + 1770) = 1;
  v7 = *(_QWORD *)(a2 + 2528);
  if ( (*(_DWORD *)(a2 + 2172) & 0x400000) == 0 )
    v7 = 1LL;
  if ( (v9 & 0x4000000000LL) != 0 && KiSsbdMsr == 72 )
  {
    *(_WORD *)(a1 + 1766) |= 4u;
    *(_WORD *)(a1 + 1770) |= 4u;
    *(_WORD *)(a1 + 1744) |= 4u;
    v6 |= 4u;
  }
  else if ( (v9 & 0x8000000000LL) != 0 )
  {
    if ( v7 )
    {
      *(_WORD *)(a1 + 1766) |= 4u;
      *(_WORD *)(a1 + 1744) |= 4u;
      v6 |= 4u;
    }
    if ( (*(_DWORD *)(a2 + 2516) & 0x2000) != 0 )
      *(_WORD *)(a1 + 1770) |= 4u;
  }
  if ( (v9 & 0x40000000000000LL) != 0 )
  {
    *(_WORD *)(a1 + 1766) |= 0x400u;
    *(_WORD *)(a1 + 1744) |= 0x400u;
    *(_WORD *)(a1 + 1770) |= 0x400u;
    *(_WORD *)(a1 + 1768) |= 0x400u;
    v6 |= 0x400u;
  }
  if ( v7 && (*(_BYTE *)(a1 + 1762) & 0x30) != 0 )
  {
    result = 512LL;
    *(_WORD *)(a1 + 1760) |= 0x200u;
  }
  else
  {
    result = 65023LL;
    *(_WORD *)(a1 + 1760) &= ~0x200u;
    if ( !v7 && (v9 & 0x800) != 0 && ((*(_DWORD *)(a2 + 2172) & 0x1000) == 0 || (*(_BYTE *)(a1 + 1764) & 1) == 0) )
    {
      result = 65534LL;
      *(_WORD *)(a1 + 1766) &= ~1u;
      v6 &= ~1u;
      *(_WORD *)(a1 + 1744) &= ~1u;
      *(_WORD *)(a1 + 1770) &= ~1u;
    }
  }
  if ( (v9 & 0x2000) != 0 )
  {
    result = 128LL;
    *(_WORD *)(a1 + 1766) |= 0x80u;
    *(_WORD *)(a1 + 1744) |= 0x80u;
  }
  if ( v6 != *(_WORD *)(a1 + 1764) )
  {
    *(_WORD *)(a1 + 1764) = v6;
    result = v6;
    __writemsr(0x48u, v6);
  }
  return result;
}
