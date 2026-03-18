/*
 * XREFs of NtUserSystemParametersInfo @ 0x1C014C300
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C002FBB0 (Win32AllocPoolWithQuotaZInit.c)
 *     PrivateAPI::_anonymous_namespace_::IsValidGuiContext @ 0x1C0048218 (PrivateAPI--_anonymous_namespace_--IsValidGuiContext.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     EtwTraceUIPISystemError @ 0x1C0074670 (EtwTraceUIPISystemError.c)
 *     CheckAccess @ 0x1C0091E30 (CheckAccess.c)
 *     xxxSystemParametersInfo @ 0x1C0094FF0 (xxxSystemParametersInfo.c)
 *     PushW32ThreadLock @ 0x1C00999D4 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009A170 (PopAndFreeAlwaysW32ThreadLock.c)
 *     SetLastNtError @ 0x1C00D5700 (SetLastNtError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x1C00D6F40 (memmove.c)
 */

__int64 __fastcall NtUserSystemParametersInfo(__int64 a1, __int64 Size, __int64 Src, __int64 a4)
{
  ULONG64 v4; // r15
  __int64 v5; // r13
  unsigned int v6; // edi
  unsigned int v7; // ebx
  struct tagTHREADINFO *v8; // rax
  __int64 v9; // rcx
  __int64 *i; // r12
  struct tagTHREADINFO *v11; // rcx
  int v12; // eax
  __int64 CurrentProcessWin32Process; // rax
  int v14; // eax
  unsigned __int64 v15; // rax
  int v16; // ecx
  int v17; // edi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  bool v23; // zf
  unsigned int v24; // eax
  bool v25; // zf
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  bool v30; // zf
  bool v31; // zf
  unsigned int v32; // eax
  bool v33; // zf
  unsigned int v34; // eax
  bool v35; // zf
  unsigned int v36; // eax
  __int64 v37; // r12
  bool v38; // zf
  bool v39; // zf
  unsigned int v40; // eax
  unsigned int v41; // eax
  __int64 v42; // rax
  ULONG64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  int v46; // ecx
  const void *v47; // r12
  size_t v48; // rbx
  ULONG64 v49; // r8
  __int64 v50; // rax
  void *v51; // r12
  int v52; // r14d
  unsigned int v53; // eax
  __int64 v54; // rax
  unsigned int v55; // eax
  __int64 v56; // xmm0_8
  ULONG64 v57; // rax
  __int64 v58; // rcx
  ULONG64 v59; // rdx
  int v60; // ecx
  bool v61; // zf
  unsigned int v62; // eax
  unsigned int v63; // eax
  unsigned int v64; // eax
  unsigned int v65; // eax
  bool v66; // zf
  _OWORD *v67; // rdx
  __int64 v68; // rax
  _OWORD *v69; // rdx
  _OWORD *v70; // rax
  __int64 CurrentProcessWow64Process; // rax
  _OWORD *v72; // rdx
  ULONG64 v73; // rcx
  ULONG v74; // r8d
  volatile void *Address; // [rsp+30h] [rbp-318h]
  _DWORD *Addressa; // [rsp+30h] [rbp-318h]
  unsigned __int16 *v77; // [rsp+38h] [rbp-310h]
  int v78; // [rsp+38h] [rbp-310h]
  void *v79; // [rsp+48h] [rbp-300h]
  int v80; // [rsp+50h] [rbp-2F8h]
  unsigned int v81[4]; // [rsp+68h] [rbp-2E0h] BYREF
  __int128 v82; // [rsp+78h] [rbp-2D0h]
  __int128 v83; // [rsp+88h] [rbp-2C0h] BYREF
  __int64 v84; // [rsp+98h] [rbp-2B0h]
  __int128 v85; // [rsp+A0h] [rbp-2A8h] BYREF
  __int64 v86; // [rsp+B0h] [rbp-298h]
  __int128 v87; // [rsp+C8h] [rbp-280h]
  __int64 v88; // [rsp+D8h] [rbp-270h]
  _BYTE v89[616]; // [rsp+E0h] [rbp-268h] BYREF
  unsigned int v90; // [rsp+358h] [rbp+10h]
  char v91; // [rsp+368h] [rbp+20h]
  unsigned int v92; // [rsp+368h] [rbp+20h]

  v91 = a4;
  v90 = Size;
  v4 = Src;
  v5 = (unsigned int)Size;
  v6 = a1;
  v82 = 0LL;
  v7 = 0;
  Address = 0LL;
  v83 = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  v86 = 0LL;
  v80 = 0;
  v81[0] = 0x2000;
  v81[1] = -1;
  LOBYTE(a1) = 1;
  v8 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1, Size, Src, a4);
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
  v92 = v91 & 3;
  v11 = gptiCurrent;
  if ( (*((_DWORD *)gptiCurrent + 122) & 0x20000000) != 0 )
  {
    v11 = *(struct tagTHREADINFO **)(*((_QWORD *)gptiCurrent + 53) + 760LL);
    v12 = *((_DWORD *)v11 + 6) & 8;
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
    if ( CheckAccess((unsigned int *)(CurrentProcessWin32Process + 888), v81) )
    {
LABEL_127:
      v37 = 4LL;
      goto LABEL_128;
    }
  }
  if ( v6 <= 0x6B )
  {
    if ( v6 == 107 )
      goto LABEL_22;
    if ( v6 <= 0x37 )
    {
      if ( v6 == 55 )
        goto LABEL_22;
      if ( v6 <= 0x1D )
      {
        if ( v6 != 29 )
        {
          if ( v6 <= 0x13 )
          {
            v14 = 698452;
            if ( _bittest(&v14, v6) )
              goto LABEL_22;
            goto LABEL_127;
          }
          if ( v6 == 20 || v6 == 21 || v6 == 23 )
            goto LABEL_22;
          v24 = v6 - 24;
          v23 = v6 == 24;
          goto LABEL_122;
        }
LABEL_22:
        v15 = PsGetCurrentProcessWin32Process(v11);
        if ( v15 )
          v15 &= -(__int64)(*(_QWORD *)v15 != 0LL);
        EtwTraceUIPISystemError((struct tagPROCESSINFO *)v15, 0LL);
        v16 = 5;
        goto LABEL_25;
      }
      if ( v6 <= 0x2A )
      {
        if ( v6 == 42 || v6 == 30 )
          goto LABEL_22;
        v26 = v6 - 32;
        v25 = v6 == 32;
        goto LABEL_35;
      }
      if ( v6 == 44 || v6 == 46 )
        goto LABEL_22;
      v32 = v6 - 47;
      v31 = v6 == 47;
      goto LABEL_43;
    }
    if ( v6 <= 0x52 )
    {
      if ( v6 == 82 )
        goto LABEL_22;
      if ( v6 <= 0x47 )
      {
        if ( ((v6 - 57) & 0xFFFFFFF1) == 0 && v6 != 63 )
          goto LABEL_22;
        goto LABEL_127;
      }
      if ( v6 == 73 || v6 == 75 || v6 == 76 || v6 == 77 )
        goto LABEL_22;
      v34 = v6 - 78;
      v33 = v6 == 78;
LABEL_56:
      if ( v33 )
        goto LABEL_22;
      v30 = v34 == 3;
      goto LABEL_126;
    }
    if ( v6 <= 0x5D )
    {
      if ( v6 == 93 || v6 == 85 )
        goto LABEL_22;
      v26 = v6 - 86;
      v25 = v6 == 86;
LABEL_35:
      if ( v25 )
        goto LABEL_22;
      v27 = v26 - 1;
      if ( !v27 )
        goto LABEL_22;
      v28 = v27 - 1;
      if ( !v28 )
        goto LABEL_22;
      v29 = v28 - 2;
      if ( !v29 )
        goto LABEL_22;
      v30 = v29 == 1;
LABEL_126:
      if ( v30 )
        goto LABEL_22;
      goto LABEL_127;
    }
    if ( v6 == 96 )
      goto LABEL_22;
    v36 = v6 - 97;
    v35 = v6 == 97;
LABEL_64:
    if ( v35 )
      goto LABEL_22;
    v32 = v36 - 2;
    v31 = v32 == 0;
LABEL_43:
    if ( v31 )
      goto LABEL_22;
    v24 = v32 - 2;
    v23 = v24 == 0;
    goto LABEL_122;
  }
  if ( v6 <= 0x1015 )
  {
    if ( v6 == 4117 )
      goto LABEL_22;
    if ( v6 <= 0xA9 )
    {
      if ( v6 == 169 )
        goto LABEL_22;
      if ( v6 > 0x95 )
      {
        if ( v6 == 151 || v6 == 153 || v6 == 155 || v6 == 161 )
          goto LABEL_22;
        v34 = v6 - 163;
        v33 = v6 == 163;
        goto LABEL_56;
      }
      switch ( v6 )
      {
        case 0x95u:
          goto LABEL_22;
        case 0x6Du:
          goto LABEL_22;
        case 0x6Fu:
          goto LABEL_22;
        case 0x71u:
          goto LABEL_22;
      }
      v37 = 4LL;
      if ( v6 == 117 || v6 == 119 )
        goto LABEL_22;
      v38 = v6 == 147;
      goto LABEL_116;
    }
    if ( v6 <= 0x1005 )
    {
      if ( v6 == 4101 || v6 == 171 || v6 == 173 || v6 == 175 || v6 == 177 )
        goto LABEL_22;
      v40 = v6 - 4097;
      v39 = v6 == 4097;
LABEL_124:
      if ( v39 )
        goto LABEL_22;
      v30 = v40 == 2;
      goto LABEL_126;
    }
    switch ( v6 )
    {
      case 0x1007u:
        goto LABEL_22;
      case 0x1009u:
        goto LABEL_22;
      case 0x100Bu:
        goto LABEL_22;
      case 0x100Du:
        goto LABEL_22;
    }
    v41 = v6 - 4111;
    if ( v6 == 4111 )
      goto LABEL_22;
    v37 = 4LL;
LABEL_115:
    v38 = v41 == 4;
    goto LABEL_116;
  }
  if ( v6 > 0x2001 )
  {
    if ( v6 > 0x2017 )
    {
      if ( v6 == 8217 || v6 == 8219 || v6 == 8221 )
        goto LABEL_22;
      v24 = v6 - 8241;
      v23 = v6 == 8241;
LABEL_122:
      if ( v23 )
        goto LABEL_22;
      v40 = v24 - 2;
      v39 = v40 == 0;
      goto LABEL_124;
    }
    switch ( v6 )
    {
      case 0x2017u:
        goto LABEL_22;
      case 0x2003u:
        goto LABEL_22;
      case 0x2005u:
        goto LABEL_22;
    }
    v37 = 4LL;
    if ( v6 == 8201 )
      goto LABEL_22;
    if ( v6 == 8207 )
      goto LABEL_22;
    v41 = v6 - 8209;
    if ( v6 == 8209 )
      goto LABEL_22;
    goto LABEL_115;
  }
  if ( v6 == 8193 )
    goto LABEL_22;
  if ( v6 > 0x1043 )
  {
    if ( v6 == 4169 )
      goto LABEL_22;
    v36 = v6 - 4171;
    v35 = v6 == 4171;
    goto LABEL_64;
  }
  switch ( v6 )
  {
    case 0x1043u:
      goto LABEL_22;
    case 0x1017u:
      goto LABEL_22;
    case 0x1019u:
      goto LABEL_22;
  }
  v37 = 4LL;
  if ( v6 == 4125 || v6 == 4127 || v6 == 4135 )
    goto LABEL_22;
  v38 = v6 == 4161;
