/*
 * XREFs of CmpTransReferenceTransaction @ 0x1406B5C38
 * Callers:
 *     CmpTransSearchAddTrans @ 0x1406B570C (CmpTransSearchAddTrans.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x1406B5B04 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpTransInitializeTransaction @ 0x1407353BC (CmpTransInitializeTransaction.c)
 *     CmpCreateKeyBody @ 0x1407BA4F0 (CmpCreateKeyBody.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     TmIsTransactionActive @ 0x1403D29F0 (TmIsTransactionActive.c)
 */

__int64 __fastcall CmpTransReferenceTransaction(__int64 a1)
{
  struct _KTRANSACTION *v1; // rbx
  bool v2; // zf
  void *v3; // rcx
  unsigned int v4; // edi

  v1 = (struct _KTRANSACTION *)(a1 & 0xFFFFFFFFFFFFFFFEuLL);
  v2 = (a1 & 1) == 0;
  v3 = (void *)(a1 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( v2 )
  {
    v4 = 0;
    ObfReferenceObject(v3);
    if ( !TmIsTransactionActive(v1) )
    {
      ObfDereferenceObject(v1);
      return (unsigned int)-1072103421;
    }
  }
  else
  {
    ObfReferenceObject(v3);
    return v1->OutcomeEvent.Header.LockNV != 0 ? 0xC0190003 : 0;
  }
  return v4;
}
