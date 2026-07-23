/*
 * XREFs of ViKeWaitSanityChecks @ 0x1409DD60C
 * Callers:
 *     ViKeWaitForMultipleObjectsCommon @ 0x1409DD470 (ViKeWaitForMultipleObjectsCommon.c)
 *     ViKeWaitForSingleObjectCommon @ 0x1409DD558 (ViKeWaitForSingleObjectCommon.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x14035B1A0 (RtlpGetStackLimits.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1409C7B0C (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D1D54 (VerifierBugCheckIfAppropriate.c)
 */

unsigned __int8 __fastcall ViKeWaitSanityChecks(
        unsigned int a1,
        ULONG_PTR *a2,
        char a3,
        _QWORD *a4,
        int a5,
        unsigned __int8 a6)
{
  ULONG_PTR v6; // rbp
  __int64 v7; // rdi
  ULONG_PTR v8; // r15
  unsigned __int8 result; // al
  ULONG_PTR v13; // rdx
  int v14; // esi
  ULONG_PTR v15; // rbx
  ULONG_PTR v16; // [rsp+30h] [rbp-28h] BYREF
  ULONG_PTR v17[4]; // [rsp+38h] [rbp-20h] BYREF

  v6 = 0LL;
  v7 = a1;
  v8 = 0LL;
  v16 = 0LL;
  v17[0] = 0LL;
  result = MmVerifierData;
  if ( (MmVerifierData & 0x400000) != 0 && (MmVerifierData & 2) == 0 && (MmVerifierData & 0x800) == 0 )
    return result;
  if ( a6 > 2u )
  {
    v13 = 288LL;
    goto LABEL_11;
  }
  if ( a6 == 2 )
  {
    if ( !a4 )
    {
      v13 = 289LL;
      goto LABEL_11;
    }
    if ( *a4 )
    {
      v13 = 290LL;
LABEL_11:
      if ( (MmVerifierData & 2) != 0 )
        result = VerifierBugCheckIfAppropriate(0xC4u, v13, a6, *a2, (__int64)a4);
    }
  }
  if ( a3 == 1 && (!a4 || *a4) && a5 )
  {
    result = RtlpGetStackLimits((__int64)&v16, (__int64)v17);
    v6 = v16;
    v8 = v17[0];
    v14 = result;
  }
  else
  {
    v14 = 0;
  }
  if ( (_DWORD)v7 )
  {
    do
    {
      v15 = *a2;
      result = VfUtilSynchronizationObjectSanityChecks((PVOID)*a2, 1uLL);
      if ( (MmVerifierData & 0x800) != 0 && v14 && v15 >= v6 && v15 < v8 )
        result = VerifierBugCheckIfAppropriate(0xC4u, 0x123uLL, v15, 0LL, 0LL);
      ++a2;
      --v7;
    }
    while ( v7 );
  }
  return result;
}
