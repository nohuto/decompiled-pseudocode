/*
 * XREFs of ?EnsureCacheBounds@CExpression@@AEAAJI_K@Z @ 0x1800C0170
 * Callers:
 *     ?StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z @ 0x1800BF3D0 (-StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x1800C0094 (-ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpression::EnsureCacheBounds(CExpression *this, unsigned int a2, unsigned __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // [rsp+20h] [rbp-18h]

  if ( a3 > 0xFFFFFFFF )
  {
    v5 = 499;
    goto LABEL_9;
  }
  if ( (unsigned int)a3 + a2 < a2 )
  {
    v5 = 500;
LABEL_9:
    v3 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024362, v5, 0LL);
    return v3;
  }
  if ( (unsigned int)a3 + a2 > *((_DWORD *)this + 92) )
  {
    v3 = -2147483637;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147483637, 0x1F9u, 0LL);
  }
  else
  {
    return 0;
  }
  return v3;
}
