/*
 * XREFs of sub_1800D4D18 @ 0x1800D4D18
 * Callers:
 *     sub_1800D4BAC @ 0x1800D4BAC (sub_1800D4BAC.c)
 * Callees:
 *     sub_180003E08 @ 0x180003E08 (sub_180003E08.c)
 *     sub_180006C80 @ 0x180006C80 (sub_180006C80.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800D5648 @ 0x1800D5648 (sub_1800D5648.c)
 *     sub_1800D7A8C @ 0x1800D7A8C (sub_1800D7A8C.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800D4D18(__int64 a1, __int64 a2)
{
  DWORD LengthSid; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // eax

  *(_QWORD *)a1 = off_180146480;
  *(_BYTE *)(a1 + 76) = *(_BYTE *)(a2 + 76);
  *(_DWORD *)(a1 + 80) = *(_DWORD *)(a2 + 80);
  *(_QWORD *)(a1 + 88) = sub_180006C80((volatile signed __int32 *)(*(_QWORD *)(a2 + 88) - 24LL)) + 6;
  *(_QWORD *)(a1 + 96) = sub_180006C80((volatile signed __int32 *)(*(_QWORD *)(a2 + 96) - 24LL)) + 6;
  *(_QWORD *)(a1 + 104) = sub_180006C80((volatile signed __int32 *)(*(_QWORD *)(a2 + 104) - 24LL)) + 6;
  sub_180003E08((_QWORD *)(a1 + 112), (__int64)&qword_18019F818);
  if ( *(_BYTE *)(a2 + 76) )
  {
    if ( !(unsigned __int8)sub_1800D7A8C(a2) )
      sub_1800B8610(-2147024809);
    LengthSid = GetLengthSid((PSID)(a2 + 8));
    if ( !CopySid(LengthSid, (PSID)(a1 + 8), (PSID)(a2 + 8)) )
    {
      v8 = sub_1800D5648(v6, v5, v7);
      sub_1800B8610(v8);
    }
  }
  return a1;
}
