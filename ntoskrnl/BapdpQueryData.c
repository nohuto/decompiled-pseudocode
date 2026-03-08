/*
 * XREFs of BapdpQueryData @ 0x140B44D10
 * Callers:
 *     BapdpProcessSpacesBootInformation @ 0x1403800A8 (BapdpProcessSpacesBootInformation.c)
 *     BapdpProcessEtwEvents @ 0x140380170 (BapdpProcessEtwEvents.c)
 *     BapdpProcessEDrvHintInfo @ 0x140B42A34 (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x140B42AC4 (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessWmdResults @ 0x140B42B54 (BapdpProcessWmdResults.c)
 *     BapdpProcessBootMetadata @ 0x140B42C3C (BapdpProcessBootMetadata.c)
 *     BapdpProcessBCDCache @ 0x140B44668 (BapdpProcessBCDCache.c)
 *     BapdpProcessResumeInformation @ 0x140B44768 (BapdpProcessResumeInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x140B4483C (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessHSTIResults @ 0x140B44910 (BapdpProcessHSTIResults.c)
 *     BapdpRegisterWbclData @ 0x140B449E4 (BapdpRegisterWbclData.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140B44AFC (BapdpProcessVsmKeyBlobs.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

__int64 __fastcall BapdpQueryData(__int64 a1, _QWORD *a2, int a3, void *a4, unsigned int *a5)
{
  __int64 *v8; // rdx
  int i; // r9d
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // eax

  if ( !a5 || !a2 || *a5 && !a4 )
    return 3221225485LL;
  v8 = (__int64 *)qword_140D15DF0;
  for ( i = 0; ; ++i )
  {
    while ( 1 )
    {
      if ( v8 == &qword_140D15DF0 )
        return 3221226021LL;
      v10 = v8[2];
      v8 = (__int64 *)*v8;
      if ( (unsigned int)(*(_DWORD *)(v10 + 32) - 1) <= 1 )
      {
        v11 = *a2 - *(_QWORD *)(v10 + 16);
        if ( *a2 == *(_QWORD *)(v10 + 16) )
          v11 = a2[1] - *(_QWORD *)(v10 + 24);
        if ( !v11 )
          break;
      }
    }
    if ( a3 == i )
      break;
  }
  v12 = *(_DWORD *)(v10 + 36);
  if ( *a5 >= v12 )
  {
    memmove(a4, (const void *)(v10 + *(unsigned int *)(v10 + 40)), *(unsigned int *)(v10 + 36));
    return 0LL;
  }
  else
  {
    *a5 = v12;
    return 3221225507LL;
  }
}
