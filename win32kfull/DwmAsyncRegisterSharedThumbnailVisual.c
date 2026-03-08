/*
 * XREFs of DwmAsyncRegisterSharedThumbnailVisual @ 0x1C00114F4
 * Callers:
 *     DwmAsyncRegisterSharedThumbnailVisualApiExt @ 0x1C00114B0 (DwmAsyncRegisterSharedThumbnailVisualApiExt.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall DwmAsyncRegisterSharedThumbnailVisual(
        PVOID Object,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int128 *a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v12; // ebx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  int v16; // [rsp+20h] [rbp-A1h] BYREF
  __int16 v17; // [rsp+24h] [rbp-9Dh]
  int v18; // [rsp+48h] [rbp-79h]
  __int64 v19; // [rsp+4Ch] [rbp-75h]
  __int64 v20; // [rsp+54h] [rbp-6Dh]
  int v21; // [rsp+5Ch] [rbp-65h]
  int v22; // [rsp+60h] [rbp-61h]
  __int128 v23; // [rsp+64h] [rbp-5Dh]
  __int128 v24; // [rsp+74h] [rbp-4Dh]
  __int64 v25; // [rsp+84h] [rbp-3Dh]
  int v26; // [rsp+8Ch] [rbp-35h]
  char v27; // [rsp+90h] [rbp-31h]
  __int64 v28; // [rsp+91h] [rbp-30h]
  __int64 v29; // [rsp+99h] [rbp-28h]

  v12 = -1073741823;
  if ( Object )
  {
    memset_0(&v16, 0, 0x81uLL);
    v13 = *a6;
    v14 = a6[1];
    v17 = 0x8000;
    v22 = a5;
    v26 = *((_DWORD *)a6 + 10);
    v27 = *((_BYTE *)a6 + 44);
    v23 = v13;
    v28 = a7;
    *(_QWORD *)&v13 = *((_QWORD *)a6 + 4);
    v16 = 8454233;
    v18 = 1073741905;
    v19 = a2;
    v20 = a3;
    v21 = a4;
    v24 = v14;
    v29 = a8;
    v25 = v13;
    v12 = LpcRequestPort(Object, &v16);
    ObfDereferenceObject(Object);
  }
  return v12;
}
