/*
 * XREFs of ?CreateSharedResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAIPEAPEAX@Z @ 0x1801CBD90
 * Callers:
 *     <none>
 * Callees:
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18004407C (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     ??1CChannelLock@CChannel@@QEAA@XZ @ 0x1800441FC (--1CChannelLock@CChannel@@QEAA@XZ.c)
 *     ?CreateNewHandleTableEntry@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@PEAUIUnknown@@@Z @ 0x180044220 (-CreateNewHandleTableEntry@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@PEAUIUnknown@@@Z.c)
 *     ?MilTypeFromDwmType@CChannel@@CAJW4Enum@DwmResourceType@@PEAW4MIL_RESOURCE_TYPE@@@Z @ 0x180044320 (-MilTypeFromDwmType@CChannel@@CAJW4Enum@DwmResourceType@@PEAW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetFreeHandle@CChannel@@AEAAIXZ @ 0x18004434C (-GetFreeHandle@CChannel@@AEAAIXZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180044440 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800CE01C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CPresentStats@CDummyRemotingSwapChain@@QEAA@XZ @ 0x1801B0AC0 (--1CPresentStats@CDummyRemotingSwapChain@@QEAA@XZ.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801CD528 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CChannel::CreateSharedResource(__int64 a1, unsigned int a2, _DWORD *a3, HANDLE *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  int v12; // eax
  unsigned int v13; // esi
  int v14; // eax
  unsigned int v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int FreeHandle; // eax
  int v19; // eax
  char *v21; // [rsp+20h] [rbp-50h]
  unsigned int v22; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v23; // [rsp+34h] [rbp-3Ch] BYREF
  __int64 v24; // [rsp+38h] [rbp-38h] BYREF
  HANDLE hObject; // [rsp+40h] [rbp-30h] BYREF
  int v26[2]; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int32 v27; // [rsp+50h] [rbp-20h] BYREF
  __int64 v28; // [rsp+54h] [rbp-1Ch]
  unsigned int v29; // [rsp+5Ch] [rbp-14h]
  _BYTE v30[16]; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v30, (struct CChannel *)a1);
  v8 = CChannel::MilTypeFromDwmType(a2, &v23);
  v9 = v8;
  if ( v8 >= 0 )
  {
    *(_QWORD *)v26 = 0LL;
    v10 = *(_QWORD *)(a1 + 64);
    if ( v10 )
    {
      v11 = v23;
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *, HANDLE *, int *))(*(_QWORD *)v10 + 32LL))(
              v10,
              v23,
              &v22,
              a4,
              v26);
      v13 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2FB,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
          (const char *)(unsigned int)v12);
LABEL_6:
        v9 = v13;
        goto LABEL_17;
      }
      goto LABEL_16;
    }
    hObject = 0LL;
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &hObject,
      0LL);
    v11 = v23;
    v14 = NtDCompositionCreateSharedResourceHandle(v23, &hObject);
    if ( v14 >= 0 )
    {
      v17 = *(unsigned int *)(a1 + 72);
      v24 = 0LL;
      v21 = (char *)&v24 + 4;
      v14 = NtDCompositionReferenceSharedResourceOnDwmChannel(v17, hObject, v11, &v24);
      if ( v14 >= 0 )
      {
        FreeHandle = CChannel::GetFreeHandle((CChannel *)a1);
        v27 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
        v28 = v24;
        v22 = FreeHandle;
        v29 = FreeHandle;
        v19 = CChannel::SendCommand((CChannel *)a1, &v27, 0x10u);
        v13 = v19;
        if ( v19 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x310,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
            (const char *)(unsigned int)v19);
          if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
            CloseHandle(hObject);
          goto LABEL_6;
        }
        *a4 = hObject;
LABEL_16:
        CChannel::CreateNewHandleTableEntry((CChannel *)a1, v22, v11, *(__int64 *)v26);
        v9 = 0;
        *a3 = v22;
        goto LABEL_17;
      }
      v16 = 777LL;
    }
    else
    {
      v16 = 768LL;
    }
    v9 = wil::details::in1diag3::Return_NtStatus(retaddr, (void *)v16, v15, (const char *)(unsigned int)v14, (int)v21);
    CDummyRemotingSwapChain::CPresentStats::~CPresentStats(&hObject);
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2F1,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
    (const char *)(unsigned int)v8);
LABEL_17:
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v30);
  return v9;
}
