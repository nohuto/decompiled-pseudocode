/*
 * XREFs of DebugPrompt @ 0x140420410
 * Callers:
 *     DbgPrompt @ 0x1405A5370 (DbgPrompt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DebugPrompt(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  __int64 v5; // rcx

  LOWORD(a4) = *(_WORD *)(a2 + 2);
  v4 = *(_QWORD *)(a2 + 8);
  LOWORD(a2) = *(_WORD *)a1;
  v5 = *(_QWORD *)(a1 + 8);
  __asm { int     2Dh; Windows NT - eax = 2: debug prompt }
  __debugbreak();
  return DebugPromptAfterInt3(v5, a2, v4, a4);
}
