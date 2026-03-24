/*
 * XREFs of ?UpdateHPDFilteringTelemetry@VIDPN_MGR@@QEAAXAEAU_DMM_HPD_FILTER_INFO@@PEAU_GUID@@IE@Z @ 0x1C01787FC
 * Callers:
 *     ?DmmUpdateHPDFilteringTelemetry@@YAXPEAXAEAU_DMM_HPD_FILTER_INFO@@PEAU_GUID@@IE@Z @ 0x1C0178774 (-DmmUpdateHPDFilteringTelemetry@@YAXPEAXAEAU_DMM_HPD_FILTER_INFO@@PEAU_GUID@@IE@Z.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000951C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     _tlgKeywordOn @ 0x1C000C284 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U3@U3@U3@U3@U3@U3@U3@U3@U2@U2@U2@U3@U3@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U2@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@5555555544455AEBU?$_tlgWrapperByRef@$0BA@@@44455@Z @ 0x1C005CC24 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U3@U3@U3@U3@.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1C013E2E0 (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 */

void __fastcall VIDPN_MGR::UpdateHPDFilteringTelemetry(
        VIDPN_MGR *this,
        struct _DMM_HPD_FILTER_INFO *a2,
        struct _GUID *a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  __int64 v5; // rax
  __int64 v7; // rsi
  __int64 v10; // r15
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r11
  char *v15; // rbx
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  char TargetLinkTrainingStatus; // al
  int v20; // r9d
  int v21; // r10d
  __int64 v22; // r9
  __int64 v23; // r11
  unsigned int v24; // ecx
  bool v25; // al
  __int64 v26; // rcx
  bool v27; // [rsp+D8h] [rbp-80h] BYREF
  bool v28; // [rsp+D9h] [rbp-7Fh] BYREF
  bool v29; // [rsp+DAh] [rbp-7Eh] BYREF
  char v30; // [rsp+DBh] [rbp-7Dh] BYREF
  unsigned __int8 v31; // [rsp+DCh] [rbp-7Ch] BYREF
  bool v32; // [rsp+DDh] [rbp-7Bh] BYREF
  char v33; // [rsp+DEh] [rbp-7Ah] BYREF
  char v34; // [rsp+DFh] [rbp-79h] BYREF
  bool v35; // [rsp+E0h] [rbp-78h] BYREF
  bool v36; // [rsp+E1h] [rbp-77h] BYREF
  bool v37; // [rsp+E2h] [rbp-76h] BYREF
  char v38; // [rsp+E3h] [rbp-75h] BYREF
  int v39; // [rsp+E4h] [rbp-74h] BYREF
  __int64 v40; // [rsp+E8h] [rbp-70h] BYREF
  __int64 v41; // [rsp+F0h] [rbp-68h] BYREF
  __int64 v42; // [rsp+F8h] [rbp-60h] BYREF
  struct _DMM_HPD_FILTER_INFO *v43; // [rsp+100h] [rbp-58h] BYREF
  __int64 v44; // [rsp+108h] [rbp-50h] BYREF
  __int64 v45; // [rsp+110h] [rbp-48h] BYREF
  __int64 v46; // [rsp+118h] [rbp-40h] BYREF
  __int64 v47; // [rsp+120h] [rbp-38h] BYREF
  bool v48; // [rsp+148h] [rbp-10h] BYREF

  v5 = *((_QWORD *)this + 1);
  v7 = a4;
  if ( !v5 )
  {
    v17 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v17);
    v5 = *((_QWORD *)this + 1);
  }
  v10 = *(_QWORD *)(v5 + 16);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(*((DMMVIDEOPRESENTTARGETSET **)this + 10), (unsigned int)v7);
  v14 = (__int64)TargetById;
  if ( !TargetById )
  {
    v18 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v18 + 24) = v7;
    WdLogEvent5_WdError(v18);
    return;
  }
  v15 = (char *)TargetById + 568;
  v16 = *((_DWORD *)a2 + 10);
  if ( (v16 & 0xC0000) == 0 )
    goto LABEL_5;
  *(struct _GUID *)a2 = *a3;
  if ( (_BYTE)v16 == 8 )
    TargetLinkTrainingStatus = DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(v14, 0LL);
  else
    TargetLinkTrainingStatus = 0;
  *((_BYTE *)a2 + 41) = TargetLinkTrainingStatus;
  v20 = *((_DWORD *)a2 + 10);
  if ( (v20 & 0x10000) != 0 )
  {
LABEL_23:
    *(_OWORD *)v15 = *(_OWORD *)a2;
    *((_OWORD *)v15 + 1) = *((_OWORD *)a2 + 1);
    *((_OWORD *)v15 + 2) = *((_OWORD *)a2 + 2);
    return;
  }
  if ( (v20 & 0x20000) != 0 )
    goto LABEL_19;
  if ( (*((_DWORD *)v15 + 10) & 0x40000) != 0 )
  {
    if ( (__int64)(*((_QWORD *)a2 + 2) - *((_QWORD *)v15 + 2)) > 100000000 )
    {
      if ( (v20 & 0x40000) != 0 )
        goto LABEL_23;
LABEL_5:
      *(_OWORD *)v15 = 0LL;
      *((_OWORD *)v15 + 1) = 0LL;
      *((_OWORD *)v15 + 2) = 0LL;
      return;
    }
LABEL_19:
    v21 = *((_DWORD *)a2 + 10);
    if ( (unsigned int)dword_1C00B1A90 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C00B1A90, 0x400000000080LL) )
      {
        v24 = *((_DWORD *)v15 + 10);
        v43 = a2;
        v48 = (v22 & 0x80000) != 0;
        v27 = (v22 & 0x40000) != 0;
        v40 = *((_QWORD *)a2 + 4);
        v41 = *((_QWORD *)a2 + 3);
        v42 = *((_QWORD *)a2 + 2);
        v28 = (v24 & 0x80000) != 0;
        v29 = (v24 & 0x40000) != 0;
        v44 = *((_QWORD *)v15 + 4);
        v45 = *((_QWORD *)v15 + 3);
        v46 = *((_QWORD *)v15 + 2);
        v30 = BYTE2(v24) & 1;
        v31 = a5;
        v32 = (_BYTE)v22 == 10;
        v33 = v15[41];
        v34 = HIBYTE(v24) & 1;
        v35 = (v24 & 0x800000) != 0;
        v36 = (v24 & 0x400000) != 0;
        v25 = (v24 & 0x200000) != 0;
        v26 = v24 >> 20;
        v37 = v25;
        LOBYTE(v26) = v26 & 1;
        v47 = *(_QWORD *)(v10 + 316);
        v39 = *(_DWORD *)(v23 + 24);
        v38 = v26;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
          v26,
          byte_1C008112E,
          (const GUID *)v15,
          v22,
          (__int64)&v39,
          (__int64)&v47,
          (__int64)&v38,
          (__int64)&v37,
          (__int64)&v36,
          (__int64)&v35,
          (__int64)&v34,
          (__int64)&v33,
          (__int64)&v32,
          (__int64)&v31,
          (__int64)&v30,
          (__int64)&v46,
          (__int64)&v45,
          (__int64)&v44,
          (__int64)&v29,
          (__int64)&v28,
          (__int64 *)&v43,
          (__int64)&v42,
          (__int64)&v41,
          (__int64)&v40,
          (__int64)&v27,
          (__int64)&v48);
        v21 = *((_DWORD *)a2 + 10);
      }
    }
    if ( (v21 & 0x60000) == 0x40000 )
      goto LABEL_23;
    goto LABEL_5;
  }
  if ( (v20 & 0x40000) != 0 )
    goto LABEL_23;
}
