/*
 * XREFs of GreSetRedirection @ 0x1C00C830C
 * Callers:
 *     DeleteOrSetRedirectionBitmap @ 0x1C00C825C (DeleteOrSetRedirectionBitmap.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C00D564C (CreateOrGetRedirectionBitmap.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0030084 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetRedirection(HSURF a1, int a2)
{
  unsigned int v3; // ebx
  _BYTE v5[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+40h] [rbp-18h]

  v3 = 0;
  SURFREF::SURFREF((SURFREF *)v5, a1);
  if ( v6 )
  {
    if ( a2 )
    {
      *(_DWORD *)(v6 + 112) |= 0x800u;
      *(_DWORD *)(v6 + 116) |= 0x80u;
    }
    else
    {
      *(_DWORD *)(v6 + 116) &= ~0x80u;
      *(_DWORD *)(v6 + 112) &= ~0x800u;
    }
    v3 = 1;
    if ( v6 )
      DEC_SHARE_REF_CNT(v6);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v5);
  return v3;
}
