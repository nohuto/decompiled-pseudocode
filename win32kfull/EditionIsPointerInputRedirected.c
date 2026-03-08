/*
 * XREFs of EditionIsPointerInputRedirected @ 0x1C01468A0
 * Callers:
 *     <none>
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C00E6A40 (INPUTDEST_FROM_PWND.c)
 *     IsPointerInputRedirected @ 0x1C014695A (IsPointerInputRedirected.c)
 */

__int64 __fastcall EditionIsPointerInputRedirected(__int64 a1, unsigned int a2, _OWORD *a3)
{
  unsigned int v4; // ebx
  __int128 *v5; // rax
  __int128 v6; // xmm6
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int128 v10; // xmm3
  __int128 v11; // xmm4
  __int128 v12; // xmm5
  __int64 result; // rax
  _DWORD v14[32]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v15; // [rsp+C0h] [rbp+18h] BYREF

  v15 = 0LL;
  v4 = IsPointerInputRedirected(a1, *(_QWORD *)(grpdeskRitInput + 8LL), a2, &v15);
  v5 = (__int128 *)INPUTDEST_FROM_PWND(v14, v15);
  v6 = v5[6];
  v7 = *v5;
  v8 = v5[1];
  v9 = v5[2];
  v10 = v5[3];
  v11 = v5[4];
  v12 = v5[5];
  result = v4;
  *a3 = v7;
  a3[1] = v8;
  a3[2] = v9;
  a3[3] = v10;
  a3[4] = v11;
  a3[5] = v12;
  a3[6] = v6;
  return result;
}
