/*
 * XREFs of InitializeGdiCrossSessionGlobals @ 0x1C0137490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InitializeGdiCrossSessionGlobals(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _RTL_AVL_TABLE *v5; // rcx
  struct _RTL_AVL_TABLE *v6; // rcx

  if ( gSessionId != (unsigned int)RtlGetCurrentServiceSessionId(a1, a2, a3, a4) )
    return 1LL;
  *(_QWORD *)gpxsGlobals = GreCreateSemaphore();
  if ( *(_QWORD *)gpxsGlobals )
  {
    *((_QWORD *)gpxsGlobals + 1) = Win32AllocPoolNonPaged(104LL, 1717988935LL);
    v5 = (struct _RTL_AVL_TABLE *)*((_QWORD *)gpxsGlobals + 1);
    if ( v5 )
    {
      RtlInitializeGenericTableAvl(
        v5,
        GDINetworkedFontFileNodeCompare,
        GDINetworkedFontFileNodeAlloc,
        GDINetworkedFontFileNodeFree,
        0LL);
      *((_QWORD *)gpxsGlobals + 2) = GreCreateSemaphore();
      if ( *((_QWORD *)gpxsGlobals + 2) )
      {
        *((_QWORD *)gpxsGlobals + 3) = Win32AllocPoolNonPaged(104LL, 1717990471LL);
        v6 = (struct _RTL_AVL_TABLE *)*((_QWORD *)gpxsGlobals + 3);
        if ( v6 )
        {
          RtlInitializeGenericTableAvl(
            v6,
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
