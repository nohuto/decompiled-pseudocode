/*
 * XREFs of GreGetCharWidthInfo @ 0x1C011E014
 * Callers:
 *     NtGdiGetCharWidthInfo @ 0x1C011DFB0 (NtGdiGetCharWidthInfo.c)
 * Callees:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0093A30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009AE74 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     bFToL @ 0x1C00FB1E8 (bFToL.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016A21C (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetCharWidthInfo(HDC a1, _DWORD *a2)
{
  unsigned int v3; // edi
  __int64 v4; // rbx
  int v5; // eax
  float v6; // xmm1_4
  int v7; // eax
  int v8; // eax
  _QWORD v10[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v11[32]; // [rsp+30h] [rbp-20h] BYREF
  int v12; // [rsp+80h] [rbp+30h] BYREF
  __int64 v13; // [rsp+88h] [rbp+38h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  if ( v10[0] )
  {
    v13 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v13, (struct XDCOBJ *)v10, 0, 2u) )
      GreAcquireSemaphore(*(_QWORD *)(v13 + 504));
    v4 = v13;
    if ( v13 && *(_QWORD *)(*(_QWORD *)(v13 + 96) + 3080LL) )
    {
      v5 = *(_DWORD *)(v13 + 696);
      if ( (*(_DWORD *)(*(_QWORD *)(v10[0] + 976LL) + 340LL) & 0x802) == 0x802 )
      {
        *a2 = v5;
        a2[1] = *(_DWORD *)(v4 + 700);
        a2[2] = *(_DWORD *)(v4 + 704);
      }
      else
      {
        v6 = *(float *)(v13 + 680);
        v12 = 0;
        bFToL((float)(16 * v5) * v6, &v12, 0);
        *a2 = v12;
        v7 = 16 * *(_DWORD *)(v4 + 700);
        v12 = 0;
        bFToL((float)v7 * v6, &v12, 0);
        a2[1] = v12;
        v8 = 16 * *(_DWORD *)(v4 + 704);
        v12 = 0;
        bFToL((float)v8 * v6, &v12, 0);
        a2[2] = v12;
      }
      v3 = 1;
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v13);
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v10);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v11);
  return v3;
}
