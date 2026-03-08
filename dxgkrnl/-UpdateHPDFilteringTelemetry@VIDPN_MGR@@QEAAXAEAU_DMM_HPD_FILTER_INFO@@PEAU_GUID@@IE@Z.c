/*
 * XREFs of ?UpdateHPDFilteringTelemetry@VIDPN_MGR@@QEAAXAEAU_DMM_HPD_FILTER_INFO@@PEAU_GUID@@IE@Z @ 0x1C0212DF0
 * Callers:
 *     ?DmmUpdateHPDFilteringTelemetry@@YAXPEAXAEAU_DMM_HPD_FILTER_INFO@@PEAU_GUID@@IE@Z @ 0x1C0212D68 (-DmmUpdateHPDFilteringTelemetry@@YAXPEAXAEAU_DMM_HPD_FILTER_INFO@@PEAU_GUID@@IE@Z.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0009534 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     _tlgKeywordOn @ 0x1C000AA90 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U3@U3@U3@U3@U3@U3@U3@U3@U2@U2@U2@U3@U3@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U2@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@5555555544455AEBU?$_tlgWrapperByRef@$0BA@@@44455@Z @ 0x1C00690F4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U3@U3@U3@U3@.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1C017CB3C (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 */

void __fastcall VIDPN_MGR::UpdateHPDFilteringTelemetry(
        VIDPN_MGR *this,
        struct _DMM_HPD_FILTER_INFO *a2,
        struct _GUID *a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  __int64 v6; // rsi
  __int64 v9; // r15
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v11; // r10
  char *v12; // rbx
  int v13; // eax
  char TargetLinkTrainingStatus; // al
  int v15; // r9d
  __int64 v16; // r9
  __int64 v17; // r10
  unsigned int v18; // ecx
  bool v19; // al
  __int64 v20; // rcx
  bool v21; // [rsp+D8h] [rbp-80h] BYREF
  bool v22; // [rsp+D9h] [rbp-7Fh] BYREF
  bool v23; // [rsp+DAh] [rbp-7Eh] BYREF
  char v24; // [rsp+DBh] [rbp-7Dh] BYREF
  unsigned __int8 v25; // [rsp+DCh] [rbp-7Ch] BYREF
  bool v26; // [rsp+DDh] [rbp-7Bh] BYREF
  char v27; // [rsp+DEh] [rbp-7Ah] BYREF
  char v28; // [rsp+DFh] [rbp-79h] BYREF
  bool v29; // [rsp+E0h] [rbp-78h] BYREF
  bool v30; // [rsp+E1h] [rbp-77h] BYREF
  bool v31; // [rsp+E2h] [rbp-76h] BYREF
  char v32; // [rsp+E3h] [rbp-75h] BYREF
  int v33; // [rsp+E4h] [rbp-74h] BYREF
  __int64 v34; // [rsp+E8h] [rbp-70h] BYREF
  __int64 v35; // [rsp+F0h] [rbp-68h] BYREF
  __int64 v36; // [rsp+F8h] [rbp-60h] BYREF
  struct _DMM_HPD_FILTER_INFO *v37; // [rsp+100h] [rbp-58h] BYREF
  __int64 v38; // [rsp+108h] [rbp-50h] BYREF
  __int64 v39; // [rsp+110h] [rbp-48h] BYREF
  __int64 v40; // [rsp+118h] [rbp-40h] BYREF
  __int64 v41; // [rsp+120h] [rbp-38h] BYREF
  bool v42; // [rsp+148h] [rbp-10h] BYREF

  v6 = a4;
  if ( !*((_QWORD *)this + 1) )
    WdLogSingleEntry0(1LL);
  v9 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(*((DMMVIDEOPRESENTTARGETSET **)this + 15), v6);
  v11 = (__int64)TargetById;
  if ( !TargetById )
  {
    WdLogSingleEntry1(2LL, v6);
    return;
  }
  v12 = (char *)TargetById + 568;
  v13 = *((_DWORD *)a2 + 10);
  if ( (v13 & 0xC0000) == 0 )
    goto LABEL_5;
  *(struct _GUID *)a2 = *a3;
  if ( (_BYTE)v13 == 8 )
    TargetLinkTrainingStatus = DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(v11, 0LL);
  else
    TargetLinkTrainingStatus = 0;
  *((_BYTE *)a2 + 41) = TargetLinkTrainingStatus;
  v15 = *((_DWORD *)a2 + 10);
  if ( (v15 & 0x10000) != 0 )
  {
LABEL_23:
    *(_OWORD *)v12 = *(_OWORD *)a2;
    *((_OWORD *)v12 + 1) = *((_OWORD *)a2 + 1);
    *((_OWORD *)v12 + 2) = *((_OWORD *)a2 + 2);
    return;
  }
  if ( (v15 & 0x20000) != 0 )
    goto LABEL_19;
  if ( (*((_DWORD *)v12 + 10) & 0x40000) != 0 )
  {
    if ( (__int64)(*((_QWORD *)a2 + 2) - *((_QWORD *)v12 + 2)) > 100000000 )
    {
      if ( (v15 & 0x40000) != 0 )
        goto LABEL_23;
LABEL_5:
      *(_OWORD *)v12 = 0LL;
      *((_OWORD *)v12 + 1) = 0LL;
      *((_OWORD *)v12 + 2) = 0LL;
      return;
    }
LABEL_19:
    if ( (unsigned int)dword_1C013A918 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C013A918, 0x400000000080LL) )
      {
        v18 = *((_DWORD *)v12 + 10);
        v37 = a2;
        v42 = (v16 & 0x80000) != 0;
        v21 = (v16 & 0x40000) != 0;
        v34 = *((_QWORD *)a2 + 4);
        v35 = *((_QWORD *)a2 + 3);
        v36 = *((_QWORD *)a2 + 2);
        v22 = (v18 & 0x80000) != 0;
        v23 = (v18 & 0x40000) != 0;
        v38 = *((_QWORD *)v12 + 4);
        v39 = *((_QWORD *)v12 + 3);
        v40 = *((_QWORD *)v12 + 2);
        v24 = BYTE2(v18) & 1;
        v25 = a5;
        v26 = (_BYTE)v16 == 10;
        v27 = v12[41];
        v28 = HIBYTE(v18) & 1;
        v29 = (v18 & 0x800000) != 0;
        v30 = (v18 & 0x400000) != 0;
        v19 = (v18 & 0x200000) != 0;
        v20 = v18 >> 20;
        v31 = v19;
        LOBYTE(v20) = v20 & 1;
        v41 = *(_QWORD *)(v9 + 404);
        v33 = *(_DWORD *)(v17 + 24);
        v32 = v20;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
          v20,
          byte_1C00A0C2B,
          (const GUID *)v12,
          v16,
          (__int64)&v33,
          (__int64)&v41,
          (__int64)&v32,
          (__int64)&v31,
          (__int64)&v30,
          (__int64)&v29,
          (__int64)&v28,
          (__int64)&v27,
          (__int64)&v26,
          (__int64)&v25,
          (__int64)&v24,
          (__int64)&v40,
          (__int64)&v39,
          (__int64)&v38,
          (__int64)&v23,
          (__int64)&v22,
          (__int64 *)&v37,
          (__int64)&v36,
          (__int64)&v35,
          (__int64)&v34,
          (__int64)&v21,
          (__int64)&v42);
      }
    }
    if ( (*((_DWORD *)a2 + 10) & 0x60000) == 0x40000 )
      goto LABEL_23;
    goto LABEL_5;
  }
  if ( (v15 & 0x40000) != 0 )
    goto LABEL_23;
}
