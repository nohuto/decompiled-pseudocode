/*
 * XREFs of ?ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x1C01206D4
 * Callers:
 *     ?ulGetFontData@@YAKPEAUHDC__@@KKPEAXKW4EntryPoint@RFONTOBJ@@@Z @ 0x1C0113360 (-ulGetFontData@@YAKPEAUHDC__@@KKPEAXKW4EntryPoint@RFONTOBJ@@@Z.c)
 * Callees:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C0057C50 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C011DDB0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z @ 0x1C01205AC (-QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z.c)
 */

__int64 __fastcall ulGetFontData2(
        struct DCOBJ *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 *a4,
        unsigned int a5,
        const struct RFONTOBJ::Tag *a6)
{
  __int64 *v9; // rax
  __int64 v10; // rdx
  unsigned int TrueTypeTable; // ebx
  Gre::Base *v13; // [rsp+50h] [rbp-28h] BYREF
  _QWORD v14[3]; // [rsp+58h] [rbp-20h] BYREF

  v13 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit(&v13, a1, 0, 2u, a6) )
    GreAcquireSemaphore(*((_QWORD *)v13 + 63));
  if ( v13 )
  {
    v9 = (__int64 *)*((_QWORD *)v13 + 15);
    if ( v9 && (v10 = *v9, (v14[0] = v10) != 0LL) )
    {
      TrueTypeTable = PFFOBJ::QueryTrueTypeTable(
                        (PFFOBJ *)v14,
                        *(_QWORD *)(v10 + 80),
                        *((_DWORD *)v9 + 2),
                        a2,
                        a3,
                        a5,
                        a4,
                        0LL,
                        0LL);
    }
    else
    {
      EngSetLastError(6u);
      TrueTypeTable = -1;
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v13);
    return TrueTypeTable;
  }
  else
  {
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v13);
    return 0xFFFFFFFFLL;
  }
}
