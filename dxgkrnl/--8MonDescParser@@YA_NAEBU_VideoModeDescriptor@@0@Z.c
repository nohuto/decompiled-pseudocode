/*
 * XREFs of ??8MonDescParser@@YA_NAEBU_VideoModeDescriptor@@0@Z @ 0x1C001E240
 * Callers:
 *     ??$IndexOf@PEAU_VideoModeDescriptor@@U1@@MonDescParser@@YA_KPEAU_VideoModeDescriptor@@0AEAU1@@Z @ 0x1C001E208 (--$IndexOf@PEAU_VideoModeDescriptor@@U1@@MonDescParser@@YA_KPEAU_VideoModeDescriptor@@0AEAU1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall MonDescParser::operator==(__int64 a1, __int64 a2)
{
  return *(_DWORD *)a1 == *(_DWORD *)a2
      && *(_DWORD *)(a1 + 4) == *(_DWORD *)(a2 + 4)
      && *(_DWORD *)(a1 + 8) == *(_DWORD *)(a2 + 8)
      && *(_DWORD *)(a1 + 12) == *(_DWORD *)(a2 + 12)
      && *(_DWORD *)(a1 + 16) == *(_DWORD *)(a2 + 16)
      && *(_WORD *)(a1 + 20) == *(_WORD *)(a2 + 20)
      && *(_WORD *)(a1 + 22) == *(_WORD *)(a2 + 22)
      && *(_WORD *)(a1 + 24) == *(_WORD *)(a2 + 24)
      && *(_WORD *)(a1 + 26) == *(_WORD *)(a2 + 26)
      && *(_WORD *)(a1 + 28) == *(_WORD *)(a2 + 28)
      && *(_WORD *)(a1 + 30) == *(_WORD *)(a2 + 30)
      && *(_WORD *)(a1 + 32) == *(_WORD *)(a2 + 32)
      && *(_WORD *)(a1 + 34) == *(_WORD *)(a2 + 34)
      && *(_WORD *)(a1 + 36) == *(_WORD *)(a2 + 36)
      && *(_WORD *)(a1 + 38) == *(_WORD *)(a2 + 38)
      && *(_WORD *)(a1 + 40) == *(_WORD *)(a2 + 40)
      && *(_WORD *)(a1 + 42) == *(_WORD *)(a2 + 42)
      && *(_BYTE *)(a1 + 44) == *(_BYTE *)(a2 + 44)
      && *(_BYTE *)(a1 + 45) == *(_BYTE *)(a2 + 45)
      && *(_BYTE *)(a1 + 46) == *(_BYTE *)(a2 + 46)
      && *(_BYTE *)(a1 + 47) == *(_BYTE *)(a2 + 47)
      && *(_BYTE *)(a1 + 48) == *(_BYTE *)(a2 + 48)
      && *(_BYTE *)(a1 + 49) == *(_BYTE *)(a2 + 49)
      && *(_BYTE *)(a1 + 50) == *(_BYTE *)(a2 + 50)
      && *(_BYTE *)(a1 + 51) == *(_BYTE *)(a2 + 51)
      && *(_BYTE *)(a1 + 52) == *(_BYTE *)(a2 + 52);
}
