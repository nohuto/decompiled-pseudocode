/*
 * XREFs of ?PostPresent@CDDisplaySwapChain@@MEAAJ_N0@Z @ 0x180287E60
 * Callers:
 *     ?Present@CDDisplaySwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x180287FC0 (-Present@CDDisplaySwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@I@.c)
 *     ?PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180288130 (-PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLAN.c)
 * Callees:
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180047B80 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AdvanceUnpin@CD3DDevice@@QEAAXU_LUID@@I_N@Z @ 0x1800C6BD4 (-AdvanceUnpin@CD3DDevice@@QEAAXU_LUID@@I_N@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 *     ?UpdateBackBufferTextureTarget@CDDisplaySwapChain@@IEAAJXZ @ 0x1802885B0 (-UpdateBackBufferTextureTarget@CDDisplaySwapChain@@IEAAJXZ.c)
 */

__int64 __fastcall CDDisplaySwapChain::PostPresent(CDDisplaySwapChain *this, char a2, unsigned __int8 a3)
{
  unsigned int v3; // edi
  unsigned int v5; // r8d
  __int64 v6; // rdi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int updated; // eax
  __int64 v11; // rcx
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = 0;
  if ( !a2 )
  {
    CD3DDevice::AdvanceUnpin(
      *((CD3DDevice **)this + 10),
      *(struct _LUID *)((char *)this + 116),
      *((unsigned int *)this + 28),
      a3);
    v5 = ((__int64)(*((_QWORD *)this + 58) - *((_QWORD *)this + 57)) >> 3) - 1;
    if ( (unsigned int)((__int64)(*((_QWORD *)this + 58) - *((_QWORD *)this + 57)) >> 3) != 1 )
    {
      do
      {
        v6 = v5 - 1;
        v7 = FastRegion::CRegion::Copy(
               *(int ***)(*((_QWORD *)this + 57) + 8LL * v5),
               *(int ***)(*((_QWORD *)this + 57) + 8 * v6));
        if ( v7 < 0 )
          ModuleFailFastForHRESULT(v7, retaddr);
        v5 = v6;
      }
      while ( (_DWORD)v6 );
    }
    v8 = FastRegion::CRegion::Copy(**((int ****)this + 57), (int **)this + 17);
    if ( v8 < 0 )
      ModuleFailFastForHRESULT(v8, retaddr);
    **((_DWORD **)this + 17) = 0;
    v9 = *((_DWORD *)this + 106);
    *((_DWORD *)this + 107) = v9;
    *((_DWORD *)this + 106) = (unsigned int)(v9 + 1)
                            % (unsigned __int64)((__int64)(*((_QWORD *)this + 51) - *((_QWORD *)this + 50)) >> 5);
    updated = CDDisplaySwapChain::UpdateBackBufferTextureTarget(this);
    v3 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, updated, 0x117u, 0LL);
  }
  return v3;
}
