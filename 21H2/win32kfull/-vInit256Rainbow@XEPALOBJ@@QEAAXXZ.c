/*
 * XREFs of ?vInit256Rainbow@XEPALOBJ@@QEAAXXZ @ 0x1C00D417C
 * Callers:
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C007F448 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C009FE48 (PALLOCMEM2.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C00D43FC (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?vInit256Default@XEPALOBJ@@QEAAXXZ @ 0x1C00D4418 (-vInit256Default@XEPALOBJ@@QEAAXXZ.c)
 *     ?MakeITable@@YAHPEAEPEAURGBX@@H@Z @ 0x1C00D4474 (-MakeITable@@YAHPEAEPEAURGBX@@H@Z.c)
 */

void __fastcall XEPALOBJ::vInit256Rainbow(XEPALOBJ *this)
{
  char v1; // dl
  char v2; // r8
  char v3; // r11
  __int64 v4; // r9
  __int64 v6; // r10
  unsigned __int8 *v7; // rsi
  unsigned __int8 *v8; // rbx
  __int64 v9; // rax
  int v10; // [rsp+38h] [rbp+10h]

  v1 = 0;
  v2 = 0;
  v3 = 0;
  HIBYTE(v10) = 0;
  v4 = 0LL;
  v6 = 256LL;
  do
  {
    LOBYTE(v10) = v3;
    BYTE1(v10) = v2;
    BYTE2(v10) = v1;
    *(_DWORD *)(v4 + *(_QWORD *)(*(_QWORD *)this + 112LL)) = v10;
    v3 += 32;
    if ( !v3 )
    {
      v2 += 32;
      if ( !v2 )
        v1 += 64;
    }
    v4 += 4LL;
    --v6;
  }
  while ( v6 );
  XEPALOBJ::vInit256Default(this);
  v7 = gpRGBXlate;
  if ( gpRGBXlate )
    goto LABEL_5;
  v8 = (unsigned __int8 *)PALLOCMEM2(0x8000uLL, 1650946631LL, 0);
  v9 = *(_QWORD *)this;
  if ( v8 )
  {
    MakeITable(v8, *(struct RGBX **)(v9 + 112), 256);
    v7 = (unsigned __int8 *)_InterlockedCompareExchange64(
                              (volatile signed __int64 *)gpRGBXlate,
                              (signed __int64)v8,
                              0LL);
    if ( v7 )
      Win32FreePool(v8);
    else
      v7 = v8;
LABEL_5:
    *(_DWORD *)(*(_QWORD *)this + 36LL) = XEPALOBJ::ulTime(this);
    *(_QWORD *)(*(_QWORD *)this + 104LL) = v7;
    return;
  }
  *(_QWORD *)(v9 + 104) = 0LL;
}
