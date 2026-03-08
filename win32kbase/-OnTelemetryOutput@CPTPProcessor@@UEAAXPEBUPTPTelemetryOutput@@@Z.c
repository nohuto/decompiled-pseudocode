/*
 * XREFs of ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C020E7E0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     HMValidateHandleNoSecure @ 0x1C007A1CC (HMValidateHandleNoSecure.c)
 *     ?HandlePTPTelemetry@Usage@PTPTelemetry@@SAXXZ @ 0x1C00D8CA0 (-HandlePTPTelemetry@Usage@PTPTelemetry@@SAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     EtwTraceTouchPadAAP @ 0x1C00EDEA0 (EtwTraceTouchPadAAP.c)
 *     EtwTracePTPElasticDragModeStart @ 0x1C0163B10 (EtwTracePTPElasticDragModeStart.c)
 *     EtwTracePTPElasticDragModeStop @ 0x1C0163B40 (EtwTracePTPElasticDragModeStop.c)
 *     EtwTraceTouchPadCurtainState @ 0x1C01642D0 (EtwTraceTouchPadCurtainState.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$01@@U2@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$01@@4AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C020C964 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$01@@U2@U-$_tlgWrapBuffer@U_UNICODE_STRING.c)
 *     ?IncrementTotalTime@Usage@PTPTelemetry@@SAXW4tagPTP_TELEM_TOTALTIME@@_K@Z @ 0x1C020DF10 (-IncrementTotalTime@Usage@PTPTelemetry@@SAXW4tagPTP_TELEM_TOTALTIME@@_K@Z.c)
 *     ?OnEndSession@Usage@PTPTelemetry@@SAX_J@Z @ 0x1C020E014 (-OnEndSession@Usage@PTPTelemetry@@SAX_J@Z.c)
 *     ?OnNewContact@Usage@PTPTelemetry@@SAX_J@Z @ 0x1C020E698 (-OnNewContact@Usage@PTPTelemetry@@SAX_J@Z.c)
 *     ?OnNewSession@Usage@PTPTelemetry@@SAX_J@Z @ 0x1C020E6EC (-OnNewSession@Usage@PTPTelemetry@@SAX_J@Z.c)
 *     ?SetLastAction@Usage@PTPTelemetry@@SAXW4tagPTP_ACTION@@@Z @ 0x1C020F1BC (-SetLastAction@Usage@PTPTelemetry@@SAXW4tagPTP_ACTION@@@Z.c)
 *     ApiSetTraceLoggingPTPWarpBack @ 0x1C0246A78 (ApiSetTraceLoggingPTPWarpBack.c)
 */

