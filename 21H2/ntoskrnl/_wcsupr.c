/*
 * XREFs of _wcsupr @ 0x1403D23F0
 * Callers:
 *     PfFileInfoNotify @ 0x14031D600 (PfFileInfoNotify.c)
 *     PfSnParametersRead @ 0x1407BF2F4 (PfSnParametersRead.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x140972338 (BiGetObjectReferenceFromEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140973334 (BiUpdateObjectReferenceInEfiEntry.c)
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
