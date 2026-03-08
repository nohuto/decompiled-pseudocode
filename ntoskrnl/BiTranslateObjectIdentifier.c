/*
 * XREFs of BiTranslateObjectIdentifier @ 0x140A5C1C0
 * Callers:
 *     BiExportEfiBootManager @ 0x140A5B928 (BiExportEfiBootManager.c)
 *     BiHandleFirmwareDefaultEntry @ 0x140A5BD48 (BiHandleFirmwareDefaultEntry.c)
 *     BiTranslateDisplayOrder @ 0x140A5C138 (BiTranslateDisplayOrder.c)
 * Callees:
 *     BiLogMessage @ 0x14082ECFC (BiLogMessage.c)
 */

__int64 __fastcall BiTranslateObjectIdentifier(_QWORD *a1, _QWORD *a2, _DWORD *a3)
{
  _QWORD *v3; // r9
  unsigned int v6; // r10d
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v10; // r8

  v3 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 == a1 )
    return (unsigned int)-1073741275;
  v6 = 0;
  while ( 1 )
  {
    v7 = *((_DWORD *)v3 + 12);
    if ( (v7 & 4) != 0 )
    {
      v8 = *a2 - v3[2];
      if ( *a2 == v3[2] )
        v8 = a2[1] - v3[3];
      if ( !v8 )
        break;
    }
    v3 = (_QWORD *)*v3;
    if ( v3 == a1 )
      return (unsigned int)-1073741275;
  }
  if ( (v7 & 3) == 0 )
  {
    return (unsigned int)-1073741275;
  }
  else
  {
    v10 = *((unsigned int *)v3 + 8);
    if ( (v7 & 0x10) != 0 )
    {
      BiLogMessage(3LL, L"Translated a DontSync object to ID 0x%x", v10);
      return (unsigned int)-1073741788;
    }
    else
    {
      *a3 = v10;
    }
  }
  return v6;
}
