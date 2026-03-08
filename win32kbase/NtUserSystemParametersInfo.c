/*
 * XREFs of NtUserSystemParametersInfo @ 0x1C01788A0
 * Callers:
 *     <none>
 * Callees:
 *     CheckAccess @ 0x1C0016F70 (CheckAccess.c)
 *     EtwTraceUIPISystemError @ 0x1C003A8B0 (EtwTraceUIPISystemError.c)
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C004FB50 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     PrivateAPI::_anonymous_namespace_::IsValidGuiContext @ 0x1C004FD4C (PrivateAPI--_anonymous_namespace_--IsValidGuiContext.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0068600 (Win32AllocPoolWithQuotaZInit.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     xxxSystemParametersInfo @ 0x1C009C980 (xxxSystemParametersInfo.c)
 *     PushW32ThreadLock @ 0x1C00A7FD0 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00A8740 (PopAndFreeAlwaysW32ThreadLock.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     SetLastNtError @ 0x1C0247ACC (SetLastNtError.c)
 */

__int64 __fastcall NtUserSystemParametersInfo(__int64 a1, size_t Size, ULONG64 Src, char a4)
{
  __int64 v5; // r13
  unsigned int v6; // edi
  unsigned int v7; // ebx
  struct tagTHREADINFO *v8; // rax
  __int64 v9; // rcx
  __int64 *i; // r12
  __int64 v11; // rcx
  int v12; // eax
  __int64 CurrentProcessWin32Process; // rax
  int v14; // eax
  unsigned __int8 v15; // cf
  unsigned __int64 v16; // rax
  int v17; // ecx
  int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  bool v24; // zf
  unsigned int v25; // eax
  bool v26; // zf
  unsigned int v27; // eax
  bool v28; // zf
  unsigned int v29; // eax
  bool v30; // zf
  unsigned int v31; // eax
  bool v32; // zf
  bool v33; // zf
  unsigned int v34; // eax
  unsigned __int64 v35; // rax
  bool v36; // zf
  unsigned int v37; // eax
  __int64 v38; // r12
  bool v39; // zf
  __int64 v40; // rax
  ULONG64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  int v45; // ecx
  const void *v46; // r12
  size_t v47; // rbx
  ULONG64 v48; // r8
  signed __int64 v49; // rax
  void *v50; // r12
  int v51; // r14d
  unsigned int v52; // eax
  __int64 v53; // rax
  unsigned int v54; // eax
  __int64 v55; // xmm0_8
  ULONG64 v56; // rax
  __int64 v57; // rcx
  ULONG64 v58; // rdx
  int v59; // ecx
  bool v60; // zf
  unsigned int v61; // eax
  unsigned int v62; // eax
  unsigned int v63; // eax
  unsigned int v64; // eax
  bool v65; // zf
  _OWORD *v66; // rdx
  __int64 v67; // rax
  _OWORD *v68; // rdx
  _OWORD *v69; // rax
  __int64 CurrentProcessWow64Process; // rax
  _OWORD *v71; // rdx
  char *v72; // rcx
  ULONG v73; // r8d
  volatile void *Address; // [rsp+30h] [rbp-318h]
  _DWORD *Addressa; // [rsp+30h] [rbp-318h]
  _DWORD *v76; // [rsp+38h] [rbp-310h]
  int v77; // [rsp+38h] [rbp-310h]
  void *v78; // [rsp+48h] [rbp-300h]
  int v79; // [rsp+50h] [rbp-2F8h]
  unsigned int v80[4]; // [rsp+68h] [rbp-2E0h] BYREF
  __int128 v81; // [rsp+78h] [rbp-2D0h]
  __int128 v82; // [rsp+88h] [rbp-2C0h] BYREF
  __int64 v83; // [rsp+98h] [rbp-2B0h]
  __int128 v84; // [rsp+A0h] [rbp-2A8h] BYREF
  __int64 v85; // [rsp+B0h] [rbp-298h]
  __int128 v86; // [rsp+C8h] [rbp-280h]
  __int64 v87; // [rsp+D8h] [rbp-270h]
  _BYTE v88[616]; // [rsp+E0h] [rbp-268h] BYREF
  unsigned int v89; // [rsp+358h] [rbp+10h]
  unsigned int v91; // [rsp+368h] [rbp+20h]

  v89 = Size;
  v5 = (unsigned int)Size;
  v6 = a1;
  v81 = 0LL;
  v7 = 0;
  Address = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  v79 = 0;
  v80[0] = 0x2000;
  v80[1] = -1;
  LOBYTE(a1) = 1;
  v8 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1);
  gptiCurrent = v8;
  if ( v8 )
  {
    *((_DWORD *)v8 + 387) = 1;
    if ( PrivateAPI::_anonymous_namespace_::IsValidGuiContext(v9) )
    {
      for ( i = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            gpSharedUserCritDeferredUnlockListHead;
            i = (__int64 *)gpSharedUserCritDeferredUnlockListHead )
      {
        gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)i[2];
        i[2] = 0LL;
        if ( !*(_DWORD *)(*i + 8) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
        HMUnlockObject(*i);
      }
    }
  }
  v91 = a4 & 3;
  v11 = (__int64)gptiCurrent;
  if ( (*((_DWORD *)gptiCurrent + 122) & 0x20000000) != 0 )
  {
    v11 = *(_QWORD *)(*((_QWORD *)gptiCurrent + 53) + 760LL);
    v12 = *(_DWORD *)(v11 + 24) & 8;
  }
  else
  {
    v12 = 0;
  }
  if ( !v12 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    if ( CheckAccess((unsigned int *)(CurrentProcessWin32Process + 864), v80) )
      goto LABEL_123;
  }
  if ( v6 <= 0x69 )
  {
    if ( v6 == 105 )
      goto LABEL_23;
    if ( v6 <= 0x35 )
    {
      if ( v6 == 53 )
        goto LABEL_23;
      if ( v6 <= 0x1C )
      {
        if ( v6 != 28 )
        {
          if ( v6 <= 0x11 )
          {
            v14 = 174164;
            v15 = _bittest(&v14, v6);
            goto LABEL_22;
          }
          if ( v6 == 19 || v6 == 20 || v6 == 21 )
            goto LABEL_23;
          v25 = v6 - 23;
          v24 = v6 == 23;
          goto LABEL_32;
        }
LABEL_23:
        v16 = PsGetCurrentProcessWin32Process(v11);
        if ( v16 )
          v16 &= -(__int64)(*(_QWORD *)v16 != 0LL);
        EtwTraceUIPISystemError((struct tagPROCESSINFO *)v16, 0LL);
        v17 = 5;
        goto LABEL_26;
      }
      if ( v6 <= 0x25 )
      {
        if ( v6 == 37 || v6 == 29 || v6 == 30 )
          goto LABEL_23;
        v29 = v6 - 32;
        v28 = v6 == 32;
        goto LABEL_39;
      }
      if ( v6 == 42 || v6 == 44 || v6 == 46 )
        goto LABEL_23;
      v31 = v6 - 47;
      v30 = v6 == 47;
      goto LABEL_45;
    }
    if ( v6 <= 0x51 )
    {
      if ( v6 == 81 )
        goto LABEL_23;
      if ( v6 <= 0x45 )
      {
        if ( ((v6 - 55) & 0xFFFFFFF1) == 0 && v6 != 63 )
          goto LABEL_23;
        goto LABEL_123;
      }
      if ( v6 == 71 || v6 == 73 || v6 == 75 || v6 == 76 || v6 == 77 )
        goto LABEL_23;
      v32 = v6 == 78;
LABEL_122:
      if ( v32 )
        goto LABEL_23;
      goto LABEL_123;
    }
    if ( v6 <= 0x5B )
    {
      if ( v6 == 91 || v6 == 82 || v6 == 85 )
        goto LABEL_23;
      v29 = v6 - 86;
      v28 = v6 == 86;
LABEL_39:
      if ( v28 )
        goto LABEL_23;
      v25 = v29 - 1;
      v24 = v25 == 0;
LABEL_32:
      if ( v24 )
        goto LABEL_23;
      v27 = v25 - 1;
      v26 = v27 == 0;
      goto LABEL_120;
    }
    if ( v6 == 93 || v6 == 96 )
      goto LABEL_23;
    v34 = v6 - 97;
    v33 = v6 == 97;
LABEL_67:
    if ( v33 )
      goto LABEL_23;
    v31 = v34 - 2;
    v30 = v31 == 0;
LABEL_45:
    if ( v30 )
      goto LABEL_23;
    v27 = v31 - 2;
    v26 = v27 == 0;
    goto LABEL_120;
  }
  if ( v6 <= 0x1013 )
  {
    if ( v6 == 4115 )
      goto LABEL_23;
    if ( v6 <= 0xA6 )
    {
      if ( v6 == 166 )
        goto LABEL_23;
      if ( v6 <= 0x93 )
      {
        v35 = v6 - 107;
        if ( (unsigned int)v35 <= 0x28 )
        {
          v11 = 0x10000001455LL;
          v15 = _bittest64(&v11, v35);
LABEL_22:
          if ( v15 )
            goto LABEL_23;
        }
LABEL_123:
        v38 = 4LL;
        goto LABEL_124;
      }
      if ( v6 == 149 || v6 == 151 || v6 == 153 || v6 == 155 )
        goto LABEL_23;
      v27 = v6 - 161;
      v26 = v6 == 161;
LABEL_120:
      if ( v26 )
        goto LABEL_23;
      v32 = v27 == 2;
      goto LABEL_122;
    }
    if ( v6 <= 0x1003 )
    {
      if ( v6 == 4099 || v6 == 169 || v6 == 171 || v6 == 173 || v6 == 175 || v6 == 177 )
        goto LABEL_23;
      v32 = v6 == 4097;
      goto LABEL_122;
    }
    if ( v6 == 4101 )
      goto LABEL_23;
    v37 = v6 - 4103;
    v36 = v6 == 4103;
LABEL_91:
    if ( v36 )
      goto LABEL_23;
    v34 = v37 - 2;
    v33 = v34 == 0;
    goto LABEL_67;
  }
  if ( v6 > 0x1053 )
  {
    if ( v6 > 0x2015 )
    {
      if ( v6 == 8215 || v6 == 8217 || v6 == 8219 || v6 == 8221 )
        goto LABEL_23;
      v27 = v6 - 8241;
      v26 = v6 == 8241;
      goto LABEL_120;
    }
    switch ( v6 )
    {
      case 0x2015u:
        goto LABEL_23;
      case 0x2001u:
        goto LABEL_23;
      case 0x2003u:
        goto LABEL_23;
      case 0x2005u:
        goto LABEL_23;
    }
    v38 = 4LL;
    if ( v6 == 8201 || v6 == 8207 )
      goto LABEL_23;
    v39 = v6 == 8209;
  }
  else
  {
    if ( v6 == 4179 )
      goto LABEL_23;
    if ( v6 > 0x1041 )
    {
      if ( v6 == 4163 )
        goto LABEL_23;
      v37 = v6 - 4169;
      v36 = v6 == 4169;
      goto LABEL_91;
    }
    switch ( v6 )
    {
      case 0x1041u:
        goto LABEL_23;
      case 0x1015u:
        goto LABEL_23;
      case 0x1017u:
        goto LABEL_23;
      case 0x1019u:
        goto LABEL_23;
    }
    v38 = 4LL;
    if ( v6 == 4125 || v6 == 4127 )
      goto LABEL_23;
    v39 = v6 == 4135;
  }
  if ( v39 )
    goto LABEL_23;
