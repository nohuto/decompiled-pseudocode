/*
 * XREFs of HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1C000AF68
 * Callers:
 *     HUBSM_EvtSmWorkItem @ 0x1C000B780 (HUBSM_EvtSmWorkItem.c)
 *     HUBSM_AddEvent @ 0x1C000B8CC (HUBSM_AddEvent.c)
 *     HUBSM_RunStateMachine @ 0x1C000BDDC (HUBSM_RunStateMachine.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     McTemplateK0ppqqqq_EtwWriteTransfer @ 0x1C000A448 (McTemplateK0ppqqqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qLLL @ 0x1C000A5F0 (WPP_RECORDER_SF_qLLL.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState(__int64 a1)
{
  int v1; // r13d
  bool *v2; // r14
  __int64 v3; // rbp
  __int64 v5; // r12
  __int64 v6; // r15
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  _DWORD *v11; // rax
  KSPIN_LOCK *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  KIRQL v16; // r14
  int v17; // edi
  __int64 v18; // rbp
  unsigned int *v19; // rax
  char v20; // r9
  unsigned int v21; // ebx
  unsigned __int8 v22; // dl
  char v23; // al
  __int64 v24; // rax
  int v25; // ebx
  int v26; // eax
  unsigned __int16 v27; // r9
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rax
  unsigned int v31; // ebx
  unsigned int v32; // ebx
  unsigned int v33; // ebx
  unsigned int v34; // ebx
  __int64 v35; // rbx
  __int64 v36; // rcx
  __int64 v37; // rbp
  __int64 v38; // rbp
  KIRQL v39; // bl
  __int64 v40; // rax
  unsigned int v41; // ebx
  unsigned int v42; // ebx
  unsigned int v43; // ebx
  unsigned int v44; // ebx
  int v45; // eax
  int v46; // ebx
  unsigned __int16 v47; // r9
  __int64 v48; // rax
  unsigned int v49; // edi
  int v51; // [rsp+20h] [rbp-78h]
  __int64 v52; // [rsp+28h] [rbp-70h]
  __int64 v53; // [rsp+30h] [rbp-68h]
  __int64 v54; // [rsp+38h] [rbp-60h]
  __int64 v55; // [rsp+40h] [rbp-58h]
  int v56; // [rsp+A0h] [rbp+8h]
  int v57; // [rsp+A8h] [rbp+10h]
  __int64 v58; // [rsp+B8h] [rbp+20h]

  v1 = *(_DWORD *)(a1 + 984);
  v2 = (bool *)(a1 + 1050);
  v3 = *(_QWORD *)(a1 + 976);
  v5 = *(unsigned int *)(a1 + 880);
  v58 = v3;
  v6 = *(_QWORD *)(v3 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4 * v5 + 852) - v1));
  if ( (*(_DWORD *)(v6 + 16) & 0x80u) != 0 )
    *v2 = !*v2;
  if ( *v2 || (*(_DWORD *)(v6 + 16) & 0x10) != 0 && KeGetCurrentIrql() )
  {
LABEL_98:
    (*(void (__fastcall **)(_QWORD, __int64 (__fastcall *)(), __int64, _QWORD))(*(_QWORD *)(a1 + 1000) + 512LL))(
      *(_QWORD *)(a1 + 992),
      HUBSM_EvtSmWorkItem,
      a1,
      (unsigned int)(-(*(_BYTE *)(a1 + 1008) != 0) - 892338175));
    return 1003;
  }
  v7 = (*(__int64 (__fastcall **)(__int64))(v6 + 8))(a1);
  v8 = *(_QWORD *)(v6 + 24);
  v57 = v7;
  if ( v8 )
  {
    while ( 1 )
    {
      v9 = 0LL;
      if ( *(_DWORD *)(v8 + 4) == 1002 )
        goto LABEL_11;
      v10 = 0LL;
      v11 = (_DWORD *)v8;
      while ( (*(_DWORD *)(a1 + 952) & *v11) != *(_DWORD *)(a1 + 952) )
      {
        v9 = (unsigned int)(v9 + 1);
        v10 = (unsigned int)v9;
        v11 = (_DWORD *)(v8 + 8 * v9);
        if ( v11[1] == 1002 )
          goto LABEL_11;
      }
      v25 = *(_DWORD *)(v8 + 8 * v10 + 4);
      if ( v25 == 1002 )
      {
LABEL_11:
        v57 = 1001;
        goto LABEL_12;
      }
      v5 = (unsigned int)(v5 + 1);
      *(_DWORD *)(a1 + 4 * v5 + 852) = v25;
      v26 = *(_DWORD *)(a1 + 984);
      *(_DWORD *)(a1 + 880) = v5;
      if ( v26 == 2000 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_33;
        v27 = 16;
        goto LABEL_32;
      }
      if ( v26 == 3000 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_33;
        v27 = 17;
        goto LABEL_32;
      }
      if ( v26 == 4000 )
        break;
      if ( v26 == 5000 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v27 = 18;
LABEL_32:
        v52 = *(_QWORD *)(a1 + 960);
        WPP_RECORDER_SF_qLLL(v8, v10, v9, v27, v51);
      }
LABEL_33:
      *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 4) = v25;
      *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 8) = v5;
      *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832)) = 1000;
      *(_BYTE *)(a1 + 832) = (*(_BYTE *)(a1 + 832) + 1) & 0x3F;
      if ( SBYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
      {
        LODWORD(v55) = v5;
        v28 = (unsigned int)(v25 - *(_DWORD *)(a1 + 984));
        LODWORD(v54) = 1000;
        LODWORD(v53) = **(_DWORD **)(*(_QWORD *)(a1 + 976) + 8 * v28);
        LODWORD(v52) = *(_DWORD *)(a1 + 984);
        McTemplateK0ppqqqq_EtwWriteTransfer(
          v28,
          &USBHUB3_ETW_EVENT_STATE_MACHINE,
          (const GUID *)(a1 + 1012),
          *(_QWORD *)(a1 + 1032),
          *(_QWORD *)(a1 + 960),
          v52,
          v53,
          v54,
          v55);
      }
      v6 = *(_QWORD *)(v3 + 8LL * (unsigned int)(v25 - v1));
      if ( (*(_DWORD *)(v6 + 16) & 0x80u) != 0 )
        *v2 = !*v2;
      if ( *v2 || (*(_DWORD *)(v6 + 16) & 0x10) != 0 && KeGetCurrentIrql() )
        goto LABEL_98;
      v29 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v6 + 8))(a1, v10, v9);
      v8 = *(_QWORD *)(v6 + 24);
      v57 = v29;
      if ( !v8 )
        goto LABEL_12;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_33;
    v27 = 15;
    goto LABEL_32;
  }
LABEL_12:
  v12 = (KSPIN_LOCK *)(a1 + 840);
  v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 840));
  v17 = v1;
  while ( 2 )
  {
    LODWORD(v18) = 0;
    v56 = 0;
    if ( *(_DWORD *)(v6 + 32) == 1000 )
      goto LABEL_80;
    v19 = (unsigned int *)(v6 + 32);
    while ( v19[1] == 1000 )
    {
      LOBYTE(v14) = *(_BYTE *)(a1 + 948);
      v20 = 0;
      v21 = *v19;
      v22 = v14;
      v23 = *(_BYTE *)(a1 + 949);
      if ( (_BYTE)v14 != v23 )
      {
        do
        {
          v15 = *(unsigned int *)(a1 + 4LL * v22 + 884);
          if ( (_DWORD)v15 == v21 )
          {
            v20 = 1;
          }
          else
          {
            v24 = (unsigned __int8)v14;
            LOBYTE(v14) = (v14 + 1) & 0xF;
            *(_DWORD *)(a1 + 4 * v24 + 884) = v15;
          }
          v23 = *(_BYTE *)(a1 + 949);
          v22 = (v22 + 1) & 0xF;
        }
        while ( v22 != v23 );
      }
      LOBYTE(v13) = v14;
      if ( (_BYTE)v14 != v23 )
      {
        do
        {
          v30 = v13 & 0xF;
          LOBYTE(v13) = (v13 + 1) & 0xF;
          *(_DWORD *)(a1 + 4 * v30 + 884) = 1000;
        }
        while ( (_BYTE)v13 != *(_BYTE *)(a1 + 949) );
      }
      *(_BYTE *)(a1 + 949) = v14;
      if ( !v20 )
      {
        v12 = (KSPIN_LOCK *)(a1 + 840);
        goto LABEL_78;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 840), v16);
      if ( v21 > 0xFC7 )
      {
        v41 = v21 - 4043;
        if ( v41 )
        {
          v42 = v41 - 4;
          if ( v42 )
          {
            v43 = v42 - 20;
            if ( v43 )
            {
              v44 = v43 - 4;
              if ( v44 )
              {
                if ( v44 != 28 )
                  goto LABEL_61;
              }
            }
            v35 = *(_QWORD *)(a1 + 960);
            if ( (*(_DWORD *)(v35 + 1636) & 0x80u) == 0 )
              goto LABEL_61;
            v37 = a1 + 1012;
            *(_OWORD *)(a1 + 1012) = *(_OWORD *)(v35 + 2176);
LABEL_56:
            if ( g_IoSetActivityIdIrp )
            {
              g_IoSetActivityIdIrp(*(_QWORD *)(v35 + 264), v37);
              if ( g_IoSetActivityIdIrp )
                g_IoSetActivityIdIrp(*(_QWORD *)(v35 + 424), v37);
            }
            _InterlockedOr((volatile signed __int32 *)(v35 + 1636), 0x40u);
LABEL_60:
            LODWORD(v18) = v56;
            goto LABEL_61;
          }
        }
      }
      else if ( v21 != 4039 )
      {
        v31 = v21 - 3006;
        if ( !v31 )
        {
          v38 = *(_QWORD *)(a1 + 960);
          if ( (*(_DWORD *)(v38 + 1336) & 2) != 0 )
          {
            if ( (*(_DWORD *)(*(_QWORD *)(v38 + 1328) + 1636LL) & 0x400) != 0 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_(
                  *(_QWORD *)(v38 + 1432),
                  4u,
                  5u,
                  0xEu,
                  (__int64)&WPP_0cc843adf6153b7d46bf14e0910357bd_Traceguids);
              _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v38 + 1328) + 1636LL), 0xFFFFFBFF);
            }
          }
          else
          {
            v39 = KfRaiseIrql(2u);
            v40 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
                    WdfDriverGlobals,
                    *(_QWORD *)(v38 + 1328));
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v40);
            KeLowerIrql(v39);
            *(_QWORD *)(v38 + 1328) = 0LL;
          }
          _InterlockedAnd((volatile signed __int32 *)(v38 + 1336), 0xFFFFFFFE);
          if ( *(_DWORD *)(v38 + 1424) != 4 )
            *(_DWORD *)(v38 + 1424) = 0;
          goto LABEL_60;
        }
        v32 = v31 - 1017;
        if ( v32 )
        {
          v33 = v32 - 4;
          if ( v33 )
          {
            v34 = v33 - 4;
            if ( v34 )
            {
              if ( v34 != 4 )
                goto LABEL_61;
            }
          }
        }
      }
      v35 = *(_QWORD *)(a1 + 960);
      v36 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
              WdfDriverGlobals,
              *(_QWORD *)(v35 + 456));
      if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
      {
        v37 = a1 + 1012;
        if ( (*(int (__fastcall **)(__int64, __int64))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(v36, a1 + 1012) >= 0 )
          goto LABEL_56;
        goto LABEL_60;
      }
LABEL_61:
      v12 = (KSPIN_LOCK *)(a1 + 840);
      v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 840));
LABEL_78:
      v18 = (unsigned int)(v18 + 1);
      v56 = v18;
      v19 = (unsigned int *)(v6 + 32 + 8 * v18);
      if ( *v19 == 1000 )
        break;
    }
    v17 = v1;
LABEL_80:
    if ( (*(_DWORD *)(v6 + 16) & 8) != 0 )
    {
      v45 = *(_DWORD *)(a1 + 984);
      v5 = (unsigned int)(v5 - 1);
      v46 = *(_DWORD *)(a1 + 4 * v5 + 852);
      switch ( v45 )
      {
        case 2000:
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_94;
          v47 = 16;
          break;
        case 3000:
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_94;
          v47 = 17;
          break;
        case 4000:
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_94;
          v47 = 15;
          break;
        default:
          if ( v45 == 5000 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v47 = 18;
            break;
          }
LABEL_94:
          *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 4) = v46;
          *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 8) = v5;
          v48 = *(unsigned __int8 *)(a1 + 832);
          *(_DWORD *)(a1 + 12 * v48) = 1000;
          *(_BYTE *)(a1 + 832) = (*(_BYTE *)(a1 + 832) + 1) & 0x3F;
          if ( SBYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
          {
            LODWORD(v55) = v5;
            LODWORD(v54) = 1000;
            LODWORD(v53) = **(_DWORD **)(*(_QWORD *)(a1 + 976) + 8LL * (unsigned int)(v46 - *(_DWORD *)(a1 + 984)));
            LODWORD(v52) = *(_DWORD *)(a1 + 984);
            McTemplateK0ppqqqq_EtwWriteTransfer(
              3 * v48,
              &USBHUB3_ETW_EVENT_STATE_MACHINE,
              (const GUID *)(a1 + 1012),
              *(_QWORD *)(a1 + 1032),
              *(_QWORD *)(a1 + 960),
              v52,
              v53,
              v54,
              v55);
          }
          v12 = (KSPIN_LOCK *)(a1 + 840);
          v14 = v58;
          v6 = *(_QWORD *)(v58 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4 * v5 + 852) - v17));
          continue;
      }
      v52 = *(_QWORD *)(a1 + 960);
      WPP_RECORDER_SF_qLLL(v14, v13, v15, v47, v51);
      goto LABEL_94;
    }
    break;
  }
  KeReleaseSpinLock(v12, v16);
  v49 = v57;
  *(_DWORD *)(a1 + 880) = v5;
  return v49;
}
