/*
 * XREFs of HUBSM_RunStateMachine @ 0x1C000BDDC
 * Callers:
 *     HUBSM_EvtSmWorkItem @ 0x1C000B780 (HUBSM_EvtSmWorkItem.c)
 *     HUBSM_AddEvent @ 0x1C000B8CC (HUBSM_AddEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     HUBSM_FindAndSetTargetState @ 0x1C000A96C (HUBSM_FindAndSetTargetState.c)
 *     HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1C000AF68 (HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState.c)
 *     HUBMISC_DbgBreak @ 0x1C0032F4C (HUBMISC_DbgBreak.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

KIRQL __fastcall HUBSM_RunStateMachine(__int64 a1, int a2, KIRQL *a3, char a4)
{
  unsigned int v4; // esi
  KSPIN_LOCK *v5; // r12
  int *v6; // r14
  char v7; // r15
  __int64 i; // rdx
  __int64 v12; // rcx
  unsigned __int8 v13; // r8
  unsigned int v14; // ebx
  char v15; // r9
  int v16; // r10d
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // r14
  KIRQL v22; // al
  __int64 v23; // r14
  KIRQL v24; // si
  __int64 v25; // rax
  int v26; // r8d
  volatile signed __int32 *v27; // rdi
  __int64 j; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  KIRQL result; // al
  KIRQL v33; // cl
  KIRQL v34; // r9
  KIRQL v35; // r8
  KIRQL v36; // dl
  bool v37; // zf
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // [rsp+20h] [rbp-68h]
  unsigned int v42; // [rsp+90h] [rbp+8h]
  char v43; // [rsp+98h] [rbp+10h] BYREF
  char v44; // [rsp+A8h] [rbp+20h]

  v44 = a4;
  v4 = 0;
  v5 = (KSPIN_LOCK *)(a1 + 840);
  v43 = 0;
  v6 = (int *)(a1 + 984);
  v7 = a4;
  while ( 1 )
  {
    if ( a2 == 1000 )
    {
      v6 = (int *)(a1 + 984);
      for ( i = *(unsigned int *)(a1 + 880); ; i = (unsigned int)(i - 1) )
      {
        v12 = *(_QWORD *)(*(_QWORD *)(a1 + 976)
                        + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4 * i + 852) - *(_DWORD *)(a1 + 984)));
        if ( !(_DWORD)i || (*(_DWORD *)(v12 + 16) & 4) == 0 )
          break;
      }
      v13 = *(_BYTE *)(a1 + 948);
      v14 = 1000;
      v15 = *(_BYTE *)(a1 + 949);
      LOBYTE(i) = v13;
      v16 = *(_DWORD *)(v12 + 16);
      if ( v13 != v15 )
      {
        while ( 1 )
        {
          v17 = *(_DWORD *)(a1 + 4LL * (unsigned __int8)i + 884) & 3;
          if ( !v17 )
            break;
          if ( (v17 != 2 || (v16 & 1) != 0) && (v17 != 3 || (v16 & 2) == 0) )
          {
            LOBYTE(i) = (i + 1) & 0xF;
            if ( (_BYTE)i != v15 )
              continue;
          }
          if ( (_BYTE)i == v15 )
            goto LABEL_19;
          break;
        }
        v14 = *(_DWORD *)(a1 + 4LL * (unsigned __int8)i + 884);
        while ( (_BYTE)i != v13 )
        {
          v18 = (unsigned __int8)i;
          LOBYTE(i) = (i - 1) & 0xF;
          *(_DWORD *)(a1 + 4 * v18 + 884) = *(_DWORD *)(a1 + 4LL * (((_BYTE)v18 - 1) & 0xF) + 884);
          v13 = *(_BYTE *)(a1 + 948);
        }
        *(_DWORD *)(a1 + 4LL * v13 + 884) = 1000;
        *(_BYTE *)(a1 + 948) = (*(_BYTE *)(a1 + 948) + 1) & 0xF;
      }
LABEL_19:
      if ( v14 == 1000 )
      {
        v39 = *(_QWORD *)(a1 + 960);
        *(_BYTE *)(a1 + 848) = 0;
        v40 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                WdfDriverGlobals,
                v39);
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
                 WdfDriverGlobals,
                 v40,
                 "State Machine Tag",
                 1520LL,
                 "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\smengine.c");
      }
      v42 = v4 + 1;
      if ( v4 == -2 )
        HUBMISC_DbgBreak("State machine running for too long", i);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 840), *a3);
      if ( v14 > 0xFC7 )
      {
        if ( v14 != 4043 && v14 != 4047 )
        {
          if ( v14 != 4067 && v14 != 4071 && v14 != 4099 )
            goto LABEL_36;
          v19 = *(_QWORD *)(a1 + 960);
          if ( (*(_DWORD *)(v19 + 1636) & 0x80u) == 0 )
            goto LABEL_36;
          v21 = a1 + 1012;
          *(_OWORD *)(a1 + 1012) = *(_OWORD *)(v19 + 2176);
          goto LABEL_31;
        }
      }
      else if ( v14 != 4039 )
      {
        if ( v14 == 3006 )
        {
          v23 = *(_QWORD *)(a1 + 960);
          if ( (*(_DWORD *)(v23 + 1336) & 2) != 0 )
          {
            if ( (*(_DWORD *)(*(_QWORD *)(v23 + 1328) + 1636LL) & 0x400) != 0 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_(
                  *(_QWORD *)(v23 + 1432),
                  4u,
                  5u,
                  0xEu,
                  (__int64)&WPP_0cc843adf6153b7d46bf14e0910357bd_Traceguids);
              _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v23 + 1328) + 1636LL), 0xFFFFFBFF);
            }
          }
          else
          {
            v24 = KfRaiseIrql(2u);
            v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
                    WdfDriverGlobals,
                    *(_QWORD *)(v23 + 1328));
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v25);
            KeLowerIrql(v24);
            *(_QWORD *)(v23 + 1328) = 0LL;
          }
          _InterlockedAnd((volatile signed __int32 *)(v23 + 1336), 0xFFFFFFFE);
          if ( *(_DWORD *)(v23 + 1424) != 4 )
            *(_DWORD *)(v23 + 1424) = 0;
          goto LABEL_35;
        }
        if ( v14 != 4023 && v14 != 4027 && v14 != 4031 && v14 != 4035 )
          goto LABEL_36;
      }
      v19 = *(_QWORD *)(a1 + 960);
      v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
              WdfDriverGlobals,
              *(_QWORD *)(v19 + 456));
      if ( !*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
      {
LABEL_36:
        v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 840));
        v4 = v42;
        v7 = v44;
        *a3 = v22;
        goto LABEL_53;
      }
      v21 = a1 + 1012;
      if ( (*(int (__fastcall **)(__int64, __int64))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(v20, a1 + 1012) < 0 )
      {
LABEL_35:
        v6 = (int *)(a1 + 984);
        goto LABEL_36;
      }
LABEL_31:
      if ( g_IoSetActivityIdIrp )
      {
        g_IoSetActivityIdIrp(*(_QWORD *)(v19 + 264), v21);
        if ( g_IoSetActivityIdIrp )
          g_IoSetActivityIdIrp(*(_QWORD *)(v19 + 424), v21);
      }
      _InterlockedOr((volatile signed __int32 *)(v19 + 1636), 0x40u);
      goto LABEL_35;
    }
    v14 = a2;
    a2 = 1000;
LABEL_53:
    KeReleaseSpinLock(v5, *a3);
    if ( !HUBSM_FindAndSetTargetState(a1, v14, &v43) )
    {
      v6 = (int *)(a1 + 984);
      goto LABEL_85;
    }
    v26 = *v6;
    if ( *v6 == 3000 || v26 == 5000 )
    {
      v27 = *(volatile signed __int32 **)(a1 + 960);
      for ( j = *(unsigned int *)(a1 + 880); ; j = (unsigned int)(j - 1) )
      {
        v29 = *(_QWORD *)(*(_QWORD *)(a1 + 976) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4 * j + 852) - v26));
        if ( !(_DWORD)j || (*(_DWORD *)(v29 + 16) & 4) == 0 )
          break;
      }
      if ( (*(_BYTE *)(v29 + 16) & 0x20) != 0 )
      {
        if ( (v27[66] & 0x20) != 0 )
        {
          v30 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
                  WdfDriverGlobals,
                  *(_QWORD *)v27);
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3512))(
            WdfDriverGlobals,
            v30,
            0LL,
            1588LL,
            "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\smengine.c");
          _InterlockedAnd(v27 + 66, 0xFFFFFFDF);
        }
      }
      else if ( (*(_DWORD *)(*(_QWORD *)v27 + 40LL) & 0x20000) != 0 && (v27[66] & 0x20) == 0 )
      {
        v31 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1632))(WdfDriverGlobals);
        LODWORD(v41) = 1603;
        if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3504))(
               WdfDriverGlobals,
               v31,
               0LL,
               0LL,
               v41,
               "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\smengine.c") >= 0 )
          _InterlockedOr(v27 + 66, 0x20u);
      }
    }
    if ( v43 )
    {
      v43 = 0;
      if ( v14 != 1002 && !(unsigned __int8)ExCancelTimer(*(_QWORD *)(a1 + 1040), 0LL) )
      {
        result = KeAcquireSpinLockRaiseToDpc(v5);
        v33 = *(_BYTE *)(a1 + 948);
        v34 = result;
        v35 = *(_BYTE *)(a1 + 949);
        v36 = v33;
        v37 = v33 == v35;
        *a3 = result;
        while ( 1 )
        {
          if ( v37 )
          {
            *(_BYTE *)(a1 + 1048) = 1;
            return result;
          }
          result = v36;
          if ( *(_DWORD *)(a1 + 4LL * v36 + 884) == 1002 )
            break;
          v36 = (v36 + 1) & 0xF;
          v37 = v36 == v35;
        }
        if ( v36 != v35 )
        {
          while ( v36 != v33 )
          {
            v38 = v36;
            v36 = (v36 - 1) & 0xF;
            *(_DWORD *)(a1 + 4 * v38 + 884) = *(_DWORD *)(a1 + 4LL * (((_BYTE)v38 - 1) & 0xF) + 884);
            v33 = *(_BYTE *)(a1 + 948);
          }
          *(_DWORD *)(a1 + 4LL * v33 + 884) = 1000;
          *(_BYTE *)(a1 + 948) = (*(_BYTE *)(a1 + 948) + 1) & 0xF;
        }
        KeReleaseSpinLock(v5, v34);
      }
    }
    if ( !v7 && v4 > 0x64 )
      break;
    a2 = HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState(a1);
    if ( a2 == 1003 )
      goto LABEL_89;
LABEL_85:
    *a3 = KeAcquireSpinLockRaiseToDpc(v5);
  }
  (*(void (__fastcall **)(_QWORD, void (__fastcall *)(__int64, __int64), __int64, _QWORD))(*(_QWORD *)(a1 + 1000) + 512LL))(
    *(_QWORD *)(a1 + 992),
    HUBSM_EvtSmWorkItem,
    a1,
    (unsigned int)(-(*(_BYTE *)(a1 + 1008) != 0) - 892338175));
LABEL_89:
  result = KeAcquireSpinLockRaiseToDpc(v5);
  *a3 = result;
  return result;
}
