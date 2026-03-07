__int64 __fastcall GreGetDeviceCapsInternal(struct PDEVOBJ *a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rdi
  int v4; // esi
  unsigned int v6; // ebx
  __int64 v7; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v9; // rcx
  char v10; // r15
  unsigned int v11; // ebp
  __int64 CurrentProcessWin32Process; // rax
  __int64 v14; // rcx
  int v15; // eax
  int v17; // ecx
  __int64 v18; // rdi
  __int64 v19; // rcx
  struct _ERESOURCE *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // ecx
  int v24; // ebx
  int v25; // eax
  __int64 v26; // rcx

  v3 = (unsigned int *)(*(_QWORD *)a1 + 2104LL);
  v4 = a2;
  v6 = 0;
  if ( (int)a2 <= 36 )
  {
    if ( (_DWORD)a2 == 36 )
      return 1;
    if ( (int)a2 > 16 )
    {
      if ( (_DWORD)a2 != 18 )
      {
        switch ( (_DWORD)a2 )
        {
          case 0x14:
            return 0;
          case 0x18:
            return *(unsigned int *)(*(_QWORD *)a1 + 2136LL);
          case 0x16:
            return (unsigned int)PDEVOBJ::cFonts(a1);
          case 0x1A:
            return 0;
          case 0x1C:
            return 511;
          case 0x1E:
            return 254;
          case 0x20:
            return 255;
          case 0x22:
            v23 = *(_DWORD *)(*(_QWORD *)a1 + 2152LL);
            v24 = v3[12] | 0x4000;
            if ( !v3[1] )
              v24 = v23;
            return v24 | 0x1800u;
        }
        goto LABEL_64;
      }
      v25 = *(_DWORD *)(*(_QWORD *)a1 + 2136LL);
      if ( v25 != -1 )
        return (unsigned int)(5 * v25);
    }
    else if ( (_DWORD)a2 != 16 )
    {
      if ( (int)a2 <= 6 )
      {
        switch ( (_DWORD)a2 )
        {
          case 6:
            v17 = *(_DWORD *)(*(_QWORD *)a1 + 2116LL);
            break;
          case 0x80000000:
            return *(unsigned int *)(*(_QWORD *)a1 + 2112LL);
          case 0x80000002:
            return *(unsigned int *)(*(_QWORD *)a1 + 2116LL);
          case 0:
            return *v3;
          case 2:
            return *(unsigned int *)(*(_QWORD *)a1 + 2108LL);
          case 4:
            v17 = *(_DWORD *)(*(_QWORD *)a1 + 2112LL);
            break;
          default:
            goto LABEL_64;
        }
        return (v17 + 500) / 0x3E8u;
      }
      switch ( (_DWORD)a2 )
      {
        case 8:
          v6 = *(_DWORD *)(*(_QWORD *)a1 + 2120LL);
          break;
        case 0xA:
          v6 = *(_DWORD *)(*(_QWORD *)a1 + 2124LL);
          break;
        case 0xC:
          v6 = *(_DWORD *)(*(_QWORD *)a1 + 2128LL);
          if ( v6 == 15 )
            return 16;
          return v6;
        case 0xE:
          return *(unsigned int *)(*(_QWORD *)a1 + 2132LL);
        default:
          goto LABEL_64;
      }
      goto LABEL_12;
    }
    return (unsigned int)-1;
  }
  if ( (int)a2 > 110 )
  {
    switch ( (_DWORD)a2 )
    {
      case 'o':
        return *(unsigned int *)(*(_QWORD *)a1 + 2204LL);
      case 'p':
        return *(unsigned int *)(*(_QWORD *)a1 + 2192LL);
      case 'q':
        return *(unsigned int *)(*(_QWORD *)a1 + 2196LL);
      case 't':
        return *(unsigned int *)(*(_QWORD *)a1 + 2352LL);
      case 'u':
        return *(unsigned int *)(*(_QWORD *)a1 + 2124LL);
      case 'v':
        return *(unsigned int *)(*(_QWORD *)a1 + 2120LL);
      case 'w':
        return *(unsigned int *)(*(_QWORD *)a1 + 2356LL);
      case 'x':
        return *(unsigned int *)(*(_QWORD *)a1 + 2408LL);
    }
    if ( (_DWORD)a2 == 121 && (int)IsGetColorManagementCapsSupported() >= 0 && qword_1C02D57D0 )
    {
      qword_1C02D57D0(*(_QWORD *)a1);
      return v6;
    }
    goto LABEL_64;
  }
  if ( (_DWORD)a2 == 110 )
    return *(unsigned int *)(*(_QWORD *)a1 + 2200LL);
  if ( (_DWORD)a2 != 90 )
  {
    if ( (int)a2 > 90 )
    {
      switch ( (_DWORD)a2 )
      {
        case '^':
          v18 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
          EngAcquireSemaphore(*(HSEMAPHORE *)(v18 + 8));
          EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v18 + 8), 16LL);
          v19 = *(_QWORD *)(*(_QWORD *)a1 + 2552LL);
          if ( ((v19 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
          {
            v6 = (*(_DWORD *)(v19 + 160) & 8) << 11;
            if ( (*(_DWORD *)(v19 + 160) & 0x2000000) != 0 )
              v6 |= 0x8000u;
          }
          EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v18 + 8));
          v20 = *(struct _ERESOURCE **)(v18 + 8);
          if ( v20 )
          {
            ExReleaseResourceAndLeaveCriticalRegion(v20);
            PsLeavePriorityRegion(v22, v21);
          }
          return v6;
        case 'h':
          return *(unsigned int *)(*(_QWORD *)a1 + 2208LL);
        case 'j':
          return 20;
        case 'l':
          return (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 2156LL)
                              + *(_DWORD *)(*(_QWORD *)a1 + 2160LL)
                              + *(_DWORD *)(*(_QWORD *)a1 + 2164LL));
      }
    }
    else
    {
      switch ( (_DWORD)a2 )
      {
        case '&':
          return *(unsigned int *)(*(_QWORD *)a1 + 2140LL);
        case '(':
          return *(unsigned int *)(*(_QWORD *)a1 + 2168LL);
        case '*':
          return *(unsigned int *)(*(_QWORD *)a1 + 2172LL);
        case ',':
          return *(unsigned int *)(*(_QWORD *)a1 + 2176LL);
        case 'X':
          v6 = *(_DWORD *)(*(_QWORD *)a1 + 2144LL);
          goto LABEL_12;
      }
    }
