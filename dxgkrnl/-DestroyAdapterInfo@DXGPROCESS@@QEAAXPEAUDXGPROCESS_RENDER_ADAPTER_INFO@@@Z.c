/*
 * XREFs of ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z @ 0x1C0188A74
 * Callers:
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C01B3A74 (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C02BBA68 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     _tlgKeywordOn @ 0x1C000AA90 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U1@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$00@@U6@U6@U6@U6@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@33333333AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$00@@8888AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@Z @ 0x1C0014918 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U1@U1@U1@U1@U1@U1@U1@U1@U-$_tlgWrappe.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?ReleaseStablePowerReferenceWithoutLock@ADAPTER_RENDER@@QEAAXXZ @ 0x1C003F7EC (-ReleaseStablePowerReferenceWithoutLock@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ??1DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAA@XZ @ 0x1C0188E18 (--1DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAA@XZ.c)
 *     ?DdiDestroyProcess@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C01D71BC (-DdiDestroyProcess@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     ?CloseVidMmAdapter@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C01DA758 (-CloseVidMmAdapter@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?Deallocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAXXZ @ 0x1C01DC380 (-Deallocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESS::DestroyAdapterInfo(DXGPROCESS *this, struct ADAPTER_RENDER **a2)
{
  ADAPTER_RENDER *v4; // rdi
  __int64 v5; // r13
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  struct ADAPTER_RENDER *v9; // r14
  char *v10; // rdi
  __int64 v11; // rcx
  char **v12; // rax
  struct DXGPROCESS_RENDER_ADAPTER_INFO *v13; // rdi
  struct DXGPROCESS_RENDER_ADAPTER_INFO *v14; // r15
  void *v15; // r12
  __int64 v16; // r8
  __int64 v17; // r9
  char v18; // r10
  __int64 v19; // r11
  __int64 v20; // rcx
  __int128 v21; // xmm0
  struct ADAPTER_RENDER *v22; // rdx
  char v23; // [rsp+D0h] [rbp-80h] BYREF
  char v24; // [rsp+D1h] [rbp-7Fh] BYREF
  bool v25; // [rsp+D2h] [rbp-7Eh] BYREF
  bool v26; // [rsp+D3h] [rbp-7Dh] BYREF
  _BYTE v27[2]; // [rsp+D4h] [rbp-7Ch] BYREF
  __int16 v28; // [rsp+D6h] [rbp-7Ah] BYREF
  int v29; // [rsp+D8h] [rbp-78h] BYREF
  unsigned __int16 *v30; // [rsp+E0h] [rbp-70h] BYREF
  __int128 *v31; // [rsp+E8h] [rbp-68h] BYREF
  __int64 v32; // [rsp+F0h] [rbp-60h] BYREF
  void *v33; // [rsp+F8h] [rbp-58h] BYREF
  const CHAR *v34; // [rsp+100h] [rbp-50h] BYREF
  __int64 v35; // [rsp+108h] [rbp-48h] BYREF
  __int64 v36; // [rsp+110h] [rbp-40h] BYREF
  __int64 v37; // [rsp+118h] [rbp-38h] BYREF
  __int64 v38; // [rsp+120h] [rbp-30h] BYREF
  __int64 v39; // [rsp+128h] [rbp-28h] BYREF
  __int64 v40; // [rsp+130h] [rbp-20h] BYREF
  __int64 v41; // [rsp+138h] [rbp-18h] BYREF
  __int64 v42; // [rsp+140h] [rbp-10h] BYREF
  __int64 v43; // [rsp+148h] [rbp-8h] BYREF
  __int64 v44; // [rsp+150h] [rbp+0h] BYREF
  _QWORD v45[8]; // [rsp+160h] [rbp+10h] BYREF
  __int128 v46; // [rsp+1A0h] [rbp+50h] BYREF

  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 2528LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pAdapterInfo != nullptr", 2528LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_BYTE *)a2 + 109) )
  {
    DXGPROCESS_RENDER_ADAPTER_INFO::CloseVidMmAdapter((DXGPROCESS_RENDER_ADAPTER_INFO *)a2, this, a2[10]);
    v22 = a2[6];
    if ( v22 )
    {
      ADAPTER_RENDER::DdiDestroyProcess(a2[10], v22);
      a2[6] = 0LL;
    }
    DXGPROCESS_ADAPTER_INFO_PASID_DATA::Deallocate((DXGPROCESS_ADAPTER_INFO_PASID_DATA *)a2);
  }
  v4 = a2[10];
  v5 = *((_QWORD *)v4 + 2);
  memset(v45, 0, sizeof(v45));
  if ( !*(_BYTE *)(v5 + 209) )
  {
    v6 = *((_QWORD *)this + 8);
    v7 = *((_QWORD *)v4 + 92);
    if ( v6 )
    {
      v8 = *(_QWORD *)(v6 + 8LL * (unsigned int)(*(_DWORD *)v7 - 1) + 16);
      if ( v8 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD *))(*(_QWORD *)(v7 + 8) + 1056LL))(
          *((_QWORD *)v4 + 93),
          v8,
          v45);
        v4 = a2[10];
      }
    }
  }
  if ( *((_DWORD *)a2 + 15) )
    ADAPTER_RENDER::ReleaseStablePowerReferenceWithoutLock(v4);
  v9 = a2[10];
  v10 = (char *)(a2 + 11);
  if ( *((struct _KTHREAD **)v9 + 10) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 4446LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_OpenAdapterLock.IsExclusiveOwner()",
      4446LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v11 = *(_QWORD *)v10;
  if ( *(char **)(*(_QWORD *)v10 + 8LL) != v10 || (v12 = (char **)a2[12], *v12 != v10) )
    __fastfail(3u);
  *v12 = (char *)v11;
  *(_QWORD *)(v11 + 8) = v12;
  --*((_DWORD *)v9 + 78);
  *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * *(unsigned int *)(v5 + 240)) = 0LL;
  v13 = a2[17];
  while ( v13 != (struct DXGPROCESS_RENDER_ADAPTER_INFO *)(a2 + 17) )
  {
    v14 = v13;
    v13 = *(struct DXGPROCESS_RENDER_ADAPTER_INFO **)v13;
    if ( *((_QWORD *)v14 + 3) )
    {
      v15 = &unk_1C0093660;
      if ( (*((_DWORD *)this + 106) & 0x100) != 0 )
        v15 = (void *)*((_QWORD *)this + 80);
      if ( (unsigned int)dword_1C013A918 > 5 && tlgKeywordOn((__int64)&dword_1C013A918, 0x400000000010LL) )
      {
        v20 = *((_QWORD *)this + 8);
        v30 = *(unsigned __int16 **)(v5 + 1744);
        v31 = &v46;
        v21 = *(_OWORD *)((char *)this + 360);
        v33 = v15;
        v46 = v21;
        v23 = *(_BYTE *)(v20 + 138);
        v24 = *(_BYTE *)(v20 + 137);
        v25 = (v18 & 0x20) != 0;
        LOBYTE(v17) = v17 & 1;
        v32 = *(_QWORD *)(v5 + 404);
        v26 = (v18 & 0x10) != 0;
        v27[0] = v17;
        v34 = *(const CHAR **)(v20 + 96);
        v35 = *(_QWORD *)(v20 + 80);
        v29 = *((_DWORD *)v14 + 4);
        v36 = v45[7];
        v37 = v45[5];
        v38 = v45[4];
        v39 = v45[3];
        v40 = v45[1];
        v41 = v45[0];
        v42 = v45[2];
        v28 = 7;
        v43 = v19;
        v44 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapBuffer<_UNICODE_STRING>>(
          v20,
          (int)&unk_1C009FBDA,
          v16,
          v17,
          (__int64)&v44,
          (__int64)&v28,
          (__int64)&v43,
          (__int64)&v42,
          (__int64)&v41,
          (__int64)&v40,
          (__int64)&v39,
          (__int64)&v38,
          (__int64)&v37,
          (__int64)&v36,
          (__int64)&v29,
          (__int64)&v35,
          &v34,
          &v33,
          (__int64)&v32,
          (__int64)v27,
          (__int64)&v26,
          (__int64)&v25,
          (__int64)&v24,
          (__int64)&v23,
          (__int64 *)&v31,
          &v30);
      }
    }
    operator delete(v14);
  }
  DXGPROCESS_ADAPTER_INFO_PASID_DATA::~DXGPROCESS_ADAPTER_INFO_PASID_DATA((DXGPROCESS_ADAPTER_INFO_PASID_DATA *)a2);
  operator delete(a2);
}
