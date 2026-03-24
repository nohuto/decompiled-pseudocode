/*
 * XREFs of ?CreateHdrMetadata@CDDisplayManager@@QEAAJW4DXGI_HDR_METADATA_TYPE@@PEBXPEAPEAUIDisplayHdrMetadata@Core@Display@Devices@Windows@@@Z @ 0x180243928
 * Callers:
 *     ?ComputeCachedHdrMetadata@CDDisplaySwapChain@@IEAAJW4DXGI_HDR_METADATA_TYPE@@PEBX@Z @ 0x18023934C (-ComputeCachedHdrMetadata@CDDisplaySwapChain@@IEAAJW4DXGI_HDR_METADATA_TYPE@@PEBX@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025150 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
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
  __int64 (__fastcall *v9)(__int64, __int128 *, struct Windows::Devices::Display::Core::IDisplayHdrMetadata **); // r9
  int v10; // eax
  __int64 v11; // rcx
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h]
  int v15; // [rsp+48h] [rbp-10h]
  struct Windows::Devices::Display::Core::IDisplayHdrMetadata *v16; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = 0;
  v16 = 0LL;
  if ( a2 == DXGI_HDR_METADATA_TYPE_NONE )
    goto LABEL_9;
  v7 = a2 - 1;
  if ( !v7 )
  {
    v8 = a3[2];
    v13 = *(_OWORD *)a3;
    v14 = v8;
    v9 = *(__int64 (__fastcall **)(__int64, __int128 *, struct Windows::Devices::Display::Core::IDisplayHdrMetadata **))(*(_QWORD *)qword_18034B648 + 56LL);
    v15 = *((_DWORD *)a3 + 6);
    v10 = v9(qword_18034B648, &v13, &v16);
    v5 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x127u, 0LL);
      goto LABEL_10;
    }
    v4 = v16;
    goto LABEL_9;
  }
  if ( v7 == 1 )
  {
LABEL_9:
    v16 = 0LL;
    *a4 = v4;
    goto LABEL_10;
  }
  v5 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2147024809, 0x12Eu, 0LL);
LABEL_10:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
  return v5;
}
