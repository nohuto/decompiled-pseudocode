/*
 * XREFs of DxgkEngAccumD3DPresentBounds @ 0x1C0274220
 * Callers:
 *     <none>
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002CE30 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00907C4 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00920F0 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkEngAccumD3DPresentBounds(HDC a1, int *a2)
{
  int v3; // r10d
  int v4; // r9d
  int v5; // r11d
  int v6; // edx
  __int64 *v7; // r8
  int v8; // r9d
  int v9; // r10d
  int v10; // r11d
  _DWORD *v11; // rcx
  int v12; // r9d
  int v13; // eax
  int v15; // [rsp+20h] [rbp-40h] BYREF
  int v16; // [rsp+24h] [rbp-3Ch]
  int v17; // [rsp+28h] [rbp-38h]
  int v18; // [rsp+2Ch] [rbp-34h]
  __int64 *v19[2]; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v20[32]; // [rsp+40h] [rbp-20h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v19, a1);
  if ( v19[0] )
  {
    v3 = a2[1];
    v4 = a2[2];
    v5 = a2[3];
    v15 = *a2;
    v16 = v3;
    v17 = v4;
    v18 = v5;
    if ( !ERECTL::bEmpty((ERECTL *)&v15) && (*((_DWORD *)v7 + 9) & 0xE0) != 0 )
    {
      v11 = v7 + 128;
      if ( (v7[5] & 1) == 0 )
        v11 = v7 + 127;
      v12 = v8 - *v11;
      v15 = v6 - *v11;
      v13 = v11[1];
      v17 = v12;
      v16 = v9 - v13;
      v18 = v10 - v13;
      XDCOBJ::vAccumulate((XDCOBJ *)v19, (struct ERECTL *)&v15);
      v7 = v19[0];
    }
    if ( v7 )
      XDCOBJ::vAltUnlockFast(v19);
  }
  return UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v20);
}
