/*
 * XREFs of EtwpGetImageSize @ 0x140872A60
 * Callers:
 *     EtwpLocateDbgIdForRegEntry @ 0x140775328 (EtwpLocateDbgIdForRegEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetImageSize(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int16 v3; // r8

  v2 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  *a2 = 0LL;
  v3 = *(_WORD *)(a1 + 24);
  if ( v3 == 267 || v3 == 523 )
  {
    v2 = *(unsigned int *)(a1 + 80);
    *a2 = v2;
  }
  return v2 == 0 ? 0xC000007B : 0;
}
