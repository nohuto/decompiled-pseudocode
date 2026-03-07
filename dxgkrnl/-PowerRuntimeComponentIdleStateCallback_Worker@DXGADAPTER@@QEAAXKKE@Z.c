void __fastcall DXGADAPTER::PowerRuntimeComponentIdleStateCallback_Worker(
        DXGADAPTER *this,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  char v4; // r13
  __int64 v5; // r15
  unsigned int v6; // r12d
  DXGADAPTER *v7; // rsi
  __int64 v8; // rdi
  char v9; // r15
  _BYTE *v10; // r14
  struct DXGTHREAD *v11; // r15
  struct DXGTHREAD *Current; // rax
  __int64 v13; // r14
  __int64 v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // eax
  struct DXGPROCESS *v21; // rax
  int v22; // ecx
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  struct _KPROCESS *v25; // rcx
  KIRQL v26; // al
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  KIRQL CurrentIrql; // [rsp+61h] [rbp-48h]
  char v32; // [rsp+62h] [rbp-47h]
  int v34; // [rsp+68h] [rbp-41h]
  unsigned int v35; // [rsp+6Ch] [rbp-3Dh]
  unsigned int v36; // [rsp+70h] [rbp-39h] BYREF
  __int64 v37; // [rsp+78h] [rbp-31h]
  char v38; // [rsp+80h] [rbp-29h]
  char v39; // [rsp+88h] [rbp-21h]
  struct _KAPC_STATE ApcState; // [rsp+90h] [rbp-19h] BYREF

  v4 = a4;
  v5 = a2;
  v6 = a3;
  v7 = this;
  if ( *((_DWORD *)this + 50) == 1 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0pqq_EtwWriteTransfer(
        (_DWORD)this,
        (unsigned int)&Dxgk_SetPowerComponentFState,
        a3,
        (_DWORD)this,
        a2,
        a3);
    v8 = *((_QWORD *)v7 + 378) + 520 * v5;
    if ( !v4 && *(_BYTE *)(v8 + 360) )
    {
      v32 = 0;
      v10 = (_BYTE *)(v8 + 359);
    }
    else
    {
      v32 = 1;
      if ( (*((int *)v7 + 638) >= 0x2000 || *((_BYTE *)v7 + 2852)) && *(_DWORD *)(v8 + 208) == 3 )
      {
        v9 = 0;
      }
      else
      {
        v9 = 1;
        *(_DWORD *)(v8 + 344) = v6;
      }
      *(_BYTE *)(v8 + 359) = 1;
      if ( v6 )
      {
        this = *(DXGADAPTER **)(v8 + 512);
        if ( this )
          DXGPOWERSTATISTICSTRANSITIONENGINE::RecordEnteringIdleFState((DXGADAPTER *)((char *)this + 136));
      }
      v10 = (_BYTE *)(v8 + 359);
      if ( v9 )
      {
        v36 = -1;
        v35 = *(_DWORD *)(v8 + 4);
        v37 = 0LL;
        if ( (qword_1C013A870 & 2) != 0 )
        {
          v38 = 1;
          v36 = 5124;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            McTemplateK0q_EtwWriteTransfer(this, &EventProfilerEnter, a3, 5124LL);
        }
        else
        {
          v38 = 0;
        }
        DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v36, 5124);
        _InterlockedIncrement((volatile signed __int32 *)v7 + 1153);
        CurrentIrql = KeGetCurrentIrql();
        v11 = 0LL;
        if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v11 = Current) != 0LL) )
          v34 = *((_DWORD *)Current + 12);
        else
          v34 = 0;
        v39 = 0;
        if ( KeGetCurrentIrql() < 2u )
        {
          if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
          {
            WdLogSingleEntry1(1LL, 2406LL);
            if ( bTracingEnabled )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
                McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                  v18,
                  v17,
                  v19,
                  0,
                  2,
                  -1,
                  (__int64)L"m_pGlobal != NULL",
                  2406LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
            }
          }
          v13 = *(_QWORD *)&DXGGLOBAL::m_pGlobal;
          if ( *(_DWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 1684LL) )
          {
            v20 = *((_DWORD *)v7 + 109);
            if ( (v20 & 0x20) == 0 && (v20 & 4) == 0 )
            {
              v21 = DXGPROCESS::GetCurrent();
              if ( v21 )
              {
                if ( (*((_BYTE *)v21 + 424) & 1) == 0 && (*((_DWORD *)v21 + 106) & 2) == 0 )
                {
                  v22 = *(_DWORD *)(v13 + 1684);
                  if ( v22 == 2 || v22 == 1 && *((_BYTE *)v21 + 589) )
                  {
                    Global = DXGGLOBAL::GetGlobal();
                    SessionData = DXGGLOBAL::GetSessionData(Global);
                    if ( SessionData )
                    {
                      v25 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2340);
                      if ( v25 )
                      {
                        KeStackAttachProcess(v25, &ApcState);
                        v39 = 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        v14 = (*((int (__fastcall **)(_QWORD, _QWORD, _QWORD))v7 + 104))(*((_QWORD *)v7 + 35), v35, v6);
        if ( v39 )
          KeUnstackDetachProcess(&ApcState);
        if ( CurrentIrql != KeGetCurrentIrql() )
        {
          v26 = KeGetCurrentIrql();
          WdLogSingleEntry5(0LL, 275LL, 16LL, v7, CurrentIrql, v26);
        }
        if ( v11 && *((_DWORD *)v11 + 12) != v34 )
          WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v11 + 12), v34, 0LL);
        _InterlockedDecrement((volatile signed __int32 *)v7 + 1153);
        if ( (_DWORD)v14 != -1071775466 )
        {
          if ( (_DWORD)v14 )
          {
            WdLogSingleEntry1(2LL, v14);
            if ( bTracingEnabled )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
                McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                  v28,
                  v27,
                  v29,
                  0,
                  0,
                  -1,
                  (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
                  v14,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
            }
          }
        }
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
        v10 = (_BYTE *)(v8 + 359);
        if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, a3, v36);
      }
      v4 = a4;
      LODWORD(v5) = a2;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0pt_EtwWriteTransfer(&DxgkControlGuid_Context, &Dxgk_SetPowerComponentFStateEnd, a3, v7, v5);
    if ( (*(_DWORD *)(v8 + 216) & 2) == 0 )
    {
      *v10 = 0;
      if ( !v4 )
        PoFxCompleteIdleState(*((_QWORD *)v7 + 379), (unsigned int)v5);
      if ( v32 )
      {
        if ( !v6 )
        {
          v16 = *(_QWORD *)(v8 + 512);
          if ( v16 )
            DXGPOWERSTATISTICSTRANSITIONENGINE::RecordLeavingIdleFState((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v16 + 136));
        }
        if ( *(_DWORD *)(v8 + 208) == 7 )
          DxgkNotifySharedPowerGraphicsFStateTransition(v7, *(_DWORD *)(v8 + 4), v6, 0);
      }
    }
  }
  else if ( !a4 )
  {
    PoFxCompleteIdleState(*((_QWORD *)this + 379), a2);
  }
}
