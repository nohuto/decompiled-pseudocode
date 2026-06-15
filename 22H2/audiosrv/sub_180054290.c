/*
 * XREFs of sub_180054290 @ 0x180054290
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 */

__int64 __fastcall sub_180054290(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx

  v2 = -2147467261;
  if ( a2 )
  {
    v2 = 0;
    *a2 = *(_DWORD *)(a1 + 24);
  }
  else
  {
    sub_18005E8F8("CMuteControlBase::GetMute", 248LL, 2147500035LL);
  }
  return v2;
}
