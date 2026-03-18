/*
 * XREFs of NtUserfnINLBOXSTRING @ 0x1C0201830
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z @ 0x1C01F13B4 (-_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z.c)
 */

__int64 __fastcall NtUserfnINLBOXSTRING(
        struct tagWND *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        int a7)
{
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  return _InBoxString(678, a1, a2, a3, a4, a5, a6, a7);
}
