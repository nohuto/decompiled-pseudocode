/*
 * XREFs of AcpiEval_PPC @ 0x1C00213A0
 * Callers:
 *     EvtDeviceD0Entry @ 0x1C0001720 (EvtDeviceD0Entry.c)
 *     ProcLibDeviceStart @ 0x1C0022D64 (ProcLibDeviceStart.c)
 *     AcpiPStateNotifyWorker @ 0x1C0033730 (AcpiPStateNotifyWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0003658 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0003718 (WPP_RECORDER_SF_.c)
 *     AcpiEvaluateMethod @ 0x1C0021480 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_PPC(__int64 a1, int *a2)
{
  int v4; // eax
  PVOID v5; // rsi
  int v6; // ebx
  unsigned int *v7; // rax
  unsigned int v8; // edx
  int v9; // eax
  unsigned __int16 v11; // r9
  int v12; // [rsp+50h] [rbp+8h] BYREF
  PVOID P; // [rsp+60h] [rbp+18h] BYREF

  v12 = 0;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1092), 0x100u);
  v4 = AcpiEvaluateMethod(a1, 1129336927, 0, (unsigned int)&P, (__int64)&v12);
  v5 = P;
  v6 = v4;
  if ( v4 < 0 )
    goto LABEL_10;
  if ( !v12 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_19:
      v6 = -1073741275;
      goto LABEL_10;
    }
    v11 = 33;
LABEL_18:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v11,
      (__int64)&WPP_0a302e3fd2f833bdae43f30252de1cf8_Traceguids);
    goto LABEL_19;
  }
  if ( *((_DWORD *)P + 2) != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x22u,
        (__int64)&WPP_0a302e3fd2f833bdae43f30252de1cf8_Traceguids,
        *((_DWORD *)P + 2));
    goto LABEL_19;
  }
  if ( *((_WORD *)P + 6) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_19;
    v11 = 35;
    goto LABEL_18;
  }
  if ( (*(_DWORD *)(a1 + 272) & 0x40000000) != 0 )
    v7 = *(unsigned int **)(a1 + 440);
  else
    v7 = *(unsigned int **)(a1 + 432);
  v8 = *v7;
  v6 = 0;
  v9 = *v7 - 1;
  if ( *((_DWORD *)P + 4) < v8 )
    v9 = *((_DWORD *)P + 4);
  *a2 = v9;
LABEL_10:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v6 < 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1096), 0x100u);
  return (unsigned int)v6;
}
