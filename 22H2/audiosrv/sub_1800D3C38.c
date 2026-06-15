/*
 * XREFs of sub_1800D3C38 @ 0x1800D3C38
 * Callers:
 *     sub_1800CED00 @ 0x1800CED00 (sub_1800CED00.c)
 *     sub_1800CF240 @ 0x1800CF240 (sub_1800CF240.c)
 * Callees:
 *     sub_1800183C0 @ 0x1800183C0 (sub_1800183C0.c)
 *     sub_1800188D0 @ 0x1800188D0 (sub_1800188D0.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_1800D31D4 @ 0x1800D31D4 (sub_1800D31D4.c)
 *     sub_1800D3844 @ 0x1800D3844 (sub_1800D3844.c)
 */

__int64 __fastcall sub_1800D3C38(__int64 a1, __int64 *a2, char *a3, __int64 *a4, int a5)
{
  int v8; // ebx

  v8 = sub_1800183C0((char **)a1, a3);
  if ( v8 < 0
    || (v8 = sub_1800D31D4(a1 + 8, (__int64)a2, a4, a5), v8 < 0)
    || (v8 = sub_1800D3844((_DWORD *)(a1 + 56), a2, a5), v8 < 0)
    || (v8 = sub_1800188D0(a1), v8 < 0) )
  {
    sub_18005E8F8((__int64)"CAudioSessionInstanceId::Initialize", 911, v8);
  }
  return (unsigned int)v8;
}
