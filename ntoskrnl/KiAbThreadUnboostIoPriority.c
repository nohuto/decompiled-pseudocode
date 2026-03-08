/*
 * XREFs of KiAbThreadUnboostIoPriority @ 0x1402D9F48
 * Callers:
 *     KiAbThreadRemoveBoostsSlow @ 0x1402D99E0 (KiAbThreadRemoveBoostsSlow.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x1402634D0 (PsBoostThreadIoEx.c)
 *     PsBoostThreadIoQoS @ 0x14029176C (PsBoostThreadIoQoS.c)
 */

void __fastcall KiAbThreadUnboostIoPriority(__int64 a1, int a2)
{
  _InterlockedDecrement((volatile signed __int32 *)((a2 != 0 ? 4 : 0) + a1 + 860));
  if ( a2 )
    PsBoostThreadIoQoS(a1, 1);
  else
    PsBoostThreadIoEx(a1, 1, 0, 0LL);
}
