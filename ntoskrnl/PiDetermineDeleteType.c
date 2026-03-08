/*
 * XREFs of PiDetermineDeleteType @ 0x1408639D4
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1408625F0 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiDetermineDeleteType(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // r8
  __int64 v3; // rax
  unsigned int v4; // edx
  int v5; // ecx

  v1 = *(_QWORD *)(a1 + 152);
  if ( v1 )
    v2 = *(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL);
  else
    v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 112) - *(_QWORD *)&GUID_DEVICE_EJECT.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)(a1 + 120) - *(_QWORD *)GUID_DEVICE_EJECT.Data4;
  v4 = 4;
  if ( v3 )
  {
    if ( (*(_DWORD *)(a1 + 144) & 4) != 0 )
    {
      v5 = *(_DWORD *)(v2 + 304);
      if ( (*(_DWORD *)(v2 + 396) & 0x10) != 0 )
      {
        if ( v5 <= 776 || v5 >= 782 || v5 == 779 )
          return 6;
        else
          return 5;
      }
      else if ( v5 != 779 && v5 > 776 && v5 < 782 || (*(_DWORD *)(*(_QWORD *)(v1 + 312) + 32LL) & 4) != 0 )
      {
        return 3;
      }
      else
      {
        return 2;
      }
    }
    else
    {
      return 0;
    }
  }
  return v4;
}
