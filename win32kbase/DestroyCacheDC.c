__int64 __fastcall DestroyCacheDC(char *a1, __int64 a2)
{
  char *v3; // rdi
  unsigned int v4; // esi
  int v5; // r14d
  void *v6; // rbx
  int v7; // eax
  unsigned __int64 v8; // rbp
  HPALETTE v9; // rcx
  HPALETTE v10; // rcx
  HPALETTE v11; // rcx
  __int64 v12; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v13; // rcx
  char *i; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 CurrentProcessWin32Process; // rax
  _QWORD v21[7]; // [rsp+20h] [rbp-38h] BYREF

  v3 = a1;
  v4 = 0;
  v5 = 0;
  if ( !a1 )
  {
    GreLockVisRgn(*((_QWORD *)gpDispInfo + 5));
    v5 = 1;
    v3 = (char *)gpDispInfo + 24;
    for ( i = (char *)*((_QWORD *)gpDispInfo + 3); i; i = *(char **)i )
    {
      if ( *((_QWORD *)i + 1) == a2 )
        goto LABEL_2;
      v3 = i;
    }
    goto LABEL_33;
  }
LABEL_2:
  if ( !v3 )
  {
LABEL_33:
    GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5));
    return 0LL;
  }
  v6 = *(void **)v3;
  v7 = *(_DWORD *)(*(_QWORD *)v3 + 64LL) | 0x400000;
  *(_DWORD *)(*(_QWORD *)v3 + 64LL) = v7;
  if ( (v7 & 0x40000) == 0 )
  {
    v8 = *((_QWORD *)v6 + 5);
    if ( v8 > 2 )
    {
      PsGetCurrentProcessId();
      LOBYTE(v16) = 4;
      HmgMarkDeletable(v8, v16);
    }
    v9 = (HPALETTE)*((_QWORD *)v6 + 5);
    if ( (unsigned __int64)v9 > 2 )
      GreDeleteObject(v9);
    *((_QWORD *)v6 + 5) = 0LL;
  }
  v10 = (HPALETTE)*((_QWORD *)v6 + 6);
  if ( v10 )
  {
    GreDeleteObject(v10);
    *((_QWORD *)v6 + 6) = 0LL;
  }
  v11 = (HPALETTE)*((_QWORD *)v6 + 7);
  if ( v11 )
  {
    GreDeleteObject(v11);
    *((_QWORD *)v6 + 7) = 0LL;
  }
  if ( !(unsigned int)GreSetDCOwnerEx(*((_QWORD *)v6 + 1), 2147483650LL, 1LL, 0LL) )
    goto LABEL_35;
  if ( (*((_DWORD *)v6 + 16) & 0x4000) != 0 )
  {
    if ( !gbIgnoreStressedOutStuff && !*((_QWORD *)v6 + 4) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2127LL);
    if ( (int)IsGreSelectRedirectionBitmapSupported() >= 0 && qword_1C02D6010 )
      qword_1C02D6010(*((_QWORD *)v6 + 1), 0LL);
    *((_DWORD *)v6 + 16) &= ~0x4000u;
    *((_QWORD *)v6 + 4) = 0LL;
  }
  if ( !(unsigned int)GrepDeleteDC(*((HDC *)v6 + 1), 0x400000u) )
  {
    GreSetDCOwnerEx(*((_QWORD *)v6 + 1), 2147483666LL, 1LL, 0LL);
LABEL_35:
    v17 = *((_QWORD *)v6 + 1);
    LOBYTE(v12) = 1;
    *((_QWORD *)v6 + 2) = 0LL;
    *((_QWORD *)v6 + 3) = 0LL;
    *((_QWORD *)v6 + 4) = 0LL;
    *((_QWORD *)v6 + 11) = 0LL;
    v21[1] = 0LL;
    v18 = HmgShareLockEx(v17, v12, 0LL);
    v21[0] = v18;
    if ( v18 )
    {
      *(_DWORD *)(v18 + 36) |= 0x80000u;
      XDCOBJ::vAltUnlockFast((XDCOBJ *)v21);
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v19);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x200u;
    goto LABEL_19;
  }
  if ( (*((_DWORD *)v6 + 16) & 0x1002) == 2 )
    --gnDCECount;
  v13 = gpLeakTrackingAllocator;
  *(_QWORD *)v3 = *(_QWORD *)v6;
  NSInstrumentation::CLeakTrackingAllocator::Free(v13, v6);
  v4 = 1;
LABEL_19:
  if ( v5 )
    GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5));
  return v4;
}
