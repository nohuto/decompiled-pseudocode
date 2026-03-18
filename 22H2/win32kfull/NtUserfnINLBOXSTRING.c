/*
 * XREFs of NtUserfnINLBOXSTRING @ 0x1C01E1060
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z @ 0x1C01CC9EC (-_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z.c)
 */

__int64 __fastcall NtUserfnINLBOXSTRING(
        struct tagWND *a1,
        __int64 a2,
        __int64 a3,
        _OWORD *a4,
        unsigned __int64 a5,
        unsigned int a6,
        int a7)
{
  unsigned int v9; // esi

  v9 = a2;
  PtiCurrentShared((__int64)a1, a2, a3, (__int64)a4);
  return _InBoxString(678LL, a1, v9, a3, a4, a5, a6, a7);
}