void __fastcall CPTPProcessor::OnTelemetryOutput(
        CPTPProcessor *this,
        const struct PTPTelemetryOutput *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // edx
  int v12; // edx
  __int64 v13; // rdx
  int v14; // edx
  __int16 v15; // bx
  __int16 v16; // bp
  unsigned __int16 *v17; // r14
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rbx
  int v24; // edi
  __int64 v25; // rax
  int v26; // ecx
  int v27; // ecx
  __int64 v28; // rcx
  __int64 v29; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int16 *v30; // [rsp+58h] [rbp-30h] BYREF
  int v31; // [rsp+98h] [rbp+10h] BYREF
  __int16 v32; // [rsp+A0h] [rbp+18h] BYREF
  int v33; // [rsp+A8h] [rbp+20h] BYREF

  v6 = (unsigned int)(*(_DWORD *)a2 - 1);
  if ( (_DWORD)v6 )
  {
    if ( (_DWORD)v6 == 1 )
    {
      v7 = *((unsigned int *)a2 + 1);
      if ( (_DWORD)v7 )
      {
        v8 = (unsigned int)(v7 - 1);
        if ( (_DWORD)v8 )
        {
          v9 = (unsigned int)(v8 - 1);
          if ( (_DWORD)v9 )
          {
            v10 = (unsigned int)(v9 - 1);
            if ( (_DWORD)v10 )
            {
              v11 = v10 - 1;
              if ( v11 )
              {
                v12 = v11 - 1;
                if ( v12 )
                {
                  v13 = (unsigned int)(v12 - 1);
                  if ( (_DWORD)v13 )
                  {
                    v14 = v13 - 1;
                    if ( v14 )
                    {
                      if ( v14 == 4 )
                      {
                        v31 = 0x20000;
                        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 824);
                        v15 = 0;
                        v16 = 0;
                        v17 = 0LL;
                        v18 = HMValidateHandleNoSecure(*((_QWORD *)this + 45), 19);
                        if ( v18 )
                        {
                          if ( *(_QWORD *)(v18 + 472) )
                          {
                            v19 = *(_QWORD *)(v18 + 456);
                            if ( v19 )
                            {
                              v15 = *(_WORD *)(v19 + 110);
                              v17 = (unsigned __int16 *)(v18 + 208);
                              v16 = *(_WORD *)(v19 + 112);
                            }
                          }
                        }
                        if ( (unsigned int)dword_1C02C93D8 > 5
                          && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL) )
                        {
                          v33 = *((_DWORD *)a2 + 2);
                          v29 = 0x1000000LL;
                          v30 = v17;
                          LOWORD(v31) = v16;
                          v32 = v15;
                          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>>(
                            v20,
                            byte_1C029BDC8,
                            v21,
                            v22,
                            (__int64)&v33,
                            (__int64)&v32,
                            (__int64)&v31,
                            &v30,
                            (__int64)&v29);
                        }
                      }
                    }
                    else
                    {
                      ApiSetTraceLoggingPTPWarpBack(
                        *((unsigned int *)a2 + 2),
                        *(_QWORD *)((char *)a2 + 12),
                        *(_QWORD *)((char *)a2 + 20),
                        *((unsigned int *)a2 + 7));
                    }
                  }
                  else
                  {
                    v23 = *(_QWORD *)((char *)a2 + 12);
                    v24 = *((_DWORD *)a2 + 2);
                    v25 = SGDGetUserSessionState(this, v13, a3, a4);
                    if ( v24 )
                    {
                      if ( v24 == 1 )
                        *(_QWORD *)(v25 + 11960) = v23;
                    }
                    else
                    {
                      *(_QWORD *)(v25 + 11952) = v23;
                    }
                  }
                }
                else
                {
                  PTPTelemetry::Usage::IncrementTotalTime(
                    *((unsigned int *)a2 + 2),
                    *(_QWORD *)((char *)a2 + 12),
                    a3,
                    a4);
                }
              }
              else
              {
                PTPTelemetry::Usage::SetLastAction(*((unsigned int *)a2 + 2));
              }
            }
            else
            {
              PTPTelemetry::Usage::OnNewContact(*((_QWORD *)a2 + 1), v10, a3, a4);
            }
          }
          else
          {
            PTPTelemetry::Usage::HandlePTPTelemetry((__int64)this, v9, a3, a4);
          }
        }
        else
        {
          PTPTelemetry::Usage::OnEndSession(*((_QWORD *)a2 + 1), v8, a3, a4);
        }
      }
      else
      {
        PTPTelemetry::Usage::OnNewSession(*(LARGE_INTEGER *)((char *)a2 + 8), v7, a3, a4);
      }
    }
  }
  else
  {
    v26 = *((_DWORD *)a2 + 1);
    if ( v26 )
    {
      v27 = v26 - 1;
      if ( v27 )
      {
        v28 = (unsigned int)(v27 - 1);
        if ( (_DWORD)v28 )
        {
          if ( (_DWORD)v28 == 1 )
            EtwTracePTPElasticDragModeStop(v28);
        }
        else
        {
          EtwTracePTPElasticDragModeStart(v28);
        }
      }
      else
      {
        EtwTraceTouchPadCurtainState(*((unsigned int *)a2 + 2), v6, a3);
      }
    }
    else
    {
      EtwTraceTouchPadAAP(
        *((_DWORD *)a2 + 2),
        *((_DWORD *)a2 + 3),
        *((_DWORD *)a2 + 4),
        *((_DWORD *)a2 + 5),
        *((_DWORD *)a2 + 6));
    }
  }
}
