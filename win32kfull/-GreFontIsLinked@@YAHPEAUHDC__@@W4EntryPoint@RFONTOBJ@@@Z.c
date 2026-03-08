/*
 * XREFs of ?GreFontIsLinked@@YAHPEAUHDC__@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1C00E3888
 * Callers:
 *     NtGdiFontIsLinked @ 0x1C00E3840 (NtGdiFontIsLinked.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C0057C50 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVXDCOBJ@@@Z @ 0x1C0110770 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVXDCOBJ@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C011DDB0 (--1RFONTOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreFontIsLinked(HDC a1)
{
  unsigned int v1; // esi
  int v2; // eax
  Gre::Base *v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdi
  char v8; // cl
  _QWORD v9[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v10[8]; // [rsp+40h] [rbp-40h] BYREF
  Gre::Base *v11; // [rsp+B0h] [rbp+30h] BYREF
  int v12; // [rsp+B8h] [rbp+38h] BYREF
  int v13; // [rsp+BCh] [rbp+3Ch]

  v1 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  if ( v9[0] )
  {
    v2 = *(unsigned __int16 *)(v9[0] + 12LL);
    v11 = 0LL;
    v13 = v2;
    v12 = 18;
    if ( (unsigned int)RFONTOBJ::bInit(&v11, (struct XDCOBJ *)v9, 0, 2u, (const struct RFONTOBJ::Tag *)&v12) )
      GreAcquireSemaphore(*((_QWORD *)v11 + 63));
    if ( v11 )
    {
      v4 = *((_QWORD *)v11 + 15);
      Gre::Base::Globals(v3);
      v6 = *(_QWORD *)(SGDGetSessionState(v5) + 32);
      GreAcquireSemaphore(*(_QWORD *)(v6 + 13272));
      ++*(_DWORD *)(v6 + 13300);
      EtwTraceGreLockReleaseSemaphore(L"GreFullGlobals.hsemEUDC1");
      GreReleaseSemaphoreInternal(*(_QWORD *)(v6 + 13272));
      if ( v4 && (*(_DWORD *)(v4 + 12) & 8) == 0 )
      {
        if ( *((_DWORD *)v11 + 177) )
        {
          LOBYTE(v1) = *(_DWORD *)(v6 + 19352) != 0;
        }
        else if ( *(_QWORD *)(v6 + 13320)
               || *(_QWORD *)(v6 + 13328)
               || *(_DWORD *)(v6 + 19360)
               && (IFIOBJR::IFIOBJR(
                     (IFIOBJR *)v10,
                     *(const struct _IFIMETRICS **)(v4 + 32),
                     (struct RFONTOBJ *)&v11,
                     (struct XDCOBJ *)v9),
                   v8 = *(_BYTE *)(v10[0] + 44LL),
                   v8 != 1)
               && (unsigned __int8)(v8 - 3) > 0xFBu
               && (*(_BYTE *)(v6 + 18736) & (unsigned __int8)(v8 + 2) & 0xF) != 0 )
        {
          v1 = 1;
        }
        else if ( *(_QWORD *)(v4 + 120) )
        {
          v1 = 1;
        }
      }
      GreAcquireSemaphore(*(_QWORD *)(v6 + 13272));
      --*(_DWORD *)(v6 + 13300);
      EtwTraceGreLockReleaseSemaphore(L"GreFullGlobals.hsemEUDC1");
      GreReleaseSemaphoreInternal(*(_QWORD *)(v6 + 13272));
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v11);
    if ( v9[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v9);
  }
  return v1;
}
