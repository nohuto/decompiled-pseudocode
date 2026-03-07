void __fastcall MousePerfSummary::CollectMousePerfTelemetry(MousePerfSummary *this, const struct _MousePerf *a2)
{
  unsigned __int64 *v3; // r10
  MousePerfSummary *v4; // rcx
  unsigned __int64 *v6; // r13
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdx
  __int64 *v9; // r12
  unsigned __int64 *v10; // r15
  unsigned __int64 *v11; // r10
  MousePerfSummary *v12; // rcx
  unsigned __int64 *v13; // r14
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  MousePerfSummary *v16; // rcx
  int v17; // ecx
  unsigned __int64 *v18; // r9
  __int64 *v19; // r10
  _QWORD *v20; // r11
  __int64 *v21; // rdx
  unsigned __int64 *v22; // r8
  int v23; // eax
  _QWORD *v24; // rax
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rdx
  unsigned __int64 *v27; // r10
  MousePerfSummary *v28; // rcx
  unsigned __int64 *v29; // r10
  MousePerfSummary *v30; // rcx
  unsigned __int64 v31; // r8
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rax
  MousePerfSummary *v34; // rcx
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rax
  unsigned __int64 *v38; // r11
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // r8
  MousePerfSummary *v41; // rcx
  unsigned __int64 v42; // r9
  unsigned __int64 *v43; // r11
  unsigned __int64 v44; // r8
  unsigned __int64 v45; // rax
  _QWORD *v46; // rdi
  __int64 v47; // rcx
  char *v48; // rdx
  int v49; // ecx
  unsigned __int64 v50; // r8
  __int64 v51; // r9
  __int64 *v52; // r10
  unsigned __int64 *v53; // r11
  unsigned __int64 v54; // [rsp+A0h] [rbp-80h] BYREF
  __int64 v55; // [rsp+A8h] [rbp-78h] BYREF
  __int64 v56; // [rsp+B0h] [rbp-70h] BYREF
  unsigned __int64 v57; // [rsp+B8h] [rbp-68h] BYREF
  unsigned __int64 v58; // [rsp+C0h] [rbp-60h] BYREF
  unsigned __int64 v59; // [rsp+C8h] [rbp-58h] BYREF
  unsigned __int64 v60; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v61; // [rsp+D8h] [rbp-48h] BYREF
  unsigned __int64 v62; // [rsp+E0h] [rbp-40h] BYREF
  __int64 v63; // [rsp+E8h] [rbp-38h] BYREF
  __int64 v64; // [rsp+F0h] [rbp-30h] BYREF
  __int64 v65; // [rsp+F8h] [rbp-28h] BYREF
  __int64 v66; // [rsp+100h] [rbp-20h] BYREF
  __int64 v67; // [rsp+108h] [rbp-18h] BYREF
  __int64 v68[10]; // [rsp+110h] [rbp-10h] BYREF
  __int64 v69; // [rsp+170h] [rbp+50h] BYREF
  _QWORD *v70; // [rsp+178h] [rbp+58h]
  _QWORD *v71; // [rsp+180h] [rbp+60h]
  _QWORD *v72; // [rsp+188h] [rbp+68h]

  v3 = (unsigned __int64 *)((char *)a2 + 8);
  v4 = (MousePerfSummary *)*((unsigned int *)a2 + 18);
  *((_DWORD *)this + 122) = (_DWORD)v4;
  if ( (_DWORD)v4 == 1 )
  {
    v25 = *((_QWORD *)a2 + 2);
    v26 = *(_QWORD *)a2;
    if ( !v25 )
      v25 = *v3;
    v9 = (__int64 *)((char *)this + 400);
    *((_QWORD *)this + 50) = MousePerfSummary::CalculateLatencyInMicroseconds(v4, v26, v25);
    v6 = (unsigned __int64 *)((char *)this + 456);
    *((_QWORD *)this + 57) = MousePerfSummary::CalculateLatencyInMicroseconds(v28, *((_QWORD *)a2 + 2), *v27);
    v10 = (unsigned __int64 *)((char *)this + 408);
    *((_QWORD *)this + 51) = MousePerfSummary::CalculateLatencyInMicroseconds(v30, *v29, *((_QWORD *)a2 + 3));
    v31 = *((_QWORD *)a2 + 4);
    v32 = *((_QWORD *)a2 + 3);
    v70 = (_QWORD *)((char *)this + 464);
    v33 = MousePerfSummary::CalculateLatencyInMicroseconds((MousePerfSummary *)((char *)this + 464), v32, v31);
    *(_QWORD *)v34 = v33;
    v35 = *((_QWORD *)a2 + 7);
    v36 = *((_QWORD *)a2 + 4);
    v71 = (_QWORD *)((char *)this + 472);
    v37 = MousePerfSummary::CalculateLatencyInMicroseconds(v34, v36, v35);
    *v38 = v37;
    v13 = (unsigned __int64 *)((char *)this + 416);
    v39 = *((_QWORD *)a2 + 7);
    v40 = *((_QWORD *)a2 + 8);
    v72 = (_QWORD *)((char *)a2 + 64);
    *((_QWORD *)this + 52) = MousePerfSummary::CalculateLatencyInMicroseconds(v41, v39, v40);
    MousePerfStage::UpdatePerfData(this, v42);
    MousePerfStage::UpdatePerfData((MousePerfSummary *)((char *)this + 40), *((_QWORD *)this + 57));
    MousePerfStage::UpdatePerfData((MousePerfSummary *)((char *)this + 80), *((_QWORD *)this + 51));
    MousePerfStage::UpdatePerfData((MousePerfSummary *)((char *)this + 120), *((_QWORD *)this + 58));
    MousePerfStage::UpdatePerfData((MousePerfSummary *)((char *)this + 160), *v43);
    MousePerfStage::UpdatePerfData((MousePerfSummary *)((char *)this + 200), *((_QWORD *)this + 52));
    v18 = (unsigned __int64 *)((char *)this + 464);
    goto LABEL_3;
  }
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  v6 = (unsigned __int64 *)((char *)this + 456);
  *((_QWORD *)this + 57) = 0LL;
  v7 = *v3;
  v8 = *(_QWORD *)a2;
  v70 = (_QWORD *)((char *)this + 464);
  v71 = (_QWORD *)((char *)this + 472);
  v9 = (__int64 *)((char *)this + 400);
  v54 = MousePerfSummary::CalculateLatencyInMicroseconds(v4, v8, v7);
  *((_QWORD *)this + 50) = v54;
  v10 = (unsigned __int64 *)((char *)this + 408);
  *((_QWORD *)this + 51) = MousePerfSummary::CalculateLatencyInMicroseconds(v12, *v11, *((_QWORD *)a2 + 7));
  v13 = (unsigned __int64 *)((char *)this + 416);
  v14 = *((_QWORD *)a2 + 7);
  v15 = *((_QWORD *)a2 + 8);
  v72 = (_QWORD *)((char *)a2 + 64);
  *((_QWORD *)this + 52) = MousePerfSummary::CalculateLatencyInMicroseconds(v16, v14, v15);
  if ( v17 )
  {
LABEL_3:
    v21 = (__int64 *)((char *)a2 + 64);
    goto LABEL_4;
  }
  MousePerfStage::UpdatePerfData(this, v54);
  MousePerfStage::UpdatePerfData((MousePerfSummary *)((char *)this + 80), *v10);
  MousePerfStage::UpdatePerfData((MousePerfSummary *)((char *)this + 200), *v13);
  v21 = (__int64 *)((char *)a2 + 64);
  v71 = v20;
  v18 = (unsigned __int64 *)((char *)this + 464);
  v72 = (_QWORD *)((char *)a2 + 64);
  v70 = (_QWORD *)((char *)this + 464);
LABEL_4:
  v22 = (unsigned __int64 *)((char *)a2 + 56);
  if ( (unsigned int)dword_1C02C92F8 > 5 )
  {
    if ( (byte_1C02C9308 & 0x10) != 0 && (qword_1C02C9310 & 0x10) == qword_1C02C9310 )
    {
      v69 = *v21;
      v54 = *v22;
      v63 = *((_QWORD *)a2 + 4);
      v64 = *((_QWORD *)a2 + 3);
      v65 = *((_QWORD *)a2 + 2);
      v66 = *v19;
      v67 = *(_QWORD *)a2;
      v68[0] = *((_QWORD *)a2 + 6);
      v55 = *((_QWORD *)a2 + 5);
      v56 = *v20;
      v57 = *v18;
      v58 = *v6;
      v59 = *v13;
      v60 = *v10;
      v61 = *v9;
      v62 = *((int *)this + 122);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v17,
        (unsigned int)&unk_1C029E0FF,
        (_DWORD)v22,
        (_DWORD)v18,
        (__int64)&v62,
        (__int64)&v61,
        (__int64)&v60,
        (__int64)&v59,
        (__int64)&v58,
        (__int64)&v57,
        (__int64)&v56,
        (__int64)&v55,
        (__int64)v68,
        (__int64)&v67,
        (__int64)&v66,
        (__int64)&v65,
        (__int64)&v64,
        (__int64)&v63,
        (__int64)&v54,
        (__int64)&v69);
    }
    if ( (unsigned int)dword_1C02C92F8 > 5 && tlgKeywordOn((__int64)&dword_1C02C92F8, 0x400000000000LL) )
    {
      v23 = *((_DWORD *)this + 122);
      LODWORD(v69) = v23;
      if ( v23 )
      {
        if ( v23 != 1 )
          goto LABEL_10;
        v45 = *((_QWORD *)a2 + 2) ? *v9 + *v6 : *v9;
        v44 = v45 + *v71 + *v70;
      }
      else
      {
        v44 = *v13 + *v9 + *v10;
      }
      if ( v44 >= 0xC350 )
      {
        if ( v44 >= 0x3D090 )
        {
          v48 = (char *)this + 512;
        }
        else
        {
          v46 = (_QWORD *)((char *)this + 512);
          v47 = *((_QWORD *)this + 64);
          if ( !v47 || (v48 = (char *)this + 512, (unsigned __int64)(*v72 - v47) > 0xF4240) )
          {
LABEL_33:
            *v46 = *v72;
            goto LABEL_10;
          }
        }
        v46 = v48;
        if ( tlgKeywordOn((__int64)&dword_1C02C92F8, 0x400000000000LL) )
        {
          v56 = v51;
          v61 = *v52;
          v60 = *v53;
          v59 = *v6;
          v58 = *v13;
          v57 = *v10;
          v69 = (int)v69;
          v62 = v50 / 0x3E8;
          v55 = 0x1000000LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            v49,
            (unsigned int)&unk_1C029E651,
            v50 / 0x3E8,
            v51,
            (__int64)&v55,
            (__int64)&v69,
            (__int64)&v56,
            (__int64)&v57,
            (__int64)&v58,
            (__int64)&v59,
            (__int64)&v60,
            (__int64)&v61,
            (__int64)&v62);
        }
        goto LABEL_33;
      }
    }
  }
LABEL_10:
  if ( *((_BYTE *)this + 528) == 1 )
  {
    *((_QWORD *)this + 67) = *v9;
    *((_QWORD *)this + 68) = *v10;
    *((_QWORD *)this + 69) = *v13;
    *((_QWORD *)this + 74) = *v6;
    v24 = v70;
    *((_BYTE *)this + 528) = 0;
    *((_QWORD *)this + 75) = *v24;
    *((_QWORD *)this + 76) = *v71;
  }
  if ( (unsigned int)(*((_DWORD *)this + 122) - 2) > 1 )
  {
    MousePerfSummary::SendMousePerfSummaryTelemetry(this);
    MousePerfSummary::SendMouseLatencyTelemetryRandomPick(this);
  }
}
