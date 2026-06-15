/*
 * XREFs of sub_1800EE160 @ 0x1800EE160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800EE160(__int64 a1, __int64 **a2)
{
  bool v2; // zf
  __int64 *v3; // rcx
  __int64 v4; // rdx

  v2 = *(_BYTE *)(a1 + 8) == 0;
  v3 = *a2;
  v4 = **a2;
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64 *))(v4 + 176))(v3);
  else
    return (*(__int64 (__fastcall **)(__int64 *))(v4 + 184))(v3);
}
