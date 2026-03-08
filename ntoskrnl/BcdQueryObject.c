/*
 * XREFs of BcdQueryObject @ 0x14082B5C0
 * Callers:
 *     PopBcdEstablishResumeObject @ 0x14082B658 (PopBcdEstablishResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x140999C24 (PopBcdRegenerateResumeObject.c)
 *     PopBcdSetPendingResume @ 0x140999E60 (PopBcdSetPendingResume.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140A5C414 (BiUpdateObjectReferenceInEfiEntry.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x1403903FC (BiIsOfflineHandle.c)
 *     BiGetObjectDescription @ 0x14082E2C8 (BiGetObjectDescription.c)
 *     BiAcquireBcdSyncMutant @ 0x14082ED10 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x14082EDB8 (BiReleaseBcdSyncMutant.c)
 *     BiGetObjectIdentifier @ 0x14082EE3C (BiGetObjectIdentifier.c)
 */

__int64 __fastcall BcdQueryObject(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rcx
  char v8; // r14
  __int64 result; // rax
  __int64 v10; // rcx
  int ObjectIdentifier; // ebx

  if ( a3 )
  {
    if ( a2 == 1 )
      goto LABEL_3;
    return 3221225485LL;
  }
  if ( !a4 )
    return 3221225485LL;
LABEL_3:
  LOBYTE(v7) = BiIsOfflineHandle(a1);
  v8 = v7;
  result = BiAcquireBcdSyncMutant(v7);
  if ( (int)result >= 0 )
  {
    ObjectIdentifier = 0;
    if ( !a3 || (ObjectIdentifier = BiGetObjectDescription(a1, a3), ObjectIdentifier >= 0) )
    {
      if ( a4 )
        ObjectIdentifier = BiGetObjectIdentifier(a1, a4);
    }
    LOBYTE(v10) = v8;
    BiReleaseBcdSyncMutant(v10);
    return (unsigned int)ObjectIdentifier;
  }
  return result;
}
