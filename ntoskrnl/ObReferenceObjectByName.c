/*
 * XREFs of ObReferenceObjectByName @ 0x140698F90
 * Callers:
 *     IopGetDriverPathInformation @ 0x140553224 (IopGetDriverPathInformation.c)
 *     IopGetLegacyVetoListDrivers @ 0x140698764 (IopGetLegacyVetoListDrivers.c)
 *     CmLoadDifferencingKey @ 0x1406BC49C (CmLoadDifferencingKey.c)
 *     AlpcpCreateClientPort @ 0x140713330 (AlpcpCreateClientPort.c)
 *     ObShutdownSystem @ 0x140977E00 (ObShutdownSystem.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x1402640A0 (PsGetCurrentSilo.c)
 *     SeClearLearningModeObjectInformation @ 0x140265EF0 (SeClearLearningModeObjectInformation.c)
 *     SepDeleteAccessState @ 0x140265F50 (SepDeleteAccessState.c)
 *     PsDereferenceSiloContext @ 0x1402FEB00 (PsDereferenceSiloContext.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     SeSetLearningModeObjectInformation @ 0x1405B5FAC (SeSetLearningModeObjectInformation.c)
 *     SeCreateAccessState @ 0x1406991A0 (SeCreateAccessState.c)
 *     ObpFreeObjectNameBuffer @ 0x140699240 (ObpFreeObjectNameBuffer.c)
 *     ObpCheckObjectReference @ 0x1406992AC (ObpCheckObjectReference.c)
 *     ObpUnlockDirectory @ 0x140699588 (ObpUnlockDirectory.c)
 *     ObpLookupObjectName @ 0x1406E86B0 (ObpLookupObjectName.c)
 *     ObpCaptureObjectName @ 0x1406EA0F0 (ObpCaptureObjectName.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall ObReferenceObjectByName(
        __int64 a1,
        int a2,
        __int64 *a3,
        unsigned int a4,
        __int64 a5,
        char a6,
        int a7,
        __int64 *a8)
{
  __int64 v12; // rcx
  __int64 result; // rax
  struct _LIST_ENTRY *CurrentSilo; // rax
  int v15; // eax
  unsigned __int64 v16; // rdx
  unsigned int AccessState; // [rsp+70h] [rbp-90h] BYREF
  __int64 v18; // [rsp+78h] [rbp-88h] BYREF
  int v19[4]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v20[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v21; // [rsp+A0h] [rbp-60h]
  __int128 v22; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v23; // [rsp+B8h] [rbp-48h]
  __int128 v24; // [rsp+C8h] [rbp-38h]
  __int64 v25; // [rsp+D8h] [rbp-28h]
  __int64 v26[20]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v27[224]; // [rsp+180h] [rbp+80h] BYREF

  memset(v27, 0, sizeof(v27));
  v18 = 0LL;
  *(_OWORD *)v19 = 0LL;
  memset(v26, 0, sizeof(v26));
  v21 = 0LL;
  v25 = 0LL;
  *(_OWORD *)v20 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  if ( !a1 )
    return 3221225523LL;
  LOBYTE(v12) = a6;
  result = ObpCaptureObjectName(v12, a1, v19, 1LL);
  AccessState = result;
  if ( (int)result < 0 )
    return result;
  if ( !LOWORD(v19[0]) )
    return 3221225523LL;
  if ( a3 || (a3 = v26, AccessState = SeCreateAccessState(v26, v27, a4, a5 + 76), (AccessState & 0x80000000) == 0) )
  {
    CurrentSilo = PsGetCurrentSilo();
    v15 = ObpLookupObjectName(
            0,
            (int)v19,
            a2,
            a5,
            a6,
            a7,
            0,
            0LL,
            (__int64)CurrentSilo,
            (__int64)a3,
            (__int64)v20,
            0LL,
            (__int64)&v18);
    AccessState = v15;
    if ( v20[0] )
    {
      ObpUnlockDirectory(v20);
      v15 = AccessState;
    }
    *a8 = 0LL;
    if ( v15 >= 0 )
    {
      if ( SepLearningModeTokenCount )
      {
        v16 = *(unsigned __int8 *)(v18 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v18 - 48) >> 8);
        *(_QWORD *)&v24 = 0LL;
        *(_QWORD *)&v23 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v16] + 16;
        *((_QWORD *)&v23 + 1) = v19;
        SeSetLearningModeObjectInformation((__int64)&v22);
      }
      if ( (unsigned __int8)ObpCheckObjectReference(v18, (PNTSTATUS)&AccessState) )
        *a8 = v18;
      else
        PsDereferenceSiloContext((void *)v18);
      SeClearLearningModeObjectInformation();
    }
    if ( a3 == v26 )
    {
      SepDeleteAccessState((__int64)a3);
      SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3 + 1);
    }
  }
  ObpFreeObjectNameBuffer(v19);
  return AccessState;
}