LABEL_124:
  v40 = Win32AllocPoolWithQuotaZInit(0x228uLL, 0x79747355u);
  v76 = (_DWORD *)v40;
  if ( !v40 )
  {
    v17 = 8;
LABEL_26:
    v18 = 0;
    UserSetLastError(v17);
    goto LABEL_27;
  }
  PushW32ThreadLock(v40, (__int64)&v84, (__int64)Win32FreePool);
  if ( v6 > 0x1026 )
  {
    if ( v6 == 4135 )
      goto LABEL_400;
    if ( v6 == 8221 )
    {
      if ( Src > 2 )
        goto LABEL_393;
LABEL_400:
      v51 = 0;
LABEL_401:
      v50 = (void *)Address;
LABEL_402:
      v18 = xxxSystemParametersInfo(v6, v5, (void *)Src, v91);
      if ( v51 )
        memmove(v50, (const void *)Src, v7);
      goto LABEL_404;
    }
    goto LABEL_381;
  }
  if ( v6 == 4134 )
    goto LABEL_396;
  if ( v6 > 0x5E )
  {
    if ( v6 <= 0x90 )
    {
      if ( v6 == 144 )
        goto LABEL_396;
      if ( v6 <= 0x76 )
      {
        if ( v6 == 118 )
          goto LABEL_396;
        if ( v6 <= 0x6C )
        {
          if ( v6 - 95 <= 0xD )
          {
            v59 = 10921;
            if ( _bittest(&v59, v6 - 95) )
              goto LABEL_396;
          }
          goto LABEL_381;
        }
        if ( v6 == 110 || v6 == 112 || v6 == 114 )
          goto LABEL_396;
        if ( v6 != 115 )
        {
          if ( v6 != 116 )
          {
            if ( v6 != 117 )
              goto LABEL_381;
            goto LABEL_143;
          }
LABEL_145:
          v7 = 12;
          goto LABEL_378;
        }
        v50 = (void *)Src;
        Src = (ULONG64)v76;
        ProbeForWrite(v50, 2 * v5, 2u);
        if ( (unsigned int)v5 >= 0x104 )
          LODWORD(v5) = 260;
        v7 = 2 * v5;
LABEL_272:
        v51 = 1;
        goto LABEL_402;
      }
      if ( v6 > 0x84 )
      {
        v60 = v6 == 134;
        v61 = v6 - 134;
      }
      else
      {
        if ( v6 == 132 || v6 == 120 )
          goto LABEL_396;
        v61 = v6 - 122;
        v60 = v6 == 122;
      }
      if ( v60 || (v62 = v61 - 2) == 0 || (v63 = v62 - 2) == 0 || (v64 = v63 - 2) == 0 )
      {
LABEL_396:
        v78 = (void *)Src;
        if ( Src >= MmUserProbeAddress )
          Src = MmUserProbeAddress;
        *(_DWORD *)Src = *(_DWORD *)Src;
        v51 = 1;
        Src = (ULONG64)v76;
        LODWORD(v5) = v89;
        v7 = 4;
        v50 = v78;
        goto LABEL_402;
      }
      v65 = v64 == 2;
LABEL_338:
      if ( v65 )
        goto LABEL_396;
      goto LABEL_381;
    }
    if ( v6 > 0x9E )
    {
      if ( v6 > 0xAA )
      {
        switch ( v6 )
        {
          case 0xACu:
            if ( (_DWORD)v5 != 4 )
              goto LABEL_393;
            break;
          case 0xADu:
            if ( (_DWORD)v5 != 4 )
              goto LABEL_393;
            v7 = 4;
            goto LABEL_368;
          case 0xAEu:
            v7 = 24;
            if ( (_DWORD)v5 != 24 )
              goto LABEL_393;
            if ( ((PsGetCurrentProcessWow64Process(v42, v41, v43, v44) == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
              ExRaiseDatatypeMisalignment();
            v41 = MmUserProbeAddress;
            if ( Src + 4 > MmUserProbeAddress || Src + 4 < Src )
              *(_BYTE *)MmUserProbeAddress = 0;
            if ( *(_DWORD *)Src )
              goto LABEL_393;
            v42 = (__int64)v76;
            *v76 = 0;
            goto LABEL_378;
          case 0xAFu:
            v7 = 24;
            if ( (_DWORD)v5 != 24 )
              goto LABEL_393;
            if ( ((PsGetCurrentProcessWow64Process(v42, v41, v43, v44) == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( Src + 4 > MmUserProbeAddress || Src + 4 < Src )
              *(_BYTE *)MmUserProbeAddress = 0;
            if ( *(_DWORD *)Src )
              goto LABEL_393;
            goto LABEL_368;
          case 0xB0u:
            if ( (_DWORD)v5 )
              goto LABEL_393;
            break;
          default:
            goto LABEL_381;
        }
        v7 = 4;
        goto LABEL_378;
      }
      if ( v6 == 170 || v6 == 160 )
        goto LABEL_396;
      if ( v6 != 162 )
      {
        if ( v6 == 163 )
        {
LABEL_195:
          v7 = 16;
          goto LABEL_369;
        }
        if ( v6 == 165 || (v54 = v6 - 167, v6 == 167) )
        {
          v7 = 12;
          if ( (_DWORD)v5 != 12 )
            goto LABEL_393;
          goto LABEL_378;
        }
LABEL_337:
        v65 = v54 == 1;
        goto LABEL_338;
      }
    }
    else
    {
      if ( v6 == 158 )
        goto LABEL_396;
      if ( v6 <= 0x98 )
      {
        if ( v6 == 152 )
        {
          v42 = 128LL;
          if ( (_DWORD)v5 != 128 )
            goto LABEL_393;
          goto LABEL_223;
        }
        if ( v6 == 146 )
        {
          v42 = 56LL;
          if ( (_DWORD)v5 != 56 )
            goto LABEL_393;
          goto LABEL_223;
        }
        if ( v6 != 147 )
        {
          if ( v6 == 148 )
          {
            v7 = 32;
            if ( (_DWORD)v5 != 32 )
              goto LABEL_393;
            goto LABEL_378;
          }
          if ( v6 == 149 )
          {
            v7 = 32;
            if ( (_DWORD)v5 != 32 )
              goto LABEL_393;
            goto LABEL_369;
          }
          if ( v6 != 150 )
          {
            if ( v6 != 151 )
              goto LABEL_381;
            if ( (_DWORD)v5 != 28 )
              goto LABEL_393;
            goto LABEL_211;
          }
          if ( (_DWORD)v5 != 28 )
            goto LABEL_393;
LABEL_212:
          v7 = 28;
          goto LABEL_378;
        }
        LODWORD(v42) = 56;
        if ( (_DWORD)v5 != 56 )
          goto LABEL_393;
LABEL_222:
        v7 = v42;
        goto LABEL_369;
      }
      switch ( v6 )
      {
        case 0x99u:
          LODWORD(v42) = 128;
          if ( (_DWORD)v5 != 128 )
            goto LABEL_393;
          goto LABEL_222;
        case 0x9Au:
          v7 = 548;
          if ( (_DWORD)v5 == 548 )
          {
            CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v42, v41, v43, v44);
            ProbeForWrite((volatile void *)Src, 0x224uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
            Address = (volatile void *)Src;
            v71 = v76;
            do
            {
              *v71 = *(_OWORD *)Src;
              v71[1] = *(_OWORD *)(Src + 16);
              v71[2] = *(_OWORD *)(Src + 32);
              v71[3] = *(_OWORD *)(Src + 48);
              v71[4] = *(_OWORD *)(Src + 64);
              v71[5] = *(_OWORD *)(Src + 80);
              v71[6] = *(_OWORD *)(Src + 96);
              v71 += 8;
              *(v71 - 1) = *(_OWORD *)(Src + 112);
              Src += 128LL;
              --v38;
            }
            while ( v38 );
            *v71 = *(_OWORD *)Src;
            v71[1] = *(_OWORD *)(Src + 16);
            *((_DWORD *)v71 + 8) = *(_DWORD *)(Src + 32);
            Src = (ULONG64)v76;
            v51 = 1;
            goto LABEL_401;
          }
          goto LABEL_393;
        case 0x9Bu:
          v7 = 548;
          if ( (_DWORD)v5 != 548 )
            goto LABEL_393;
          if ( Src + 548 < Src || Src + 548 > MmUserProbeAddress )
            Src = MmUserProbeAddress;
          v66 = v88;
          v67 = 4LL;
          do
          {
            *v66 = *(_OWORD *)Src;
            v66[1] = *(_OWORD *)(Src + 16);
            v66[2] = *(_OWORD *)(Src + 32);
            v66[3] = *(_OWORD *)(Src + 48);
            v66[4] = *(_OWORD *)(Src + 64);
            v66[5] = *(_OWORD *)(Src + 80);
            v66[6] = *(_OWORD *)(Src + 96);
            v66 += 8;
            *(v66 - 1) = *(_OWORD *)(Src + 112);
            Src += 128LL;
            --v67;
          }
          while ( v67 );
          *v66 = *(_OWORD *)Src;
          v66[1] = *(_OWORD *)(Src + 16);
          *((_DWORD *)v66 + 8) = *(_DWORD *)(Src + 32);
          v68 = v76;
          v69 = v88;
          do
          {
            *v68 = *v69;
            v68[1] = v69[1];
            v68[2] = v69[2];
            v68[3] = v69[3];
            v68[4] = v69[4];
            v68[5] = v69[5];
            v68[6] = v69[6];
            v68 += 8;
            *(v68 - 1) = v69[7];
            v69 += 8;
            --v38;
          }
          while ( v38 );
          *v68 = *v69;
          v68[1] = v69[1];
          *((_DWORD *)v68 + 8) = *((_DWORD *)v69 + 8);
          Src = (ULONG64)v76;
          if ( v76[6] > 0x104u )
            goto LABEL_393;
          goto LABEL_400;
      }
      v52 = v6 - 156;
      if ( v6 != 156 )
      {
LABEL_194:
        if ( v52 != 1 )
          goto LABEL_381;
        goto LABEL_195;
      }
      if ( (_DWORD)v5 != 16 )
        goto LABEL_393;
    }
LABEL_200:
    v7 = 16;
    goto LABEL_378;
  }
  if ( v6 == 94 )
    goto LABEL_396;
  if ( v6 > 0x30 )
  {
    if ( v6 <= 0x42 )
    {
      if ( v6 != 66 )
      {
        v42 = 56LL;
        if ( v6 <= 0x38 )
        {
          switch ( v6 )
          {
            case '8':
              goto LABEL_396;
            case '2':
              v7 = 24;
              goto LABEL_378;
            case '3':
              v7 = 24;
              goto LABEL_369;
          }
          if ( v6 != 52 )
          {
            if ( v6 != 53 )
            {
              if ( v6 != 54 )
              {
                if ( v6 != 55 )
                  goto LABEL_381;
LABEL_211:
                v7 = 28;
                goto LABEL_369;
              }
              goto LABEL_212;
            }
LABEL_253:
            v7 = 8;
            goto LABEL_369;
          }
LABEL_213:
          v7 = 8;
          goto LABEL_378;
        }
        if ( v6 == 58 )
          goto LABEL_213;
        if ( v6 == 59 )
          goto LABEL_253;
        if ( v6 != 60 )
        {
          if ( v6 != 61 )
          {
            if ( v6 != 64 )
            {
              if ( v6 != 65 )
                goto LABEL_381;
              goto LABEL_222;
            }
LABEL_223:
            v7 = v42;
            goto LABEL_378;
          }
LABEL_143:
          v7 = 12;
          goto LABEL_369;
        }
        goto LABEL_145;
      }
      v7 = 16;
      v53 = PsGetCurrentProcessWow64Process(v42, v41, v43, v44);
      ProbeForWrite((volatile void *)Src, 0x10uLL, v53 != 0 ? 1 : 4);
      v50 = (void *)Src;
      *(_OWORD *)v76 = *(_OWORD *)Src;
      Src = (ULONG64)v76;
      ProbeForWrite(*((volatile void **)v76 + 1), 0x100uLL, 2u);
      goto LABEL_272;
    }
    if ( v6 > 0x4F )
    {
      if ( v6 == 80 || v6 == 83 || v6 == 84 )
        goto LABEL_396;
      if ( v6 != 89 )
      {
        if ( v6 != 90 )
          goto LABEL_381;
        goto LABEL_253;
      }
      goto LABEL_213;
    }
    if ( v6 == 79 )
      goto LABEL_396;
    if ( v6 != 67 )
    {
      if ( v6 == 68 || v6 == 70 )
        goto LABEL_396;
      if ( v6 == 72 )
        goto LABEL_213;
      v54 = v6 - 73;
      if ( v6 == 73 )
        goto LABEL_253;
      goto LABEL_337;
    }
    if ( Src + 24 < Src || Src + 24 > MmUserProbeAddress )
      Src = MmUserProbeAddress;
    v86 = *(_OWORD *)Src;
    v87 = *(_QWORD *)(Src + 16);
    v55 = v87;
    *(_OWORD *)v76 = v86;
    *((_QWORD *)v76 + 2) = v55;
    Src = (ULONG64)v76;
    v56 = *((_QWORD *)v76 + 2);
    if ( (v56 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v57 = *((unsigned __int16 *)v76 + 4);
    v58 = v57 + v56 + 2;
    if ( v58 <= v56 || v58 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( (unsigned __int16)v57 > *((_WORD *)v76 + 5) )
    {
      if ( (v57 & 1) == 0 )
        goto LABEL_246;
    }
    else if ( (v57 & 1) == 0 )
    {
      if ( !(_WORD)v57 )
        *((_QWORD *)v76 + 2) = 0LL;
      goto LABEL_400;
    }
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 445);
LABEL_246:
    ExRaiseAccessViolation();
  }
  if ( v6 == 48 )
    goto LABEL_200;
  if ( v6 > 0x19 )
  {
    if ( v6 <= 0x2A )
    {
      if ( v6 != 42 )
      {
        if ( v6 == 27 )
          goto LABEL_396;
        if ( v6 == 31 )
        {
          v7 = 92;
          goto LABEL_378;
        }
        if ( v6 != 34 )
        {
          if ( v6 == 35 || v6 == 38 )
            goto LABEL_396;
          if ( v6 != 41 )
            goto LABEL_381;
          if ( (((_DWORD)v5 - 500) & 0xFFFFFFFB) != 0 )
            goto LABEL_393;
          v7 = v5;
LABEL_378:
          Addressa = (_DWORD *)Src;
          Src = (ULONG64)v76;
          v73 = PsGetCurrentProcessWow64Process(v42, v41, v43, v44) != 0 ? 1 : 4;
          v50 = Addressa;
          ProbeForWrite(Addressa, v7, v73);
          v51 = 1;
          *v76 = *Addressa;
          goto LABEL_402;
        }
        v7 = 92;
LABEL_369:
        if ( (Src & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v72 = (char *)(Src + v7);
        if ( (unsigned __int64)v72 > MmUserProbeAddress || (unsigned __int64)v72 < Src )
          *(_BYTE *)MmUserProbeAddress = 0;
        goto LABEL_374;
      }
      if ( (((_DWORD)v5 - 500) & 0xFFFFFFFB) != 0 )
        goto LABEL_393;
      v7 = v5;
LABEL_368:
      if ( !v7 )
      {
LABEL_374:
        memmove(v76, (const void *)Src, v7);
        Src = (ULONG64)v76;
        goto LABEL_400;
      }
      goto LABEL_369;
    }
    switch ( v6 )
    {
      case '+':
        v7 = 20;
        goto LABEL_378;
      case ',':
        v7 = 20;
        goto LABEL_369;
      case '-':
        v7 = 108;
        goto LABEL_378;
    }
    v52 = v6 - 46;
    if ( v6 == 46 )
    {
      v7 = 108;
      goto LABEL_369;
    }
    goto LABEL_194;
  }
  if ( v6 == 25 )
    goto LABEL_396;
  if ( v6 <= 0xE )
  {
    if ( v6 == 14 || v6 == 1 )
      goto LABEL_396;
    if ( v6 != 3 )
    {
      if ( v6 != 4 )
      {
        if ( v6 == 5 || v6 == 10 )
          goto LABEL_396;
        if ( v6 != 13 )
          goto LABEL_381;
LABEL_152:
        if ( (Src & 0xFFFFFFFFFFFF0000uLL) == 0 )
          goto LABEL_400;
        goto LABEL_396;
      }
      goto LABEL_143;
    }
    goto LABEL_145;
  }
  switch ( v6 )
  {
    case 0x10u:
    case 0x12u:
      goto LABEL_396;
    case 0x14u:
      if ( !Src )
        Src = -1LL;
      if ( Src > 0xFFFFFFFFFFFFFFFDuLL )
        goto LABEL_156;
      goto LABEL_160;
    case 0x15u:
      if ( (_DWORD)v5 == -1 )
        goto LABEL_400;
      if ( !Src )
      {
LABEL_156:
        LODWORD(v5) = -1;
        goto LABEL_400;
      }
LABEL_160:
      if ( Src >= MmUserProbeAddress )
        Src = MmUserProbeAddress;
      v45 = *(_DWORD *)Src;
      v77 = *(_DWORD *)Src;
      LODWORD(v81) = *(_DWORD *)Src;
      v46 = *(const void **)(Src + 8);
      *((_QWORD *)&v81 + 1) = v46;
      if ( ((unsigned __int8)v46 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v47 = (unsigned __int16)v45;
      v48 = (ULONG64)v46 + (unsigned __int16)v45 + 2;
      if ( v48 <= (unsigned __int64)v46 || v48 >= MmUserProbeAddress )
        ExRaiseAccessViolation();
      if ( (unsigned __int16)v45 > HIWORD(v77) )
      {
        if ( (v45 & 1) == 0 )
          goto LABEL_173;
      }
      else if ( (v45 & 1) == 0 )
      {
        v49 = Win32AllocPoolWithQuotaZInit((unsigned __int16)v45 + 2LL, 0x79747355u);
        Src = v49;
        if ( !v49 )
          ExRaiseStatus(-1073741801);
        PushW32ThreadLock(v49, (__int64)&v82, (__int64)Win32FreePool);
        v79 = 1;
        memmove((void *)Src, v46, v47);
        *(_WORD *)(Src + 2 * (v47 >> 1)) = 0;
        LODWORD(v5) = v89;
        v7 = 0;
        v50 = 0LL;
        v51 = 0;
        goto LABEL_402;
      }
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 317);
LABEL_173:
      ExRaiseAccessViolation();
    case 0x16u:
      goto LABEL_396;
    case 0x18u:
      goto LABEL_152;
  }
LABEL_381:
  if ( v6 < 0xB2 )
    goto LABEL_400;
  if ( v6 - 4096 > 0x53 && v6 - 0x2000 > 0x33
    || (_DWORD)v5 && (*((_DWORD *)gptiCurrent + 158) > 0x400u || v6 != 4159 || (_DWORD)v5 != 1) )
  {
    goto LABEL_393;
  }
  if ( (v6 & 1) == 0 )
    goto LABEL_396;
  if ( v6 != 8203 )
  {
    if ( v6 == 8211 && (Src & 0xFFFFFFFE) != 0 )
      goto LABEL_393;
    goto LABEL_400;
  }
  if ( (Src & 0xFFFFFFFC) == 0 )
    goto LABEL_400;
LABEL_393:
  UserSetLastError(87);
  v18 = 0;
LABEL_404:
  if ( v79 )
    PopAndFreeAlwaysW32ThreadLock((__int64)&v82);
  PopAndFreeAlwaysW32ThreadLock((__int64)&v84);
LABEL_27:
  UserSessionSwitchLeaveCrit(v20, v19, v21, v22);
  return v18;
}
