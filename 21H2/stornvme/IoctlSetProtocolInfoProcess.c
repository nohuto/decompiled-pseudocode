/*
 * XREFs of IoctlSetProtocolInfoProcess @ 0x1C00135F0
 * Callers:
 *     IoctlToNVMe @ 0x1C0002660 (IoctlToNVMe.c)
 * Callees:
 *     SetProtocolInfoFeatureData @ 0x1C001744C (SetProtocolInfoFeatureData.c)
 */

__int64 __fastcall IoctlSetProtocolInfoProcess(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r8
  __int64 v3; // rax
  unsigned __int64 v4; // r10
  __int64 v5; // r11

  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v2 = *(_DWORD **)(a2 + 64);
    v3 = 60LL;
  }
  else
  {
    v2 = *(_DWORD **)(a2 + 24);
    v3 = 16LL;
  }
  v4 = *(unsigned int *)(a2 + v3);
  if ( (unsigned int)v4 < 0x4C || (v5 = (unsigned int)v2[13], v4 < v5 + 36 + (unsigned __int64)(unsigned int)v2[14]) )
  {
    *(_BYTE *)(a2 + 3) = 21;
  }
  else
  {
    if ( (!(_DWORD)v5 || (((_BYTE)v5 + 36) & 7) == 0) && v2[9] == 3 && v2[10] == 3 )
      return SetProtocolInfoFeatureData(a1);
    *(_BYTE *)(a2 + 3) = 6;
  }
  return 3238002694LL;
}
