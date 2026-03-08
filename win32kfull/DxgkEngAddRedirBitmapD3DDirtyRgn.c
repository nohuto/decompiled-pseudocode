/*
 * XREFs of DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x1C014D3B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C0007358 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00DC828 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C014CB0A (GreAddBitmapD3DDirtyRgn.c)
 */

void __fastcall DxgkEngAddRedirBitmapD3DDirtyRgn(HDC a1, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  void (__fastcall *v6)(__int64, __int64); // rax
  __int64 *v7[3]; // [rsp+20h] [rbp-18h] BYREF

  MDCOBJA::MDCOBJA((MDCOBJA *)v7, a1);
  v3 = v7[0];
  if ( v7[0] )
  {
    v4 = v7[0][6];
    if ( v4 )
    {
      v5 = v7[0][62];
      if ( (*(_DWORD *)(v5 + 116) & 1) != 0 )
      {
        ++*(_DWORD *)(v5 + 92);
        v6 = *(void (__fastcall **)(__int64, __int64))(v4 + 3448);
        if ( v6 )
          v6((v3[62] + 24) & -(__int64)(v3[62] != 0), a2);
      }
    }
    if ( a2 )
      GreAddBitmapD3DDirtyRgn((Gre::Base *)v3[59], *(_DWORD *)a2, *(const struct _RECTL **)(a2 + 8));
    if ( v3 )
      XDCOBJ::vAltUnlockFast(v7);
  }
}
