/*
 * XREFs of vConvertLogFontW @ 0x1C0118170
 * Callers:
 *     GreCreateFontIndirectW @ 0x1C0025AF8 (GreCreateFontIndirectW.c)
 *     DrawFrameControl @ 0x1C0116938 (DrawFrameControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall vConvertLogFontW(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 80);
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 88);
  result = 0LL;
  *(_WORD *)(a1 + 92) = 0;
  *(_WORD *)(a1 + 220) = 0;
  *(_WORD *)(a1 + 284) = 0;
  *(_QWORD *)(a1 + 348) = 134248036LL;
  return result;
}
