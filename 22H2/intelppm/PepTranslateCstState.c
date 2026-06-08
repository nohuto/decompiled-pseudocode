/*
 * XREFs of PepTranslateCstState @ 0x1C0039EB4
 * Callers:
 *     PepNotifyReportCStates @ 0x1C0039BB8 (PepNotifyReportCStates.c)
 * Callees:
 *     <none>
 */

char __fastcall PepTranslateCstState(char *a1, __int64 a2)
{
  char v3; // r8
  unsigned int v4; // ecx
  char result; // al

  *(_BYTE *)a2 = a1[12];
  *(_WORD *)(a2 + 2) = *((_WORD *)a1 + 7);
  *(_DWORD *)(a2 + 4) = *((_DWORD *)a1 + 4);
  v3 = *a1;
  *(_BYTE *)(a2 + 8) = *a1;
  *(_BYTE *)(a2 + 9) = a1[1];
  *(_BYTE *)(a2 + 10) = a1[2];
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 4);
  if ( v3 == 127 )
  {
    result = a1[3];
    *(_BYTE *)(a2 + 11) = result;
  }
  else
  {
    *(_BYTE *)(a2 + 11) = 0;
    v4 = 1;
    while ( 1 )
    {
      result = v4;
      if ( a1[3] == *((_BYTE *)&AcpiGenericAccessSizeTranslation + v4) )
        break;
      if ( ++v4 >= 5 )
        return result;
    }
    *(_BYTE *)(a2 + 11) = v4;
  }
  return result;
}
