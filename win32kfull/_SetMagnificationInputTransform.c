/*
 * XREFs of _SetMagnificationInputTransform @ 0x1C007F160
 * Callers:
 *     MagpRevokeInputTransfrom @ 0x1C007F120 (MagpRevokeInputTransfrom.c)
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0097FCC (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     FreeDesktop @ 0x1C00F2180 (FreeDesktop.c)
 *     ?MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x1C01A4048 (-MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     _PostMessage @ 0x1C00EF0A0 (_PostMessage.c)
 *     ?ComputeMagnificationFactor@@YAXPEAU_MAGNIFICATION_INPUT_TRANSFORM@@@Z @ 0x1C01F7C48 (-ComputeMagnificationFactor@@YAXPEAU_MAGNIFICATION_INPUT_TRANSFORM@@@Z.c)
 *     ?VerifyMagInputDimensions@@YAHPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x1C01F7CC4 (-VerifyMagInputDimensions@@YAHPEAU_MAGN_INPUT_TRANSFORM@@@Z.c)
 *     AcquireMagInputLock @ 0x1C01F7D00 (AcquireMagInputLock.c)
 */

__int64 __fastcall SetMagnificationInputTransform(__int128 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edx
  __int64 v6; // rsi
  int v7; // edx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  bool v13; // zf
  __int64 v14; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  _OWORD *v17; // rax
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  int v20; // ecx
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  _OWORD *v23; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // [rsp+20h] [rbp-30h] BYREF
  __int128 v27; // [rsp+30h] [rbp-20h]
  __int128 v28; // [rsp+40h] [rbp-10h]

  v4 = *((_DWORD *)a1 + 8);
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v6 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( !v4 )
  {
    if ( !*(_QWORD *)(v6 + 216) )
    {
      if ( !(unsigned int)VerifyMagInputDimensions((struct _MAGN_INPUT_TRANSFORM *)a1) )
        return 0LL;
      v21 = *a1;
      *(_QWORD *)&v28 = gptiCurrent;
      v22 = a1[1];
      v26 = v21;
      v27 = v22;
      ComputeMagnificationFactor((struct _MAGNIFICATION_INPUT_TRANSFORM *)&v26);
      ((void (*)(void))AcquireMagInputLock)();
      v23 = (_OWORD *)Win32AllocPoolZInit(48LL, 1735226197LL);
      *(_QWORD *)(v6 + 216) = v23;
      if ( !v23 )
      {
        UserSetLastError(14);
        _InterlockedExchange64(&gpMagInputLock, 0LL);
        return 0LL;
      }
      v11 = 804LL;
      v24 = v27;
      *v23 = v26;
      v25 = v28;
      v23[1] = v24;
      v23[2] = v25;
      goto LABEL_24;
    }
    goto LABEL_21;
  }
  v7 = v4 - 1;
  if ( v7 )
  {
    v8 = (unsigned int)(v7 - 1);
    if ( (_DWORD)v8 )
    {
      if ( (_DWORD)v8 == 1 )
      {
        v9 = *(_QWORD *)(v6 + 216);
        if ( !v9 )
          return 0LL;
        if ( gptiCurrent == *(_QWORD *)(v9 + 32) || gptiCurrent == gptiRit )
        {
          AcquireMagInputLock(a1, v8, a3, a4, v26);
          Win32FreePool(*(void **)(v6 + 216));
          v11 = 805LL;
          *(_QWORD *)(v6 + 216) = 0LL;
LABEL_24:
          _InterlockedExchange64(&gpMagInputLock, 0LL);
          PostMessage(-1LL, v11, 0LL, 0LL);
          return 1LL;
        }
        goto LABEL_21;
      }
LABEL_16:
      v20 = 87;
LABEL_22:
      UserSetLastError(v20);
      return 0LL;
    }
  }
  v12 = *(_QWORD *)(v6 + 216);
  if ( !v12 )
    goto LABEL_16;
  if ( gptiCurrent != *(_QWORD *)(v12 + 32) )
  {
LABEL_21:
    v20 = 5;
    goto LABEL_22;
  }
  if ( !(unsigned int)VerifyMagInputDimensions((struct _MAGN_INPUT_TRANSFORM *)a1) )
    return 0LL;
  v13 = *((_DWORD *)a1 + 8) == 1;
  v14 = *(_QWORD *)(v6 + 216);
  v15 = *(_OWORD *)(v14 + 32);
  v27 = *(_OWORD *)(v14 + 16);
  v16 = *a1;
  v28 = v15;
  v26 = v16;
  if ( v13 )
    v27 = a1[1];
  ComputeMagnificationFactor((struct _MAGNIFICATION_INPUT_TRANSFORM *)&v26);
  ((void (*)(void))AcquireMagInputLock)();
  v17 = *(_OWORD **)(v6 + 216);
  v18 = v27;
  *v17 = v26;
  v19 = v28;
  v17[1] = v18;
  v17[2] = v19;
  _InterlockedExchange64(&gpMagInputLock, 0LL);
  return 1LL;
}
