/*
 * XREFs of ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C000A82C
 * Callers:
 *     RFONTOBJ_vConstructPRFONTWrap @ 0x1C000A800 (RFONTOBJ_vConstructPRFONTWrap.c)
 *     ??1RESETFCOBJ@@QEAA@XZ @ 0x1C001C0B0 (--1RESETFCOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00364E0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C015154C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02A5B8C (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C000A940 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0019ED8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

void __fastcall RFONTOBJ::vMakeInactive(RFONTOBJ *this)
{
  __int64 v2; // rax
  unsigned int v3; // ecx
  struct RFONT **v4; // rbx
  int v5; // edi
  int InactiveHelper; // eax
  struct RFONT *v7; // rcx
  int v8; // ebp
  __int64 v9; // rcx
  __int64 v10; // rsi
  _QWORD v11[2]; // [rsp+20h] [rbp-98h] BYREF
  struct RFONT *v12[14]; // [rsp+30h] [rbp-88h] BYREF

  memset(v12, 0, sizeof(v12));
  v2 = *(_QWORD *)this;
  if ( *(_QWORD *)this && *(_DWORD *)(v2 + 660) )
  {
    v3 = *(_DWORD *)(v2 + 840);
    if ( v3 > 0xA )
    {
      v9 = 8 * v3 + 32;
      if ( !(_DWORD)v9 )
        return;
      v4 = (struct RFONT **)Win32AllocPoolZInit(v9, 1718382187LL);
      if ( !v4 )
        return;
      v5 = 1;
    }
    else
    {
      v4 = v12;
      v5 = 0;
    }
    InactiveHelper = RFONTOBJ::bMakeInactiveHelper(this, v4);
    v7 = *v4;
    v8 = InactiveHelper;
    if ( *v4 )
    {
      v10 = 0LL;
      do
      {
        v11[0] = v7;
        RFONTOBJ::bMakeInactiveHelper((RFONTOBJ *)v11, 0LL);
        v11[0] = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v11);
        v7 = v4[++v10];
      }
      while ( v7 );
    }
    if ( v5 )
      Win32FreePool(v4);
    if ( v8 )
    {
      GreAcquireSemaphore(ghsemEUDC1);
      --gcEUDCCount;
      EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
      GreReleaseSemaphoreInternal(ghsemEUDC1);
    }
  }
}
