/*
 * XREFs of NtUserSystemParametersInfo @ 0x1C0135470
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceUIPISystemError @ 0x1C0007D70 (EtwTraceUIPISystemError.c)
 *     xxxSystemParametersInfo @ 0x1C000CD30 (xxxSystemParametersInfo.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C002A9C0 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32AllocPoolWithQuota @ 0x1C002AA40 (Win32AllocPoolWithQuota.c)
 *     EnterCrit @ 0x1C002FF70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 *     CheckAccess @ 0x1C00443E0 (CheckAccess.c)
 *     PushW32ThreadLock @ 0x1C00859F4 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0085CFC (PopAndFreeAlwaysW32ThreadLock.c)
 *     SetLastNtError @ 0x1C00CDE58 (SetLastNtError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00CF9C0 (memmove.c)
 */

__int64 __fastcall NtUserSystemParametersInfo(unsigned int a1, size_t Size, ULONG64 Address, char a4)
{
  __int64 v6; // r13
  unsigned int v8; // ebx
  struct tagTHREADINFO *v9; // rcx
  int v10; // eax
  __int64 v11; // rax
  bool v12; // zf
  unsigned int v13; // eax
  bool v14; // zf
  unsigned int v15; // eax
  bool v16; // zf
  unsigned int v17; // eax
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // edi
  bool v23; // zf
  unsigned int v24; // eax
  _OWORD *v25; // rax
  _OWORD *v26; // rdx
  unsigned __int64 v27; // rcx
  unsigned int v28; // eax
  int v29; // eax
  const void *v30; // r12
  size_t v31; // rbx
  ULONG64 v32; // rdx
  _BYTE **v33; // rcx
  signed __int64 v34; // rax
  void *v35; // r12
  int v36; // r15d
  __int64 v37; // xmm0_8
  _OWORD *v38; // r9
  ULONG64 v39; // rdx
  __int64 v40; // rax
  ULONG64 v41; // r8
  _BYTE **v42; // rcx
  __int64 v43; // rax
  _OWORD *v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rax
  _OWORD *v47; // rax
  __int64 v48; // rax
  __int64 v49; // r15
  _OWORD *v50; // rdx
  _DWORD *v51; // r12
  char *v52; // rcx
  volatile void *v53; // r15
  __int64 CurrentProcessWow64Process; // rax
  int v55; // eax
  __int64 v56; // rcx
  _OWORD *v58; // [rsp+30h] [rbp-318h]
  _DWORD *v59; // [rsp+38h] [rbp-310h]
  int v60; // [rsp+44h] [rbp-304h]
  void *v61; // [rsp+48h] [rbp-300h]
  int v62; // [rsp+50h] [rbp-2F8h]
  unsigned int v63[4]; // [rsp+70h] [rbp-2D8h] BYREF
  __int128 v64; // [rsp+80h] [rbp-2C8h]
  __int128 v65; // [rsp+90h] [rbp-2B8h] BYREF
  __int64 v66; // [rsp+A0h] [rbp-2A8h]
  __int128 v67; // [rsp+A8h] [rbp-2A0h] BYREF
  __int64 v68; // [rsp+B8h] [rbp-290h]
  __int128 v69; // [rsp+D0h] [rbp-278h]
  __int64 v70; // [rsp+E0h] [rbp-268h]
  _BYTE v71[608]; // [rsp+E8h] [rbp-260h] BYREF
  unsigned int v72; // [rsp+358h] [rbp+10h]
  unsigned int v73; // [rsp+368h] [rbp+20h]

  v72 = Size;
  v6 = (unsigned int)Size;
  v64 = 0LL;
  v8 = 0;
  v59 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v62 = 0;
  v63[0] = 0x2000;
  v63[1] = -1;
  EnterCrit(0, 1);
  v73 = a4 & 3;
  v9 = gptiCurrent;
  if ( (*((_DWORD *)gptiCurrent + 122) & 0x20000000) != 0 )
  {
    v9 = *(struct tagTHREADINFO **)(*((_QWORD *)gptiCurrent + 53) + 768LL);
    v10 = *((_DWORD *)v9 + 6) & 8;
  }
  else
  {
    v10 = 0;
  }
  if ( v10 || (v11 = PsGetCurrentProcessWin32Process(v9), !CheckAccess((unsigned int *)(v11 + 880), v63)) )
  {
    if ( a1 <= 0x95 )
    {
      if ( a1 != 149 )
      {
        switch ( a1 )
        {
          case 2u:
          case 4u:
          case 6u:
          case 0xBu:
          case 0xDu:
          case 0xFu:
          case 0x11u:
          case 0x13u:
          case 0x14u:
          case 0x15u:
          case 0x17u:
          case 0x18u:
          case 0x1Au:
          case 0x1Cu:
          case 0x1Du:
          case 0x1Eu:
          case 0x20u:
          case 0x21u:
          case 0x22u:
          case 0x24u:
          case 0x25u:
          case 0x2Au:
          case 0x2Cu:
          case 0x2Eu:
          case 0x2Fu:
          case 0x31u:
          case 0x33u:
          case 0x35u:
          case 0x37u:
          case 0x39u:
          case 0x3Bu:
          case 0x3Du:
          case 0x41u:
          case 0x43u:
          case 0x45u:
          case 0x47u:
          case 0x49u:
          case 0x4Bu:
          case 0x4Cu:
          case 0x4Du:
          case 0x4Eu:
          case 0x51u:
          case 0x52u:
          case 0x55u:
          case 0x56u:
          case 0x57u:
          case 0x58u:
          case 0x5Au:
          case 0x5Bu:
          case 0x5Du:
          case 0x60u:
          case 0x61u:
          case 0x63u:
          case 0x65u:
          case 0x67u:
          case 0x69u:
          case 0x6Bu:
          case 0x6Du:
          case 0x6Fu:
          case 0x71u:
          case 0x75u:
          case 0x77u:
          case 0x93u:
            goto LABEL_29;
          default:
            goto LABEL_55;
        }
      }
      goto LABEL_29;
    }
    if ( a1 > 0x101D )
    {
      if ( a1 > 0x2001 )
      {
        if ( a1 <= 0x2015 )
        {
          if ( a1 == 8213 || a1 == 8195 || a1 == 8197 )
            goto LABEL_29;
          v13 = a1 - 8201;
          v12 = a1 == 8201;
LABEL_18:
          if ( v12 )
            goto LABEL_29;
          v15 = v13 - 6;
          v14 = v15 == 0;
          goto LABEL_52;
        }
        v23 = a1 == 8215;
        v17 = a1 - 8215;
      }
      else
      {
        if ( a1 == 8193 )
          goto LABEL_29;
        if ( a1 <= 0x104B )
        {
          if ( a1 == 4171 || a1 == 4127 || a1 == 4135 || a1 == 4161 || a1 == 4163 )
            goto LABEL_29;
          v16 = a1 == 4169;
          goto LABEL_54;
        }
        v23 = a1 == 4173;
        v17 = a1 - 4173;
      }
    }
    else
    {
      if ( a1 == 4125 )
        goto LABEL_29;
      if ( a1 <= 0x1003 )
      {
        if ( a1 == 4099 )
          goto LABEL_29;
        if ( a1 <= 0xA6 )
        {
          if ( a1 == 166 || a1 == 151 || a1 == 153 )
            goto LABEL_29;
          v13 = a1 - 155;
          v12 = a1 == 155;
          goto LABEL_18;
        }
        if ( a1 == 169 || a1 == 171 || a1 == 173 || a1 == 175 )
          goto LABEL_29;
        v16 = a1 == 4097;
LABEL_54:
        if ( !v16 )
          goto LABEL_55;
LABEL_29:
        CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(v9);
        EtwTraceUIPISystemError(CurrentProcessWin32Process, 0LL);
        v20 = 5LL;
LABEL_30:
        v21 = 0;
        UserSetLastError(v20, v19);
        goto LABEL_31;
      }
      if ( a1 <= 0x100F )
      {
        if ( a1 == 4111 )
          goto LABEL_29;
        if ( a1 == 4101 )
          goto LABEL_29;
        v17 = a1 - 4103;
        if ( a1 == 4103 )
          goto LABEL_29;
LABEL_50:
        v24 = v17 - 2;
        if ( !v24 )
          goto LABEL_29;
        v15 = v24 - 2;
        v14 = v15 == 0;
LABEL_52:
        if ( v14 )
          goto LABEL_29;
        v16 = v15 == 2;
        goto LABEL_54;
      }
      v23 = a1 == 4115;
      v17 = a1 - 4115;
    }
    if ( v23 )
      goto LABEL_29;
    goto LABEL_50;
  }
LABEL_55:
  v25 = Win32AllocPoolWithQuotaZInit(0x228uLL, 0x79747355u);
  v58 = v25;
  if ( !v25 )
  {
    v20 = 8LL;
    goto LABEL_30;
  }
  PushW32ThreadLock((__int64)v25, (__int64)&v67, (__int64)Win32FreePool);
  if ( a1 <= 0x54 )
  {
    if ( a1 >= 0x53 )
      goto LABEL_306;
    if ( a1 <= 0x2E )
    {
      if ( a1 == 46 )
      {
        v8 = 108;
        goto LABEL_268;
      }
      if ( a1 <= 0x18 )
      {
        if ( a1 == 24 )
        {
LABEL_71:
          if ( (Address & 0xFFFFFFFFFFFF0000uLL) == 0 )
            goto LABEL_310;
LABEL_306:
          v61 = (void *)Address;
          if ( Address >= MmUserProbeAddress )
            Address = MmUserProbeAddress;
          *(_DWORD *)Address = *(_DWORD *)Address;
          v36 = 1;
          Address = (ULONG64)v58;
          LODWORD(v6) = v72;
          v8 = 4;
          v35 = v61;
          goto LABEL_312;
        }
        if ( a1 <= 0xE )
        {
          if ( a1 == 14 || a1 == 1 )
            goto LABEL_306;
          if ( a1 != 3 )
          {
            if ( a1 != 4 )
            {
              if ( a1 == 5 || a1 == 10 )
                goto LABEL_306;
              if ( a1 == 13 )
                goto LABEL_71;
              goto LABEL_280;
            }
            goto LABEL_73;
          }
          goto LABEL_75;
        }
        if ( a1 == 16 || a1 == 18 )
          goto LABEL_306;
        if ( a1 == 20 )
        {
          if ( !Address )
            Address = -1LL;
          if ( Address > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_83;
          goto LABEL_87;
        }
        v28 = a1 - 21;
        if ( a1 == 21 )
        {
          if ( (_DWORD)v6 == -1 )
            goto LABEL_310;
          if ( !Address )
          {
LABEL_83:
            LODWORD(v6) = -1;
            goto LABEL_310;
          }
LABEL_87:
          if ( Address >= MmUserProbeAddress )
            Address = MmUserProbeAddress;
          v29 = *(_DWORD *)Address;
          v60 = *(_DWORD *)Address;
          LODWORD(v64) = *(_DWORD *)Address;
          v30 = *(const void **)(Address + 8);
          *((_QWORD *)&v64 + 1) = v30;
          if ( ((unsigned __int8)v30 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v31 = (unsigned __int16)v29;
          v32 = (ULONG64)v30 + (unsigned __int16)v29 + 2;
          v33 = (_BYTE **)MmUserProbeAddress;
          if ( v32 < MmUserProbeAddress && (unsigned __int16)v29 <= HIWORD(v60) )
          {
            if ( (v29 & 1) != 0 )
              goto LABEL_96;
            if ( v32 > (unsigned __int64)v30 )
            {
LABEL_98:
              v34 = Win32AllocPoolWithQuota(v31 + 2, 0x79747355u);
              Address = v34;
              if ( !v34 )
                ExRaiseStatus(-1073741801);
              PushW32ThreadLock(v34, (__int64)&v65, (__int64)Win32FreePool);
              v62 = 1;
              memmove((void *)Address, v30, v31);
              *(_WORD *)(Address + 2 * (v31 >> 1)) = 0;
              LODWORD(v6) = v72;
              v8 = 0;
              v35 = 0LL;
              v36 = 0;
              goto LABEL_312;
            }
          }
          if ( (v29 & 1) == 0 )
          {
LABEL_97:
            **v33 = 0;
            goto LABEL_98;
          }
LABEL_96:
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 318);
          v33 = (_BYTE **)MmUserProbeAddress;
          goto LABEL_97;
        }
LABEL_107:
        if ( v28 == 1 )
          goto LABEL_306;
        goto LABEL_280;
      }
      if ( a1 <= 0x26 )
      {
        if ( a1 == 38 || a1 == 25 || a1 == 27 )
          goto LABEL_306;
        if ( a1 != 31 )
        {
          v28 = a1 - 34;
          if ( a1 != 34 )
            goto LABEL_107;
          v8 = 92;
LABEL_268:
          if ( (Address & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v52 = (char *)(Address + v8);
          if ( (unsigned __int64)v52 > MmUserProbeAddress || (unsigned __int64)v52 < Address )
            *(_BYTE *)MmUserProbeAddress = 0;
          goto LABEL_273;
        }
        v8 = 92;
        goto LABEL_276;
      }
      if ( a1 == 41 )
      {
        if ( (((_DWORD)v6 - 500) & 0xFFFFFFFB) != 0 )
          goto LABEL_294;
        v8 = v6;
        goto LABEL_276;
      }
      if ( a1 != 42 )
      {
        if ( a1 != 43 )
        {
          if ( a1 != 44 )
          {
            if ( a1 != 45 )
              goto LABEL_280;
            v8 = 108;
            goto LABEL_276;
          }
          v8 = 20;
          goto LABEL_268;
        }
        v8 = 20;
LABEL_276:
        v51 = v58;
LABEL_277:
        v53 = (volatile void *)Address;
        v59 = (_DWORD *)Address;
        Address = (ULONG64)v51;
        CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v27);
        ProbeForWrite(v53, v8, CurrentProcessWow64Process != 0 ? 1 : 4);
        v36 = 1;
        *v51 = *v59;
        goto LABEL_311;
      }
      if ( (((_DWORD)v6 - 500) & 0xFFFFFFFB) != 0 )
        goto LABEL_294;
      v8 = v6;
LABEL_267:
      if ( !v8 )
      {
LABEL_273:
        memmove(v58, (const void *)Address, v8);
        Address = (ULONG64)v58;
        goto LABEL_310;
      }
      goto LABEL_268;
    }
    if ( a1 <= 0x3C )
    {
      if ( a1 == 60 )
      {
LABEL_75:
        v8 = 12;
        goto LABEL_276;
      }
      if ( a1 <= 0x35 )
      {
        if ( a1 != 53 )
        {
          if ( a1 != 47 )
          {
            if ( a1 != 48 )
            {
              if ( a1 == 50 )
              {
                v8 = 24;
                goto LABEL_276;
              }
              if ( a1 == 51 )
              {
                v8 = 24;
                goto LABEL_268;
              }
              if ( a1 != 52 )
                goto LABEL_280;
              goto LABEL_134;
            }
LABEL_137:
            v8 = 16;
            goto LABEL_276;
          }
LABEL_213:
          v8 = 16;
          goto LABEL_268;
        }
LABEL_143:
        v8 = 8;
        goto LABEL_268;
      }
      switch ( a1 )
      {
        case '6':
          v8 = 28;
          goto LABEL_276;
        case '7':
          v8 = 28;
          goto LABEL_268;
        case '8':
          goto LABEL_306;
      }
      if ( a1 != 58 )
      {
        if ( a1 != 59 )
          goto LABEL_280;
        goto LABEL_143;
      }
LABEL_134:
      v8 = 8;
      goto LABEL_276;
    }
    if ( a1 > 0x44 )
    {
      if ( a1 == 70 )
        goto LABEL_306;
      if ( a1 != 72 )
      {
        if ( a1 != 73 )
        {
          if ( a1 == 74 || a1 - 79 <= 1 )
            goto LABEL_306;
          goto LABEL_280;
        }
        goto LABEL_143;
      }
      goto LABEL_134;
    }
    switch ( a1 )
    {
      case 'D':
        goto LABEL_306;
      case '=':
LABEL_73:
        v8 = 12;
        goto LABEL_268;
      case '@':
        v8 = 56;
        goto LABEL_276;
      case 'A':
        v8 = 56;
        goto LABEL_268;
    }
    if ( a1 != 66 )
    {
      if ( a1 != 67 )
        goto LABEL_280;
      if ( Address + 24 < Address || Address + 24 > MmUserProbeAddress )
        Address = MmUserProbeAddress;
      v69 = *(_OWORD *)Address;
      v70 = *(_QWORD *)(Address + 16);
      v37 = v70;
      v38 = v58;
      *v58 = v69;
      *((_QWORD *)v58 + 2) = v37;
      Address = (ULONG64)v58;
      v39 = *((_QWORD *)v58 + 2);
      if ( (v39 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v40 = *((unsigned __int16 *)v58 + 4);
      v41 = v40 + v39 + 2;
      v42 = (_BYTE **)MmUserProbeAddress;
      if ( v41 < MmUserProbeAddress && (unsigned __int16)v40 <= *((_WORD *)v58 + 5) )
      {
        if ( (v40 & 1) != 0 )
          goto LABEL_163;
        if ( v41 > v39 )
          goto LABEL_165;
      }
      if ( (v40 & 1) == 0 )
      {
LABEL_164:
        **v42 = 0;
LABEL_165:
        if ( !*((_WORD *)v38 + 4) )
          *((_QWORD *)v38 + 2) = 0LL;
        goto LABEL_310;
      }
LABEL_163:
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 446);
      v42 = (_BYTE **)MmUserProbeAddress;
      v38 = v58;
      goto LABEL_164;
    }
    v8 = 16;
    v43 = PsGetCurrentProcessWow64Process(v27);
    ProbeForWrite((volatile void *)Address, 0x10uLL, v43 != 0 ? 1 : 4);
    v59 = (_DWORD *)Address;
    *v58 = *(_OWORD *)Address;
    Address = (ULONG64)v58;
    ProbeForWrite(*((volatile void **)v58 + 1), 0x100uLL, 2u);
LABEL_168:
    v36 = 1;
LABEL_311:
    v35 = v59;
LABEL_312:
    v21 = xxxSystemParametersInfo(a1, v6, (void *)Address, v73);
    if ( v36 )
      memmove(v35, (const void *)Address, v8);
    goto LABEL_314;
  }
  if ( a1 <= 0x90 )
  {
    if ( a1 != 144 )
    {
      switch ( a1 )
      {
        case 0x59u:
          goto LABEL_134;
        case 0x5Au:
          goto LABEL_143;
        case 0x5Eu:
        case 0x5Fu:
        case 0x62u:
        case 0x64u:
        case 0x66u:
        case 0x68u:
        case 0x6Au:
        case 0x6Cu:
        case 0x6Eu:
        case 0x70u:
        case 0x72u:
        case 0x76u:
        case 0x78u:
        case 0x7Au:
        case 0x7Cu:
        case 0x7Eu:
        case 0x80u:
        case 0x82u:
        case 0x84u:
        case 0x86u:
        case 0x88u:
        case 0x8Au:
        case 0x8Cu:
        case 0x8Eu:
          goto LABEL_306;
        case 0x73u:
          v59 = (_DWORD *)Address;
          Address = (ULONG64)v58;
          ProbeForWrite(v59, 2 * v6, 2u);
          if ( (unsigned int)v6 >= 0x104 )
            LODWORD(v6) = 260;
          v8 = 2 * v6;
          goto LABEL_168;
        case 0x74u:
          goto LABEL_75;
        case 0x75u:
          goto LABEL_73;
        default:
          goto LABEL_280;
      }
    }
    goto LABEL_306;
  }
  if ( a1 <= 0x1026 )
  {
    if ( a1 == 4134 )
      goto LABEL_306;
    if ( a1 > 0x9E )
    {
      if ( a1 > 0xA8 )
      {
        switch ( a1 )
        {
          case 0xAAu:
            goto LABEL_306;
          case 0xACu:
            if ( (_DWORD)v6 != 4 )
              goto LABEL_294;
            v8 = 4;
            goto LABEL_276;
          case 0xADu:
            if ( (_DWORD)v6 != 4 )
              goto LABEL_294;
            v8 = 4;
            break;
          case 0xAEu:
            if ( (_DWORD)v6 != 24 )
              goto LABEL_294;
            if ( ((PsGetCurrentProcessWow64Process(v27) == 0 ? 3 : 0) & (unsigned __int8)Address) != 0 )
              ExRaiseDatatypeMisalignment();
            v27 = Address + 4;
            v26 = (_OWORD *)MmUserProbeAddress;
            if ( Address + 4 > MmUserProbeAddress || v27 < Address )
              *(_BYTE *)MmUserProbeAddress = 0;
            if ( *(_DWORD *)Address )
              goto LABEL_294;
            v51 = v58;
            *(_DWORD *)v58 = 0;
            v8 = 24;
            goto LABEL_277;
          case 0xAFu:
            if ( (_DWORD)v6 != 24 )
              goto LABEL_294;
            if ( ((PsGetCurrentProcessWow64Process(v27) == 0 ? 3 : 0) & (unsigned __int8)Address) != 0 )
              ExRaiseDatatypeMisalignment();
            v26 = (_OWORD *)MmUserProbeAddress;
            if ( Address + 4 > MmUserProbeAddress || Address + 4 < Address )
              *(_BYTE *)MmUserProbeAddress = 0;
            if ( *(_DWORD *)Address )
              goto LABEL_294;
            v8 = 24;
            break;
          default:
            goto LABEL_280;
        }
        goto LABEL_267;
      }
      if ( a1 == 168 || a1 == 160 )
        goto LABEL_306;
      if ( a1 == 162 )
        goto LABEL_137;
      if ( a1 != 163 )
      {
        if ( a1 != 165 && a1 != 167 )
          goto LABEL_280;
        v8 = 12;
        if ( (_DWORD)v6 != 12 )
          goto LABEL_294;
        goto LABEL_276;
      }
      goto LABEL_213;
    }
    if ( a1 == 158 )
      goto LABEL_306;
    if ( a1 <= 0x98 )
    {
      switch ( a1 )
      {
        case 0x98u:
          v27 = 128LL;
          if ( (_DWORD)v6 != 128 )
            goto LABEL_294;
          v8 = 128;
          break;
        case 0x92u:
          v8 = 56;
          if ( (_DWORD)v6 != 56 )
            goto LABEL_294;
          break;
        case 0x93u:
          v8 = 56;
          if ( (_DWORD)v6 != 56 )
            goto LABEL_294;
          goto LABEL_268;
        case 0x94u:
          v8 = 32;
          if ( (_DWORD)v6 != 32 )
            goto LABEL_294;
          break;
        case 0x95u:
          v8 = 32;
          if ( (_DWORD)v6 != 32 )
            goto LABEL_294;
          goto LABEL_268;
        case 0x96u:
          v8 = 28;
          if ( (_DWORD)v6 != 28 )
            goto LABEL_294;
          break;
        case 0x97u:
          v8 = 28;
          if ( (_DWORD)v6 != 28 )
            goto LABEL_294;
          goto LABEL_268;
        default:
          goto LABEL_280;
      }
      goto LABEL_276;
    }
    if ( a1 == 153 )
    {
      if ( (_DWORD)v6 != 128 )
        goto LABEL_294;
      v8 = 128;
      goto LABEL_268;
    }
    if ( a1 != 154 )
    {
      if ( a1 == 155 )
      {
        v8 = 548;
        if ( (_DWORD)v6 == 548 )
        {
          if ( Address + 548 < Address || Address + 548 > MmUserProbeAddress )
            Address = MmUserProbeAddress;
          v44 = v71;
          v45 = 4LL;
          v46 = 4LL;
          do
          {
            *v44 = *(_OWORD *)Address;
            v44[1] = *(_OWORD *)(Address + 16);
            v44[2] = *(_OWORD *)(Address + 32);
            v44[3] = *(_OWORD *)(Address + 48);
            v44[4] = *(_OWORD *)(Address + 64);
            v44[5] = *(_OWORD *)(Address + 80);
            v44[6] = *(_OWORD *)(Address + 96);
            v44 += 8;
            *(v44 - 1) = *(_OWORD *)(Address + 112);
            Address += 128LL;
            --v46;
          }
          while ( v46 );
          *v44 = *(_OWORD *)Address;
          v44[1] = *(_OWORD *)(Address + 16);
          *((_DWORD *)v44 + 8) = *(_DWORD *)(Address + 32);
          v26 = v58;
          v47 = v71;
          do
          {
            *v26 = *v47;
            v26[1] = v47[1];
            v26[2] = v47[2];
            v26[3] = v47[3];
            v26[4] = v47[4];
            v26[5] = v47[5];
            v26[6] = v47[6];
            v26 += 8;
            *(v26 - 1) = v47[7];
            v47 += 8;
            --v45;
          }
          while ( v45 );
          *v26 = *v47;
          v26[1] = v47[1];
          *((_DWORD *)v26 + 8) = *((_DWORD *)v47 + 8);
          Address = (ULONG64)v58;
          if ( *((_DWORD *)v58 + 6) <= 0x104u )
            goto LABEL_310;
        }
        goto LABEL_294;
      }
      if ( a1 == 156 )
      {
        if ( (_DWORD)v6 != 16 )
          goto LABEL_294;
        goto LABEL_137;
      }
      goto LABEL_213;
    }
    v8 = 548;
    if ( (_DWORD)v6 != 548 )
      goto LABEL_294;
    v48 = PsGetCurrentProcessWow64Process(v27);
    v49 = 4LL;
    ProbeForWrite((volatile void *)Address, 0x224uLL, v48 != 0 ? 1 : 4);
    v59 = (_DWORD *)Address;
    v50 = v58;
    do
    {
      *v50 = *(_OWORD *)Address;
      v50[1] = *(_OWORD *)(Address + 16);
      v50[2] = *(_OWORD *)(Address + 32);
      v50[3] = *(_OWORD *)(Address + 48);
      v50[4] = *(_OWORD *)(Address + 64);
      v50[5] = *(_OWORD *)(Address + 80);
      v50[6] = *(_OWORD *)(Address + 96);
      v50 += 8;
      *(v50 - 1) = *(_OWORD *)(Address + 112);
      Address += 128LL;
      --v49;
    }
    while ( v49 );
    *v50 = *(_OWORD *)Address;
    v50[1] = *(_OWORD *)(Address + 16);
    *((_DWORD *)v50 + 8) = *(_DWORD *)(Address + 32);
    Address = (ULONG64)v58;
    goto LABEL_168;
  }
  if ( a1 == 4135 )
    goto LABEL_310;
  if ( a1 == 8221 )
  {
    if ( Address > 2 )
      goto LABEL_294;
    goto LABEL_310;
  }
LABEL_280:
  if ( a1 < 0xB0 )
    goto LABEL_310;
  if ( a1 - 4096 > 0x53 && a1 - 0x2000 > 0x29
    || (_DWORD)v6 && (*((_DWORD *)gptiCurrent + 158) > 0x400u || a1 != 4159 || (_DWORD)v6 != 1) )
  {
    goto LABEL_294;
  }
  if ( (a1 & 1) == 0 )
    goto LABEL_306;
  if ( a1 != 8193 )
  {
    if ( a1 != 8203 )
    {
      if ( a1 != 8211 || (Address & 0xFFFFFFFE) == 0 )
        goto LABEL_310;
      goto LABEL_294;
    }
    if ( (Address & 0xFFFFFFFC) != 0 )
    {
LABEL_294:
      UserSetLastError(87LL, (__int64)v26);
      v21 = 0;
      goto LABEL_314;
    }
LABEL_310:
    v36 = 0;
    goto LABEL_311;
  }
  if ( qword_1C0256C50 )
    v55 = qword_1C0256C50();
  else
    v55 = -1073741637;
  if ( v55 >= 0 )
  {
    v56 = PsGetCurrentProcessWin32Process(v27);
    if ( qword_1C0256C58 ? qword_1C0256C58(v56) : 0 )
      goto LABEL_310;
  }
  UserSetLastError(5LL, (__int64)v26);
  v21 = 0;
LABEL_314:
  if ( v62 )
    PopAndFreeAlwaysW32ThreadLock((__int64)&v65);
  PopAndFreeAlwaysW32ThreadLock((__int64)&v67);
LABEL_31:
  UserSessionSwitchLeaveCrit();
  return v21;
}
