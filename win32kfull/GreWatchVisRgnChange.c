/*
 * XREFs of GreWatchVisRgnChange @ 0x1C02AB190
 * Callers:
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0149E06 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C0007358 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00DC828 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall GreWatchVisRgnChange(HDC a1, int a2)
{
  __int64 *v3; // rax
  __int64 *v4[3]; // [rsp+20h] [rbp-18h] BYREF

  MDCOBJA::MDCOBJA((MDCOBJA *)v4, a1);
  v3 = v4[0];
  if ( v4[0] )
  {
    if ( a2 )
      *((_DWORD *)v4[0] + 9) |= 0x20000u;
    else
      *((_DWORD *)v4[0] + 9) &= ~0x20000u;
    if ( v3 )
      XDCOBJ::vAltUnlockFast(v4);
  }
}
