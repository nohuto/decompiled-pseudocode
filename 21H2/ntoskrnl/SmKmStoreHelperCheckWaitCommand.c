/*
 * XREFs of SmKmStoreHelperCheckWaitCommand @ 0x1402915F0
 * Callers:
 *     ?SmStCheckLockInProgressRegionComplete@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGION@@K@Z @ 0x14022B5AC (-SmStCheckLockInProgressRegionComplete@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGIO.c)
 *     SmKmStoreHelperSendCommand @ 0x140291574 (SmKmStoreHelperSendCommand.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14029F7FC (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 * Callees:
 *     SmKmStoreHelperWaitForCommand @ 0x1402914CC (SmKmStoreHelperWaitForCommand.c)
 */

__int64 __fastcall SmKmStoreHelperCheckWaitCommand(__int64 a1, int a2)
{
  int v2; // r8d
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 56);
  result = 0LL;
  if ( v2 )
  {
    if ( a2 || (v2 & 1) != 0 )
      return SmKmStoreHelperWaitForCommand(a1, 0LL, 0LL, 0);
    else
      return 3221225646LL;
  }
  return result;
}
