/*
 * XREFs of GreSetBitmapDimension @ 0x1C02C12C0
 * Callers:
 *     NtGdiSetBitmapDimension @ 0x1C02B0230 (NtGdiSetBitmapDimension.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018C00 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018F2C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C008393C (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetBitmapDimension(HSURF a1, unsigned int a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  DYNAMICMODECHANGESHARELOCK *v11; // rcx
  _QWORD v13[2]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v14[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h]

  v8 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v13);
  SURFREF::SURFREF((SURFREF *)v14, a1);
  v10 = v15;
  if ( v15 )
  {
    if ( (*(_DWORD *)(v15 + 112) & 0x4000000) == 0 )
      goto LABEL_8;
    if ( a4 )
      *a4 = *(_QWORD *)(v15 + 152);
    v13[1] = __PAIR64__(a3, a2);
    v8 = 1;
    *(_QWORD *)(v10 + 152) = __PAIR64__(a3, a2);
  }
  else
  {
    EngSetLastError(6u);
  }
  v10 = v15;
LABEL_8:
  if ( v10 )
    DEC_SHARE_REF_CNT(v10, v9);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v14);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v11);
  return v8;
}
