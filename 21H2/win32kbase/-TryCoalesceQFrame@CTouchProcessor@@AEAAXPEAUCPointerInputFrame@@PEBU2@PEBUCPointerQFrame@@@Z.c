/*
 * XREFs of ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C019F42C
 * Callers:
 *     ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x1C018E174 (-EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPoi.c)
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C0198498 (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C019BC9C (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C00CCE40 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     EtwTraceBeginPointerFrameCoalesce @ 0x1C01218D0 (EtwTraceBeginPointerFrameCoalesce.c)
 *     EtwTraceEndPointerFrameCoalesce @ 0x1C0122050 (EtwTraceEndPointerFrameCoalesce.c)
 *     EtwTracePointerNoCoalesce @ 0x1C0123810 (EtwTracePointerNoCoalesce.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C018632C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x1C018A128 (-CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@.c)
 *     ?CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z @ 0x1C018C3FC (-CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01971B4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?TrackCoalesceOnArrival@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C019F334 (-TrackCoalesceOnArrival@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
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
  int v14; // edx
  int v15; // ecx
  _DWORD *v16; // rsi
  int v17; // r15d
  unsigned int i; // r14d
  __int64 v19; // rbp
  _QWORD *v20; // rax
  __int16 v21; // dx
  int v22; // ecx
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // eax
  char v27; // [rsp+44h] [rbp-54h]
  __int64 v28[10]; // [rsp+48h] [rbp-50h] BYREF
  int v30; // [rsp+A8h] [rbp+10h] BYREF
  struct CPointerInputFrame *v31; // [rsp+B0h] [rbp+18h]
  __int64 v32; // [rsp+B8h] [rbp+20h] BYREF

  v31 = a3;
  v4 = *((_QWORD *)a2 + 18);
  v5 = 0;
  v27 = 0;
  v7 = *((_DWORD *)a2 + 12);
  v8 = 0;
  v30 = 0;
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
        if ( (v13 & 1) == 0 || (v13 & 8) != 0 || (v14 = *(_DWORD *)(v4 + 140), *(_QWORD *)(v4 + 8) == -1LL) )
        {
          v14 = *(_DWORD *)(v4 + 140);
          if ( (v13 & 2) != 0 )
          {
            LODWORD(v32) = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 8611);
            v14 = *(_DWORD *)(v4 + 140);
          }
        }
        if ( (v14 & 2) == 0 )
          goto LABEL_17;
        v15 = *(_DWORD *)(*(_QWORD *)(v4 + 152) + 136LL);
        if ( *(_DWORD *)(v4 + 136) != v15 )
        {
          CTouchProcessor::TrackCoalesceOnArrival(v15, (int *)v4, 17);
          *(_DWORD *)(v4 + 140) &= ~2u;
          v14 = *(_DWORD *)(v4 + 140);
        }
        if ( (v14 & 2) != 0 )
        {
          if ( *(_DWORD *)(v4 + 144) != 1 )
          {
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 8622);
            v14 = *(_DWORD *)(v4 + 140);
          }
          v8 = 1;
          *(_DWORD *)(v4 + 140) = v14 | 4;
          v30 = 1;
        }
        else
        {
LABEL_17:
          v8 = v30;
        }
        *(_QWORD *)(v4 + 152) = 0LL;
      }
      v7 = *((_DWORD *)a2 + 12);
      ++v12;
      v4 += 160LL;
    }
    while ( v12 < v7 );
    v5 = 0;
  }
  if ( v8 )
  {
    EtwTraceBeginPointerFrameCoalesce(*((_DWORD *)a2 + 10), v7, 0);
    v7 = *((_DWORD *)a2 + 12);
    v5 = 0;
  }
  v16 = (_DWORD *)*((_QWORD *)a2 + 17);
  v17 = 1;
  for ( i = 0; i < v7; v16 += 120 )
  {
    if ( (unsigned __int64)v16 >= *((_QWORD *)a2 + 17) + 480 * (unsigned __int64)v7 )
    {
      LODWORD(v32) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 8654);
    }
    if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v16) )
    {
      v19 = *((_QWORD *)a2 + 18) + 160LL * (unsigned int)v16[2];
      if ( (a4 || *(_QWORD *)(v19 + 8) == -1LL) && a4 != (const struct CPointerQFrame *)v19 )
      {
        v17 = (*(_BYTE *)(v19 + 140) & 4) != 0 ? v17 : 0;
      }
      else
      {
        if ( (*(_DWORD *)(v19 + 140) & 2) != 0 )
        {
          *((_QWORD *)v16 + 2) = CTouchProcessor::CoalesceNodeWithPrevious(
                                   this,
                                   a2,
                                   v31,
                                   (struct CPointerInfoNode *)v16,
                                   i,
                                   v5);
        }
        else
        {
          v17 = v5;
          v20 = CTouchProcessor::CreateAndReferenceMsgData(
                  this,
                  *((_WORD *)v16 + 86),
                  *((_DWORD *)a2 + 10),
                  i,
                  v16[45],
                  -__CFSHR__(*v16, 7));
          v21 = *((_WORD *)v16 + 86);
          v22 = *((unsigned __int16 *)v16 + 80);
          *((_QWORD *)v16 + 2) = v20;
          EtwTracePointerNoCoalesce(v22, v21, *(_DWORD *)(v19 + 144), 0);
        }
        v5 = 0;
        if ( !*((_QWORD *)v16 + 2) )
        {
          CTouchProcessor::FreePointerInfoNodeInt((__int64)this, (__int64)a2, i);
          v5 = 0;
        }
      }
      if ( *(_QWORD *)(v19 + 8) != -1LL )
        v11 = v5;
    }
    if ( !a4 )
    {
      if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v16) )
      {
        v23 = v16[45];
        if ( (v23 & 0x2000) != 0 )
        {
          v27 = 1;
          if ( (v23 & 0x10000) != 0 )
            v10 = 1;
        }
      }
    }
    v7 = *((_DWORD *)a2 + 12);
    ++i;
  }
  if ( v30 != v5 )
    EtwTraceEndPointerFrameCoalesce(*((_DWORD *)a2 + 10), v7, 0);
  if ( v17 && (unsigned int)dword_1C024BA90 > 4 && tlgKeywordOn((__int64)&dword_1C024BA90, 32LL) )
  {
    v30 = *((_DWORD *)a2 + 10);
    v32 = *((_QWORD *)a2 + 9);
    v28[0] = *((_QWORD *)a2 + 14);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C024BA90,
      byte_1C021E3D1,
      v24,
      v25,
      (__int64)v28,
      (__int64)&v32,
      (__int64)&v30);
  }
  v26 = *((_DWORD *)a2 + 31) ^ (v17 ^ *((_DWORD *)a2 + 31)) & 1;
  *((_DWORD *)a2 + 31) = v26;
  if ( !a4 )
    *((_DWORD *)a2 + 31) = v26 & 0xFFFFFFF1 | (2 * (v11 & 1 | (2 * (v27 & 1 | (2 * (v10 & 1))))));
}
