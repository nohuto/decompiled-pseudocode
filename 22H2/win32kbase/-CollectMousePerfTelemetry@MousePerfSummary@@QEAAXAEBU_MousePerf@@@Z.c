/*
 * XREFs of ?CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z @ 0x1C0042DE8
 * Callers:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMouseLatencyTracker@@@Z @ 0x1C0042CA4 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMou.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C01C118C (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     ?CalculateLatencyInMicroseconds@MousePerfSummary@@AEAA_K_K0@Z @ 0x1C0042BDC (-CalculateLatencyInMicroseconds@MousePerfSummary@@AEAA_K_K0@Z.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333333333333333@Z @ 0x1C01C25F0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTempl.c)
 *     ?SendMouseLatencyTelemetryRandomPick@MousePerfSummary@@AEAAXXZ @ 0x1C01C2E00 (-SendMouseLatencyTelemetryRandomPick@MousePerfSummary@@AEAAXXZ.c)
 *     ?SendMousePerfSummaryTelemetry@MousePerfSummary@@AEAAXXZ @ 0x1C01C2FAC (-SendMousePerfSummaryTelemetry@MousePerfSummary@@AEAAXXZ.c)
 *     ?UpdatePerfData@MousePerfStage@@QEAAX_K@Z @ 0x1C01C3414 (-UpdatePerfData@MousePerfStage@@QEAAX_K@Z.c)
 */

