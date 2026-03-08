/*
 * XREFs of ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C01ECD18
 * Callers:
 *     xxxProcessEventMessage @ 0x1C006B460 (xxxProcessEventMessage.c)
 *     xxxHandleNCMouseGuys @ 0x1C02035C0 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C00FAA10 (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z @ 0x1C01EA310 (-ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z.c)
 *     ?EvaluateArrangeState@@YA?AW4_WARR_STATES@@PEAUtagWND@@@Z @ 0x1C01EAA3C (-EvaluateArrangeState@@YA-AW4_WARR_STATES@@PEAUtagWND@@@Z.c)
 *     ?xxxApplyArrangeAction@@YAXPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@@Z @ 0x1C01EC8EC (-xxxApplyArrangeAction@@YAXPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@@Z.c)
 *     ?ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1C021F9F0 (-ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     ?IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C0230BB0 (-IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 */

char __fastcall xxxArrangeWindow(ShellWindowManagement **a1, const struct tagWND *a2)
{
  int v2; // edi
  __int64 v4; // rax
  __int64 v5; // rsi
  unsigned int v6; // edi
  __int64 v7; // r8

  v2 = (int)a2;
  LOBYTE(v4) = WindowArrangement::IsSupported((WindowArrangement *)a1, a2);
  if ( (_BYTE)v4 )
  {
    LOBYTE(v4) = v2 - 16;
    if ( (unsigned int)(v2 - 16) <= 7 )
    {
      if ( *(_DWORD *)*gpDispInfo > 1u || (LOBYTE(v4) = v2 - 22, (unsigned int)(v2 - 22) > 1) )
      {
        if ( v2 != 18
          || (LOBYTE(v4) = ShellWindowManagement::BehaviorEnabled(a1[3], (const struct tagDESKTOP *)2), !(_BYTE)v4) )
        {
          LODWORD(v4) = EvaluateArrangeState((__int64)a1);
          v5 = (int)v4;
          if ( (_DWORD)v4 != 6 )
          {
            v4 = (unsigned int)(v2 - 16);
            v6 = *((_DWORD *)&unk_1C030FB50 + 10 * v4 + v5 + 4);
            if ( v6 != 8 )
            {
              if ( (*((_DWORD *)&unk_1C030FB50 + 10 * v4 + 3) & 1) == 0 )
                MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 7350);
              LODWORD(v4) = ArrangeActionCompatibleWithStyle((__int64)a1, v6);
              if ( (_DWORD)v4 )
              {
                xxxApplyArrangeAction((struct tagWND *)a1, (struct tagWND *)(unsigned int)v5, v6);
                if ( (unsigned int)EvaluateArrangeState((__int64)a1) - 1 <= 2 )
                {
                  v7 = 1LL;
LABEL_16:
                  LOBYTE(v4) = NotifyShell::ArrangementCompleted(a1, 0LL, v7);
                  return v4;
                }
                LOBYTE(v4) = v5 - 1;
                if ( (unsigned int)(v5 - 1) <= 2 )
                {
                  v7 = 2LL;
                  goto LABEL_16;
                }
              }
            }
          }
        }
      }
    }
  }
  return v4;
}
