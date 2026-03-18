/*
 * XREFs of ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C009313C
 * Callers:
 *     ??1RESETFCOBJ@@QEAA@XZ @ 0x1C00743BC (--1RESETFCOBJ@@QEAA@XZ.c)
 *     RFONTOBJ_vConstructPRFONTWrap @ 0x1C0093110 (RFONTOBJ_vConstructPRFONTWrap.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C010CB90 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02B4F3C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02B5720 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C007F350 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C00932EC (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ?bValid@RFONTOBJ@@QEBAHXZ @ 0x1C011C73C (-bValid@RFONTOBJ@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ?bActive@RFONTOBJ@@QEBA_NAEBVSEMOBJSHARED@@@Z @ 0x1C013E7A8 (-bActive@RFONTOBJ@@QEBA_NAEBVSEMOBJSHARED@@@Z.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     ??0SEMOBJ@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C0265684 (--0SEMOBJ@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C026572C (--1SEMOBJ@@QEAA@XZ.c)
 */

void __fastcall RFONTOBJ::vMakeInactive(RFONTOBJ *this)
{
  Gre::Base *v2; // rcx
  struct Gre::Base::SESSION_GLOBALS *v3; // rax
  const struct SEMOBJSHARED *v4; // rdx
  unsigned int v5; // ecx
  __int64 v6; // rcx
  struct RFONT **v7; // rbx
  int v8; // esi
  int InactiveHelper; // eax
  struct RFONT *v10; // rcx
  int v11; // ebp
  __int64 v12; // rdi
  __int64 v13; // rbx
  _QWORD v14[2]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v15[112]; // [rsp+30h] [rbp-88h] BYREF

  memset_0(v15, 0, sizeof(v15));
  if ( (unsigned int)RFONTOBJ::bValid(this) )
  {
    v3 = Gre::Base::Globals(v2);
    SEMOBJ::SEMOBJ((SEMOBJ *)v14, *((HSEMAPHORE *)v3 + 3));
    if ( !RFONTOBJ::bActive(this, v4) )
    {
      SEMOBJ::~SEMOBJ((SEMOBJ *)v14);
      return;
    }
    SEMOBJ::~SEMOBJ((SEMOBJ *)v14);
    v5 = *(_DWORD *)(*(_QWORD *)this + 840LL);
    if ( v5 <= 0xA )
    {
      v7 = (struct RFONT **)v15;
      v8 = 0;
    }
    else
    {
      v6 = 8 * v5 + 32;
      if ( !(_DWORD)v6 )
        return;
      v7 = (struct RFONT **)Win32AllocPoolZInit(v6, 1718382187LL);
      if ( !v7 )
        return;
      v8 = 1;
    }
    InactiveHelper = RFONTOBJ::bMakeInactiveHelper(this, v7);
    v10 = *v7;
    v11 = InactiveHelper;
    if ( *v7 )
    {
      v12 = 0LL;
      do
      {
        v14[0] = v10;
        RFONTOBJ::bMakeInactiveHelper((RFONTOBJ *)v14, 0LL);
        v14[0] = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v14);
        v10 = v7[++v12];
      }
      while ( v10 );
    }
    if ( v8 )
      Win32FreePool(v7);
    if ( v11 )
    {
      v13 = *(_QWORD *)(SGDGetSessionState(v10) + 32);
      GreAcquireSemaphore(*(_QWORD *)(v13 + 13272));
      --*(_DWORD *)(v13 + 13300);
      EtwTraceGreLockReleaseSemaphore(L"GreFullGlobals.hsemEUDC1");
      GreReleaseSemaphoreInternal(*(_QWORD *)(v13 + 13272));
    }
  }
}
