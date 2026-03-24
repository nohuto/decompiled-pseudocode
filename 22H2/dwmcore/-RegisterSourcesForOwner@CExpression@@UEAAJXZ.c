/*
 * XREFs of ?RegisterSourcesForOwner@CExpression@@UEAAJXZ @ 0x180065890
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterSourceForAnimation@CExpression@@AEAAJPEAVCBaseExpression@@PEBUExpressionReferenceInfo@@@Z @ 0x180065910 (-RegisterSourceForAnimation@CExpression@@AEAAJPEAVCBaseExpression@@PEBUExpressionReferenceInfo@@.c)
 */

__int64 __fastcall CExpression::RegisterSourcesForOwner(CExpression *this)
{
  struct CBaseExpression *v1; // rbp
  __int64 v3; // rsi
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // edi

  v1 = (struct CBaseExpression *)*((_QWORD *)this + 53);
  if ( !v1 )
    v1 = this;
  v3 = 0LL;
  if ( *((_DWORD *)this + 104) )
  {
    while ( 1 )
    {
      v4 = CExpression::RegisterSourceForAnimation(
             this,
             v1,
             (const struct ExpressionReferenceInfo *)(*((_QWORD *)this + 51) + 24 * v3));
      v6 = v4;
      if ( v4 < 0 )
        break;
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *((_DWORD *)this + 104) )
        return 0;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x17Fu, 0LL);
  }
  else
  {
    return 0;
  }
  return v6;
}
