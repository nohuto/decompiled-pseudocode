/*
 * XREFs of DxgkEngAccumD3DPresentBounds @ 0x1C0276940
 * Callers:
 *     <none>
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00B1630 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00B4CCC (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00F2958 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
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
  __int64 v14; // rbx
  int v16; // [rsp+20h] [rbp-40h] BYREF
  int v17; // [rsp+24h] [rbp-3Ch]
  int v18; // [rsp+28h] [rbp-38h]
  int v19; // [rsp+2Ch] [rbp-34h]
  _QWORD v20[2]; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v21[32]; // [rsp+40h] [rbp-20h] BYREF
  int v22; // [rsp+80h] [rbp+20h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v20, a1);
  if ( v20[0] )
  {
    v3 = a2[1];
    v4 = a2[2];
    v5 = a2[3];
    v16 = *a2;
    v17 = v3;
    v18 = v4;
    v19 = v5;
    if ( !ERECTL::bEmpty((ERECTL *)&v16) && (*((_DWORD *)v7 + 9) & 0xE0) != 0 )
    {
      v11 = v7 + 128;
      if ( (v7[5] & 1) == 0 )
        v11 = v7 + 127;
      v12 = v8 - *v11;
      v16 = v6 - *v11;
      v13 = v11[1];
      v18 = v12;
      v17 = v9 - v13;
      v19 = v10 - v13;
      XDCOBJ::vAccumulate((XDCOBJ *)v20, (struct ERECTL *)&v16);
      v7 = (__int64 *)v20[0];
    }
    if ( v7 )
    {
      v22 = 0;
      v14 = *v7;
      HmgDecrementShareReferenceCountEx(v7, &v22);
      if ( v22 )
        bDeleteDCInternalEx(v14, 0LL);
    }
  }
  return UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v21);
}
