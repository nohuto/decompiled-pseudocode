__int64 __fastcall xxxUserSetDisplayConfig(
        unsigned int a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        char a6,
        __int64 a7,
        bool *a8,
        _BYTE *a9,
        __int64 a10,
        _DWORD *a11)
{
  unsigned int v12; // r13d
  __int64 v13; // rsi
  __int64 v14; // rbx
  struct tagDESKTOP *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r15
  PVOID CurrentProcess; // rax
  __int64 v22; // rdx
  int v23; // r15d
  unsigned int v24; // esi
  unsigned int v25; // r14d
  signed int v26; // ebx
  struct tagMONITOR *CachedMonitor; // rax
  int v28; // ecx
  __int64 v29; // rax
  int v30; // eax
  _DWORD *v31; // r14
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  _QWORD *v36; // rcx
  _DWORD *v38; // rax
  char v39; // dl
  _DWORD *v40; // rcx
  struct tagDESKTOP *v41; // rbx
  struct _UNICODE_STRING *v42; // rbx
  __int64 v43; // rdx
  struct _UNICODE_STRING *v44; // rax
  unsigned int v45; // r9d
  __int64 v46; // rax
  __int64 i; // rdx
  char v48; // [rsp+88h] [rbp-19h] BYREF
  _BYTE v49[3]; // [rsp+89h] [rbp-18h] BYREF
  int v50; // [rsp+8Ch] [rbp-15h] BYREF
  int v51; // [rsp+90h] [rbp-11h] BYREF
  __int64 v52; // [rsp+98h] [rbp-9h]
  _QWORD v53[7]; // [rsp+A0h] [rbp-1h] BYREF

  v53[0] = 0LL;
  v51 = 0;
  v12 = a3;
  v48 = 0;
  v13 = (__int64)a2;
  v49[0] = 0;
  v50 = 0;
  v14 = MEMORY[0xFFFFF78000000320];
  v15 = (struct tagDESKTOP *)a5;
  v20 = v14 * KeQueryTimeIncrement();
  v52 = v20;
  if ( !a5 || (*(_DWORD *)(a5 + 48) & 8) != 0 )
    v15 = (struct tagDESKTOP *)*((_QWORD *)gptiCurrent + 57);
  CurrentProcess = (PVOID)PsGetCurrentProcess(v17, v16, v18, v19);
  v22 = 1LL;
  if ( CurrentProcess == gpepCSRSS || !a6 || (a4 & 0x10) != 0 )
  {
    if ( !v15 )
      v15 = grpdeskRitInput;
  }
  else
  {
    v41 = grpdeskRitInput;
    if ( gbDesktopLocked )
      v41 = (struct tagDESKTOP *)gspdeskShouldBeForeground;
    if ( v15 != v41 )
    {
      if ( v41 && ObQueryNameInfo(v41, 1LL) )
        v42 = (struct _UNICODE_STRING *)(ObQueryNameInfo(v41, v22) + 8);
      else
        v42 = 0LL;
      if ( v15 && ObQueryNameInfo(v15, v22) )
        v44 = (struct _UNICODE_STRING *)(ObQueryNameInfo(v15, v43) + 8);
      else
        v44 = 0LL;
      LogDiagSDCAccessDenied(v44, v42);
      v26 = -1073741790;
      v50 = 49;
      goto LABEL_42;
    }
  }
  v23 = v12 & 0x10000;
  if ( ((v12 & 0x10000) != 0) != (a7 != 0) )
  {
    v20 = v52;
    v26 = -1073741811;
    v50 = 1;
    goto LABEL_42;
  }
  v24 = a4 | 4;
  if ( !v23 )
    v24 = a4;
  v25 = a1;
  v26 = DrvSetDisplayConfigValidateParams(a1, (_DWORD)a2, v12, v24, a6);
  if ( v26 < 0 )
  {
    v13 = (__int64)a2;
    v20 = v52;
    v50 = 1;
    goto LABEL_43;
  }
  if ( v23 || gProtocolType && (v12 & 0x88F) == 0x88F || (v24 & 0xC01) != 0 )
    goto LABEL_13;
  v38 = DispBroker::DispBrokerClient::s_pSessionBroker;
  v39 = *((_BYTE *)DispBroker::DispBrokerClient::s_pSessionBroker + 8);
  v40 = (char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
  if ( !v39 )
    v40 = DispBroker::DispBrokerClient::s_pSessionBroker;
  if ( *v40 == 3 )
  {
    v45 = v24;
    v13 = (__int64)a2;
    v26 = xxxDispBrokerSetDisplayConfig(a1, a2, v12, v45, a6 != 0);
    goto LABEL_77;
  }
  if ( v39 )
    v38 = (char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
  if ( *v38 != 2 )
  {
LABEL_13:
    if ( (v12 & 0x80) == 0 )
      goto LABEL_25;
    if ( gbMDEVDisabled )
    {
      v50 = 27;
    }
    else
    {
      if ( (unsigned int)DrvQueryMDEVPowerState(*((_QWORD *)gpDispInfo + 2)) )
      {
        CachedMonitor = CreateCachedMonitor();
        v28 = v50;
        if ( !CachedMonitor )
          v28 = 53;
        v50 = v28;
        if ( qword_1C02D6B60 )
          qword_1C02D6B60(0LL);
        if ( qword_1C02D7168 )
          qword_1C02D7168();
        if ( qword_1C02D2EC8 && qword_1C02D7178 )
          qword_1C02D7178();
        if ( qword_1C02D6000 )
          qword_1C02D6000(*((_QWORD *)gpDispInfo + 5), 0LL, 0LL, 0LL);
LABEL_25:
        if ( v15 )
          v29 = ***((_QWORD ***)v15 + 1);
        else
          v29 = 0LL;
        v30 = DrvSetDisplayConfig(
                a1,
                (_DWORD)a2,
                a3,
                v24 | 0x140,
                v29,
                a6,
                a7,
                0LL,
                *((struct _MDEV **)gpDispInfo + 2),
                (__int64)v53,
                (__int64)&v51,
                (__int64)&v50,
                (__int64)&v48,
                (__int64)v49,
                a10,
                (__int64)a11);
        v26 = v30;
        if ( (v12 & 0x80) == 0 )
        {
LABEL_40:
          v12 = a3;
LABEL_41:
          v13 = (__int64)a2;
          v20 = v52;
LABEL_42:
          v25 = a1;
          goto LABEL_43;
        }
        if ( v30 < 0 )
        {
          if ( !v49[0]
            || v23
            || a7
            || (!v15 ? (v46 = 0LL) : (v46 = ***((_QWORD ***)v15 + 1)),
                v31 = a11,
                v30 = DrvSetDisplayConfig(
                        0,
                        0,
                        2447,
                        258,
                        v46,
                        0,
                        0LL,
                        0LL,
                        *((struct _MDEV **)gpDispInfo + 2),
                        (__int64)v53,
                        0LL,
                        0LL,
                        (__int64)&v48,
                        0LL,
                        a10,
                        (__int64)a11),
                v30 < 0) )
          {
            if ( !qword_1C02D6BC0 )
              goto LABEL_34;
            goto LABEL_101;
          }
        }
        else
        {
          v31 = a11;
        }
        v26 = v30;
        if ( (v24 & 0x200) != 0 )
        {
          *((_WORD *)gpsi + 3499) = *(_WORD *)(*(_QWORD *)(SGDGetSessionState() + 24) + 1248LL);
          ++*((_WORD *)gpsi + 3507);
          for ( i = gppiList; i; i = *(_QWORD *)(i + 368) )
            *(_WORD *)(i + 284) = *((_WORD *)gpsi + 3499);
        }
        TrackFullscreenMode(0);
        if ( !v48 )
        {
          v35 = v53[0];
          *((_QWORD *)gpDispInfo + 2) = v53[0];
          PowerDimUndimResend(v35, v32, v33, v34);
          v26 = xxxResetDisplayDevice(v15, 0LL, (v24 >> 4) & 1, v31);
          if ( v26 < 0 )
            v50 = 36;
          goto LABEL_34;
        }
        if ( (v24 & 4) != 0 )
          goto LABEL_34;
        if ( (unsigned int)SafeDisableMDEV(1LL) )
          SafeEnableMDEV(1LL);
        if ( !qword_1C02D6BC0 )
          goto LABEL_34;
LABEL_101:
        qword_1C02D6BC0();
LABEL_34:
        if ( v15 )
        {
          v36 = (_QWORD *)*((_QWORD *)v15 + 1);
          if ( (*(_DWORD *)(*v36 + 64LL) & 1) == 0 )
          {
            if ( qword_1C02D7068 )
              qword_1C02D7068(v36[3], 1LL, 66693LL);
          }
        }
        if ( qword_1C02D6B60 )
          qword_1C02D6B60(1LL);
        if ( qword_1C02D7188 )
          qword_1C02D7188();
        goto LABEL_40;
      }
      v50 = 28;
    }
    v26 = -1073741823;
    goto LABEL_41;
  }
  v13 = (__int64)a2;
  v26 = -1073741790;
LABEL_77:
  v20 = v52;
LABEL_43:
  if ( a8 )
    *a8 = (unsigned int)(v50 - 27) <= 1;
  if ( a9 )
    *a9 = v48;
  if ( v26 >= 0 && v50 == 29 )
    v26 = -1073741266;
  LogDiagSDC(v25, v13, v12, v26, v51, v50, v20, v48, a11);
  return (unsigned int)v26;
}
