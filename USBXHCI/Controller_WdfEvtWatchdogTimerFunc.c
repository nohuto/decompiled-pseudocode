KIRQL __fastcall Controller_WdfEvtWatchdogTimerFunc(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  _QWORD *v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // r12d
  int *v7; // rdx
  int v8; // eax
  int v9; // edx
  int v10; // r8d
  __int64 v11; // rdi
  unsigned int v12; // r15d
  unsigned int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // r12
  __int64 v16; // r13
  char v17; // r14
  int *v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rbp
  __int64 v21; // rsi
  int v22; // edx
  int v23; // r8d
  int v24; // r9d
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rbx
  char v28; // si
  int v29; // edx
  int v30; // r8d
  int v31; // r9d
  int v32; // edx
  __int64 v33; // r9
  __int16 v34; // ax
  __int64 v35; // rbx
  unsigned int v36; // eax
  int v37; // ecx
  __int64 v38; // rbx
  char v39; // cl
  unsigned __int32 v40; // ecx
  int v41; // eax
  __int64 v42; // rsi
  int v43; // edx
  int v44; // r8d
  int v45; // r9d
  __int64 v46; // rdx
  __int64 v47; // rdi
  __int64 *v48; // rbx
  unsigned int v49; // r15d
  unsigned int v50; // eax
  unsigned int v51; // edx
  __int64 *v52; // rax
  __int64 *v53; // r8
  __int64 **v54; // rcx
  _QWORD *v55; // rax
  __int64 v56; // r8
  _QWORD *v57; // rcx
  __int64 *v58; // rcx
  __int64 **v59; // rax
  unsigned int v60; // r8d
  KIRQL v61; // dl
  KSPIN_LOCK *v62; // rcx
  KIRQL result; // al
  int v64; // [rsp+20h] [rbp-78h]
  int v65; // [rsp+40h] [rbp-58h] BYREF
  int v66; // [rsp+44h] [rbp-54h] BYREF
  unsigned int v67; // [rsp+48h] [rbp-50h]
  __int64 v68; // [rsp+50h] [rbp-48h]
  int v69[2]; // [rsp+58h] [rbp-40h]
  char v70; // [rsp+A8h] [rbp+10h]
  char v71; // [rsp+B0h] [rbp+18h]
  int v72; // [rsp+B8h] [rbp+20h] BYREF

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2568))(WdfDriverGlobals, a1);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         v2,
         off_1C0063428);
  v68 = v3;
  ++*(_DWORD *)(v3 + 400);
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                   WdfDriverGlobals,
                   a1,
                   off_1C0063068);
  if ( (__int64)(MEMORY[0xFFFFF78000000014] - *v4) < 864000000000LL )
  {
    v71 = 0;
  }
  else
  {
    v71 = 1;
    *v4 = MEMORY[0xFFFFF78000000014];
  }
  v5 = *(_QWORD *)(v3 + 88);
  v6 = 0;
  v7 = (int *)(*(_QWORD *)(v5 + 32) + 4LL);
  if ( *(_BYTE *)(*(_QWORD *)(v5 + 8) + 601LL) )
  {
    v65 = 0;
    Register_ReadSecureMmio(v5, (int)v7, 2, 1, &v65);
    v8 = v65;
  }
  else
  {
    v8 = *v7;
  }
  if ( v8 == -1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 3;
      WPP_RECORDER_SF_(
        *(_QWORD *)(v3 + 72),
        (_DWORD)v7,
        4,
        273,
        (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
    }
    LOBYTE(v7) = 1;
    Controller_SetControllerGone(v3, v7);
    goto LABEL_20;
  }
  if ( (v8 & 4) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 1;
      WPP_RECORDER_SF_D(
        *(_QWORD *)(v3 + 72),
        (_DWORD)v7,
        4,
        274,
        (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
        v8);
    }
    Controller_HwVerifierBreakIfEnabled(v3, 0, 0, 2, (__int64)"Controller reported Host System Error", 0LL, 0LL);
    v10 = 4097;
LABEL_19:
    Controller_ReportFatalErrorEx(v3, 2, v10, 0, 0LL, 0LL, 0LL, 0LL);
LABEL_20:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 1;
      WPP_RECORDER_SF_(*(_QWORD *)(v3 + 72), v9, 4, 172, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
    }
    goto LABEL_139;
  }
  if ( (v8 & 0x1000) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 1;
      WPP_RECORDER_SF_D(
        *(_QWORD *)(v3 + 72),
        (_DWORD)v7,
        4,
        275,
        (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
        v8);
    }
    Controller_HwVerifierBreakIfEnabled(v3, 0, 0, 4, (__int64)"Controller reported Host Controller Error", 0LL, 0LL);
    v10 = 4098;
    goto LABEL_19;
  }
  v11 = *(_QWORD *)(v3 + 152);
  v72 = 0;
  v12 = 1;
  v70 = 0;
  v13 = *(_DWORD *)(v11 + 16);
  *(_QWORD *)v69 = *(_QWORD *)(*(_QWORD *)(v11 + 8) + 88LL);
  v67 = v13;
  if ( v13 )
  {
    while ( 1 )
    {
      v14 = v12 - 1;
      v15 = 120 * v14;
      v16 = 120 * v14 + *(_QWORD *)(v11 + 48);
      if ( *(_BYTE *)(v16 + 13) == 2 )
      {
LABEL_72:
        v39 = v70;
        goto LABEL_73;
      }
      v17 = 0;
      v18 = (int *)(*(_QWORD *)(v11 + 40) + 16 * v14);
      if ( KeGetCurrentIrql() == 2 )
      {
        v19 = *(_QWORD *)(v11 + 8);
        if ( *(_BYTE *)(v19 + 601) )
        {
          Controller_LowerAndTrackIrql(v19);
          v17 = 1;
        }
      }
      v20 = *(_QWORD *)(v11 + 48);
      v21 = *(_QWORD *)(v20 + v15 + 24);
      if ( *(_DWORD *)v21 == 1 )
      {
        if ( KeGetCurrentIrql() )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_sds(
              WPP_GLOBAL_Control->DeviceExtension,
              v22,
              v23,
              v24,
              v64,
              (__int64)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\dynamiclock.c",
              88,
              (__int64)"Code Path Requires Passive Level");
          if ( !KdRefreshDebuggerNotPresent() )
            __debugbreak();
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2504))(
          WdfDriverGlobals,
          *(_QWORD *)(v21 + 8),
          0LL);
      }
      else
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 2528))(
          WdfDriverGlobals,
          *(_QWORD *)(v21 + 8));
      }
      *(_BYTE *)(v20 + v15 + 32) = v17;
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v69 + 8LL) + 601LL) )
      {
        v66 = 0;
        Register_ReadSecureMmio(v69[0], (int)v18, 2, 1, &v66);
        v25 = v66;
      }
      else
      {
        v25 = *v18;
      }
      v72 = v25;
      v26 = *(_QWORD *)(v11 + 48);
      v27 = *(_QWORD *)(v15 + v26 + 24);
      v28 = *(_BYTE *)(v15 + v26 + 32);
      *(_BYTE *)(v15 + v26 + 32) = 0;
      if ( *(_DWORD *)v27 == 1 )
      {
        if ( KeGetCurrentIrql() )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_sds(
              WPP_GLOBAL_Control->DeviceExtension,
              v29,
              v30,
              v31,
              v64,
              (__int64)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\dynamiclock.c",
              107,
              (__int64)"Code Path Requires Passive Level");
          if ( !KdRefreshDebuggerNotPresent() )
            __debugbreak();
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 2512))(
          WdfDriverGlobals,
          *(_QWORD *)(v27 + 8));
      }
      else
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 2536))(
          WdfDriverGlobals,
          *(_QWORD *)(v27 + 8));
      }
      if ( v28 )
        Controller_RaiseAndTrackIrql(*(_QWORD *)(v11 + 8));
      v34 = v72;
      v35 = v15 + *(_QWORD *)(v11 + 48);
      if ( (v72 & 0x1E0) == 0x140 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v32) = 2;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(*(_QWORD *)(v11 + 8) + 72LL),
            v32,
            11,
            262,
            (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
            v72);
        }
        if ( (_mm_srli_si128(*(__m128i *)(*(_QWORD *)(v11 + 8) + 336LL), 8).m128i_u64[0] & 0x8000) != 0 )
          MicrosoftTelemetryAssertTriggeredMsgKM("Unexpected link state in COMPLIANCE_MODE when disabled in hardware");
        if ( ++*(_DWORD *)(v35 + 88) == 3 && !*(_BYTE *)(v35 + 96) )
        {
          Etw_ReportControllerHealthWithPortInfo(*(_QWORD *)(v11 + 8), v12, &v72, 0LL);
          *(_BYTE *)(v35 + 96) = 1;
        }
        v36 = *(_DWORD *)(v35 + 88);
        if ( v36 <= 0x18 )
        {
          v37 = 17043456;
          if ( _bittest(&v37, v36) )
            goto LABEL_68;
        }
        v34 = v72;
      }
      else if ( *(_DWORD *)(v35 + 88) )
      {
        LOBYTE(v33) = 1;
        Etw_ReportControllerHealthWithPortInfo(*(_QWORD *)(v11 + 8), v12, &v72, v33);
        *(_DWORD *)(v35 + 88) = 0;
        *(_BYTE *)(v35 + 96) = 0;
        *(_BYTE *)(v35 + 104) = 0;
        v34 = v72;
      }
      v38 = v15 + *(_QWORD *)(v11 + 48);
      if ( (v34 & 0x1E0) != 0xC0 || !*(_DWORD *)(v38 + 108) )
      {
        if ( *(_DWORD *)(v38 + 92) )
        {
          LOBYTE(v33) = 1;
          Etw_ReportControllerHealthWithPortInfo(*(_QWORD *)(v11 + 8), v12, &v72, v33);
          v39 = v70;
          v6 = 0;
          *(_DWORD *)(v38 + 92) = 0;
          *(_BYTE *)(v38 + 96) = 0;
          *(_BYTE *)(v38 + 104) = 0;
        }
        else
        {
          v39 = v70;
          v6 = 0;
        }
        goto LABEL_74;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v32) = 2;
        WPP_RECORDER_SF_D(
          *(_QWORD *)(*(_QWORD *)(v11 + 8) + 72LL),
          v32,
          11,
          263,
          (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
          v34);
      }
      ++*(_DWORD *)(v38 + 92);
      if ( !*(_BYTE *)(v38 + 96) )
      {
        Etw_ReportControllerHealthWithPortInfo(*(_QWORD *)(v11 + 8), v12, &v72, 0LL);
        *(_BYTE *)(v38 + 96) = 1;
      }
      if ( *(_DWORD *)(v38 + 92) > 3u )
        goto LABEL_72;
