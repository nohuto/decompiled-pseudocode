/*
 * XREFs of ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C009CF3C
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0093A30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     GreGetGlyphOutlineInternal @ 0x1C009C154 (GreGetGlyphOutlineInternal.c)
 *     RFONTOBJ_vConstructPRFONTWrap @ 0x1C009CF10 (RFONTOBJ_vConstructPRFONTWrap.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00E7AAC (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02A7388 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?bValid@RFONTOBJ@@QEBAHXZ @ 0x1C0090784 (-bValid@RFONTOBJ@@QEBAHXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009AE74 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C009D0D0 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     PALLOCMEM2 @ 0x1C009FDB8 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ?bActive@RFONTOBJ@@QEBA_NAEBVSEMOBJSHARED@@@Z @ 0x1C016A2B8 (-bActive@RFONTOBJ@@QEBA_NAEBVSEMOBJSHARED@@@Z.c)
 *     memset @ 0x1C016DE00 (memset.c)
 *     ??0SEMOBJ@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C026D154 (--0SEMOBJ@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C026D1FC (--1SEMOBJ@@QEAA@XZ.c)
 */

void __fastcall RFONTOBJ::vMakeInactive(RFONTOBJ *this)
{
  const struct SEMOBJSHARED *v2; // rdx
  unsigned int v3; // ecx
  struct RFONT **v4; // rbx
  int v5; // esi
  int InactiveHelper; // eax
  struct RFONT *v7; // rcx
  int v8; // ebp
  __int64 v9; // rdi
  _QWORD v10[2]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v11[112]; // [rsp+30h] [rbp-88h] BYREF

  memset(v11, 0, sizeof(v11));
  if ( RFONTOBJ::bValid(this) )
  {
    SEMOBJ::SEMOBJ((SEMOBJ *)v10, ghsemRFONTList);
    if ( !RFONTOBJ::bActive(this, v2) )
    {
      SEMOBJ::~SEMOBJ((SEMOBJ *)v10);
      return;
    }
    SEMOBJ::~SEMOBJ((SEMOBJ *)v10);
    v3 = *(_DWORD *)(*(_QWORD *)this + 840LL);
    if ( v3 <= 0xA )
    {
      v4 = (struct RFONT **)v11;
      v5 = 0;
    }
    else
    {
      v4 = (struct RFONT **)PALLOCMEM2(8 * v3 + 32);
      if ( !v4 )
        return;
      v5 = 1;
    }
    InactiveHelper = RFONTOBJ::bMakeInactiveHelper(this, v4);
    v7 = *v4;
    v8 = InactiveHelper;
    if ( *v4 )
    {
      v9 = 0LL;
      do
      {
        v10[0] = v7;
        RFONTOBJ::bMakeInactiveHelper((RFONTOBJ *)v10, 0LL);
        v10[0] = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v10);
        v7 = v4[++v9];
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
