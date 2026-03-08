/*
 * XREFs of ?OnChanged@CLegacyMilBrush@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800F03E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyMilBrush::OnChanged(__int64 a1)
{
  __int64 result; // rax

  result = 1LL;
  *(_DWORD *)(a1 + 32) |= 1u;
  return result;
}
