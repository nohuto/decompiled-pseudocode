/*
 * XREFs of WmipDSCleanup @ 0x14087DEB0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseMutex @ 0x1402046C0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     WmipUnreferenceEntry @ 0x14069C9D0 (WmipUnreferenceEntry.c)
 *     WmipGenerateBinaryMofNotification @ 0x14084FEDC (WmipGenerateBinaryMofNotification.c)
 *     WmipUnlinkInstanceSetFromGuidEntry @ 0x14087DFC4 (WmipUnlinkInstanceSetFromGuidEntry.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall WmipDSCleanup(ULONG_PTR BugCheckParameter2)
{
  _QWORD *v2; // r14
  volatile signed __int64 *v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 i; // rsi
  volatile signed __int64 *v7; // rdx
  void *v8; // rcx

  if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 1) == 0 )
    KeBugCheckEx(0x14Au, 1uLL, BugCheckParameter2, 0LL, 0LL);
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v2 = *(_QWORD **)(BugCheckParameter2 + 40);
  while ( v2 != (_QWORD *)(BugCheckParameter2 + 40) )
  {
    v3 = v2 - 5;
    if ( *(v2 - 5) )
    {
      WmipUnlinkInstanceSetFromGuidEntry(v2 - 5);
      *((_QWORD *)v3 + 8) = 0LL;
    }
    v4 = *((_QWORD *)v3 + 7);
    if ( v4 && (v3[2] & 8) == 0 )
    {
      v5 = *(_QWORD *)(v4 + 72) - WmipBinaryMofGuid;
      if ( !v5 )
        v5 = *(_QWORD *)(v4 + 80) - 0x102906C9A000F0B2LL;
      if ( !v5 )
      {
        KeReleaseMutex(&WmipSMMutex, 0);
        WmipGenerateBinaryMofNotification((__int64)(v2 - 5), &GUID_MOF_RESOURCE_REMOVED_NOTIFICATION);
        KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      }
      WmipUnreferenceEntry((__int64)&WmipGEChunkInfo, *((volatile signed __int64 **)v3 + 7));
    }
    *((_QWORD *)v3 + 7) = 0LL;
    v2 = (_QWORD *)*v2;
    WmipUnreferenceEntry((__int64)&WmipISChunkInfo, v3);
  }
  KeReleaseMutex(&WmipSMMutex, 0);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(BugCheckParameter2 + 64); i = (unsigned int)(i + 1) )
  {
    v7 = *(volatile signed __int64 **)(*(_QWORD *)(BugCheckParameter2 + 72) + 8 * i);
    if ( v7 )
      WmipUnreferenceEntry((__int64)&WmipMRChunkInfo, v7);
  }
  v8 = *(void **)(BugCheckParameter2 + 72);
  if ( v8 != (void *)(BugCheckParameter2 + 80) )
  {
    ExFreePoolWithTag(v8, 0);
    *(_QWORD *)(BugCheckParameter2 + 72) = 0LL;
  }
}
