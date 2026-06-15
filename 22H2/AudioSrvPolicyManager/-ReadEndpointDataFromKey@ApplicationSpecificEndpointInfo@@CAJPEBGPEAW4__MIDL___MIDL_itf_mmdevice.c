/*
 * XREFs of ?ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x1800322B0
 * Callers:
 *     ?LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ @ 0x180031784 (-LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003AB0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18000D02C (-Fork@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x180017BB0 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ?DoesStringRepresentAPositiveNumber@ApplicationSpecificEndpointInfo@@CA_NPEBG@Z @ 0x1800324C8 (-DoesStringRepresentAPositiveNumber@ApplicationSpecificEndpointInfo@@CA_NPEBG@Z.c)
 *     ?Left@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@H@Z @ 0x180032EA0 (-Left@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@H@Z.c)
 *     ?Delete@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHHH@Z @ 0x180032FAC (-Delete@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHHH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ApplicationSpecificEndpointInfo::ReadEndpointDataFromKey(
        const unsigned __int16 *a1,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 *a2,
        enum __MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001 *a3)
{
  wchar_t *v5; // rax
  __int64 v6; // rdi
  unsigned __int16 *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  wchar_t *v17; // rcx
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v18; // edi
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // edi
  wchar_t *v22; // rdx
  unsigned __int16 *v24[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  wchar_t *Str; // [rsp+68h] [rbp+38h] BYREF

  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    (void **)&Str,
    (__int64)a1);
  if ( *((int *)Str - 4) < 0 || (v5 = wcsstr(Str, L"_")) == 0LL || (v6 = v5 - Str, (_DWORD)v6 == -1) )
  {
    v21 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29C,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)0x80070057LL);
    goto LABEL_25;
  }
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Left(
    &Str,
    v24,
    (unsigned int)v6);
  v7 = v24[0];
  if ( !ApplicationSpecificEndpointInfo::DoesStringRepresentAPositiveNumber(v24[0]) )
  {
    v10 = 674LL;
LABEL_20:
    v21 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)0x80070057LL);
    goto LABEL_22;
  }
  *(_DWORD *)_o__errno(v9, v8) = 0;
  if ( *((int *)v7 - 2) > 1 )
  {
    ATL::CSimpleStringT<unsigned short,0>::Fork((__int64 *)v24, *((_DWORD *)v7 - 4));
    v7 = v24[0];
  }
  v11 = _o__wtoi(v7);
  if ( *(_DWORD *)_o__errno(v13, v12) )
  {
    v10 = 681LL;
    goto LABEL_20;
  }
  if ( v11 > 8 )
  {
    v10 = 684LL;
    goto LABEL_20;
  }
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Delete(
    &Str,
    v14,
    (unsigned int)(v6 + 1));
  if ( !ApplicationSpecificEndpointInfo::DoesStringRepresentAPositiveNumber(Str) )
  {
    v10 = 693LL;
    goto LABEL_20;
  }
  *(_DWORD *)_o__errno(v16, v15) = 0;
  v17 = Str;
  if ( *((int *)Str - 2) > 1 )
  {
    ATL::CSimpleStringT<unsigned short,0>::Fork((__int64 *)&Str, *((_DWORD *)Str - 4));
    v17 = Str;
  }
  v18 = (unsigned int)_o__wtoi(v17);
  if ( *(_DWORD *)_o__errno(v20, v19) )
  {
    v10 = 699LL;
    goto LABEL_20;
  }
  if ( (unsigned int)v18 > eCapture )
  {
    v10 = 702LL;
    goto LABEL_20;
  }
  *a2 = v18;
  *(_DWORD *)a3 = v11;
  v21 = 0;
LABEL_22:
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v7 - 3) + 8LL))(*((_QWORD *)v7 - 3));
LABEL_25:
  v22 = Str - 12;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Str - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v22 + 8LL))(*(_QWORD *)v22);
  return v21;
}
