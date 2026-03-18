/*
 * XREFs of ?GreGetCharWidthInfo@@YAHPEAUHDC__@@PEAU_CHWIDTHINFO@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1C000E3D8
 * Callers:
 *     NtGdiGetCharWidthInfo @ 0x1C000E340 (NtGdiGetCharWidthInfo.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C007F350 (--1RFONTOBJ@@QEAA@XZ.c)
 *     bFToL @ 0x1C009BB20 (bFToL.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C010CB90 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetCharWidthInfo(HDC a1, _DWORD *a2, int a3)
{
  unsigned int v4; // esi
  int v5; // eax
  __int64 v6; // rbx
  int v7; // r8d
  __int64 v8; // rcx
  int v9; // r8d
  __int64 v10; // rcx
  _DWORD v12[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v13[2]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v14[40]; // [rsp+48h] [rbp-28h] BYREF
  int v15; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+38h] BYREF

  v15 = a3;
  v4 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  if ( v13[0] )
  {
    v5 = *(unsigned __int16 *)(v13[0] + 12LL);
    v16 = 0LL;
    v12[1] = v5;
    v12[0] = 17;
    if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v16, (struct XDCOBJ *)v13, 0, 2u, (const struct RFONTOBJ::Tag *)v12) )
      GreAcquireSemaphore(*(_QWORD *)(v16 + 504));
    v6 = v16;
    if ( v16 && *(_QWORD *)(*(_QWORD *)(v16 + 96) + 3056LL) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v13[0] + 976LL) + 340LL) & 0x802) == 0x802 )
      {
        *a2 = *(_DWORD *)(v16 + 696);
        a2[1] = *(_DWORD *)(v6 + 700);
        a2[2] = *(_DWORD *)(v6 + 704);
      }
      else
      {
        v15 = 0;
        bFToL(2050LL, &v15, 0LL);
        v7 = v15;
        v15 = 0;
        *a2 = v7;
        bFToL(v8, &v15, 0LL);
        v9 = v15;
        v15 = 0;
        a2[1] = v9;
        bFToL(v10, &v15, 0LL);
        a2[2] = v15;
      }
      v4 = 1;
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v16);
    if ( v13[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v13);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v14);
  return v4;
}
