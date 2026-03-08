/*
 * XREFs of ?OnShutdown@CComposition@@QEAAXXZ @ 0x1801B1A44
 * Callers:
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x1801CE680 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18008F164 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x1800A9BF4 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800B99A0 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@s.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800C84A4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?clear@?$vector@V?$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1800F8924 (-clear@-$vector@V-$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$c.c)
 *     ??$_Destroy_range@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@YAXPEAVDeviceInfo@CDeviceManager@@QEAV12@AEAV?$allocator@VDeviceInfo@CDeviceManager@@@0@@Z @ 0x180103AE4 (--$_Destroy_range@V-$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@YAXPEAVDeviceInfo@CDevice.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x1801B1E58 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x1801B1E9C (-ReleaseNotificationChannels@CComposition@@AEAAXXZ.c)
 *     ?Disconnect@CMessageConversationHost@@QEAAXXZ @ 0x1801B4424 (-Disconnect@CMessageConversationHost@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B4A60 (-InternalRelease@-$ComPtr@VDataProviderRegistrarConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarPrincipal@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B4A88 (-InternalRelease@-$ComPtr@VDataProviderRegistrarPrincipal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CComposition::OnShutdown(CComposition *this)
{
  char *v1; // rbp
  void *v3; // rdx
  __int64 v4; // rcx
  volatile signed __int32 *v5; // rsi
  volatile signed __int32 *v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rcx
  volatile signed __int32 *v9; // rcx
  Microsoft::Bamo::BaseBamoConnection *v10; // rcx

  v1 = (char *)this + 672;
  *((_BYTE *)this + 1278) = 1;
  AcquireSRWLockExclusive((PSRWLOCK)this + 84);
  *((_DWORD *)v1 + 2) = GetCurrentThreadId();
  std::_Destroy_range<std::allocator<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>>(
    *((_QWORD **)this + 166),
    *((_QWORD **)this + 167));
  *((_QWORD *)this + 167) = *((_QWORD *)this + 166);
  wil::details::SetEvent(*((wil::details **)this + 158), v3);
  std::_Destroy_range<std::allocator<CDeviceManager::DeviceInfo>>(qword_1803E7048, xmmword_1803E7050);
  *(_QWORD *)&xmmword_1803E7050 = qword_1803E7048;
  CComposition::ReleaseNotificationChannels(this);
  v4 = *((_QWORD *)this + 27);
  *(_QWORD *)(v4 + 16) = *(_QWORD *)(v4 + 8);
  *(_QWORD *)(v4 + 40) = *(_QWORD *)(v4 + 32);
  *(_BYTE *)(v4 + 578) = 1;
  *(_BYTE *)(v4 + 580) = 1;
  std::vector<wil::com_ptr_t<CRenderTarget,wil::err_returncode_policy>>::clear((__int64 **)(v4 + 56));
  while ( *((_DWORD *)this + 116) )
    CComposition::CloseChannel(
      this,
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 55) + 8LL * (unsigned int)(*((_DWORD *)this + 116) - 1)) + 16LL));
  CMessageConversationHost::Disconnect(*((CMessageConversationHost **)this + 155));
  v5 = (volatile signed __int32 *)*((_QWORD *)this + 155);
  v6 = v5 + 2;
  if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
  {
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v5 + 2));
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 72LL))(v5);
    if ( _InterlockedExchangeAdd(v6, 0xFFFFFFFF) == 1 )
    {
      --*v6;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v5 + 64LL))(v5, 1LL);
    }
  }
  v7 = *((_QWORD *)this + 157);
  *((_QWORD *)this + 155) = 0LL;
  Microsoft::WRL::ComPtr<DataProviderRegistrarConnection>::InternalRelease(v7 + 24);
  Microsoft::WRL::ComPtr<DataProviderRegistrarPrincipal>::InternalRelease(v7 + 32);
  v8 = *(_QWORD *)(v7 + 16);
  if ( v8 )
  {
    *(_QWORD *)(v7 + 16) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = (volatile signed __int32 *)*((_QWORD *)this + 157);
  if ( v9 )
  {
    *((_QWORD *)this + 157) = 0LL;
    CMILRefCountBaseT<IUnknown>::InternalRelease(v9);
  }
  v10 = (Microsoft::Bamo::BaseBamoConnection *)*((_QWORD *)this + 156);
  if ( v10 )
  {
    *((_QWORD *)this + 156) = 0LL;
    Microsoft::Bamo::BaseBamoConnection::Release(v10);
  }
  *((_DWORD *)v1 + 2) = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)v1);
}
