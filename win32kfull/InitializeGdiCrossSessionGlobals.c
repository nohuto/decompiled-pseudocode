/*
 * XREFs of InitializeGdiCrossSessionGlobals @ 0x1C00F5390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 InitializeGdiCrossSessionGlobals()
{
  struct _RTL_AVL_TABLE *v1; // rcx
  struct _RTL_AVL_TABLE *v2; // rcx

  if ( !(unsigned int)UserIsCurrentSessionHostServiceSession() )
    return 1LL;
  *gpxsGlobals = GreCreateSemaphore();
  if ( *gpxsGlobals )
  {
    *(_QWORD *)(gpxsGlobals + 8LL) = Win32AllocPoolNonPaged(104LL, 1717988935LL);
    v1 = *(struct _RTL_AVL_TABLE **)(gpxsGlobals + 8LL);
    if ( v1 )
    {
      RtlInitializeGenericTableAvl(
        v1,
        GDINetworkedFontFileNodeCompare,
        GDINetworkedFontFileNodeAlloc,
        GDINetworkedFontFileNodeFree,
        0LL);
      *(_QWORD *)(gpxsGlobals + 16LL) = GreCreateSemaphore();
      if ( *(_QWORD *)(gpxsGlobals + 16LL) )
      {
        *(_QWORD *)(gpxsGlobals + 24LL) = Win32AllocPoolNonPaged(104LL, 1717990471LL);
        v2 = *(struct _RTL_AVL_TABLE **)(gpxsGlobals + 24LL);
        if ( v2 )
        {
          RtlInitializeGenericTableAvl(
            v2,
            GDITrustedFontFileCompare,
            GDITrustedFontFileAlloc,
            GDITrustedFontFileFree,
            0LL);
          return 1LL;
        }
      }
    }
  }
  return 0LL;
}
