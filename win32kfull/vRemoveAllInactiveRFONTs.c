/*
 * XREFs of vRemoveAllInactiveRFONTs @ 0x1C02B9D14
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C0057C50 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C011DDB0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0123828 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0123A3C (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C0123AD4 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0123AF4 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

void __fastcall vRemoveAllInactiveRFONTs(__int64 a1)
{
  __int64 v2; // rsi
  Gre::Base *v3; // rcx
  struct Gre::Base::SESSION_GLOBALS *v4; // rbx
  struct RFONT *v5; // r14
  struct RFONT *v6; // rbx
  __int64 v7; // rbx
  Gre::Base *v8; // rcx
  __int64 v9; // rbx
  struct _FONTOBJ **v10; // rdi
  _QWORD *v11; // rsi
  struct _FONTOBJ *v12; // [rsp+28h] [rbp-E0h] BYREF
  struct RFONT *v13; // [rsp+30h] [rbp-D8h] BYREF
  struct RFONT *v14; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C8h] BYREF
  _OWORD v16[3]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v17[130]; // [rsp+78h] [rbp-90h] BYREF

  memset_0(v17, 0, 0x408uLL);
  v2 = 0LL;
  v4 = Gre::Base::Globals(v3);
  *(_QWORD *)&v16[0] = *((_QWORD *)v4 + 6);
  GreAcquireSemaphore(*(_QWORD *)&v16[0]);
  v15 = *((_QWORD *)v4 + 3);
  GreAcquireSemaphore(v15);
  v12 = (struct _FONTOBJ *)a1;
  v5 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v12);
  while ( v5 )
  {
    v17[v2] = v5;
    v6 = v5;
    v2 = (unsigned int)(v2 + 1);
    v5 = (struct RFONT *)*((_QWORD *)v5 + 84);
    v14 = v6;
    v13 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v12);
    RFONTOBJ::vRemove((__int64)&v14, &v13, 1);
    PDEVOBJ::prfntInactive((PDEVOBJ *)&v12, v13);
    v7 = *((_QWORD *)v6 + 16);
    v13 = *(struct RFONT **)(v7 + 72);
    RFONTOBJ::vRemove((__int64)&v14, &v13, 0);
    *(_QWORD *)(v7 + 72) = v13;
    Gre::Base::Globals(v8);
    --*(_DWORD *)(v7 + 68);
    v14 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v14);
  }
  if ( (*(_DWORD *)(a1 + 40) & 0x800000) != 0 )
    *(_DWORD *)(*(_QWORD *)(a1 + 3496) + 1528LL) = 0;
  else
    *(_DWORD *)(a1 + 1528) = 0;
  SEMOBJ::vUnlock((SEMOBJ *)&v15);
  SEMOBJ::vUnlock((SEMOBJ *)v16);
  v17[v2] = 0LL;
  v9 = (unsigned int)v2;
  if ( (_DWORD)v2 )
  {
    v10 = (struct _FONTOBJ **)v17;
    v11 = v17;
    do
    {
      v12 = *v10;
      memset((char *)v16 + 8, 0, 32);
      PushThreadGuardedObject((char *)v16 + 8, v11, vRestartRemoveAllInactiveRFONTs);
      RFONTOBJ::vDeleteRFONT(&v12, 0LL, 0LL, 1);
      PopThreadGuardedObject((char *)v16 + 8);
      v12 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
      ++v11;
      ++v10;
      --v9;
    }
    while ( v9 );
  }
}
