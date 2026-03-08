/*
 * XREFs of IopVerifyDiskSignature @ 0x1408607B0
 * Callers:
 *     IopCreateArcName @ 0x14086D7D8 (IopCreateArcName.c)
 *     IopGetBootDiskInformation @ 0x140B907EC (IopGetBootDiskInformation.c)
 * Callees:
 *     <none>
 */

char __fastcall IopVerifyDiskSignature(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v4; // rdx
  int v6; // eax

  if ( *(_BYTE *)(a2 + 36) )
  {
    if ( *(_DWORD *)a1 )
    {
      if ( *(_DWORD *)a1 == 1 && *(_BYTE *)(a2 + 38) )
      {
        v4 = *(_QWORD *)(a2 + 40) - *(_QWORD *)(a1 + 8);
        if ( !v4 )
          v4 = *(_QWORD *)(a2 + 48) - *(_QWORD *)(a1 + 16);
        if ( !v4 )
        {
          if ( a3 )
            *a3 = 0;
          return 1;
        }
      }
    }
    else
    {
      v6 = *(_DWORD *)(a1 + 8);
      if ( *(_DWORD *)(a2 + 16) == v6 )
      {
        if ( a3 )
          *a3 = v6;
        return 1;
      }
    }
  }
  return 0;
}
