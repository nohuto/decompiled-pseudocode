/*
 * XREFs of CpcGuaranteedNotifyWorker @ 0x1C002188C
 * Callers:
 *     CpcNativeInterruptWorker @ 0x1C0021E40 (CpcNativeInterruptWorker.c)
 *     AcpiCppcGuaranteedNotifyWorker @ 0x1C0024970 (AcpiCppcGuaranteedNotifyWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E90 (__security_check_cookie.c)
 *     ReadGenAddrMaybeHiddenEx @ 0x1C0002E48 (ReadGenAddrMaybeHiddenEx.c)
 *     ProcLibTracePccCapChange @ 0x1C0003658 (ProcLibTracePccCapChange.c)
 *     WPP_RECORDER_SF_s @ 0x1C0004A80 (WPP_RECORDER_SF_s.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EAD0 (_guard_dispatch_icall_nop.c)
 *     ExecutePccCommand @ 0x1C0023FEC (ExecutePccCommand.c)
 *     StartPccCommand @ 0x1C002438C (StartPccCommand.c)
 *     ProcLibCapChange @ 0x1C0028C54 (ProcLibCapChange.c)
 */

__int64 __fastcall CpcGuaranteedNotifyWorker(__int64 a1, struct _IO_WORKITEM *a2, const char *a3)
{
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // rbp
  char v9; // si
  unsigned __int64 GenAddrMaybeHidden; // rbp
  unsigned __int64 v11; // rcx
  unsigned int v12; // esi
  struct _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-58h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+40h] [rbp-48h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( a2 )
    IoFreeWorkItem(a2);
  v5 = *(_QWORD *)(a1 + 64);
  result = *(unsigned int *)(v5 + 272);
  if ( (result & 0x8000000) != 0 )
  {
    v7 = *(_QWORD *)(v5 + 240);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 112);
      if ( *(_BYTE *)(v7 + 99) )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          qword_1C00133F8,
          0LL);
        if ( !*(_BYTE *)(v7 + 101)
          || (int)StartPccCommand(*(_QWORD *)(v5 + 248)) >= 0 && (int)ExecutePccCommand(*(_QWORD *)(v5 + 248), 0LL) >= 0 )
        {
          if ( *(_BYTE *)(v8 + 104) != 127 || *(_DWORD *)(v5 + 80) )
          {
            v9 = 0;
          }
          else
          {
            KeProcessorGroupAffinity(&Affinity, *(unsigned int *)(v5 + 56));
            KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
            v9 = 1;
          }
          GenAddrMaybeHidden = ReadGenAddrMaybeHiddenEx(v5, (_BYTE *)(v8 + 104));
          if ( v9 )
            KeRevertToUserGroupAffinityThread(&PreviousAffinity);
          v11 = *(_QWORD *)(v7 + 16);
          if ( GenAddrMaybeHidden > v11 )
          {
            GenAddrMaybeHidden = *(_QWORD *)(v7 + 16);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              WPP_RECORDER_SF_s(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                3u,
                1u,
                0x13u,
                (__int64)&WPP_afd74aa2afb53b4debe5468e509e74e6_Traceguids,
                a3);
              GenAddrMaybeHidden = *(_QWORD *)(v7 + 16);
            }
            v11 = GenAddrMaybeHidden;
          }
          if ( GenAddrMaybeHidden < *(_QWORD *)(v7 + 32) )
          {
            GenAddrMaybeHidden = *(_QWORD *)(v7 + 32);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              WPP_RECORDER_SF_s(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                3u,
                1u,
                0x14u,
                (__int64)&WPP_afd74aa2afb53b4debe5468e509e74e6_Traceguids,
                a3);
              v11 = *(_QWORD *)(v7 + 16);
              GenAddrMaybeHidden = *(_QWORD *)(v7 + 32);
            }
          }
          v12 = *(_DWORD *)(v7 + 80);
          *(_QWORD *)(v7 + 56) = GenAddrMaybeHidden;
          if ( (unsigned int)(100 * GenAddrMaybeHidden / v11) > v12 )
            v12 = 100 * GenAddrMaybeHidden / v11;
          *(_DWORD *)(v7 + 84) = v12;
          if ( v12 != *(_DWORD *)(v5 + 724) )
          {
            ProcLibCapChange(v5, *(unsigned int *)(v5 + 448), *(unsigned int *)(v5 + 496), v12);
            ((void (__fastcall *)(__int64))qword_1C00137D0)(v5);
          }
          ProcLibTracePccCapChange(v5, v12);
        }
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
                 WdfDriverGlobals,
                 qword_1C00133F8);
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    return WPP_RECORDER_SF_s(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             2u,
             1u,
             0x12u,
             (__int64)&WPP_afd74aa2afb53b4debe5468e509e74e6_Traceguids,
             a3);
  }
  return result;
}
