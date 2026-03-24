/*
 * XREFs of ??9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z @ 0x1C000C988
 * Callers:
 *     ?AddMode@DMMVIDPNTARGETMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z @ 0x1C011D6F4 (-AddMode@DMMVIDPNTARGETMODESET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z.c)
 *     ?IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z @ 0x1C0147F1C (-IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z.c)
 *     ?IsVidPnPathSyncLockMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@@Z @ 0x1C02E98CC (-IsVidPnPathSyncLockMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DMMVIDPNTARGETMODE::operator!=(__int64 a1, __int64 a2)
{
  bool result; // al
  int v3; // r9d
  int v4; // r8d
  int v5; // ecx

  result = 1;
  if ( *(_DWORD *)(a1 + 76) == *(_DWORD *)(a2 + 76)
    && *(_DWORD *)(a1 + 80) == *(_DWORD *)(a2 + 80)
    && *(_DWORD *)(a1 + 84) == *(_DWORD *)(a2 + 84)
    && *(_DWORD *)(a1 + 88) == *(_DWORD *)(a2 + 88)
    && *(_DWORD *)(a1 + 92) == *(_DWORD *)(a2 + 92)
    && *(_DWORD *)(a1 + 96) == *(_DWORD *)(a2 + 96)
    && *(_DWORD *)(a1 + 100) == *(_DWORD *)(a2 + 100)
    && *(_DWORD *)(a1 + 104) == *(_DWORD *)(a2 + 104)
    && *(_QWORD *)(a1 + 112) == *(_QWORD *)(a2 + 112) )
  {
    v3 = *(_DWORD *)(a2 + 120);
    if ( (((unsigned __int8)v3 ^ *(_BYTE *)(a1 + 120)) & 7) == 0
      && (((unsigned __int16)v3 ^ (unsigned __int16)*(_DWORD *)(a1 + 120)) & 0x1F8) == 0 )
    {
      v4 = *(_DWORD *)(a1 + 128);
      v5 = *(_DWORD *)(a2 + 128);
      if ( (((unsigned __int8)v4 ^ *(_BYTE *)(a2 + 128)) & 3) == 0
        && (((unsigned __int8)v4 ^ (unsigned __int8)v5) & 0xFC) == 0
        && ((v4 ^ v5) & 0x3F00) == 0
        && ((v4 ^ v5) & 0xFC000) == 0
        && ((v4 ^ v5) & 0x3F00000) == 0
        && ((v4 ^ v5) & 0xFC000000) == 0 )
      {
        return 0;
      }
    }
  }
  return result;
}
