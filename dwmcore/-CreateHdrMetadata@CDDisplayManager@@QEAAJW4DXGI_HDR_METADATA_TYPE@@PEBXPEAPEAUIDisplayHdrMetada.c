/*
 * XREFs of ?CreateHdrMetadata@CDDisplayManager@@QEAAJW4DXGI_HDR_METADATA_TYPE@@PEBXPEAPEAUIDisplayHdrMetadata@Core@Display@Devices@Windows@@@Z @ 0x180290830
 * Callers:
 *     ?ComputeCachedHdrMetadata@CDDisplaySwapChain@@IEAAJW4DXGI_HDR_METADATA_TYPE@@PEBX@Z @ 0x180285C04 (-ComputeCachedHdrMetadata@CDDisplaySwapChain@@IEAAJW4DXGI_HDR_METADATA_TYPE@@PEBX@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDDisplayManager::CreateHdrMetadata(
        CDDisplayManager *this,
        enum DXGI_HDR_METADATA_TYPE a2,
        _QWORD *a3,
        struct Windows::Devices::Display::Core::IDisplayHdrMetadata **a4)
{
  struct Windows::Devices::Display::Core::IDisplayHdrMetadata *v4; // rcx
  unsigned int v5; // ebx
  int v7; // edx
  __int64 v8; // xmm1_8
  __int64 v9; // rax
  __int64 (__fastcall *v10)(_QWORD, __int128 *, struct Windows::Devices::Display::Core::IDisplayHdrMetadata **); // r9
  int v11; // eax
  __int64 v12; // rcx
  __int128 v14; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]
  int v16; // [rsp+48h] [rbp-10h]
  struct Windows::Devices::Display::Core::IDisplayHdrMetadata *v17; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = 0;
  v17 = 0LL;
  if ( a2 == DXGI_HDR_METADATA_TYPE_NONE )
    goto LABEL_9;
  v7 = a2 - 1;
  if ( !v7 )
  {
    v8 = a3[2];
    v9 = *(_QWORD *)xmmword_1803E32C0;
    v14 = *(_OWORD *)a3;
    v15 = v8;
    v10 = *(__int64 (__fastcall **)(_QWORD, __int128 *, struct Windows::Devices::Display::Core::IDisplayHdrMetadata **))(v9 + 56);
    v16 = *((_DWORD *)a3 + 6);
    v11 = v10(xmmword_1803E32C0, &v14, &v17);
    v5 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x1B7u, 0LL);
      goto LABEL_10;
    }
    v4 = v17;
    goto LABEL_9;
  }
  if ( v7 == 1 )
  {
LABEL_9:
    v17 = 0LL;
    *a4 = v4;
    goto LABEL_10;
  }
  v5 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2147024809, 0x1BEu, 0LL);
LABEL_10:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
  return v5;
}
