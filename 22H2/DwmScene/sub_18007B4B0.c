/*
 * XREFs of sub_18007B4B0 @ 0x18007B4B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007B904 @ 0x18007B904 (sub_18007B904.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18011E0DC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18007B4B0(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 16;
  `eh vector destructor iterator'((void *)(a1 + 72), 0x18uLL, 0xAuLL, (void (*)(void *))sub_180018C60);
  sub_18007B904(v1 + 32);
  return sub_1801168D0(v1);
}
