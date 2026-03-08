/*
 * XREFs of ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C0113AAC
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C0057C50 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     RFONTOBJ_vConstructPRFONTWrap @ 0x1C0113A80 (RFONTOBJ_vConstructPRFONTWrap.c)
 *     ??1RESETFCOBJ@@QEAA@XZ @ 0x1C0124464 (--1RESETFCOBJ@@QEAA@XZ.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02B740C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02B7BC0 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C01147B0 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C011DDB0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
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
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rsi
  _QWORD v12[2]; // [rsp+20h] [rbp-98h] BYREF
  struct RFONT *v13[14]; // [rsp+30h] [rbp-88h] BYREF

  memset_0(v13, 0, sizeof(v13));
  v2 = *(_QWORD *)this;
  if ( *(_QWORD *)this && *(_DWORD *)(v2 + 660) )
  {
    v3 = *(_DWORD *)(v2 + 840);
    if ( v3 > 0xA )
    {
      v10 = 8 * v3 + 32;
      if ( !(_DWORD)v10 )
        return;
      v4 = (struct RFONT **)Win32AllocPoolZInit(v10, 1718382187LL);
      if ( !v4 )
        return;
      v5 = 1;
    }
    else
    {
      v4 = v13;
      v5 = 0;
    }
    InactiveHelper = RFONTOBJ::bMakeInactiveHelper(this, v4);
    v7 = *v4;
    v8 = InactiveHelper;
    if ( *v4 )
    {
      v11 = 0LL;
      do
      {
        v12[0] = v7;
        RFONTOBJ::bMakeInactiveHelper((RFONTOBJ *)v12, 0LL);
        v12[0] = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v12);
        v7 = v4[++v11];
      }
      while ( v7 );
    }
    if ( v5 )
      Win32FreePool(v4);
    if ( v8 )
    {
      v9 = *(_QWORD *)(SGDGetSessionState(v7) + 32);
      GreAcquireSemaphore(*(_QWORD *)(v9 + 13272));
      --*(_DWORD *)(v9 + 13300);
      EtwTraceGreLockReleaseSemaphore(L"GreFullGlobals.hsemEUDC1");
      GreReleaseSemaphoreInternal(*(_QWORD *)(v9 + 13272));
    }
  }
}
