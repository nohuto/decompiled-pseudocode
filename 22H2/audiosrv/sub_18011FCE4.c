/*
 * XREFs of sub_18011FCE4 @ 0x18011FCE4
 * Callers:
 *     sub_1800192D0 @ 0x1800192D0 (sub_1800192D0.c)
 * Callees:
 *     sub_180012550 @ 0x180012550 (sub_180012550.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_18011FCE4(__int64 a1)
{
  char v1; // bl
  void *v2; // rcx
  void *v3; // rcx
  __int128 v5; // [rsp+20h] [rbp-30h] BYREF
  LPVOID *p_pv; // [rsp+30h] [rbp-20h]
  void *v7; // [rsp+38h] [rbp-18h] BYREF
  char v8; // [rsp+40h] [rbp-10h]
  LPVOID pv; // [rsp+70h] [rbp+20h] BYREF

  pv = 0LL;
  p_pv = &pv;
  v7 = 0LL;
  v1 = 1;
  v8 = 1;
  v5 = xmmword_18015B810;
  if ( (int)sub_180012550(a1, 0, &v5, &v7) < 0 || !pv )
    v1 = 0;
  if ( v8 )
  {
    v2 = *p_pv;
    *p_pv = v7;
    if ( v2 )
      CoTaskMemFree(v2);
  }
  v3 = pv;
  pv = 0LL;
  if ( v3 )
    CoTaskMemFree(v3);
  return v1;
}
