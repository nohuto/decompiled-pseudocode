/*
 * XREFs of NtUserfnINCBOXSTRING @ 0x1C01E1DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z @ 0x1C01CDA48 (-_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z.c)
 */

__int64 __fastcall NtUserfnINCBOXSTRING(
        struct tagWND *a1,
        unsigned int a2,
        __int64 a3,
        __int128 *a4,
        unsigned __int64 a5,
        unsigned int a6,
        int a7)
{
  PtiCurrentShared((__int64)a1);
  return _InBoxString(674LL, a1, a2, a3, a4, a5, a6, a7);
}
