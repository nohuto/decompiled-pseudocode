/*
 * XREFs of ?GetProperty@CInteraction@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801C5FE0
 * Callers:
 *     <none>
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18020F8B4 (ModuleFailFastForHRESULT.c)
 *     ?GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z @ 0x18022DA20 (-GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z.c)
 */

__int64 __fastcall CInteraction::GetProperty(CInteraction *this, int a2, struct CExpressionValue *a3)
{
  int v4; // edx
  __int64 v5; // rdx
  char RailsEnabled; // al
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a2 - 12;
  if ( v4 )
  {
    if ( v4 != 1 )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v5 = 1LL;
  }
  else
  {
    v5 = 0LL;
  }
  RailsEnabled = CInteractionProcessor::GetRailsEnabled((char *)this + 336, v5);
  *((_DWORD *)a3 + 18) = 17;
  *(_BYTE *)a3 = RailsEnabled;
  result = 0LL;
  *((_BYTE *)a3 + 76) = 1;
  return result;
}
