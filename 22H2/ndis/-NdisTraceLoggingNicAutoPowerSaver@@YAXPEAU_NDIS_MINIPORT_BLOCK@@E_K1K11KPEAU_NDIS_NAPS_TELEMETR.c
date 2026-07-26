/*
 * XREFs of ?NdisTraceLoggingNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K1K11KPEAU_NDIS_NAPS_TELEMETRY_REASON_DATA@@KPEAU_NDIS_NAPS_TELEMETRY_OID_DATA@@@Z @ 0x1C008C2FC
 * Callers:
 *     ?ndisTraceNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00A869C (-ndisTraceNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0023554 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@_W@@U?$_tlgWrapperByVal@$00@@U2@U2@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U5@U5@U5@U2@U5@U5@U5@U2@U5@U5@U5@U2@U5@U5@U5@U2@U5@U5@U5@U2@U5@U5@U2@U5@U5@U2@U5@U5@U2@U5@U5@U2@U5@U5@U2@U5@U5@U2@U5@U5@U2@U5@U5@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@_W@@AEBU?$_tlgWrapperByVal@$00@@44AEBU?$_tlgWrapperByVal@$03@@444477747774777477747774774774774774774774774774@Z @ 0x1C008B2B8 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@_W@@U-$_tlgWrapperByV.c)
 *     ?ndisConvertInterruptTimeToLocalTime@@YAX_KPEAT_LARGE_INTEGER@@@Z @ 0x1C008CEA4 (-ndisConvertInterruptTimeToLocalTime@@YAX_KPEAT_LARGE_INTEGER@@@Z.c)
 */

void __fastcall NdisTraceLoggingNicAutoPowerSaver(
        struct _NDIS_MINIPORT_BLOCK *a1,
        char a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        bool a8,
        struct _NDIS_NAPS_TELEMETRY_REASON_DATA *a9,
        unsigned int a10,
        struct _NDIS_NAPS_TELEMETRY_OID_DATA *a11)
{
  struct _NDIS_MINIPORT_BLOCK *v14; // rbx
  unsigned __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  wchar_t *v18; // rcx
  wchar_t *PnPInstanceId; // rax
  int v20; // [rsp+1E8h] [rbp-80h] BYREF
  int v21; // [rsp+1ECh] [rbp-7Ch] BYREF
  int v22; // [rsp+1F0h] [rbp-78h] BYREF
  int v23; // [rsp+1F4h] [rbp-74h] BYREF
  int v24; // [rsp+1F8h] [rbp-70h] BYREF
  int v25; // [rsp+1FCh] [rbp-6Ch] BYREF
  int v26; // [rsp+200h] [rbp-68h] BYREF
  int v27; // [rsp+204h] [rbp-64h] BYREF
  int v28; // [rsp+208h] [rbp-60h] BYREF
  int v29; // [rsp+20Ch] [rbp-5Ch] BYREF
  int v30; // [rsp+210h] [rbp-58h] BYREF
  int v31; // [rsp+214h] [rbp-54h] BYREF
  int v32; // [rsp+218h] [rbp-50h] BYREF
  int v33; // [rsp+21Ch] [rbp-4Ch] BYREF
  int v34; // [rsp+220h] [rbp-48h] BYREF
  int v35; // [rsp+224h] [rbp-44h] BYREF
  int v36; // [rsp+228h] [rbp-40h] BYREF
  int v37; // [rsp+22Ch] [rbp-3Ch] BYREF
  int v38; // [rsp+230h] [rbp-38h] BYREF
  int v39; // [rsp+234h] [rbp-34h] BYREF
  int v40; // [rsp+238h] [rbp-30h] BYREF
  int v41; // [rsp+23Ch] [rbp-2Ch] BYREF
  int v42; // [rsp+240h] [rbp-28h] BYREF
  int v43; // [rsp+244h] [rbp-24h] BYREF
  int v44; // [rsp+248h] [rbp-20h] BYREF
  int v45; // [rsp+24Ch] [rbp-1Ch] BYREF
  int v46; // [rsp+250h] [rbp-18h] BYREF
  int v47; // [rsp+254h] [rbp-14h] BYREF
  int v48; // [rsp+258h] [rbp-10h] BYREF
  unsigned int v49; // [rsp+25Ch] [rbp-Ch] BYREF
  union _LARGE_INTEGER v50; // [rsp+260h] [rbp-8h] BYREF
  __int64 v51; // [rsp+268h] [rbp+0h] BYREF
  __int64 v52; // [rsp+270h] [rbp+8h] BYREF
  __int64 v53; // [rsp+278h] [rbp+10h] BYREF
  __int64 v54; // [rsp+280h] [rbp+18h] BYREF
  __int64 v55; // [rsp+288h] [rbp+20h] BYREF
  __int64 v56; // [rsp+290h] [rbp+28h] BYREF
  __int64 v57; // [rsp+298h] [rbp+30h] BYREF
  __int64 v58; // [rsp+2A0h] [rbp+38h] BYREF
  __int64 v59; // [rsp+2A8h] [rbp+40h] BYREF
  __int64 v60; // [rsp+2B0h] [rbp+48h] BYREF
  __int64 v61; // [rsp+2B8h] [rbp+50h] BYREF
  __int64 v62; // [rsp+2C0h] [rbp+58h] BYREF
  __int64 v63; // [rsp+2C8h] [rbp+60h] BYREF
  unsigned __int64 v64; // [rsp+2D0h] [rbp+68h] BYREF
  unsigned __int64 v65; // [rsp+2D8h] [rbp+70h] BYREF
  unsigned __int64 v66; // [rsp+2E0h] [rbp+78h] BYREF
  __int64 v67; // [rsp+2E8h] [rbp+80h] BYREF
  unsigned __int64 v68; // [rsp+2F0h] [rbp+88h] BYREF
  __int64 v69; // [rsp+2F8h] [rbp+90h] BYREF
  wchar_t *v70; // [rsp+300h] [rbp+98h] BYREF
  __int64 v71; // [rsp+308h] [rbp+A0h] BYREF
  _GUID *p_InterfaceGuid; // [rsp+310h] [rbp+A8h] BYREF
  int v73; // [rsp+338h] [rbp+D0h] BYREF