LABEL_116:
  if ( v38 )
    goto LABEL_22;
LABEL_128:
  v42 = Win32AllocPoolWithQuotaZInit(0x228uLL, 0x79747355u);
  v77 = (unsigned __int16 *)v42;
  if ( !v42 )
  {
    v16 = 8;
LABEL_25:
    v17 = 0;
    UserSetLastError(v16);
    goto LABEL_26;
  }
  PushW32ThreadLock(v42, (__int64)&v85, (__int64)Win32FreePool);
  if ( v6 > 0x1026 )
  {
    if ( v6 == 4135 )
      goto LABEL_404;
    if ( v6 == 8221 )
    {
      if ( v4 > 2 )
        goto LABEL_397;
LABEL_404:
      v52 = 0;
LABEL_405:
      v51 = (void *)Address;
LABEL_406:
      v17 = xxxSystemParametersInfo(v6, v5, (void *)v4, v92);
      if ( v52 )
        memmove(v51, (const void *)v4, v7);
      goto LABEL_408;
    }
    goto LABEL_385;
  }
  if ( v6 == 4134 )
    goto LABEL_400;
  if ( v6 > 0x5E )
  {
    if ( v6 <= 0x90 )
    {
      if ( v6 == 144 )
        goto LABEL_400;
      if ( v6 <= 0x76 )
      {
        if ( v6 == 118 )
          goto LABEL_400;
        if ( v6 <= 0x6C )
        {
          if ( v6 - 95 <= 0xD )
          {
            v60 = 10921;
            if ( _bittest(&v60, v6 - 95) )
              goto LABEL_400;
          }
          goto LABEL_385;
        }
        if ( v6 == 110 || v6 == 112 || v6 == 114 )
          goto LABEL_400;
        if ( v6 != 115 )
        {
          if ( v6 != 116 )
          {
            if ( v6 != 117 )
              goto LABEL_385;
            goto LABEL_147;
          }
LABEL_149:
          v7 = 12;
          goto LABEL_382;
        }
        v51 = (void *)v4;
        v4 = (ULONG64)v77;
        ProbeForWrite(v51, 2 * v5, 2u);
        if ( (unsigned int)v5 >= 0x104 )
          LODWORD(v5) = 260;
        v7 = 2 * v5;
LABEL_276:
        v52 = 1;
        goto LABEL_406;
      }
      if ( v6 > 0x84 )
      {
        v61 = v6 == 134;
        v62 = v6 - 134;
      }
      else
      {
        if ( v6 == 132 || v6 == 120 )
          goto LABEL_400;
        v62 = v6 - 122;
        v61 = v6 == 122;
      }
      if ( v61 || (v63 = v62 - 2) == 0 || (v64 = v63 - 2) == 0 || (v65 = v64 - 2) == 0 )
      {
LABEL_400:
        v79 = (void *)v4;
        if ( v4 >= MmUserProbeAddress )
          v4 = MmUserProbeAddress;
        *(_DWORD *)v4 = *(_DWORD *)v4;
        v52 = 1;
        v4 = (ULONG64)v77;
        LODWORD(v5) = v90;
        v7 = 4;
        v51 = v79;
        goto LABEL_406;
      }
      v66 = v65 == 2;
LABEL_342:
      if ( v66 )
        goto LABEL_400;
      goto LABEL_385;
    }
    if ( v6 > 0x9E )
    {
      if ( v6 > 0xAA )
      {
        switch ( v6 )
        {
          case 0xACu:
            if ( (_DWORD)v5 != 4 )
              goto LABEL_397;
            break;
          case 0xADu:
            if ( (_DWORD)v5 != 4 )
              goto LABEL_397;
            v7 = 4;
            goto LABEL_372;
          case 0xAEu:
            v7 = 24;
            if ( (_DWORD)v5 != 24 )
              goto LABEL_397;
            if ( ((PsGetCurrentProcessWow64Process(v44, v43, v45) == 0 ? 3 : 0) & (unsigned __int8)v4) != 0 )
              ExRaiseDatatypeMisalignment();
            v43 = MmUserProbeAddress;
            if ( v4 + 4 > MmUserProbeAddress || v4 + 4 < v4 )
              *(_BYTE *)MmUserProbeAddress = 0;
            if ( *(_DWORD *)v4 )
              goto LABEL_397;
            v44 = (__int64)v77;
            *(_DWORD *)v77 = 0;
            goto LABEL_382;
          case 0xAFu:
            v7 = 24;
            if ( (_DWORD)v5 != 24 )
              goto LABEL_397;
            if ( ((PsGetCurrentProcessWow64Process(v44, v43, v45) == 0 ? 3 : 0) & (unsigned __int8)v4) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v4 + 4 > MmUserProbeAddress || v4 + 4 < v4 )
              *(_BYTE *)MmUserProbeAddress = 0;
            if ( *(_DWORD *)v4 )
              goto LABEL_397;
            goto LABEL_372;
          case 0xB0u:
            if ( (_DWORD)v5 )
              goto LABEL_397;
            break;
          default:
            goto LABEL_385;
        }
        v7 = 4;
        goto LABEL_382;
      }
      if ( v6 == 170 || v6 == 160 )
        goto LABEL_400;
      if ( v6 != 162 )
      {
        if ( v6 == 163 )
        {
LABEL_199:
          v7 = 16;
          goto LABEL_373;
        }
        if ( v6 == 165 || (v55 = v6 - 167, v6 == 167) )
        {
          v7 = 12;
          if ( (_DWORD)v5 != 12 )
            goto LABEL_397;
          goto LABEL_382;
        }
LABEL_341:
        v66 = v55 == 1;
        goto LABEL_342;
      }
    }
    else
    {
      if ( v6 == 158 )
        goto LABEL_400;
      if ( v6 <= 0x98 )
      {
        if ( v6 != 152 )
        {
          switch ( v6 )
          {
            case 0x92u:
              v7 = 64;
              if ( (_DWORD)v5 != 64 )
                goto LABEL_397;
              goto LABEL_382;
            case 0x93u:
              v7 = 64;
              if ( (_DWORD)v5 != 64 )
                goto LABEL_397;
              goto LABEL_373;
            case 0x94u:
              v7 = 32;
              if ( (_DWORD)v5 != 32 )
                goto LABEL_397;
              goto LABEL_382;
            case 0x95u:
              v7 = 32;
              if ( (_DWORD)v5 != 32 )
                goto LABEL_397;
              goto LABEL_373;
          }
          if ( v6 != 150 )
          {
            if ( v6 != 151 )
              goto LABEL_385;
            if ( (_DWORD)v5 != 28 )
              goto LABEL_397;
            goto LABEL_215;
          }
          if ( (_DWORD)v5 != 28 )
            goto LABEL_397;
LABEL_216:
          v7 = 28;
          goto LABEL_382;
        }
        v44 = 128LL;
        if ( (_DWORD)v5 != 128 )
          goto LABEL_397;
        goto LABEL_227;
      }
      switch ( v6 )
      {
        case 0x99u:
          LODWORD(v44) = 128;
          if ( (_DWORD)v5 != 128 )
            goto LABEL_397;
LABEL_226:
          v7 = v44;
          goto LABEL_373;
        case 0x9Au:
          v7 = 548;
          if ( (_DWORD)v5 == 548 )
          {
            CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v44, v43, v45);
            ProbeForWrite((volatile void *)v4, 0x224uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
            Address = (volatile void *)v4;
            v72 = v77;
            do
            {
              *v72 = *(_OWORD *)v4;
              v72[1] = *(_OWORD *)(v4 + 16);
              v72[2] = *(_OWORD *)(v4 + 32);
              v72[3] = *(_OWORD *)(v4 + 48);
              v72[4] = *(_OWORD *)(v4 + 64);
              v72[5] = *(_OWORD *)(v4 + 80);
              v72[6] = *(_OWORD *)(v4 + 96);
              v72 += 8;
              *(v72 - 1) = *(_OWORD *)(v4 + 112);
              v4 += 128LL;
              --v37;
            }
            while ( v37 );
            *v72 = *(_OWORD *)v4;
            v72[1] = *(_OWORD *)(v4 + 16);
            *((_DWORD *)v72 + 8) = *(_DWORD *)(v4 + 32);
            v4 = (ULONG64)v77;
            v52 = 1;
            goto LABEL_405;
          }
          goto LABEL_397;
        case 0x9Bu:
          v7 = 548;
          if ( (_DWORD)v5 != 548 )
            goto LABEL_397;
          if ( v4 + 548 < v4 || v4 + 548 > MmUserProbeAddress )
            v4 = MmUserProbeAddress;
          v67 = v89;
          v68 = 4LL;
          do
          {
            *v67 = *(_OWORD *)v4;
            v67[1] = *(_OWORD *)(v4 + 16);
            v67[2] = *(_OWORD *)(v4 + 32);
            v67[3] = *(_OWORD *)(v4 + 48);
            v67[4] = *(_OWORD *)(v4 + 64);
            v67[5] = *(_OWORD *)(v4 + 80);
            v67[6] = *(_OWORD *)(v4 + 96);
            v67 += 8;
            *(v67 - 1) = *(_OWORD *)(v4 + 112);
            v4 += 128LL;
            --v68;
          }
          while ( v68 );
          *v67 = *(_OWORD *)v4;
          v67[1] = *(_OWORD *)(v4 + 16);
          *((_DWORD *)v67 + 8) = *(_DWORD *)(v4 + 32);
          v69 = v77;
          v70 = v89;
          do
          {
            *v69 = *v70;
            v69[1] = v70[1];
            v69[2] = v70[2];
            v69[3] = v70[3];
            v69[4] = v70[4];
            v69[5] = v70[5];
            v69[6] = v70[6];
            v69 += 8;
            *(v69 - 1) = v70[7];
            v70 += 8;
            --v37;
          }
          while ( v37 );
          *v69 = *v70;
          v69[1] = v70[1];
          *((_DWORD *)v69 + 8) = *((_DWORD *)v70 + 8);
          v4 = (ULONG64)v77;
          if ( *((_DWORD *)v77 + 6) > 0x104u )
            goto LABEL_397;
          goto LABEL_404;
      }
      v53 = v6 - 156;
      if ( v6 != 156 )
      {
LABEL_198:
        if ( v53 != 1 )
          goto LABEL_385;
        goto LABEL_199;
      }
      if ( (_DWORD)v5 != 16 )
        goto LABEL_397;
    }
LABEL_204:
    v7 = 16;
    goto LABEL_382;
  }
  if ( v6 == 94 )
    goto LABEL_400;
  if ( v6 > 0x30 )
  {
    if ( v6 <= 0x42 )
    {
      if ( v6 != 66 )
      {
        v44 = 56LL;
        if ( v6 <= 0x38 )
        {
          switch ( v6 )
          {
            case '8':
              goto LABEL_400;
            case '2':
              v7 = 24;
              goto LABEL_382;
            case '3':
              v7 = 24;
              goto LABEL_373;
          }
          if ( v6 != 52 )
          {
            if ( v6 != 53 )
            {
              if ( v6 != 54 )
              {
                if ( v6 != 55 )
                  goto LABEL_385;
LABEL_215:
                v7 = 28;
                goto LABEL_373;
              }
              goto LABEL_216;
            }
LABEL_257:
            v7 = 8;
            goto LABEL_373;
          }
LABEL_217:
          v7 = 8;
          goto LABEL_382;
        }
        if ( v6 == 58 )
          goto LABEL_217;
        if ( v6 == 59 )
          goto LABEL_257;
        if ( v6 != 60 )
        {
          if ( v6 != 61 )
          {
            if ( v6 != 64 )
            {
              if ( v6 != 65 )
                goto LABEL_385;
              goto LABEL_226;
            }
LABEL_227:
            v7 = v44;
            goto LABEL_382;
          }
LABEL_147:
          v7 = 12;
          goto LABEL_373;
        }
        goto LABEL_149;
      }
      v7 = 16;
      v54 = PsGetCurrentProcessWow64Process(v44, v43, v45);
      ProbeForWrite((volatile void *)v4, 0x10uLL, v54 != 0 ? 1 : 4);
      v51 = (void *)v4;
      *(_OWORD *)v77 = *(_OWORD *)v4;
      v4 = (ULONG64)v77;
      ProbeForWrite(*((volatile void **)v77 + 1), 0x100uLL, 2u);
      goto LABEL_276;
    }
    if ( v6 > 0x4F )
    {
      if ( v6 == 80 || v6 == 83 || v6 == 84 )
        goto LABEL_400;
      if ( v6 != 89 )
      {
        if ( v6 != 90 )
          goto LABEL_385;
        goto LABEL_257;
      }
      goto LABEL_217;
    }
    if ( v6 == 79 )
      goto LABEL_400;
    if ( v6 != 67 )
    {
      if ( v6 == 68 || v6 == 70 )
        goto LABEL_400;
      if ( v6 == 72 )
        goto LABEL_217;
      v55 = v6 - 73;
      if ( v6 == 73 )
        goto LABEL_257;
      goto LABEL_341;
    }
    if ( v4 + 24 < v4 || v4 + 24 > MmUserProbeAddress )
      v4 = MmUserProbeAddress;
    v87 = *(_OWORD *)v4;
    v88 = *(_QWORD *)(v4 + 16);
    v56 = v88;
    *(_OWORD *)v77 = v87;
    *((_QWORD *)v77 + 2) = v56;
    v4 = (ULONG64)v77;
    v57 = *((_QWORD *)v77 + 2);
    if ( (v57 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v58 = v77[4];
    v59 = v58 + v57 + 2;
    if ( v59 <= v57 || v59 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( (unsigned __int16)v58 > v77[5] )
    {
      if ( (v58 & 1) == 0 )
        goto LABEL_250;
    }
    else if ( (v58 & 1) == 0 )
    {
      if ( !(_WORD)v58 )
        *((_QWORD *)v77 + 2) = 0LL;
      goto LABEL_404;
    }
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 446);
LABEL_250:
    ExRaiseAccessViolation();
  }
  if ( v6 == 48 )
    goto LABEL_204;
  if ( v6 > 0x19 )
  {
    if ( v6 <= 0x2A )
    {
      if ( v6 != 42 )
      {
        if ( v6 == 27 )
          goto LABEL_400;
        if ( v6 == 31 )
        {
          v7 = 92;
          goto LABEL_382;
        }
        if ( v6 != 34 )
        {
          if ( v6 == 35 || v6 == 38 )
            goto LABEL_400;
          if ( v6 != 41 )
            goto LABEL_385;
          if ( (((_DWORD)v5 - 500) & 0xFFFFFFFB) != 0 )
            goto LABEL_397;
          v7 = v5;
LABEL_382:
          Addressa = (_DWORD *)v4;
          v4 = (ULONG64)v77;
          v74 = PsGetCurrentProcessWow64Process(v44, v43, v45) != 0 ? 1 : 4;
          v51 = Addressa;
          ProbeForWrite(Addressa, v7, v74);
          v52 = 1;
          *(_DWORD *)v77 = *Addressa;
          goto LABEL_406;
        }
        v7 = 92;
LABEL_373:
        if ( (v4 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v73 = v4 + v7;
        if ( v73 > MmUserProbeAddress || v73 < v4 )
          *(_BYTE *)MmUserProbeAddress = 0;
        goto LABEL_378;
      }
      if ( (((_DWORD)v5 - 500) & 0xFFFFFFFB) != 0 )
        goto LABEL_397;
      v7 = v5;
LABEL_372:
      if ( !v7 )
      {
LABEL_378:
        memmove(v77, (const void *)v4, v7);
        v4 = (ULONG64)v77;
        goto LABEL_404;
      }
      goto LABEL_373;
    }
    switch ( v6 )
    {
      case '+':
        v7 = 20;
        goto LABEL_382;
      case ',':
        v7 = 20;
        goto LABEL_373;
      case '-':
        v7 = 108;
        goto LABEL_382;
    }
    v53 = v6 - 46;
    if ( v6 == 46 )
    {
      v7 = 108;
      goto LABEL_373;
    }
    goto LABEL_198;
  }
  if ( v6 == 25 )
    goto LABEL_400;
  if ( v6 <= 0xE )
  {
    if ( v6 == 14 || v6 == 1 )
      goto LABEL_400;
    if ( v6 != 3 )
    {
      if ( v6 != 4 )
      {
        if ( v6 == 5 || v6 == 10 )
          goto LABEL_400;
        if ( v6 != 13 )
          goto LABEL_385;
LABEL_156:
        if ( (v4 & 0xFFFFFFFFFFFF0000uLL) == 0 )
          goto LABEL_404;
        goto LABEL_400;
      }
      goto LABEL_147;
    }
    goto LABEL_149;
  }
  switch ( v6 )
  {
    case 0x10u:
    case 0x12u:
      goto LABEL_400;
    case 0x14u:
      if ( !v4 )
        v4 = -1LL;
      if ( v4 > 0xFFFFFFFFFFFFFFFDuLL )
        goto LABEL_160;
      goto LABEL_164;
    case 0x15u:
      if ( (_DWORD)v5 == -1 )
        goto LABEL_404;
      if ( !v4 )
      {
LABEL_160:
        LODWORD(v5) = -1;
        goto LABEL_404;
      }
LABEL_164:
      if ( v4 >= MmUserProbeAddress )
        v4 = MmUserProbeAddress;
      v46 = *(_DWORD *)v4;
      v78 = *(_DWORD *)v4;
      LODWORD(v82) = *(_DWORD *)v4;
      v47 = *(const void **)(v4 + 8);
      *((_QWORD *)&v82 + 1) = v47;
      if ( ((unsigned __int8)v47 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v48 = (unsigned __int16)v46;
      v49 = (ULONG64)v47 + (unsigned __int16)v46 + 2;
      if ( v49 <= (unsigned __int64)v47 || v49 >= MmUserProbeAddress )
        ExRaiseAccessViolation();
      if ( (unsigned __int16)v46 > HIWORD(v78) )
      {
        if ( (v46 & 1) == 0 )
          goto LABEL_177;
      }
      else if ( (v46 & 1) == 0 )
      {
        v50 = Win32AllocPoolWithQuotaZInit((unsigned __int16)v46 + 2LL, 0x79747355u);
        v4 = v50;
        if ( !v50 )
          ExRaiseStatus(-1073741801);
        PushW32ThreadLock(v50, (__int64)&v83, (__int64)Win32FreePool);
        v80 = 1;
        memmove((void *)v4, v47, v48);
        *(_WORD *)(v4 + 2 * (v48 >> 1)) = 0;
        LODWORD(v5) = v90;
        v7 = 0;
        v51 = 0LL;
        v52 = 0;
        goto LABEL_406;
      }
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 318);
LABEL_177:
      ExRaiseAccessViolation();
    case 0x16u:
      goto LABEL_400;
    case 0x18u:
      goto LABEL_156;
  }
LABEL_385:
  if ( v6 < 0xB2 )
    goto LABEL_404;
  if ( v6 - 4096 > 0x53 && v6 - 0x2000 > 0x35
    || (_DWORD)v5 && (*((_DWORD *)gptiCurrent + 158) > 0x400u || v6 != 4159 || (_DWORD)v5 != 1) )
  {
    goto LABEL_397;
  }
  if ( (v6 & 1) == 0 )
    goto LABEL_400;
  if ( v6 != 8203 )
  {
    if ( v6 == 8211 && (v4 & 0xFFFFFFFE) != 0 )
      goto LABEL_397;
    goto LABEL_404;
  }
  if ( (v4 & 0xFFFFFFFC) == 0 )
    goto LABEL_404;
LABEL_397:
  UserSetLastError(87);
  v17 = 0;
LABEL_408:
  if ( v80 )
    PopAndFreeAlwaysW32ThreadLock((__int64)&v83);
  PopAndFreeAlwaysW32ThreadLock((__int64)&v85);
LABEL_26:
  UserSessionSwitchLeaveCrit(v19, v18, v20, v21);
  return v17;
}
