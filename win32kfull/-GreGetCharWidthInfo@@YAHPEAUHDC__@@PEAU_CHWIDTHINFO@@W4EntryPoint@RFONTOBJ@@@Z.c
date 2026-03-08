/*
 * XREFs of ?GreGetCharWidthInfo@@YAHPEAUHDC__@@PEAU_CHWIDTHINFO@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1C000D728
 * Callers:
 *     NtGdiGetCharWidthInfo @ 0x1C000D690 (NtGdiGetCharWidthInfo.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C0057C50 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     bFToL @ 0x1C00D1C50 (bFToL.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C011DDB0 (--1RFONTOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetCharWidthInfo(HDC a1, _DWORD *a2, int a3)
{
  unsigned int v4; // esi
  int v5; // eax
  __int64 v6; // rbx
  int v8; // r8d
  __int64 v9; // rcx
  int v10; // r8d
  __int64 v11; // rcx
  _DWORD v12[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v13[3]; // [rsp+38h] [rbp-18h] BYREF
  int v14; // [rsp+80h] [rbp+30h] BYREF
  __int64 v15; // [rsp+88h] [rbp+38h] BYREF

  v14 = a3;
  v4 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  if ( v13[0] )
  {
    v5 = *(unsigned __int16 *)(v13[0] + 12LL);
    v15 = 0LL;
    v12[1] = v5;
    v12[0] = 17;
    if ( RFONTOBJ::bInit((RFONTOBJ *)&v15, (struct XDCOBJ *)v13, 0, 2u, (const struct RFONTOBJ::Tag *)v12) )
      GreAcquireSemaphore(*(_QWORD *)(v15 + 504));
    v6 = v15;
    if ( v15 && *(_QWORD *)(*(_QWORD *)(v15 + 96) + 3056LL) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v13[0] + 976LL) + 340LL) & 0x802) == 0x802 )
      {
        *a2 = *(_DWORD *)(v15 + 696);
        a2[1] = *(_DWORD *)(v6 + 700);
        a2[2] = *(_DWORD *)(v6 + 704);
      }
      else
      {
        v14 = 0;
        bFToL(2050LL, &v14, 0LL);
        v8 = v14;
        v14 = 0;
        *a2 = v8;
        bFToL(v9, &v14, 0LL);
        v10 = v14;
        v14 = 0;
        a2[1] = v10;
        bFToL(v11, &v14, 0LL);
        a2[2] = v14;
      }
      v4 = 1;
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v15);
    if ( v13[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v13);
  }
  return v4;
}
