/*
 * XREFs of sub_180068C90 @ 0x180068C90
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800673C4 @ 0x1800673C4 (sub_1800673C4.c)
 *     sub_1800674C0 @ 0x1800674C0 (sub_1800674C0.c)
 */

__int64 __fastcall sub_180068C90(__int64 a1)
{
  _DWORD **v1; // rbx
  char v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+34h] [rbp+Ch]

  v1 = *(_DWORD ***)(a1 + 8);
  if ( sub_1800673C4((__int64)&unk_18019F860) == 1 )
  {
    sub_1800674C0((volatile signed __int64 *)&unk_18019F860, (__int64)&v3);
    **v1 = v4;
  }
  return 0LL;
}