LABEL_64:
    v6 = 0;
    if ( v4 != 88 && v4 != 90 && v4 != 8 && v4 != 10 )
      return v6;
    goto LABEL_12;
  }
  v6 = *(_DWORD *)(*(_QWORD *)a1 + 2148LL);
LABEL_12:
  v7 = *(unsigned int *)(*(_QWORD *)a1 + 40LL);
  if ( (v7 & 1) != 0 )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v7, a2, a3);
    v10 = CurrentThreadDpiAwarenessContext;
    v11 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
    if ( !v11 )
    {
      v11 = v3[11];
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
      if ( CurrentProcessWin32Process )
      {
        if ( *(_QWORD *)CurrentProcessWin32Process && *(_WORD *)(CurrentProcessWin32Process + 284) )
          v11 = *(unsigned __int16 *)(CurrentProcessWin32Process + 284);
      }
    }
    if ( ((v4 - 88) & 0xFFFFFFFD) == 0 )
      return v11;
    if ( (v10 & 0xF) == 2 )
      return v6;
    v14 = *(_QWORD *)a1;
    v15 = *(_DWORD *)(*(_QWORD *)a1 + 2432LL);
    if ( !v15
      && ((*(_DWORD *)(v14 + 40) & 0x20000) == 0
       || (v26 = *(_QWORD *)(*(_QWORD *)(v14 + 1768) + 40LL)) == 0
       || (*(_DWORD *)(v26 + 40) & 1) == 0
       || (v15 = *(_DWORD *)(v26 + 2432)) == 0) )
    {
      v15 = 100;
    }
    return (unsigned int)EngMulDiv(v6, v11, (96 * v15 + 50) / 0x64u);
  }
  return v6;
}
