/*
 * XREFs of GreSetRedirection @ 0x1C00EFA08
 * Callers:
 *     CreateOrGetRedirectionBitmap @ 0x1C00BF148 (CreateOrGetRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00EF958 (DeleteOrSetRedirectionBitmap.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C008393C (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetRedirection(HSURF a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  _BYTE v6[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  v3 = 0;
  SURFREF::SURFREF((SURFREF *)v6, a1);
  if ( v7 )
  {
    if ( a2 )
    {
      *(_DWORD *)(v7 + 112) |= 0x800u;
      *(_DWORD *)(v7 + 116) |= 0x80u;
    }
    else
    {
      *(_DWORD *)(v7 + 116) &= ~0x80u;
      *(_DWORD *)(v7 + 112) &= ~0x800u;
    }
    v3 = 1;
    if ( v7 )
      DEC_SHARE_REF_CNT(v7, v4);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v6);
  return v3;
}