LABEL_68:
      v39 = 1;
      _InterlockedExchange((volatile __int32 *)(v16 + 100), 1);
      *(_BYTE *)(v16 + 104) = 1;
      v70 = 1;
LABEL_73:
      v6 = 0;
LABEL_74:
      if ( ++v12 > v67 )
      {
        if ( v39 == 1 )
          ((void (__fastcall *)(__int64, _QWORD))qword_1C0064810)(UcxDriverGlobals, *(_QWORD *)v11);
        v3 = v68;
        break;
      }
    }
  }
  if ( v71 && *(_BYTE *)(v3 + 472) )
  {
    Etw_ReportControllerHealthWithPortInfo(v3, 0LL, 0LL, 0LL);
    ++*(_DWORD *)(v3 + 564);
    *(_BYTE *)(v3 + 472) = 0;
  }
  v40 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 856), 0, 0);
  if ( !v40 || *(_DWORD *)(v3 + 400) % v40 )
  {
    v41 = *(_DWORD *)(v3 + 412) + 1;
    *(_DWORD *)(v3 + 412) = v41;
    if ( v41 == 60 )
    {
      *(_QWORD *)(v3 + 408) = 0LL;
      *(_DWORD *)(v3 + 404) = 0;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(*(_QWORD *)(v3 + 72), 4, 4, 176, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
    }
    v42 = *(_QWORD *)(v3 + 120);
    if ( v42 )
    {
      if ( *(_BYTE *)(*(_QWORD *)v42 + 601LL) && KeGetCurrentIrql() )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(
            WPP_GLOBAL_Control->DeviceExtension,
            v43,
            v44,
            v45,
            v64,
            (__int64)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\commonbuffer.c",
            147,
            (__int64)"Code Path Requires Passive Level");
        if ( !KdRefreshDebuggerNotPresent() )
          __debugbreak();
      }
      if ( !KeGetCurrentIrql() || *(_QWORD *)(v42 + 72) )
      {
        *(_BYTE *)(v42 + 113) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v42 + 104));
        v47 = v42 + 124;
        do
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(v46) = 5;
            WPP_RECORDER_SF_dd(
              *(_QWORD *)(*(_QWORD *)(v42 + 96) + 72LL),
              v46,
              8,
              25,
              (__int64)&WPP_eecfbef36d1a35cfffa7ec1ff8c060f3_Traceguids,
              v6,
              *(_DWORD *)(v47 + 24));
          }
          v48 = *(__int64 **)(v47 + 44);
          v49 = *(_DWORD *)(v47 + 16);
          if ( v48 != (__int64 *)(v47 + 44) )
          {
            while ( *(_DWORD *)(v47 + 24) > v49 )
            {
              if ( *((_BYTE *)v48 + 16) )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                  && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  LOBYTE(v46) = 5;
                  WPP_RECORDER_SF_q(
                    *(_QWORD *)(*(_QWORD *)(v42 + 96) + 72LL),
                    v46,
                    8,
                    22,
                    (__int64)&WPP_eecfbef36d1a35cfffa7ec1ff8c060f3_Traceguids,
                    (char)v48);
                }
                v50 = *(_DWORD *)v47;
                v51 = 0;
                if ( *(_DWORD *)v47 )
                {
                  while ( 1 )
                  {
                    v52 = &v48[11 * v51 + 4];
                    v53 = (__int64 *)*v52;
                    if ( *(__int64 **)(*v52 + 8) != v52 )
                      break;
                    v54 = (__int64 **)v52[1];
                    if ( *v54 != v52 )
                      break;
                    *v54 = v53;
                    v53[1] = (__int64)v54;
                    v52[1] = (__int64)v52;
                    *v52 = (__int64)v52;
                    v55 = v52 + 6;
                    v56 = *v55;
                    if ( *(_QWORD **)(*v55 + 8LL) != v55 )
                      break;
                    v57 = (_QWORD *)v55[1];
                    if ( (_QWORD *)*v57 != v55 )
                      break;
                    *v57 = v56;
                    ++v51;
                    *(_QWORD *)(v56 + 8) = v57;
                    v55[1] = v55;
                    *v55 = v55;
                    v50 = *(_DWORD *)v47;
                    if ( v51 >= *(_DWORD *)v47 )
                      goto LABEL_114;
                  }
LABEL_134:
                  __fastfail(3u);
                }
LABEL_114:
                *(_DWORD *)(v47 + 24) -= v50;
                *(_DWORD *)(v47 + 20) -= v50;
                v58 = (__int64 *)*v48;
                if ( *(__int64 **)(*v48 + 8) != v48 )
                  goto LABEL_134;
                v59 = (__int64 **)v48[1];
                if ( *v59 != v48 )
                  goto LABEL_134;
                *v59 = v58;
                v58[1] = (__int64)v59;
                v46 = *(_QWORD *)(v42 + 280);
                if ( *(_QWORD *)v46 != v42 + 272 )
                  goto LABEL_134;
                *v48 = v42 + 272;
                v48[1] = v46;
                *(_QWORD *)v46 = v48;
                *(_QWORD *)(v42 + 280) = v48;
                v48 = v58;
                ++*(_DWORD *)(v42 + 264);
              }
              else
              {
                v60 = *(_DWORD *)v47;
                LODWORD(v46) = 0;
                if ( *(_DWORD *)v47 )
                {
                  do
                  {
                    if ( v48[11 * (unsigned int)v46 + 13] )
                      break;
                    LODWORD(v46) = v46 + 1;
                  }
                  while ( (unsigned int)v46 < v60 );
                }
                if ( (_DWORD)v46 == v60 )
                {
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                    && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  {
                    LOBYTE(v46) = 5;
                    WPP_RECORDER_SF_q(
                      *(_QWORD *)(*(_QWORD *)(v42 + 96) + 72LL),
                      v46,
                      8,
                      23,
                      (__int64)&WPP_eecfbef36d1a35cfffa7ec1ff8c060f3_Traceguids,
                      (char)v48);
                  }
                  *((_BYTE *)v48 + 16) = 1;
                  --*(_DWORD *)(v42 + 292);
                }
                v48 = (__int64 *)*v48;
              }
              if ( v48 == (__int64 *)(v47 + 44) )
                break;
            }
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(v46) = 5;
            WPP_RECORDER_SF_dd(
              *(_QWORD *)(*(_QWORD *)(v42 + 96) + 72LL),
              v46,
              8,
              26,
              (__int64)&WPP_eecfbef36d1a35cfffa7ec1ff8c060f3_Traceguids,
              v6,
              *(_DWORD *)(v47 + 24));
          }
          ++v6;
          v47 += 64LL;
        }
        while ( v6 < 2 );
        v61 = *(_BYTE *)(v42 + 113);
        v62 = (KSPIN_LOCK *)(v42 + 104);
        if ( *(_QWORD *)(v42 + 272) == v42 + 272 )
        {
          KeReleaseSpinLock(v62, v61);
        }
        else
        {
          KeReleaseSpinLock(v62, v61);
          if ( KeGetCurrentIrql() )
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 3040))(
              WdfDriverGlobals,
              *(_QWORD *)(v42 + 72));
          else
            XilCoreCommonBuffer_FreeUnusedResources(v42 + 88);
        }
      }
    }
    v3 = v68;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(v3 + 72), 4, 4, 173, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
    Controller_ReportFatalErrorEx(v3, 2, 4159, 0, 0LL, 0LL, 0LL, 0LL);
  }
LABEL_139:
  result = KeGetCurrentIrql();
  if ( !result )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
             WdfDriverGlobals,
             *(_QWORD *)(v3 + 360),
             -50000000LL);
  return result;
}
