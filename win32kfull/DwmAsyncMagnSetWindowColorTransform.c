/*
 * XREFs of DwmAsyncMagnSetWindowColorTransform @ 0x1C026F91C
 * Callers:
 *     MagpComposeDesktop @ 0x1C007EC4C (MagpComposeDesktop.c)
 *     MagSetLensContextInformation @ 0x1C01A4A80 (MagSetLensContextInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall DwmAsyncMagnSetWindowColorTransform(PVOID Object, __int64 a2, __int64 a3, __int128 *a4)
{
  unsigned int v8; // ebx
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  int v11; // eax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  int v17; // [rsp+20h] [rbp-89h] BYREF
  __int16 v18; // [rsp+24h] [rbp-85h]
  int v19; // [rsp+48h] [rbp-61h]
  __int64 v20; // [rsp+4Ch] [rbp-5Dh]
  __int64 v21; // [rsp+54h] [rbp-55h]
  __int128 v22; // [rsp+5Ch] [rbp-4Dh]
  __int128 v23; // [rsp+6Ch] [rbp-3Dh]
  __int128 v24; // [rsp+7Ch] [rbp-2Dh]
  __int128 v25; // [rsp+8Ch] [rbp-1Dh]
  __int128 v26; // [rsp+9Ch] [rbp-Dh]
  __int128 v27; // [rsp+ACh] [rbp+3h]
  int v28; // [rsp+BCh] [rbp+13h]

  v8 = -1073741823;
  if ( Object )
  {
    memset_0(&v17, 0, 0xA0uLL);
    v9 = *a4;
    v10 = a4[1];
    v18 = 0x8000;
    v11 = *((_DWORD *)a4 + 24);
    v22 = v9;
    v17 = 10485880;
    v12 = a4[2];
    v19 = 1073741925;
    v23 = v10;
    v20 = a2;
    v13 = a4[3];
    v21 = a3;
    v24 = v12;
    v28 = v11;
    v14 = a4[4];
    v25 = v13;
    v15 = a4[5];
    v26 = v14;
    v27 = v15;
    EtwUpdateEvent(a2, 1073741925LL);
    v8 = LpcRequestPort(Object, &v17);
    ObfDereferenceObject(Object);
  }
  return v8;
}
