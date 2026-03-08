/*
 * XREFs of ?GetProperty@CInteraction@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180208D50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z @ 0x180129962 (-GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CInteraction::GetProperty(CInteraction *this, int a2, struct CExpressionValue *a3)
{
  int v4; // edx
  int v5; // edx
  char RailsEnabled; // al
  __int64 result; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = a2 - 13;
  if ( v4 )
  {
    if ( v4 != 1 )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  RailsEnabled = CInteractionProcessor::GetRailsEnabled((__int64)this + 352, v5);
  *((_DWORD *)a3 + 18) = 17;
  *(_BYTE *)a3 = RailsEnabled;
  result = 0LL;
  *((_BYTE *)a3 + 76) = 1;
  return result;
}
