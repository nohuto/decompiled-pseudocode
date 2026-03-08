/*
 * XREFs of ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAPEAX@Z @ 0x1C00B1118
 * Callers:
 *     ?_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z @ 0x1C00B0ECC (-_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z.c)
 *     ?RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1C0252A34 (-RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND.c)
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C00191C0 (UserIsCurrentProcessDwm.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C0065460 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C007D0EC (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00A7D70 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x1C00AD178 (-Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEA.c)
 *     ?ValidateInputSink@CompositionInputObject@@SAJAEBUCOMPOSITION_INPUT_SINK_V2@@@Z @ 0x1C00B1394 (-ValidateInputSink@CompositionInputObject@@SAJAEBUCOMPOSITION_INPUT_SINK_V2@@@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U1@U2@U2@U1@U1@U?$_tlgWrapperByRef@$0BA@@@U3@U1@U2@U2@U1@U1@U4@U3@U1@U2@U2@U1@U1@U4@U3@U1@U2@U2@U1@U1@U4@U3@U1@U2@U2@U1@U1@U4@U?$_tlgWrapSz@G@@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@34433AEBU?$_tlgWrapperByRef@$0BA@@@5344336534433653443365344336AEBU?$_tlgWrapSz@G@@7@Z @ 0x1C0270330 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U1@U2@U2@U1@U1@U-.c)
 *     ?CompositionInputQueueTypeToString@InputTraceLogging@@CAPEBDW4CompositionInputQueueType@@@Z @ 0x1C0270838 (-CompositionInputQueueTypeToString@InputTraceLogging@@CAPEBDW4CompositionInputQueueType@@@Z.c)
 */

