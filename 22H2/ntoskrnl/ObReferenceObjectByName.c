/*
 * XREFs of ObReferenceObjectByName @ 0x1406D9EC0
 * Callers:
 *     IopGetDriverPathInformation @ 0x14050081C (IopGetDriverPathInformation.c)
 *     AlpcpCreateClientPort @ 0x1405E054C (AlpcpCreateClientPort.c)
 *     IopGetLegacyVetoListDrivers @ 0x1406DA720 (IopGetLegacyVetoListDrivers.c)
 *     CmLoadDifferencingKey @ 0x1406E737C (CmLoadDifferencingKey.c)
 *     ObShutdownSystem @ 0x1408DC4E0 (ObShutdownSystem.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     SeClearLearningModeObjectInformation @ 0x1403455C0 (SeClearLearningModeObjectInformation.c)
 *     SepDeleteAccessState @ 0x140345670 (SepDeleteAccessState.c)
 *     PsGetCurrentSilo @ 0x140345940 (PsGetCurrentSilo.c)
 *     SeSetLearningModeObjectInformation @ 0x140345990 (SeSetLearningModeObjectInformation.c)
 *     ObpReleaseLookupContext @ 0x140347AE0 (ObpReleaseLookupContext.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     ObpLookupObjectName @ 0x140641640 (ObpLookupObjectName.c)
 *     ObpCaptureObjectName @ 0x1406CF470 (ObpCaptureObjectName.c)
 *     SeReleaseSubjectContext @ 0x1406CF6B0 (SeReleaseSubjectContext.c)
 *     ObpCheckObjectReference @ 0x1406D9CFC (ObpCheckObjectReference.c)
 *     ObpFreeObjectNameBuffer @ 0x1406DA108 (ObpFreeObjectNameBuffer.c)
 *     SeCreateAccessState @ 0x1406DA670 (SeCreateAccessState.c)
 */

__int64 __fastcall ObReferenceObjectByName(
        unsigned __int64 a1,
        int a2,
        __int64 *a3,
        unsigned int a4,
        struct _OBJECT_TYPE *a5,
        char a6,
        __int64 a7,
        PADAPTER_OBJECT *a8)
{
  __int64 result; // rax
  struct _LIST_ENTRY *CurrentSilo; // rax
  unsigned __int64 v14; // rdx
  BOOLEAN v15; // r8
  NTSTATUS AccessState; // [rsp+70h] [rbp-90h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+78h] [rbp-88h] BYREF
  __m128i v18; // [rsp+80h] [rbp-80h] BYREF
  __int128 v19; // [rsp+90h] [rbp-70h] BYREF
  __int128 v20; // [rsp+A0h] [rbp-60h]
  __int128 v21; // [rsp+B0h] [rbp-50h]
  __int64 v22; // [rsp+C0h] [rbp-40h]
  __int64 v23[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v24; // [rsp+D8h] [rbp-28h]
  __int64 v25; // [rsp+E8h] [rbp-18h]
  __int64 v26[20]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v27[224]; // [rsp+190h] [rbp+90h] BYREF

  memset(v27, 0, sizeof(v27));
  DmaAdapter = 0LL;
  v18 = 0LL;
  memset(v26, 0, sizeof(v26));
  v25 = 0LL;
  v22 = 0LL;
  *(_OWORD *)v23 = 0LL;
  v24 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  if ( !a1 )
    return 3221225523LL;
  result = ObpCaptureObjectName(a6, a1, (__int64)&v18, 1);
  AccessState = result;
  if ( (int)result < 0 )
    return result;
  if ( !v18.m128i_i16[0] )
    return 3221225523LL;
  if ( a3 || (a3 = v26, AccessState = SeCreateAccessState(v26, v27, a4, &a5->TypeInfo.GenericMapping), AccessState >= 0) )
  {
    CurrentSilo = PsGetCurrentSilo();
    AccessState = ObpLookupObjectName(
                    0LL,
                    &v18,
                    a2,
                    a5,
                    a6,
                    a7,
                    0LL,
                    0LL,
                    (__int64)CurrentSilo,
                    (__int64)a3,
                    (__int64)v23,
                    0LL,
                    &DmaAdapter);
    ObpReleaseLookupContext((__int64)v23);
    *a8 = 0LL;
    if ( AccessState >= 0 )
    {
      v14 = LOBYTE(DmaAdapter[-2].DmaOperations) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)DmaAdapter - 48) >> 8);
      *(_QWORD *)&v21 = 0LL;
      *(_QWORD *)&v20 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v14] + 16;
      *((_QWORD *)&v20 + 1) = &v18;
      SeSetLearningModeObjectInformation((__int64)&v19);
      if ( ObpCheckObjectReference((__int64)DmaAdapter, (__int64)a3, v15, a6, &AccessState) )
        *a8 = DmaAdapter;
      else
        HalPutDmaAdapter(DmaAdapter);
      SeClearLearningModeObjectInformation();
    }
    if ( a3 == v26 )
    {
      SepDeleteAccessState((__int64)a3);
      SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3 + 1);
    }
  }
  ObpFreeObjectNameBuffer(&v18);
  return (unsigned int)AccessState;
}
