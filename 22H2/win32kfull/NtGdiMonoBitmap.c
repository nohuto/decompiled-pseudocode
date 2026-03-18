/*
 * XREFs of NtGdiMonoBitmap @ 0x1C02D13F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0030084 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0087EAC (--1SURFREF@@QEAA@XZ.c)
 *     ?bIsMonochrome@XEPALOBJ@@QEBAHXZ @ 0x1C00ACB24 (-bIsMonochrome@XEPALOBJ@@QEBAHXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiMonoBitmap(HSURF a1)
{
  unsigned int IsMonochrome; // ebx
  __int64 v3; // rdx
  _BYTE v4[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]
  __int64 v6; // [rsp+68h] [rbp+10h] BYREF

  SURFREF::SURFREF((SURFREF *)v4, a1);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 128);
    IsMonochrome = XEPALOBJ::bIsMonochrome((XEPALOBJ *)&v6);
    DEC_SHARE_REF_CNT(v3);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v4);
    return IsMonochrome;
  }
  else
  {
    SURFREF::~SURFREF((SURFREF *)v4);
    return 0LL;
  }
}
