/*
 * XREFs of Bulk_EP_Enable @ 0x1C0013B50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DDDD @ 0x1C000E120 (WPP_RECORDER_SF_DDDD.c)
 */

__int64 __fastcall Bulk_EP_Enable(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v4; // rbx
  unsigned int v5; // edx
  unsigned int v6; // r11d
  int v7; // edx

  v2 = *(_QWORD *)(a1 + 48);
  if ( *(_DWORD *)(v2 + 20) == 3 )
  {
    v4 = *(_QWORD *)(a1 + 56);
    v5 = *(_DWORD *)(a1 + 4) % ((*(unsigned __int8 *)(v4 + 105) + 1) * (*(_WORD *)(v4 + 100) & 0x7FFu));
    if ( v5 )
    {
      v6 = *(_DWORD *)(a1 + 4) - v5;
      *(_DWORD *)(a1 + 4) = v6;
      *(_DWORD *)(a1 + 8) = (v6 + 4095) >> 12;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v7 = *(unsigned __int8 *)(v2 + 135);
        LOBYTE(v7) = 4;
        WPP_RECORDER_SF_DDDD(
          *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
          v7,
          14,
          11,
          (__int64)&WPP_92c598da33ef340e00f5370896d293ba_Traceguids,
          *(_BYTE *)(v2 + 135),
          *(_DWORD *)(v4 + 144),
          *(_DWORD *)(a1 + 64),
          v6);
      }
    }
  }
  return 0LL;
}
