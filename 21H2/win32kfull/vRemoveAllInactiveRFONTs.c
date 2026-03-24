/*
 * XREFs of vRemoveAllInactiveRFONTs @ 0x1C02A8C74
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0093AC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009032C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009AF04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C009D690 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C009EF04 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C009F174 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C009F460 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

void __fastcall vRemoveAllInactiveRFONTs(__int64 a1)
{
  __int64 v2; // rsi
  struct RFONT *v3; // r14
  struct RFONT *v4; // rbx
  __int64 v5; // rbx
  struct RFONT *v6; // rax
  __int64 v7; // rbx
  struct _FONTOBJ **v8; // rdi
  _QWORD *v9; // rsi
  struct _FONTOBJ *v10; // [rsp+28h] [rbp-E0h] BYREF
  struct RFONT *v11; // [rsp+30h] [rbp-D8h] BYREF
  struct RFONT *v12; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+40h] [rbp-C8h] BYREF
  _OWORD v14[3]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v15[130]; // [rsp+78h] [rbp-90h] BYREF

  memset(v15, 0, 0x408uLL);
  v2 = 0LL;
  *(_QWORD *)&v14[0] = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v13 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  v10 = (struct _FONTOBJ *)a1;
  v3 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v10);
  while ( v3 )
  {
    v15[v2] = v3;
    v4 = v3;
    v2 = (unsigned int)(v2 + 1);
    v3 = (struct RFONT *)*((_QWORD *)v3 + 84);
    v12 = v4;
    v11 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v10);
    RFONTOBJ::vRemove((__int64)&v12, (unsigned __int64 *)&v11, 1);
    PDEVOBJ::prfntInactive((PDEVOBJ *)&v10, v11);
    v5 = *((_QWORD *)v4 + 16);
    v11 = *(struct RFONT **)(v5 + 72);
    RFONTOBJ::vRemove((__int64)&v12, (unsigned __int64 *)&v11, 0);
    v6 = v11;
    --*(_DWORD *)(v5 + 68);
    v12 = 0LL;
    *(_QWORD *)(v5 + 72) = v6;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
  }
  if ( (*(_DWORD *)(a1 + 40) & 0x800000) != 0 )
    *(_DWORD *)(*(_QWORD *)(a1 + 3520) + 1536LL) = 0;
  else
    *(_DWORD *)(a1 + 1536) = 0;
  SEMOBJ::vUnlock((SEMOBJ *)&v13);
  SEMOBJ::vUnlock((SEMOBJ *)v14);
  v15[v2] = 0LL;
  v7 = (unsigned int)v2;
  if ( (_DWORD)v2 )
  {
    v8 = (struct _FONTOBJ **)v15;
    v9 = v15;
    do
    {
      v10 = *v8;
      memset((char *)v14 + 8, 0, 32);
      PushThreadGuardedObject((char *)v14 + 8, v9, vRestartRemoveAllInactiveRFONTs);
      RFONTOBJ::vDeleteRFONT(&v10, 0LL, 0LL, 1);
      PopThreadGuardedObject((char *)v14 + 8);
      v10 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v10);
      ++v9;
      ++v8;
      --v7;
    }
    while ( v7 );
  }
}
