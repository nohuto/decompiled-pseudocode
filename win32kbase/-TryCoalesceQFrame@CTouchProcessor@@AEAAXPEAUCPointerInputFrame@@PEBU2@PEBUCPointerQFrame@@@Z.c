/*
 * XREFs of ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C0206D08
 * Callers:
 *     ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x1C01F1344 (-EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPoi.c)
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C01FD690 (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x1C0202354 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0088890 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C00F2F0E (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     EtwTraceBeginPointerFrameCoalesce @ 0x1C0161AA0 (EtwTraceBeginPointerFrameCoalesce.c)
 *     EtwTraceEndPointerFrameCoalesce @ 0x1C0162320 (EtwTraceEndPointerFrameCoalesce.c)
 *     EtwTracePointerNoCoalesce @ 0x1C0163E50 (EtwTracePointerNoCoalesce.c)
 *     ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x1C01EBFCC (-CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@.c)
 *     ?CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z @ 0x1C01EEC60 (-CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C01F2C24 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase.c)
 *     ?TrackCoalesceOnArrival@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C02069F8 (-TrackCoalesceOnArrival@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
 */

void __fastcall CTouchProcessor::TryCoalesceQFrame(
        struct _KTHREAD **this,
        struct CPointerInputFrame *a2,
        const struct CPointerInputFrame *a3,
        const struct CPointerQFrame *a4)
{
  __int64 v4; // rsi
  int v5; // r8d
  unsigned int v7; // edx
  int v8; // eax
  char v10; // bl
  char v11; // r12
  unsigned int v12; // ebp
  int v13; // eax
  unsigned int v14; // edx
  __int64 v15; // rcx
  unsigned int v16; // edx
  int v17; // esi
  _DWORD *v18; // r14
  unsigned int i; // r15d
  __int64 v20; // rbp
  __int64 v21; // rax
  __int16 v22; // dx
  int v23; // ecx
  int v24; // eax
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // esi
  char v28; // [rsp+44h] [rbp-54h]
  _QWORD v29[10]; // [rsp+48h] [rbp-50h] BYREF
  int v31; // [rsp+A8h] [rbp+10h] BYREF
  struct CPointerInputFrame *v32; // [rsp+B0h] [rbp+18h]
  __int64 v33; // [rsp+B8h] [rbp+20h] BYREF

  v32 = a3;
  v4 = *((_QWORD *)a2 + 31);
  v5 = 0;
  v28 = 0;
  v7 = *((_DWORD *)a2 + 12);
  v8 = 0;
  v31 = 0;
  v10 = 0;
  v11 = 1;
  v12 = 0;
  if ( v7 )
  {
    do
    {
      if ( *(_DWORD *)v4 == -1 )
        break;
      if ( !a4 || a4 == (const struct CPointerQFrame *)v4 )
      {
        v13 = *(_DWORD *)(v4 + 140);
        if ( ((v13 & 1) == 0 || (v13 & 8) != 0 || *(_QWORD *)(v4 + 8) == -1LL) && (v13 & 2) != 0 )
        {
          LODWORD(v33) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9303);
        }
        v14 = *(_DWORD *)(v4 + 140);
        if ( (v14 & 2) == 0 )
          goto LABEL_17;
        v15 = *(unsigned int *)(*(_QWORD *)(v4 + 152) + 136LL);
        if ( *(_DWORD *)(v4 + 136) != (_DWORD)v15 )
        {
          CTouchProcessor::TrackCoalesceOnArrival(v15, v4, 17);
          v14 = *(_DWORD *)(v4 + 140) & 0xFFFFFFFD;
          *(_DWORD *)(v4 + 140) = v14;
        }
        if ( (v14 & 2) != 0 )
        {
          if ( *(_DWORD *)(v4 + 144) != 1 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9314);
          *(_DWORD *)(v4 + 140) |= 4u;
          v8 = 1;
          v31 = 1;
        }
        else
        {
LABEL_17:
          v8 = v31;
        }
        *(_QWORD *)(v4 + 152) = 0LL;
      }
      v7 = *((_DWORD *)a2 + 12);
      ++v12;
      v4 += 160LL;
    }
    while ( v12 < v7 );
    if ( v8 )
      EtwTraceBeginPointerFrameCoalesce(*((unsigned int *)a2 + 10), v7, 0LL);
    v5 = 0;
  }
  v16 = *((_DWORD *)a2 + 12);
  v17 = 1;
  v18 = (_DWORD *)*((_QWORD *)a2 + 30);
  for ( i = 0; i < v16; v18 += 120 )
  {
    if ( (unsigned __int64)v18 >= *((_QWORD *)a2 + 30) + 480 * (unsigned __int64)v16 )
    {
      LODWORD(v33) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9346);
    }
    if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v18) )
    {
      v20 = *((_QWORD *)a2 + 31) + 160LL * (unsigned int)v18[2];
      if ( (a4 || *(_QWORD *)(v20 + 8) == -1LL) && a4 != (const struct CPointerQFrame *)v20 )
      {
        v17 = (*(_BYTE *)(v20 + 140) & 4) != 0 ? v17 : 0;
      }
      else
      {
        *(_DWORD *)(v20 + 140) |= 0x10u;
        if ( (*(_DWORD *)(v20 + 140) & 2) != 0 )
        {
          *((_QWORD *)v18 + 2) = CTouchProcessor::CoalesceNodeWithPrevious(
                                   this,
                                   a2,
                                   v32,
                                   (struct CPointerInfoNode *)v18,
                                   i,
                                   v5);
        }
        else
        {
          v17 = v5;
          v21 = CTouchProcessor::CreateAndReferenceMsgData(
                  this,
                  *((_WORD *)v18 + 86),
                  *((_DWORD *)a2 + 10),
                  i,
                  v18[45],
                  -__CFSHR__(*v18, 7));
          v22 = *((_WORD *)v18 + 86);
          v23 = *((unsigned __int16 *)v18 + 80);
          *((_QWORD *)v18 + 2) = v21;
          EtwTracePointerNoCoalesce(v23, v22, *(_DWORD *)(v20 + 144), 0);
        }
        v5 = 0;
        if ( !*((_QWORD *)v18 + 2) )
        {
          CTouchProcessor::FreePointerInfoNodeInt((__int64)this, (__int64)a2, i);
          v5 = 0;
        }
      }
      if ( *(_QWORD *)(v20 + 8) != -1LL )
        v11 = v5;
    }
    if ( !a4 )
    {
      if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v18) )
      {
        v24 = v18[45];
        if ( (v24 & 0x2000) != 0 )
        {
          v28 = 1;
          if ( (v24 & 0x10000) != 0 )
            v10 = 1;
        }
      }
    }
    v16 = *((_DWORD *)a2 + 12);
    ++i;
  }
  if ( v31 != v5 )
    EtwTraceEndPointerFrameCoalesce(*((unsigned int *)a2 + 10), v16, 0LL);
  if ( v17 && (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 32LL) )
  {
    v31 = *((_DWORD *)a2 + 10);
    v33 = *((_QWORD *)a2 + 9);
    v29[0] = *((_QWORD *)a2 + 27);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (int)&dword_1C02CA7E0,
      (int)&unk_1C0299D0D,
      v25,
      v26,
      (__int64)v29,
      (__int64)&v33,
      (__int64)&v31);
  }
  v27 = *((_DWORD *)a2 + 57) ^ (*((_DWORD *)a2 + 57) ^ v17) & 1;
  *((_DWORD *)a2 + 57) = v27;
  if ( !a4 )
    *((_DWORD *)a2 + 57) = v27 & 0xFFFFFFF1 | (2 * (v11 & 1 | (2 * (v28 & 1 | (2 * (v10 & 1))))));
}
