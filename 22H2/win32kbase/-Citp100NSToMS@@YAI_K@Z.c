/*
 * XREFs of ?Citp100NSToMS@@YAI_K@Z @ 0x1C008EAAC
 * Callers:
 *     ?CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C008D970 (-CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpDPDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C008DCFC (-CitpDPDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpPostUpdateUseInfoCalculate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C008E880 (-CitpPostUpdateUseInfoCalculate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_POST_UPDATE_USE_INFO@@@Z.c)
 *     ?CitpUTCToMS@@YAI_KI@Z @ 0x1C008EA58 (-CitpUTCToMS@@YAI_KI@Z.c)
 *     ?CitpDPDataLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C01FD714 (-CitpDPDataLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Citp100NSToMS(unsigned __int64 a1)
{
  __int64 v1; // rdx

  if ( a1 >= 0x271000000000LL )
    LODWORD(v1) = -1;
  else
    return (unsigned int)(a1 / 0x2710);
  return (unsigned int)v1;
}
