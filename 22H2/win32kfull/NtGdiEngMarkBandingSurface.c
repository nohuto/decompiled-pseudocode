/*
 * XREFs of NtGdiEngMarkBandingSurface @ 0x1C015E290
 * Callers:
 *     <none>
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C00838AC (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     EngMarkBandingSurface @ 0x1C015E360 (EngMarkBandingSurface.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C026C9D0 (--0SURFREF@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiEngMarkBandingSurface(HSURF a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  unsigned int v4; // ebx
  BOOL v5; // edi
  __int64 v6; // rdx
  _BYTE v8[32]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v9; // [rsp+40h] [rbp-38h]
  _BYTE v10[32]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v11; // [rsp+68h] [rbp-10h]

  SURFREF::SURFREF((SURFREF *)v8);
  LOBYTE(v2) = 5;
  v9 = HmgShareLockCheckIgnoreStockBit(a1, v2);
  SURFREF::SURFREF((SURFREF *)v10, a1);
  v4 = 1;
  v5 = v11 && (*(_DWORD *)(v11 + 112) & 0x40000) != 0;
  if ( v11 )
    DEC_SHARE_REF_CNT(v11, v3);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v10);
  if ( !v5 || !EngMarkBandingSurface(a1) )
    v4 = 0;
  if ( v9 )
    DEC_SHARE_REF_CNT(v9, v6);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v8);
  return v4;
}
