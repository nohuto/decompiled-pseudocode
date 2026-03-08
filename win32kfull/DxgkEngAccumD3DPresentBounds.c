/*
 * XREFs of DxgkEngAccumD3DPresentBounds @ 0x1C0271C50
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C0007358 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C008219C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C008D3C0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00DC828 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0268FB8 (-bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 */

void __fastcall DxgkEngAccumD3DPresentBounds(HDC a1, _DWORD *a2)
{
  __int64 *v3; // rbx
  _DWORD v4[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v5[3]; // [rsp+30h] [rbp-18h] BYREF

  MDCOBJA::MDCOBJA((MDCOBJA *)v5, a1);
  v3 = v5[0];
  if ( v5[0] )
  {
    v4[0] = *a2;
    v4[1] = a2[1];
    v4[2] = a2[2];
    v4[3] = a2[3];
    if ( !ERECTL::bEmpty((ERECTL *)v4) && (*((_DWORD *)v3 + 9) & 0xE0) != 0 )
    {
      ERECTL::bOffsetSubtract((ERECTL *)v4, (const struct _POINTL *)&v3[((_DWORD)v3[5] & 1) + 127], 0);
      XDCOBJ::vAccumulate((XDCOBJ *)v5, (struct ERECTL *)v4);
    }
    if ( v3 )
      XDCOBJ::vAltUnlockFast(v5);
  }
}
