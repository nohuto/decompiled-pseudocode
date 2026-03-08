/*
 * XREFs of GreConvertMemToRedirectionDC @ 0x1C00DC7AC
 * Callers:
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C000FA18 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     UpdateSpriteArea @ 0x1C00DC4C4 (UpdateSpriteArea.c)
 * Callees:
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C0007358 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00DC828 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreConvertMemToRedirectionDC(HDC a1, _DWORD *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v7; // rdx
  int v8; // ecx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  MDCOBJA::MDCOBJA((MDCOBJA *)v9, a1);
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
          v3 = 1;
          *(_DWORD *)(v4 + 36) |= 0x4001u;
          *(_DWORD *)(v4 + 32) = 0;
          v7 = *(_QWORD *)(v4 + 496);
          v8 = *(_DWORD *)(v7 + 112);
          if ( (v8 & 0x800) == 0 && !*(_WORD *)(v7 + 100) )
          {
            *a2 = 1;
            *(_DWORD *)(v7 + 112) = v8 | 0x800;
          }
        }
      }
    }
    XDCOBJ::vAltUnlockFast((XDCOBJ *)v9);
  }
  return v3;
}
