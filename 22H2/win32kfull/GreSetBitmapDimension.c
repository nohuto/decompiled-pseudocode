/*
 * XREFs of GreSetBitmapDimension @ 0x1C02DE71C
 * Callers:
 *     NtGdiSetBitmapDimension @ 0x1C02C4C60 (NtGdiSetBitmapDimension.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0030084 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00E13F4 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00E1440 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetBitmapDimension(HSURF a1, unsigned int a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v8; // esi
  __int64 v9; // rcx
  _BYTE v11[8]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-40h]
  _BYTE v13[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h]

  v8 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v11);
  SURFREF::SURFREF((SURFREF *)v13, a1);
  v9 = v14;
  if ( v14 )
  {
    if ( (*(_DWORD *)(v14 + 112) & 0x4000000) == 0 )
      goto LABEL_8;
    if ( a4 )
      *a4 = *(_QWORD *)(v14 + 152);
    v12 = __PAIR64__(a3, a2);
    v8 = 1;
    *(_QWORD *)(v9 + 152) = __PAIR64__(a3, a2);
  }
  else
  {
    EngSetLastError(6u);
  }
  v9 = v14;
LABEL_8:
  if ( v9 )
    DEC_SHARE_REF_CNT(v9);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v13);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v11);
  return v8;
}
