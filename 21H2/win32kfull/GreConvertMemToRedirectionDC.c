/*
 * XREFs of GreConvertMemToRedirectionDC @ 0x1C0090814
 * Callers:
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C009050C (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     UpdateSpriteArea @ 0x1C010C8C8 (UpdateSpriteArea.c)
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00907C4 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00920F0 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreConvertMemToRedirectionDC(HDC a1, _DWORD *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // ecx
  _QWORD v9[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v10[40]; // [rsp+30h] [rbp-28h] BYREF

  v3 = 0;
  DCOBJA::DCOBJA((DCOBJA *)v9, a1);
  v4 = v9[0];
  *a2 = 0;
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 32) == 1 )
    {
      v5 = *(_QWORD *)(v4 + 48);
      if ( v5 )
      {
        if ( (*(_DWORD *)(v5 + 2096) & 0x400) != 0 )
        {
          *(_DWORD *)(v4 + 36) |= 0x4000u;
          v3 = 1;
          *(_DWORD *)(v9[0] + 36LL) |= 1u;
          *(_DWORD *)(v9[0] + 32LL) = 0;
          v4 = v9[0];
          v6 = *(_QWORD *)(v9[0] + 496LL);
          v7 = *(_DWORD *)(v6 + 112);
          if ( (v7 & 0x800) == 0 && !*(_WORD *)(v6 + 100) )
          {
            *a2 = 1;
            *(_DWORD *)(v6 + 112) = v7 | 0x800;
            v4 = v9[0];
          }
        }
      }
    }
    if ( v4 )
      XDCOBJ::vAltUnlockFast((XDCOBJ *)v9);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v10);
  return v3;
}
