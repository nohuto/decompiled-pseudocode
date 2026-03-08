/*
 * XREFs of ?CheckOcclusionState@CRemoteAppRenderTarget@@UEAAJXZ @ 0x1801E76E0
 * Callers:
 *     ?CheckOcclusionState@CRemoteAppRenderTarget@@$4PPPPPPPM@A@EAAJXZ @ 0x180119570 (-CheckOcclusionState@CRemoteAppRenderTarget@@$4PPPPPPPM@A@EAAJXZ.c)
 * Callees:
 *     ?EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ @ 0x1801E7768 (-EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?SendCompSurfHandle@CRemoteAppRenderTarget@@IEAAJXZ @ 0x1801E89F0 (-SendCompSurfHandle@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?IsVailContainer@@YA_NXZ @ 0x180278ADC (-IsVailContainer@@YA_NXZ.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::CheckOcclusionState(CRemoteAppRenderTarget *this)
{
  CRemoteAppRenderTarget *v2; // rdi

  if ( *(int *)(*((_QWORD *)this - 41) + 1104LL) >= 5 )
  {
    if ( *((_DWORD *)this - 60) )
    {
      if ( *((_DWORD *)this - 59) )
      {
        v2 = (CRemoteAppRenderTarget *)((char *)this - 344);
        if ( (int)CRemoteAppRenderTarget::EnsureSwapChain((CRemoteAppRenderTarget *)((char *)this - 344)) >= 0
          && *(_DWORD *)(*((_QWORD *)this - 41) + 1104LL) == 6 )
        {
          if ( *((_BYTE *)this - 52) )
          {
            IsVailContainer();
            *((_BYTE *)this - 52) = 0;
          }
          if ( *((_BYTE *)this - 51) )
            CRemoteAppRenderTarget::SendCompSurfHandle(v2);
        }
      }
    }
  }
  return 142213121LL;
}
