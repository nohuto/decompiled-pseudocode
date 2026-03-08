/*
 * XREFs of ?OnChanged@CAtlasedRectsGroup@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180106660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAtlasedRectsGroup::OnChanged(__int64 a1)
{
  *(_BYTE *)(a1 + 120) = 1;
  return 1LL;
}
