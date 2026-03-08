/*
 * XREFs of ?GetUpdateForPresentId@CFlipManager@@AEAAPEAVCFlipPresentUpdate@@_K@Z @ 0x1C00833BC
 * Callers:
 *     ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x1C0082018 (-ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PE.c)
 *     ?ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z @ 0x1C00828B8 (-ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z.c)
 *     ?PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z @ 0x1C0084228 (-PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z.c)
 * Callees:
 *     <none>
 */

struct CFlipPresentUpdate *__fastcall CFlipManager::GetUpdateForPresentId(CFlipManager *this, __int64 a2)
{
  char *v2; // r9
  __int64 v3; // r8
  char *v4; // rcx
  char *v5; // rax
  __int64 v6; // rcx

  v2 = (char *)this + 152;
  v3 = 0LL;
  v4 = (char *)*((_QWORD *)this + 19);
  if ( v4 != v2 )
  {
    while ( 1 )
    {
      v5 = v4 - 24;
      v6 = -(__int64)v4;
      v3 = (unsigned __int64)v5 & -(__int64)(v6 != 0);
      if ( !v3 || *(_QWORD *)(((unsigned __int64)v5 & -(__int64)(v6 != 0)) + 0x40) == a2 )
        break;
      v4 = *(char **)(((unsigned __int64)v5 & -(__int64)(v6 != 0)) + 0x18);
      if ( v4 == v2 )
        return 0LL;
    }
  }
  return (struct CFlipPresentUpdate *)v3;
}
