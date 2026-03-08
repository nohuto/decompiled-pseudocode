/*
 * XREFs of xxxKeyEvent @ 0x1C021B2F0
 * Callers:
 *     <none>
 * Callees:
 *     xxxKeyEventEx @ 0x1C007F2E0 (xxxKeyEventEx.c)
 */

void __fastcall xxxKeyEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        unsigned __int16 *a6,
        char a7,
        char a8)
{
  xxxKeyEventEx(a1, a2, a3, a4, a5, a6, a7, a8, 0LL, 0LL);
}