  v14 = a1;
  if ( (a1->PMHardwareCapabilities.Flags & 4) != 0 && a1->SelectiveSuspend && a3 >= 0x927C0 )
  {
    if ( a2 )
    {
      v15 = 0LL;
    }
    else
    {
      a1 = (struct _NDIS_MINIPORT_BLOCK *)a1->AoAc;
      v15 = (unsigned __int64)a1->WorkQueue[3].Next / 0x2710;
    }
    v50.QuadPart = 0LL;
    if ( !a2 )
      ndisConvertInterruptTimeToLocalTime((unsigned __int64)a1, &v50);
    if ( (unsigned int)dword_1C00E4108 > 5 && tlgKeywordOn((__int64)&dword_1C00E4108, 0x400000000000LL) )
    {
      v51 = *((unsigned __int16 *)a11 + 43);
      a10 = *((unsigned __int16 *)a11 + 42);
      v73 = *((_DWORD *)a11 + 23);
      v52 = *((unsigned __int16 *)a11 + 37);
      v20 = *((unsigned __int16 *)a11 + 36);
      v21 = *((_DWORD *)a11 + 20);
      v53 = *((unsigned __int16 *)a11 + 31);
      v22 = *((unsigned __int16 *)a11 + 30);
      v23 = *((_DWORD *)a11 + 17);
      v54 = *((unsigned __int16 *)a11 + 25);
      v24 = *((unsigned __int16 *)a11 + 24);
      v25 = *((_DWORD *)a11 + 14);
      v55 = *((unsigned __int16 *)a11 + 19);
      v26 = *((unsigned __int16 *)a11 + 18);
      v27 = *((_DWORD *)a11 + 11);
      v56 = *((unsigned __int16 *)a11 + 13);
      v28 = *((unsigned __int16 *)a11 + 12);
      v29 = *((_DWORD *)a11 + 8);
      v57 = *((unsigned __int16 *)a11 + 7);
      v30 = *((unsigned __int16 *)a11 + 6);
      v31 = *((_DWORD *)a11 + 5);
      v58 = *((unsigned __int16 *)a11 + 1);
      v32 = *(unsigned __int16 *)a11;
      v33 = *((_DWORD *)a11 + 2);
      v59 = *((_QWORD *)a9 + 9);
      v34 = *((unsigned __int16 *)a9 + 33);
      v35 = *((unsigned __int16 *)a9 + 32);
      v36 = *((_DWORD *)a9 + 17);
      v60 = *((_QWORD *)a9 + 7);
      v37 = *((unsigned __int16 *)a9 + 25);
      v38 = *((unsigned __int16 *)a9 + 24);
      v39 = *((_DWORD *)a9 + 13);
      v61 = *((_QWORD *)a9 + 5);
      v40 = *((unsigned __int16 *)a9 + 17);
      v41 = *((unsigned __int16 *)a9 + 16);
      v42 = *((_DWORD *)a9 + 9);
      v62 = *((_QWORD *)a9 + 3);
      v43 = *((unsigned __int16 *)a9 + 9);
      v44 = *((unsigned __int16 *)a9 + 8);
      v45 = *((_DWORD *)a9 + 5);
      v63 = *((_QWORD *)a9 + 1);
      a8 = a2 == 0;
      v46 = *((unsigned __int16 *)a9 + 1);
      v47 = *(unsigned __int16 *)a9;
      v18 = (wchar_t *)&unk_1C00CA700;
      v48 = *((_DWORD *)a9 + 1);
      v65 = a7;
      v66 = a6;
      v49 = a5;
      PnPInstanceId = v14->PnPInstanceId;
      v64 = v15;
      v67 = a4;
      if ( PnPInstanceId )
        v18 = PnPInstanceId;
      v68 = a3;
      v71 = *((unsigned __int16 *)&v14->NetLuid.Info + 3);
      p_InterfaceGuid = &v14->InterfaceGuid;
      v69 = v17;
      v70 = v18;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (__int64)v18,
        byte_1C00CF517,
        v16,
        v17,
        (__int64 *)&p_InterfaceGuid,
        (__int64)&v71,
        (void **)&v70,
        (__int64)&a8,
        (__int64)&v69,
        (__int64)&v68,
        (__int64)&v49,
        (__int64)&v67,
        (__int64)&v66,
        (__int64)&v65,
        (__int64)&v64,
        (__int64)&v48,
        (__int64)&v47,
        (__int64)&v46,
        (__int64)&v63,
        (__int64)&v45,
        (__int64)&v44,
        (__int64)&v43,
        (__int64)&v62,
        (__int64)&v42,
        (__int64)&v41,
        (__int64)&v40,
        (__int64)&v61,
        (__int64)&v39,
        (__int64)&v38,
        (__int64)&v37,
        (__int64)&v60,
        (__int64)&v36,
        (__int64)&v35,
        (__int64)&v34,
        (__int64)&v59,
        (__int64)&v33,
        (__int64)&v32,
        (__int64)&v58,
        (__int64)&v31,
        (__int64)&v30,
        (__int64)&v57,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v56,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v55,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v54,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v53,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v52,
        (__int64)&v73,
        (__int64)&a10,
        (__int64)&v51);
    }
  }
}
