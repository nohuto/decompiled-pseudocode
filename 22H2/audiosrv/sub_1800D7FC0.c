/*
 * XREFs of sub_1800D7FC0 @ 0x1800D7FC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_180113270 @ 0x180113270 (sub_180113270.c)
 */

__int64 __fastcall sub_1800D7FC0(__int64 a1, __int64 a2)
{
  int v2; // ebx

  if ( !a2 )
  {
    v2 = -2147467261;
LABEL_4:
    sub_18005E8F8((__int64)"CPolicyConfig::SetDefaultEndpointForPolicy", 2407, v2);
    return (unsigned int)v2;
  }
  v2 = sub_180113270();
  if ( v2 < 0 )
    goto LABEL_4;
  return (unsigned int)v2;
}
