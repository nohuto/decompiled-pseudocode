/*
 * XREFs of NtUserSystemParametersInfo @ 0x1C0162FF0
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::IsValidGuiContext @ 0x1C001DDB0 (PrivateAPI--_anonymous_namespace_--IsValidGuiContext.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C00293AC (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     CheckAccess @ 0x1C002FAE0 (CheckAccess.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     EtwTraceUIPISystemError @ 0x1C0040CB0 (EtwTraceUIPISystemError.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C005FB30 (Win32AllocPoolWithQuotaZInit.c)
 *     PushW32ThreadLock @ 0x1C0097140 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009771C (PopAndFreeAlwaysW32ThreadLock.c)
 *     SetLastNtError @ 0x1C009A910 (SetLastNtError.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     xxxSystemParametersInfo @ 0x1C0165BD0 (xxxSystemParametersInfo.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserSystemParametersInfo(unsigned int a1, size_t Size, ULONG64 Src)
{
  __int64 v4; // r12
  unsigned int v6; // ebx
  struct tagTHREADINFO *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  struct tagKERNELHANDLETABLEENTRY *v15; // r15
  struct tagTHREADINFO *v16; // rcx
  int v17; // eax
  __int64 CurrentProcessWin32Process; // rax
  bool v19; // zf
  bool v20; // zf
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  _OWORD *v30; // rdx
  unsigned __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned int v34; // eax
  int v35; // eax
  const void *v36; // r15
  size_t v37; // rbx
  ULONG64 v38; // rdx
  _BYTE **v39; // rcx
  signed __int64 v40; // rax
  void *v41; // r15
  int v42; // r13d
  volatile void *v43; // xmm0_8
  volatile void **v44; // r9
  ULONG64 v45; // rdx
  __int64 v46; // rax
  ULONG64 v47; // r8
  _BYTE **v48; // rcx
  __int64 v49; // rax
  _OWORD *v50; // rdx
  __int64 v51; // rax
  _OWORD *v52; // rax
  __int64 v53; // rax
  volatile void **v54; // rdx
  _DWORD *v55; // r15
  char *v56; // rcx
  __int64 CurrentProcessWow64Process; // rax
  int v58; // edi
  int v59; // eax
  __int64 v60; // rcx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  PEPROCESS *v66; // rax
  int v68; // [rsp+28h] [rbp-320h]
  volatile void **v69; // [rsp+30h] [rbp-318h]
  _DWORD *Address; // [rsp+38h] [rbp-310h]
  void *v71; // [rsp+48h] [rbp-300h]
  int v72; // [rsp+50h] [rbp-2F8h]
  unsigned int v73[4]; // [rsp+68h] [rbp-2E0h] BYREF
  __int128 v74; // [rsp+78h] [rbp-2D0h]
  __int128 v75; // [rsp+88h] [rbp-2C0h] BYREF
  __int64 v76; // [rsp+98h] [rbp-2B0h]
  __int128 v77; // [rsp+A0h] [rbp-2A8h] BYREF
  __int64 v78; // [rsp+B0h] [rbp-298h]
  __int128 v79; // [rsp+C8h] [rbp-280h]
  volatile void *v80; // [rsp+D8h] [rbp-270h]
  _BYTE v81[616]; // [rsp+E0h] [rbp-268h] BYREF
  unsigned int v82; // [rsp+358h] [rbp+10h]

  v82 = Size;
  v4 = (unsigned int)Size;
  v74 = 0LL;
  v6 = 0;
  Address = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  v72 = 0;
  v73[0] = 0x2000;
  v73[1] = -1;
  v7 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(1);
  gptiCurrent = v7;
  if ( v7 )
  {
    *((_DWORD *)v7 + 377) = 1;
    if ( PrivateAPI::_anonymous_namespace_::IsValidGuiContext(v9, v8, v10, v11) )
    {
      while ( 1 )
      {
        v15 = gpSharedUserCritDeferredUnlockListHead;
        if ( !gpSharedUserCritDeferredUnlockListHead )
          break;
        gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                     + 2);
        *((_QWORD *)v15 + 2) = 0LL;
        v14 = *(_QWORD *)v15;
        if ( !*(_DWORD *)(*(_QWORD *)v15 + 8LL) )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v12, v13);
          v14 = *(_QWORD *)v15;
        }
        HMUnlockObject(v14);
      }
    }
  }
  v16 = gptiCurrent;
  if ( (*((_DWORD *)gptiCurrent + 122) & 0x20000000) != 0 )
  {
    v16 = *(struct tagTHREADINFO **)(*((_QWORD *)gptiCurrent + 53) + 768LL);
    v17 = *((_DWORD *)v16 + 6) & 8;
  }
  else
  {
    v17 = 0;
  }
  if ( !v17 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16);
    if ( CheckAccess((unsigned int *)(CurrentProcessWin32Process + 880), v73) )
      goto LABEL_68;
  }
  if ( a1 <= 0x97 )
  {
    if ( a1 != 151 )
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
        case 0x95u:
          goto LABEL_332;
        default:
          goto LABEL_68;
      }
    }
    goto LABEL_332;
  }
  if ( a1 <= 0x101D )
  {
    if ( a1 == 4125 )
      goto LABEL_332;
    if ( a1 > 0x1003 )
    {
      if ( a1 > 0x100F )
      {
        v20 = a1 == 4115;
        v21 = a1 - 4115;
      }
      else
      {
        if ( a1 == 4111 || a1 == 4101 )
          goto LABEL_332;
        v21 = a1 - 4103;
        v20 = a1 == 4103;
      }
      if ( v20 || (v22 = v21 - 2) == 0 || (v23 = v22 - 2) == 0 )
      {
LABEL_332:
        v66 = (PEPROCESS *)PsGetCurrentProcessWin32Process(v16);
        EtwTraceUIPISystemError(v66, 0LL);
        v29 = 5LL;
        goto LABEL_333;
      }
      v19 = v23 == 2;
    }
    else
    {
      if ( a1 == 4099 )
        goto LABEL_332;
      if ( a1 > 0xA9 )
      {
        if ( a1 == 171 || a1 == 173 || a1 == 175 || a1 == 177 )
          goto LABEL_332;
        v19 = a1 == 4097;
      }
      else
      {
        if ( a1 == 169 || a1 == 153 || a1 == 155 || a1 == 161 || a1 == 163 )
          goto LABEL_332;
        v19 = a1 == 166;
      }
    }
LABEL_67:
    if ( !v19 )
    {
LABEL_68:
      v24 = 4LL;
      goto LABEL_69;
    }
    goto LABEL_332;
  }
  if ( a1 <= 0x2003 )
  {
    if ( a1 == 8195 )
      goto LABEL_332;
    if ( a1 > 0x104B )
    {
      if ( a1 == 4173 || a1 == 4175 || a1 == 4177 || a1 == 4179 )
        goto LABEL_332;
      v19 = a1 == 8193;
    }
    else
    {
      if ( a1 == 4171 || a1 == 4127 || a1 == 4135 || a1 == 4161 || a1 == 4163 )
        goto LABEL_332;
      v19 = a1 == 4169;
    }
    goto LABEL_67;
  }
  if ( a1 > 0x2017 )
  {
    if ( a1 == 8217 || a1 == 8219 || a1 == 8221 )
      goto LABEL_332;
    v19 = a1 == 8241;
    goto LABEL_67;
  }
  if ( a1 == 8215 )
    goto LABEL_332;
  if ( a1 == 8197 )
    goto LABEL_332;
  v24 = 4LL;
  if ( a1 == 8201 || a1 == 8207 || a1 == 8209 || a1 == 8213 )
    goto LABEL_332;
LABEL_69:
  v25 = Win32AllocPoolWithQuotaZInit(0x228uLL, 2037674837);
  v69 = (volatile void **)v25;
  if ( !v25 )
  {
    v29 = 8LL;
LABEL_333:
    v58 = 0;
    UserSetLastError(v29, v26, v27, v28);
    goto LABEL_334;
  }
  PushW32ThreadLock(v25, (__int64)&v77, (__int64)Win32FreePool);
  if ( a1 <= 0x54 )
  {
    if ( a1 >= 0x53 )
      goto LABEL_321;
    if ( a1 <= 0x2E )
    {
      if ( a1 == 46 )
      {
        v6 = 108;
        goto LABEL_283;
      }
      if ( a1 <= 0x18 )
      {
        if ( a1 == 24 )
        {
LABEL_85:
          if ( (Src & 0xFFFFFFFFFFFF0000uLL) == 0 )
            goto LABEL_325;
LABEL_321:
          v71 = (void *)Src;
          if ( Src >= MmUserProbeAddress )
            Src = MmUserProbeAddress;
          *(_DWORD *)Src = *(_DWORD *)Src;
          v42 = 1;
          Src = (ULONG64)v69;
          LODWORD(v4) = v82;
          v6 = 4;
          v41 = v71;
          goto LABEL_327;
        }
        if ( a1 <= 0xE )
        {
          if ( a1 == 14 || a1 == 1 )
            goto LABEL_321;
          if ( a1 != 3 )
          {
            if ( a1 != 4 )
            {
              if ( a1 == 5 || a1 == 10 )
                goto LABEL_321;
              if ( a1 == 13 )
                goto LABEL_85;
              goto LABEL_296;
            }
            goto LABEL_87;
          }
          goto LABEL_89;
        }
        if ( a1 == 16 || a1 == 18 )
          goto LABEL_321;
        if ( a1 == 20 )
        {
          if ( !Src )
            Src = -1LL;
          if ( Src > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_96;
          goto LABEL_100;
        }
        v34 = a1 - 21;
        if ( a1 == 21 )
        {
          if ( (_DWORD)v4 == -1 )
            goto LABEL_325;
          if ( !Src )
          {
LABEL_96:
            LODWORD(v4) = -1;
            goto LABEL_325;
          }
LABEL_100:
          if ( Src >= MmUserProbeAddress )
            Src = MmUserProbeAddress;
          v35 = *(_DWORD *)Src;
          v68 = *(_DWORD *)Src;
          LODWORD(v74) = *(_DWORD *)Src;
          v36 = *(const void **)(Src + 8);
          *((_QWORD *)&v74 + 1) = v36;
          if ( ((unsigned __int8)v36 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v37 = (unsigned __int16)v35;
          v38 = (ULONG64)v36 + (unsigned __int16)v35 + 2;
          v39 = (_BYTE **)MmUserProbeAddress;
          if ( v38 < MmUserProbeAddress && (unsigned __int16)v35 <= HIWORD(v68) )
          {
            if ( (v35 & 1) != 0 )
              goto LABEL_109;
            if ( v38 > (unsigned __int64)v36 )
            {
LABEL_111:
              v40 = Win32AllocPoolWithQuotaZInit(v37 + 2, 2037674837);
              Src = v40;
              if ( !v40 )
                ExRaiseStatus(-1073741801);
              PushW32ThreadLock(v40, (__int64)&v75, (__int64)Win32FreePool);
              v72 = 1;
              memmove((void *)Src, v36, v37);
              *(_WORD *)(Src + 2 * (v37 >> 1)) = 0;
              LODWORD(v4) = v82;
              v6 = 0;
              v41 = 0LL;
              v42 = 0;
              goto LABEL_327;
            }
          }
          if ( (v35 & 1) == 0 )
          {
LABEL_110:
            **v39 = 0;
            goto LABEL_111;
          }
LABEL_109:
          MicrosoftTelemetryAssertTriggeredNoArgsKM(MmUserProbeAddress, v38, v32);
          v39 = (_BYTE **)MmUserProbeAddress;
          goto LABEL_110;
        }
LABEL_251:
        if ( v34 == 1 )
          goto LABEL_321;
        goto LABEL_296;
      }
      if ( a1 <= 0x26 )
      {
        if ( a1 == 38 || a1 == 25 || a1 == 27 )
          goto LABEL_321;
        if ( a1 == 31 )
        {
          v6 = 92;
          goto LABEL_292;
        }
        v34 = a1 - 34;
        if ( a1 != 34 )
          goto LABEL_251;
        v6 = 92;
LABEL_283:
        if ( (Src & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v56 = (char *)(Src + v6);
        if ( (unsigned __int64)v56 > MmUserProbeAddress || (unsigned __int64)v56 < Src )
          *(_BYTE *)MmUserProbeAddress = 0;
        goto LABEL_288;
      }
      if ( a1 == 41 )
      {
        if ( (((_DWORD)v4 - 500) & 0xFFFFFFFB) != 0 )
          goto LABEL_309;
        v6 = v4;
        goto LABEL_292;
      }
      if ( a1 != 42 )
      {
        if ( a1 == 43 )
        {
          v6 = 20;
          goto LABEL_292;
        }
        if ( a1 != 44 )
        {
          if ( a1 != 45 )
            goto LABEL_296;
          v6 = 108;
          goto LABEL_292;
        }
        v6 = 20;
        goto LABEL_283;
      }
      if ( (((_DWORD)v4 - 500) & 0xFFFFFFFB) != 0 )
        goto LABEL_309;
      v6 = v4;
LABEL_282:
      if ( !v6 )
      {
LABEL_288:
        memmove(v69, (const void *)Src, v6);
        Src = (ULONG64)v69;
        goto LABEL_325;
      }
      goto LABEL_283;
    }
    if ( a1 <= 0x3C )
    {
      if ( a1 == 60 )
      {
LABEL_89:
        v6 = 12;
LABEL_292:
        v55 = v69;
LABEL_293:
        Address = (_DWORD *)Src;
        Src = (ULONG64)v55;
        CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v31, v30, v32);
        ProbeForWrite(Address, v6, CurrentProcessWow64Process != 0 ? 1 : 4);
        v42 = 1;
        *v55 = *Address;
        goto LABEL_326;
      }
      if ( a1 > 0x35 )
      {
        switch ( a1 )
        {
          case '6':
            v6 = 28;
            goto LABEL_292;
          case '7':
            v6 = 28;
            goto LABEL_283;
          case '8':
            goto LABEL_321;
          case ':':
            goto LABEL_145;
        }
        if ( a1 != 59 )
          goto LABEL_296;
      }
      else if ( a1 != 53 )
      {
        if ( a1 != 47 )
        {
          if ( a1 != 48 )
          {
            if ( a1 == 50 )
            {
              v6 = 24;
              goto LABEL_292;
            }
            if ( a1 == 51 )
            {
              v6 = 24;
              goto LABEL_283;
            }
            if ( a1 != 52 )
              goto LABEL_296;
LABEL_145:
            v6 = 8;
            goto LABEL_292;
          }
LABEL_148:
          v6 = 16;
          goto LABEL_292;
        }
LABEL_224:
        v6 = 16;
        goto LABEL_283;
      }
LABEL_154:
      v6 = 8;
      goto LABEL_283;
    }
    if ( a1 > 0x44 )
    {
      if ( a1 == 70 )
        goto LABEL_321;
      if ( a1 == 72 )
        goto LABEL_145;
      if ( a1 != 73 )
      {
        if ( a1 == 74 || a1 - 79 <= 1 )
          goto LABEL_321;
        goto LABEL_296;
      }
      goto LABEL_154;
    }
    switch ( a1 )
    {
      case 'D':
        goto LABEL_321;
      case '=':
LABEL_87:
        v6 = 12;
        goto LABEL_283;
      case '@':
        v6 = 56;
        goto LABEL_292;
      case 'A':
        v6 = 56;
        goto LABEL_283;
    }
    if ( a1 != 66 )
    {
      if ( a1 != 67 )
        goto LABEL_296;
      if ( Src + 24 < Src || Src + 24 > MmUserProbeAddress )
        Src = MmUserProbeAddress;
      v79 = *(_OWORD *)Src;
      v80 = *(volatile void **)(Src + 16);
      v43 = v80;
      v44 = v69;
      *(_OWORD *)v69 = v79;
      v69[2] = v43;
      Src = (ULONG64)v69;
      v45 = (ULONG64)v69[2];
      if ( (v45 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v46 = *((unsigned __int16 *)v69 + 4);
      v47 = v46 + v45 + 2;
      v48 = (_BYTE **)MmUserProbeAddress;
      if ( v47 < MmUserProbeAddress && (unsigned __int16)v46 <= *((_WORD *)v69 + 5) )
      {
        if ( (v46 & 1) != 0 )
          goto LABEL_174;
        if ( v47 > v45 )
          goto LABEL_176;
      }
      if ( (v46 & 1) == 0 )
      {
LABEL_175:
        **v48 = 0;
LABEL_176:
        if ( !*((_WORD *)v44 + 4) )
          v44[2] = 0LL;
        goto LABEL_325;
      }
LABEL_174:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(MmUserProbeAddress, v45, v47);
      v48 = (_BYTE **)MmUserProbeAddress;
      v44 = v69;
      goto LABEL_175;
    }
    v6 = 16;
    v49 = PsGetCurrentProcessWow64Process(v31, v30, v32);
    ProbeForWrite((volatile void *)Src, 0x10uLL, v49 != 0 ? 1 : 4);
    Address = (_DWORD *)Src;
    *(_OWORD *)v69 = *(_OWORD *)Src;
    Src = (ULONG64)v69;
    ProbeForWrite(v69[1], 0x100uLL, 2u);
LABEL_179:
    v42 = 1;
LABEL_326:
    v41 = Address;
LABEL_327:
    v58 = xxxSystemParametersInfo(a1, v4);
    if ( v42 )
      memmove(v41, (const void *)Src, v6);
    goto LABEL_329;
  }
  if ( a1 <= 0x90 )
  {
    if ( a1 != 144 )
    {
      switch ( a1 )
      {
        case 0x59u:
          goto LABEL_145;
        case 0x5Au:
          goto LABEL_154;
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
          goto LABEL_321;
        case 0x73u:
          Address = (_DWORD *)Src;
          Src = (ULONG64)v69;
          ProbeForWrite(Address, 2 * v4, 2u);
          if ( (unsigned int)v4 >= 0x104 )
            LODWORD(v4) = 260;
          v6 = 2 * v4;
          goto LABEL_179;
        case 0x74u:
          goto LABEL_89;
        case 0x75u:
          goto LABEL_87;
        default:
          goto LABEL_296;
      }
    }
    goto LABEL_321;
  }
  if ( a1 <= 0x1026 )
  {
    if ( a1 == 4134 )
      goto LABEL_321;
    if ( a1 > 0x9E )
    {
      if ( a1 > 0xAA )
      {
        switch ( a1 )
        {
          case 0xACu:
            if ( (_DWORD)v4 != 4 )
              goto LABEL_309;
            break;
          case 0xADu:
            if ( (_DWORD)v4 != 4 )
              goto LABEL_309;
            v6 = 4;
            goto LABEL_282;
          case 0xAEu:
            if ( (_DWORD)v4 != 24 )
              goto LABEL_309;
            if ( ((PsGetCurrentProcessWow64Process(v31, v30, v32) == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
              ExRaiseDatatypeMisalignment();
            v31 = Src + 4;
            v30 = (_OWORD *)MmUserProbeAddress;
            if ( Src + 4 > MmUserProbeAddress || v31 < Src )
              *(_BYTE *)MmUserProbeAddress = 0;
            if ( *(_DWORD *)Src )
              goto LABEL_309;
            v55 = v69;
            *(_DWORD *)v69 = 0;
            v6 = 24;
            goto LABEL_293;
          case 0xAFu:
            if ( (_DWORD)v4 != 24 )
              goto LABEL_309;
            if ( ((PsGetCurrentProcessWow64Process(v31, v30, v32) == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
              ExRaiseDatatypeMisalignment();
            v30 = (_OWORD *)MmUserProbeAddress;
            if ( Src + 4 > MmUserProbeAddress || Src + 4 < Src )
              *(_BYTE *)MmUserProbeAddress = 0;
            if ( *(_DWORD *)Src )
              goto LABEL_309;
            v6 = 24;
            goto LABEL_282;
          case 0xB0u:
            if ( (_DWORD)v4 )
              goto LABEL_309;
            break;
          default:
            goto LABEL_296;
        }
        v6 = 4;
        goto LABEL_292;
      }
      if ( a1 == 170 || a1 == 160 )
        goto LABEL_321;
      if ( a1 == 162 )
        goto LABEL_148;
      if ( a1 != 163 )
      {
        if ( a1 == 165 || (v34 = a1 - 167, a1 == 167) )
        {
          v6 = 12;
          if ( (_DWORD)v4 != 12 )
            goto LABEL_309;
          goto LABEL_292;
        }
        goto LABEL_251;
      }
      goto LABEL_224;
    }
    if ( a1 == 158 )
      goto LABEL_321;
    if ( a1 <= 0x98 )
    {
      switch ( a1 )
      {
        case 0x98u:
          v31 = 128LL;
          if ( (_DWORD)v4 != 128 )
            goto LABEL_309;
          v6 = 128;
          break;
        case 0x92u:
          v6 = 56;
          if ( (_DWORD)v4 != 56 )
            goto LABEL_309;
          break;
        case 0x93u:
          v6 = 56;
          if ( (_DWORD)v4 != 56 )
            goto LABEL_309;
          goto LABEL_283;
        case 0x94u:
          v6 = 32;
          if ( (_DWORD)v4 != 32 )
            goto LABEL_309;
          break;
        case 0x95u:
          v6 = 32;
          if ( (_DWORD)v4 != 32 )
            goto LABEL_309;
          goto LABEL_283;
        case 0x96u:
          v6 = 28;
          if ( (_DWORD)v4 != 28 )
            goto LABEL_309;
          break;
        case 0x97u:
          v6 = 28;
          if ( (_DWORD)v4 != 28 )
            goto LABEL_309;
          goto LABEL_283;
        default:
          goto LABEL_296;
      }
      goto LABEL_292;
    }
    if ( a1 == 153 )
    {
      if ( (_DWORD)v4 != 128 )
        goto LABEL_309;
      v6 = 128;
      goto LABEL_283;
    }
    if ( a1 != 154 )
    {
      if ( a1 == 155 )
      {
        v6 = 548;
        if ( (_DWORD)v4 == 548 )
        {
          if ( Src + 548 < Src || Src + 548 > MmUserProbeAddress )
            Src = MmUserProbeAddress;
          v50 = v81;
          v51 = 4LL;
          do
          {
            *v50 = *(_OWORD *)Src;
            v50[1] = *(_OWORD *)(Src + 16);
            v50[2] = *(_OWORD *)(Src + 32);
            v50[3] = *(_OWORD *)(Src + 48);
            v50[4] = *(_OWORD *)(Src + 64);
            v50[5] = *(_OWORD *)(Src + 80);
            v50[6] = *(_OWORD *)(Src + 96);
            v50 += 8;
            *(v50 - 1) = *(_OWORD *)(Src + 112);
            Src += 128LL;
            --v51;
          }
          while ( v51 );
          *v50 = *(_OWORD *)Src;
          v50[1] = *(_OWORD *)(Src + 16);
          *((_DWORD *)v50 + 8) = *(_DWORD *)(Src + 32);
          v30 = v69;
          v52 = v81;
          do
          {
            *v30 = *v52;
            v30[1] = v52[1];
            v30[2] = v52[2];
            v30[3] = v52[3];
            v30[4] = v52[4];
            v30[5] = v52[5];
            v30[6] = v52[6];
            v30 += 8;
            *(v30 - 1) = v52[7];
            v52 += 8;
            --v24;
          }
          while ( v24 );
          *v30 = *v52;
          v30[1] = v52[1];
          *((_DWORD *)v30 + 8) = *((_DWORD *)v52 + 8);
          Src = (ULONG64)v69;
          if ( *((_DWORD *)v69 + 6) <= 0x104u )
            goto LABEL_325;
        }
        goto LABEL_309;
      }
      if ( a1 == 156 )
      {
        if ( (_DWORD)v4 != 16 )
          goto LABEL_309;
        goto LABEL_148;
      }
      goto LABEL_224;
    }
    v6 = 548;
    if ( (_DWORD)v4 != 548 )
      goto LABEL_309;
    v53 = PsGetCurrentProcessWow64Process(v31, v30, v32);
    ProbeForWrite((volatile void *)Src, 0x224uLL, v53 != 0 ? 1 : 4);
    Address = (_DWORD *)Src;
    v54 = v69;
    do
    {
      *(_OWORD *)v54 = *(_OWORD *)Src;
      *((_OWORD *)v54 + 1) = *(_OWORD *)(Src + 16);
      *((_OWORD *)v54 + 2) = *(_OWORD *)(Src + 32);
      *((_OWORD *)v54 + 3) = *(_OWORD *)(Src + 48);
      *((_OWORD *)v54 + 4) = *(_OWORD *)(Src + 64);
      *((_OWORD *)v54 + 5) = *(_OWORD *)(Src + 80);
      *((_OWORD *)v54 + 6) = *(_OWORD *)(Src + 96);
      v54 += 16;
      *((_OWORD *)v54 - 1) = *(_OWORD *)(Src + 112);
      Src += 128LL;
      --v24;
    }
    while ( v24 );
    *(_OWORD *)v54 = *(_OWORD *)Src;
    *((_OWORD *)v54 + 1) = *(_OWORD *)(Src + 16);
    *((_DWORD *)v54 + 8) = *(_DWORD *)(Src + 32);
    Src = (ULONG64)v69;
    goto LABEL_179;
  }
  if ( a1 == 4135 )
    goto LABEL_325;
  if ( a1 == 8221 )
  {
    if ( Src > 2 )
      goto LABEL_309;
    goto LABEL_325;
  }
LABEL_296:
  if ( a1 < 0xB2 )
    goto LABEL_325;
  if ( a1 - 4096 > 0x53 && a1 - 0x2000 > 0x31
    || (_DWORD)v4 && (*((_DWORD *)gptiCurrent + 158) > 0x400u || a1 != 4159 || (_DWORD)v4 != 1) )
  {
    goto LABEL_309;
  }
  if ( (a1 & 1) == 0 )
    goto LABEL_321;
  if ( a1 != 8193 )
  {
    if ( a1 != 8203 )
    {
      if ( a1 != 8211 || (Src & 0xFFFFFFFE) == 0 )
        goto LABEL_325;
      goto LABEL_309;
    }
    if ( (Src & 0xFFFFFFFC) != 0 )
    {
LABEL_309:
      UserSetLastError(87LL, (__int64)v30, v32, v33);
      v58 = 0;
      goto LABEL_329;
    }
LABEL_325:
    v42 = 0;
    goto LABEL_326;
  }
  if ( qword_1C029C990 )
    v59 = qword_1C029C990();
  else
    v59 = -1073741637;
  if ( v59 >= 0 )
  {
    v60 = PsGetCurrentProcessWin32Process(v31);
    if ( qword_1C029C998 ? qword_1C029C998(v60) : 0 )
      goto LABEL_325;
  }
  UserSetLastError(5LL, (__int64)v30, v32, v33);
  v58 = 0;
LABEL_329:
  if ( v72 )
    PopAndFreeAlwaysW32ThreadLock((__int64)&v75);
  PopAndFreeAlwaysW32ThreadLock((__int64)&v77);
LABEL_334:
  UserSessionSwitchLeaveCrit(v63, v62, v64, v65);
  return v58;
}
