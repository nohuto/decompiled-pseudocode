/*
 * XREFs of ??1CEventResponse@@UEAA@XZ @ 0x1801EF428
 * Callers:
 *     ??_ECEventResponse@@UEAAPEAXI@Z @ 0x1801EF470 (--_ECEventResponse@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CEventResponse::~CEventResponse(HANDLE *this)
{
  *this = &CEventResponse::`vftable';
  CloseHandle(this[5]);
  *this = &CResponseItem::`vftable';
}
