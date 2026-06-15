/*
 * XREFs of Callback @ 0x18005F170
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005F1A8 @ 0x18005F1A8 (sub_18005F1A8.c)
 */

void __fastcall Callback(_DWORD *a1)
{
  sub_18005F1A8(a1, "Global\\Client_Atmos_Check_Event is signaled", 0LL);
  a1[46] = 8;
  sub_180036510((ULONGLONG)a1, 1);
}
