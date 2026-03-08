/*
 * XREFs of DwmAsyncChildCreate @ 0x1C007E990
 * Callers:
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C007E644 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 * Callees:
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x1C0028164 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall DwmAsyncChildCreate(
        PVOID Object,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int128 *a8,
        __int64 a9,
        __int128 *a10,
        int a11,
        __int64 a12)
{
  unsigned int v16; // ebx
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  int v22; // [rsp+20h] [rbp-C1h] BYREF
  __int16 v23; // [rsp+24h] [rbp-BDh]
  int v24; // [rsp+48h] [rbp-99h]
  __int64 v25; // [rsp+4Ch] [rbp-95h]
  __int64 v26; // [rsp+54h] [rbp-8Dh]
  int v27; // [rsp+5Ch] [rbp-85h]
  int v28; // [rsp+60h] [rbp-81h]
  __int128 v29; // [rsp+64h] [rbp-7Dh]
  int v30; // [rsp+74h] [rbp-6Dh]
  __int128 v31; // [rsp+78h] [rbp-69h]
  __int128 v32; // [rsp+88h] [rbp-59h]
  __int128 v33; // [rsp+98h] [rbp-49h]
  __int128 v34; // [rsp+A8h] [rbp-39h]
  __int64 v35; // [rsp+B8h] [rbp-29h]
  int v36; // [rsp+C0h] [rbp-21h]
  int v37; // [rsp+C4h] [rbp-1Dh]
  __int64 v38; // [rsp+C8h] [rbp-19h]

  v16 = -1073741823;
  IncrementDWMWindowUniqueness((__int64)Object);
  if ( Object )
  {
    memset_0(&v22, 0, 0xB0uLL);
    v17 = *a8;
    v18 = a8[1];
    v23 = 0x8000;
    v28 = a5;
    v36 = a6;
    v30 = a7;
    v31 = v17;
    v35 = a9;
    v33 = a8[2];
    v37 = a11;
    v19 = *a10;
    v32 = v18;
    v38 = a12;
    v20 = a8[3];
    v22 = 11534472;
    v24 = 1073741841;
    v25 = a2;
    v26 = a3;
    v27 = a4;
    v34 = v20;
    v29 = v19;
    EtwUpdateEvent(a3, 1073741841LL);
    v16 = LpcRequestPort(Object, &v22);
    ObfDereferenceObject(Object);
  }
  return v16;
}
