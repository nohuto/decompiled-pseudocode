/*
 * XREFs of _wcsupr @ 0x1403E17B0
 * Callers:
 *     PfFileInfoNotify @ 0x1402CCCF0 (PfFileInfoNotify.c)
 *     PfSnParametersRead @ 0x14084FF94 (PfSnParametersRead.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x140A202A4 (BiGetObjectReferenceFromEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140A212A0 (BiUpdateObjectReferenceInEfiEntry.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsupr(wchar_t *String)
{
  wchar_t v1; // dx
  wchar_t *v2; // r8

  v1 = *String;
  v2 = String;
  while ( v1 )
  {
    if ( (unsigned __int16)(v1 - 97) <= 0x19u )
      *v2 = v1 - 32;
    v1 = *++v2;
  }
  return String;
}
