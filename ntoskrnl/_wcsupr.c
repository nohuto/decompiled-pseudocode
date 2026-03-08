/*
 * XREFs of _wcsupr @ 0x1403D41F0
 * Callers:
 *     PfFileInfoNotify @ 0x14028C770 (PfFileInfoNotify.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x14082F354 (BiGetObjectReferenceFromEfiEntry.c)
 *     PfSnParametersRead @ 0x140845198 (PfSnParametersRead.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140A5C414 (BiUpdateObjectReferenceInEfiEntry.c)
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
