/*
 * XREFs of ?IsPresentCanceled@CFlipManager@@AEAA_N_K@Z @ 0x1C00837DC
 * Callers:
 *     ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x1C0082018 (-ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PE.c)
 *     ?ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z @ 0x1C00828B8 (-ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CFlipManager::IsPresentCanceled(CFlipManager *this, unsigned __int64 a2)
{
  char *v2; // r8
  char *i; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  char result; // al

  v2 = (char *)this + 192;
  for ( i = (char *)*((_QWORD *)this + 24); ; i = *(char **)i )
  {
    result = 0;
    if ( i == v2 )
      break;
    v4 = (__int64)(i + 16);
    if ( !i )
      v4 = 24LL;
    if ( *(_QWORD *)v4 > a2 )
    {
      v5 = (__int64)(i + 24);
      if ( !i )
        v5 = 32LL;
      if ( *(_QWORD *)v5 <= a2 )
        return 1;
    }
  }
  return result;
}
