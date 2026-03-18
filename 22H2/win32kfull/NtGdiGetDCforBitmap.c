/*
 * XREFs of NtGdiGetDCforBitmap @ 0x1C002DB90
 * Callers:
 *     <none>
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0030084 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiGetDCforBitmap(HSURF a1)
{
  __int64 v1; // rbx
  _BYTE v3[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+40h] [rbp-18h]

  v1 = 0LL;
  SURFREF::SURFREF((SURFREF *)v3, a1);
  if ( v4 )
  {
    v1 = *(_QWORD *)(v4 + 160);
    DEC_SHARE_REF_CNT(v4);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v3);
  return v1;
}
