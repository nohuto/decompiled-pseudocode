/*
 * XREFs of DwmAsyncSetCompositionAttribute @ 0x1C0027E98
 * Callers:
 *     ?_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0027E28 (-_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOS.c)
 * Callees:
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x1C0028164 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall DwmAsyncSetCompositionAttribute(PVOID Object, __int64 a2, int a3, __int128 *a4)
{
  __int64 v5; // rsi
  unsigned int v8; // ebx
  __int128 v9; // xmm0
  __int64 v10; // xmm1_8
  __int16 v11; // ax
  int v12; // eax
  __int16 v14; // [rsp+20h] [rbp-49h] BYREF
  int v15; // [rsp+22h] [rbp-47h]
  int v16; // [rsp+48h] [rbp-21h]
  int v17; // [rsp+4Ch] [rbp-1Dh]
  __int64 v18; // [rsp+50h] [rbp-19h]
  int v19; // [rsp+58h] [rbp-11h]
  int v20; // [rsp+5Ch] [rbp-Dh]
  __int128 v21; // [rsp+60h] [rbp-9h]
  __int64 v22; // [rsp+70h] [rbp+7h]

  v5 = a3;
  v8 = -1073741823;
  IncrementDWMWindowUniqueness();
  if ( Object )
  {
    memset_0(&v14, 0, 0x58uLL);
    v9 = *a4;
    v17 = 0;
    v10 = *((_QWORD *)a4 + 2);
    v15 = -2147483560;
    v16 = 1073741867;
    v18 = a2;
    v19 = v5;
    v11 = qword_1C03186D8[2 * v5];
    v21 = v9;
    v14 = v11 + 24;
    v12 = qword_1C03186D8[2 * v5];
    v22 = v10;
    v20 = v12;
    v8 = LpcRequestPort(Object, &v14);
    ObfDereferenceObject(Object);
  }
  return v8;
}