void __fastcall MousePerfSummary::CollectMousePerfTelemetry(MousePerfSummary *this, const struct _MousePerf *a2)
{
  __int64 *v3; // r11
  MousePerfSummary *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  MousePerfSummary *v7; // rax
  __int64 *v8; // r11
  __int64 v9; // r10
  __int64 v10; // r10
  __int64 *v11; // r11
  MousePerfSummary *v12; // rcx
  __int64 v13; // r10
  MousePerfSummary *v14; // rcx
  __int64 v15; // r10
  MousePerfSummary *v16; // rcx
  __int64 v17; // r10
  MousePerfSummary *v18; // rcx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  MousePerfStage *v21; // rcx
  __int64 v22; // r10
  __int64 *v23; // r11
  MousePerfSummary *v24; // rcx
  __int64 v25; // r10
  MousePerfSummary *v26; // rcx
  __int64 v27; // r8
  unsigned __int64 v28; // r9
  int v29; // ecx
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  __int64 *v33; // r10
  __int64 *v34; // r11
  __int64 v35; // [rsp+A0h] [rbp-80h] BYREF
  __int64 v36; // [rsp+A8h] [rbp-78h] BYREF
  __int64 v37; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v38; // [rsp+B8h] [rbp-68h] BYREF
  __int64 v39; // [rsp+C0h] [rbp-60h] BYREF
  __int64 v40; // [rsp+C8h] [rbp-58h] BYREF
  __int64 v41; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v42; // [rsp+D8h] [rbp-48h] BYREF
  __int64 v43; // [rsp+E0h] [rbp-40h] BYREF
  __int64 v44; // [rsp+E8h] [rbp-38h] BYREF
  __int64 v45; // [rsp+F0h] [rbp-30h] BYREF
  _QWORD v46[3]; // [rsp+F8h] [rbp-28h] BYREF
  __int64 v47; // [rsp+120h] [rbp+0h] BYREF
  __int64 v48; // [rsp+128h] [rbp+8h] BYREF
  __int64 v49; // [rsp+130h] [rbp+10h] BYREF
  __int64 v50; // [rsp+138h] [rbp+18h] BYREF

  v3 = (__int64 *)((char *)a2 + 8);
  v4 = (MousePerfSummary *)*((unsigned int *)a2 + 18);
  *((_DWORD *)this + 122) = (_DWORD)v4;
  if ( (_DWORD)v4 == 1 )
  {
    v5 = *((_QWORD *)a2 + 2);
    v6 = *(_QWORD *)a2;
    if ( !v5 )
      v5 = *v3;
    v7 = (MousePerfSummary *)MousePerfSummary::CalculateLatencyInMicroseconds(v4, v6, v5);
    *((_QWORD *)this + 50) = v7;
    *((_QWORD *)this + 57) = MousePerfSummary::CalculateLatencyInMicroseconds(v7, *(_QWORD *)(v9 + 16), *v8);
    *((_QWORD *)this + 51) = MousePerfSummary::CalculateLatencyInMicroseconds(v12, *v11, *(_QWORD *)(v10 + 24));
    *((_QWORD *)this + 58) = MousePerfSummary::CalculateLatencyInMicroseconds(
                               v14,
                               *(_QWORD *)(v13 + 24),
                               *(_QWORD *)(v13 + 32));
    *((_QWORD *)this + 59) = MousePerfSummary::CalculateLatencyInMicroseconds(
                               v16,
                               *(_QWORD *)(v15 + 32),
                               *(_QWORD *)(v15 + 56));
    *((_QWORD *)this + 52) = MousePerfSummary::CalculateLatencyInMicroseconds(
                               v18,
                               *(_QWORD *)(v17 + 56),
                               *(_QWORD *)(v17 + 64));
    MousePerfStage::UpdatePerfData(this, v19);
    MousePerfStage::UpdatePerfData((MousePerfSummary *)((char *)this + 40), *((_QWORD *)this + 57));
    MousePerfStage::UpdatePerfData((MousePerfSummary *)((char *)this + 80), *((_QWORD *)this + 51));
    MousePerfStage::UpdatePerfData((MousePerfSummary *)((char *)this + 120), *((_QWORD *)this + 58));
    v20 = *((_QWORD *)this + 59);
    v21 = (MousePerfSummary *)((char *)this + 160);
    goto LABEL_7;
  }
  *((_QWORD *)this + 50) = MousePerfSummary::CalculateLatencyInMicroseconds(v4, *(_QWORD *)a2, *v3);
  *((_QWORD *)this + 51) = MousePerfSummary::CalculateLatencyInMicroseconds(v24, *v23, *(_QWORD *)(v22 + 56));
  *((_QWORD *)this + 52) = MousePerfSummary::CalculateLatencyInMicroseconds(
                             v26,
                             *(_QWORD *)(v25 + 56),
                             *(_QWORD *)(v25 + 64));
  if ( !v29 )
  {
    MousePerfStage::UpdatePerfData(this, v28);
    v20 = *((_QWORD *)this + 51);
    v21 = (MousePerfSummary *)((char *)this + 80);
LABEL_7:
    MousePerfStage::UpdatePerfData(v21, v20);
    MousePerfStage::UpdatePerfData((MousePerfSummary *)((char *)this + 200), *((_QWORD *)this + 52));
  }
  if ( (unsigned int)dword_1C0249170 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C0249170, 16LL, v27, v28) )
  {
    v47 = v33[8];
    v48 = v33[7];
    v49 = v33[4];
    v50 = v33[3];
    v35 = v33[2];
    v36 = *v34;
    v37 = *v33;
    v38 = v33[6];
    v39 = v33[5];
    v40 = *((_QWORD *)this + 59);
    v41 = *((_QWORD *)this + 58);
    v42 = *((_QWORD *)this + 57);
    v43 = *((_QWORD *)this + 52);
    v44 = *((_QWORD *)this + 51);
    v45 = *((_QWORD *)this + 50);
    v46[0] = *((int *)this + 122);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v30,
      (unsigned int)&unk_1C0220302,
      v31,
      v32,
      (__int64)v46,
      (__int64)&v45,
      (__int64)&v44,
      (__int64)&v43,
      (__int64)&v42,
      (__int64)&v41,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v38,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v35,
      (__int64)&v50,
      (__int64)&v49,
      (__int64)&v48,
      (__int64)&v47);
  }
  if ( *((_BYTE *)this + 520) == 1 )
  {
    *((_QWORD *)this + 66) = *((_QWORD *)this + 50);
    *((_QWORD *)this + 67) = *((_QWORD *)this + 51);
    *((_QWORD *)this + 68) = *((_QWORD *)this + 52);
    *((_QWORD *)this + 73) = *((_QWORD *)this + 57);
    *((_QWORD *)this + 74) = *((_QWORD *)this + 58);
    *((_QWORD *)this + 75) = *((_QWORD *)this + 59);
    *((_BYTE *)this + 520) = 0;
  }
  if ( (unsigned int)(*((_DWORD *)this + 122) - 2) > 1 )
  {
    MousePerfSummary::SendMousePerfSummaryTelemetry(this);
    MousePerfSummary::SendMouseLatencyTelemetryRandomPick(this);
  }
}
