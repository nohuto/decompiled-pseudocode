/*
 * XREFs of ?CallfnHkINLPMSG@@YA_JHH_K_JP6A_JXZPEAU_PFNCLIENT@@K@Z @ 0x1C022E4C4
 * Callers:
 *     xxxHkCallHook @ 0x1C006C7F0 (xxxHkCallHook.c)
 * Callees:
 *     fnHkINLPMSG @ 0x1C00C5E60 (fnHkINLPMSG.c)
 */

__int64 __fastcall CallfnHkINLPMSG(
        unsigned __int16 a1,
        unsigned __int16 a2,
        __int64 a3,
        __int128 *a4,
        __int64 (*a5)(void),
        struct _PFNCLIENT *a6,
        unsigned int a7)
{
  return fnHkINLPMSG((a2 << 16) | (unsigned int)a1, a3, a4, (__int64)a5, *((_QWORD *)a6 + 19), (a7 >> 1) & 1, &a7);
}
