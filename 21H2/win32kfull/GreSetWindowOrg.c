/*
 * XREFs of GreSetWindowOrg @ 0x1C010C650
 * Callers:
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C010C1FC (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxMenuWindowProc @ 0x1C023BBA0 (xxxMenuWindowProc.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FDC44 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x1C012D378 (-MirrorWindowOrg@DC@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016AA7C (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetWindowOrg(HDC a1, int a2, int a3)
{
  unsigned int v5; // ebx
  DC *v6; // rdx
  DC *v7; // rcx
  _QWORD v9[2]; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v10[16]; // [rsp+30h] [rbp-40h] BYREF
  DC *v11[2]; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v12[32]; // [rsp+50h] [rbp-20h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  v5 = 0;
  if ( v11[0] )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v10, (struct XDCOBJ *)v11, -2147483132);
    v6 = v11[0];
    if ( (*(_DWORD *)(*((_QWORD *)v11[0] + 122) + 152LL) & 0x100) != 0 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v9, (struct XDCOBJ *)v11, 1026);
      if ( v9[0] )
        EXFORMOBJ::bXform(
          (EXFORMOBJ *)v9,
          (struct _POINTFIX *)(*((_QWORD *)v11[0] + 122) + 8LL),
          (struct _POINTL *)(*((_QWORD *)v11[0] + 122) + 216LL),
          1uLL);
      *(_DWORD *)(*((_QWORD *)v11[0] + 122) + 152LL) &= ~0x100u;
      v6 = v11[0];
    }
    *(_DWORD *)(*((_QWORD *)v6 + 122) + 152LL) |= 0x200u;
    *(_DWORD *)(*((_QWORD *)v11[0] + 122) + 340LL) |= 0x2010u;
    *(_DWORD *)(*((_QWORD *)v11[0] + 122) + 308LL) = a2;
    *(_DWORD *)(*((_QWORD *)v11[0] + 122) + 312LL) = a3;
    v7 = v11[0];
    *(_DWORD *)(*((_QWORD *)v11[0] + 122) + 304LL) = a2;
    DC::MirrorWindowOrg(v7);
    EXFORMOBJ::vInit((EXFORMOBJ *)v10, (struct XDCOBJ *)v11, 0x402u, 0);
    v5 = 1;
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v11);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v12);
  return v5;
}
