/*
 * XREFs of HalpAcpiValidateAcpiTable @ 0x14037ABA0
 * Callers:
 *     HalpAcpiCopyBiosTable @ 0x14037AA9C (HalpAcpiCopyBiosTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpAcpiValidateAcpiTable(__int64 a1)
{
  unsigned int v1; // r8d
  unsigned int v3; // eax

  v1 = 0;
  if ( *(_DWORD *)a1 != 1346584902 )
    return v1;
  switch ( *(_BYTE *)(a1 + 8) )
  {
    case 0:
      v3 = 0;
      v1 = -1072431089;
LABEL_10:
      if ( *(_DWORD *)(a1 + 4) > v3 )
        return v1;
      goto LABEL_7;
    case 1:
      v3 = 116;
      goto LABEL_10;
    case 2:
      v3 = 129;
      goto LABEL_10;
  }
  v3 = 244;
  if ( *(_BYTE *)(a1 + 8) == 3 )
    goto LABEL_10;
LABEL_7:
  if ( *(_DWORD *)(a1 + 4) < v3 )
    return (unsigned int)-1072431089;
  return v1;
}