__int64 __fastcall CompositionInputObject::KernelCreateCompositionInputSink(
        const struct COMPOSITION_INPUT_SINK_V2 *a1,
        void **a2)
{
  _OWORD *v2; // r8
  __int64 v3; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int64 v13; // rax
  __int128 v14; // xmm1
  int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // ecx
  ACCESS_MASK v21; // ebx
  int v22; // eax
  char *v23; // rsi
  __int64 v24; // r9
  _OWORD *v25; // rcx
  __int64 v26; // rdx
  _OWORD *v27; // rax
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int64 v37; // rax
  HANDLE v38; // rbx
  __int64 v39; // r8
  PVOID v41; // r14
  const wchar_t *v42; // rax
  const wchar_t *v43; // rax
  PVOID Object; // [rsp+160h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+168h] [rbp-78h] BYREF
  int v46; // [rsp+170h] [rbp-70h] BYREF
  int v47; // [rsp+174h] [rbp-6Ch] BYREF
  int v48; // [rsp+178h] [rbp-68h] BYREF
  int v49; // [rsp+17Ch] [rbp-64h] BYREF
  int v50; // [rsp+180h] [rbp-60h] BYREF
  int v51; // [rsp+184h] [rbp-5Ch] BYREF
  int v52; // [rsp+188h] [rbp-58h] BYREF
  int v53; // [rsp+18Ch] [rbp-54h] BYREF
  int v54; // [rsp+190h] [rbp-50h] BYREF
  _DWORD v55[3]; // [rsp+194h] [rbp-4Ch] BYREF
  __int64 v56; // [rsp+1A0h] [rbp-40h] BYREF
  __int64 v57; // [rsp+1A8h] [rbp-38h] BYREF
  __int64 v58; // [rsp+1B0h] [rbp-30h] BYREF
  __int64 v59; // [rsp+1B8h] [rbp-28h] BYREF
  __int64 v60; // [rsp+1C0h] [rbp-20h] BYREF
  __int64 v61; // [rsp+1C8h] [rbp-18h] BYREF
  __int64 v62; // [rsp+1D0h] [rbp-10h] BYREF
  __int64 v63; // [rsp+1D8h] [rbp-8h] BYREF
  __int64 v64; // [rsp+1E0h] [rbp+0h] BYREF
  __int64 v65; // [rsp+1E8h] [rbp+8h] BYREF
  __int64 v66; // [rsp+1F0h] [rbp+10h] BYREF
  __int64 v67; // [rsp+1F8h] [rbp+18h] BYREF
  __int64 v68; // [rsp+200h] [rbp+20h] BYREF
  __int64 v69; // [rsp+208h] [rbp+28h] BYREF
  __int64 v70; // [rsp+210h] [rbp+30h] BYREF
  __int64 v71; // [rsp+218h] [rbp+38h] BYREF
  __int64 v72; // [rsp+220h] [rbp+40h] BYREF
  __int64 v73; // [rsp+228h] [rbp+48h] BYREF
  __int64 v74; // [rsp+230h] [rbp+50h] BYREF
  __int64 v75; // [rsp+238h] [rbp+58h] BYREF
  __int64 v76; // [rsp+240h] [rbp+60h] BYREF
  __int64 v77; // [rsp+248h] [rbp+68h] BYREF
  __int64 v78; // [rsp+250h] [rbp+70h] BYREF
  __int64 v79; // [rsp+258h] [rbp+78h] BYREF
  __int64 v80; // [rsp+260h] [rbp+80h] BYREF
  __int64 v81; // [rsp+268h] [rbp+88h] BYREF
  __int64 v82; // [rsp+270h] [rbp+90h] BYREF
  __int64 v83; // [rsp+278h] [rbp+98h] BYREF
  _DWORD v84[2]; // [rsp+280h] [rbp+A0h] BYREF
  __int64 v85; // [rsp+288h] [rbp+A8h]
  __int64 v86; // [rsp+290h] [rbp+B0h]
  int v87; // [rsp+298h] [rbp+B8h]
  int v88; // [rsp+29Ch] [rbp+BCh]
  PVOID v89; // [rsp+2A0h] [rbp+C0h]
  __int64 v90; // [rsp+2A8h] [rbp+C8h]
  _BYTE v91[304]; // [rsp+2B0h] [rbp+D0h] BYREF
  _BYTE v92[4]; // [rsp+3E0h] [rbp+200h] BYREF
  int v93; // [rsp+3E4h] [rbp+204h]
  unsigned int v94; // [rsp+3E8h] [rbp+208h]
  __int64 v95; // [rsp+3F0h] [rbp+210h]
  int v96; // [rsp+3F8h] [rbp+218h]
  int v97; // [rsp+3FCh] [rbp+21Ch]
  __int64 v98; // [rsp+400h] [rbp+220h]
  __int64 v99; // [rsp+408h] [rbp+228h]
  char v100; // [rsp+410h] [rbp+230h] BYREF
  unsigned int v101; // [rsp+420h] [rbp+240h]
  __int64 v102; // [rsp+428h] [rbp+248h]
  int v103; // [rsp+430h] [rbp+250h]
  int v104; // [rsp+434h] [rbp+254h]
  __int64 v105; // [rsp+438h] [rbp+258h]
  __int64 v106; // [rsp+440h] [rbp+260h]
  char v107; // [rsp+448h] [rbp+268h] BYREF
  unsigned int v108; // [rsp+458h] [rbp+278h]
  __int64 v109; // [rsp+460h] [rbp+280h]
  int v110; // [rsp+468h] [rbp+288h]
  int v111; // [rsp+46Ch] [rbp+28Ch]
  __int64 v112; // [rsp+470h] [rbp+290h]
  __int64 v113; // [rsp+478h] [rbp+298h]
  char v114; // [rsp+480h] [rbp+2A0h] BYREF
  unsigned int v115; // [rsp+490h] [rbp+2B0h]
  __int64 v116; // [rsp+498h] [rbp+2B8h]
  int v117; // [rsp+4A0h] [rbp+2C0h]
  int v118; // [rsp+4A4h] [rbp+2C4h]
  __int64 v119; // [rsp+4A8h] [rbp+2C8h]
  __int64 v120; // [rsp+4B0h] [rbp+2D0h]
  char v121; // [rsp+4B8h] [rbp+2D8h] BYREF
  unsigned int v122; // [rsp+4C8h] [rbp+2E8h]
  __int64 v123; // [rsp+4D0h] [rbp+2F0h]
  int v124; // [rsp+4D8h] [rbp+2F8h]
  int v125; // [rsp+4DCh] [rbp+2FCh]
  __int64 v126; // [rsp+4E0h] [rbp+300h]
  __int64 v127; // [rsp+4E8h] [rbp+308h]
  char v128; // [rsp+4F0h] [rbp+310h] BYREF
  char v129; // [rsp+500h] [rbp+320h]

  Handle = (HANDLE)-1LL;
  v2 = v92;
  v3 = 2LL;
  do
  {
    v5 = *((_OWORD *)a1 + 1);
    *v2 = *(_OWORD *)a1;
    v6 = *((_OWORD *)a1 + 2);
    v2[1] = v5;
    v7 = *((_OWORD *)a1 + 3);
    v2[2] = v6;
    v8 = *((_OWORD *)a1 + 4);
    v2[3] = v7;
    v9 = *((_OWORD *)a1 + 5);
    v2[4] = v8;
    v10 = *((_OWORD *)a1 + 6);
    v2[5] = v9;
    v11 = *((_OWORD *)a1 + 7);
    a1 = (const struct COMPOSITION_INPUT_SINK_V2 *)((char *)a1 + 128);
    v2[6] = v10;
    v2 += 8;
    *(v2 - 1) = v11;
    --v3;
  }
  while ( v3 );
  v12 = *(_OWORD *)a1;
  v13 = *((_QWORD *)a1 + 4);
  v14 = *((_OWORD *)a1 + 1);
  Object = 0LL;
  *v2 = v12;
  v2[1] = v14;
  *((_QWORD *)v2 + 4) = v13;
  v15 = CompositionInputObject::ValidateInputSink((const struct COMPOSITION_INPUT_SINK_V2 *)v92);
  if ( UserIsCurrentProcessDwm(v17, v16, v18, v19) )
  {
    v20 = 0;
    v21 = 3;
  }
  else
  {
    v20 = -1073741824;
    v21 = -1073741824;
  }
  if ( v15 < 0 )
  {
    v38 = Handle;
LABEL_27:
    if ( v38 != (HANDLE)-1LL )
      NtClose(v38);
    return (unsigned int)v15;
  }
  v22 = UserAllocDefaultCompositionSecurityDescriptor(v20, (__int64 *)&Object);
  v23 = (char *)Object;
  v15 = v22;
  if ( v22 >= 0 )
  {
    v84[1] = 0;
    v88 = 0;
    v85 = 0LL;
    v87 = 0;
    v86 = 0LL;
    v90 = 0LL;
    v84[0] = 48;
    v89 = Object;
    KeEnterCriticalRegion();
    v25 = v91;
    v26 = 2LL;
    v27 = v92;
    do
    {
      v28 = v27[1];
      *v25 = *v27;
      v29 = v27[2];
      v25[1] = v28;
      v30 = v27[3];
      v25[2] = v29;
      v31 = v27[4];
      v25[3] = v30;
      v32 = v27[5];
      v25[4] = v31;
      v33 = v27[6];
      v25[5] = v32;
      v34 = v27[7];
      v27 += 8;
      v25[6] = v33;
      v25 += 8;
      *(v25 - 1) = v34;
      --v26;
    }
    while ( v26 );
    v35 = *v27;
    LOBYTE(v24) = 1;
    v36 = v27[1];
    v37 = *((_QWORD *)v27 + 4);
    *v25 = v35;
    v25[1] = v36;
    *((_QWORD *)v25 + 4) = v37;
    v15 = CompositionObject::Create(
            (__int64)v25,
            (__int64)v84,
            v21,
            v24,
            2,
            192,
            (__int64 (__fastcall *)(PVOID, __int64, char *))CompositionInputObject::ObjectInit,
            (__int64)v91,
            &Handle);
    KeLeaveCriticalRegion();
    if ( v15 >= 0 )
    {
      v38 = Handle;
      *a2 = Handle;
      if ( !InputTraceLogging::Enabled(0) )
        goto LABEL_11;
      Object = 0LL;
      LOBYTE(v39) = 1;
      if ( (int)CompositionInputObject::ResolveHandle(v38, 1LL, v39, (struct CompositionInputObject **)&Object) >= 0 )
      {
        v41 = Object;
        if ( (unsigned int)dword_1C02CA7E0 > 5 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 4LL) )
        {
          v42 = L"FallbackInteraction";
          if ( (v129 & 2) == 0 )
            v42 = &word_1C02856D8;
          *(_QWORD *)&v55[1] = v42;
          v43 = L"Implicit";
          if ( (v129 & 1) == 0 )
            v43 = &word_1C02856D8;
          v56 = (__int64)v43;
          v57 = (__int64)&v128;
          v58 = v127;
          v59 = v126;
          v50 = v125;
          v46 = v124;
          v60 = v123;
          v61 = InputTraceLogging::CompositionInputQueueTypeToString(v122);
          v62 = (__int64)&v121;
          v63 = v120;
          v64 = v119;
          v47 = v118;
          v48 = v117;
          v65 = v116;
          v66 = InputTraceLogging::CompositionInputQueueTypeToString(v115);
          v67 = (__int64)&v114;
          v68 = v113;
          v69 = v112;
          v49 = v111;
          v55[0] = v110;
          v70 = v109;
          v71 = InputTraceLogging::CompositionInputQueueTypeToString(v108);
          v72 = (__int64)&v107;
          v73 = v106;
          v74 = v105;
          v51 = v104;
          v52 = v103;
          v75 = v102;
          v76 = InputTraceLogging::CompositionInputQueueTypeToString(v101);
          v77 = (__int64)&v100;
          v78 = v99;
          v79 = v98;
          v53 = v97;
          v54 = v96;
          v80 = v95;
          v81 = InputTraceLogging::CompositionInputQueueTypeToString(v94);
          LODWORD(Object) = v93;
          v82 = (__int64)v38;
          v83 = (__int64)v41;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
            (int)&dword_1C02CA7E0,
            (int)&dword_1C029EA44,
            (__int64)&v83,
            (__int64)&v82,
            (__int64)&Object,
            (__int64)&v81,
            (__int64)&v80,
            (__int64)&v54,
            (__int64)&v53,
            (__int64)&v79,
            (__int64)&v78,
            (__int64)&v77,
            (__int64)&v76,
            (__int64)&v75,
            (__int64)&v52,
            (__int64)&v51,
            (__int64)&v74,
            (__int64)&v73,
            (__int64)&v72,
            (__int64)&v71,
            (__int64)&v70,
            (__int64)v55,
            (__int64)&v49,
            (__int64)&v69,
            (__int64)&v68,
            (__int64)&v67,
            (__int64)&v66,
            (__int64)&v65,
            (__int64)&v48,
            (__int64)&v47,
            (__int64)&v64,
            (__int64)&v63,
            (__int64)&v62,
            (__int64)&v61,
            (__int64)&v60,
            (__int64)&v46,
            (__int64)&v50,
            (__int64)&v59,
            (__int64)&v58,
            (__int64)&v57,
            (__int64)&v56,
            (__int64)&v55[1]);
        }
        ObfDereferenceObject(v41);
      }
    }
  }
  v38 = Handle;
LABEL_11:
  if ( v23 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v23);
    v38 = Handle;
  }
  if ( v15 < 0 )
    goto LABEL_27;
  return (unsigned int)v15;
}
