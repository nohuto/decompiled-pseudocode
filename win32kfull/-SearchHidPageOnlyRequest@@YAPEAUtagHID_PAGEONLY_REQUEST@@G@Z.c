/*
 * XREFs of ?SearchHidPageOnlyRequest@@YAPEAUtagHID_PAGEONLY_REQUEST@@G@Z @ 0x1C01AACAC
 * Callers:
 *     ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x1C00D604C (-InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KH.c)
 * Callees:
 *     <none>
 */

struct tagHID_PAGEONLY_REQUEST *__fastcall SearchHidPageOnlyRequest(__int64 a1)
{
  __int16 v1; // di
  __int64 v2; // rcx
  __int64 *i; // rbx

  v1 = a1;
  for ( i = *(__int64 **)(SGDGetUserSessionState(a1) + 392); ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)(SGDGetUserSessionState(v2) + 392) )
      return 0LL;
    if ( *((_WORD *)i + 8) == v1 )
      break;
  }
  return (struct tagHID_PAGEONLY_REQUEST *)i;
}
