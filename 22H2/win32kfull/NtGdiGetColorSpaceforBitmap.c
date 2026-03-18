/*
 * XREFs of NtGdiGetColorSpaceforBitmap @ 0x1C02D5620
 * Callers:
 *     <none>
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0030084 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C02A79CC (-bDIBSection@SURFACE@@QEAAHXZ.c)
 */

__int64 __fastcall NtGdiGetColorSpaceforBitmap(HSURF a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  _BYTE v4[32]; // [rsp+20h] [rbp-38h] BYREF
  SURFACE *v5; // [rsp+40h] [rbp-18h]

  v1 = 0LL;
  SURFREF::SURFREF((SURFREF *)v4, a1);
  if ( v5 )
  {
    if ( SURFACE::bDIBSection(v5) )
      v1 = *(_QWORD *)(v2 + 200);
    if ( v2 )
      DEC_SHARE_REF_CNT(v2);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v4);
  return v1;
}
