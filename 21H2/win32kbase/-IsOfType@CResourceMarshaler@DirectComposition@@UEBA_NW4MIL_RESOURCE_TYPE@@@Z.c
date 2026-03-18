/*
 * XREFs of ?IsOfType@CResourceMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C008B860
 * Callers:
 *     ?IsOfType@CLegacyRenderTargetMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C008B830 (-IsOfType@CLegacyRenderTargetMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CRemoteRenderTargetMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C00D43E0 (-IsOfType@CRemoteRenderTargetMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CDDisplayRenderTargetMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0214AE0 (-IsOfType@CDDisplayRenderTargetMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CGenericMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0214B10 (-IsOfType@CGenericMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSharedSectionWrapperMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0214B90 (-IsOfType@CSharedSectionWrapperMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSharedReadCaptureControllerMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C023AD20 (-IsOfType@CSharedReadCaptureControllerMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSharedWriteCaptureControllerMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C023B040 (-IsOfType@CSharedWriteCaptureControllerMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@.c)
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CResourceMarshaler::IsOfType(__int64 a1, int a2)
{
  int i; // eax

  for ( i = *(_DWORD *)(a1 + 48);
        i != 206;
        i = *((_DWORD *)&DirectComposition::ResourceInformation::resourceTypeInformation + 3 * i + 1) )
  {
    if ( *((_DWORD *)&DirectComposition::ResourceInformation::resourceTypeInformation + 3 * i) == a2 )
      return 1;
  }
  return 0;
}
