/*
 * XREFs of ?GetStopValue@CNaturalAnimation@@AEAA?ATInternalValue@1@XZ @ 0x180239880
 * Callers:
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180238A9C (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x18023A040 (-ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSIO.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CNaturalAnimation::GetStopValue(__int64 a1, __int64 a2)
{
  int v2; // r8d
  int v3; // r8d
  __int64 v4; // xmm0_8
  int v5; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_DWORD *)(a1 + 408);
  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 8) = 0;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 != 1 )
        ModuleFailFastForHRESULT(2147500037LL, retaddr);
      v4 = *(_QWORD *)(a1 + 360);
      v5 = *(_DWORD *)(a1 + 368);
    }
    else
    {
      v4 = *(_QWORD *)(a1 + 336);
      v5 = *(_DWORD *)(a1 + 344);
    }
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 348);
    v5 = *(_DWORD *)(a1 + 356);
  }
  *(_QWORD *)a2 = v4;
  *(_DWORD *)(a2 + 8) = v5;
  return a2;
}
