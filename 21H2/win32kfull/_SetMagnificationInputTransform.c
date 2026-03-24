/*
 * XREFs of _SetMagnificationInputTransform @ 0x1C00EB690
 * Callers:
 *     MagpRevokeInputTransfrom @ 0x1C00EB650 (MagpRevokeInputTransfrom.c)
 *     xxxDoHotKeyStuff @ 0x1C01052A0 (xxxDoHotKeyStuff.c)
 *     FreeDesktop @ 0x1C012C1E0 (FreeDesktop.c)
 *     ?MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x1C01CC790 (-MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     _PostMessage @ 0x1C002DC40 (_PostMessage.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     AcquireMagInputLock @ 0x1C010FE78 (AcquireMagInputLock.c)
 *     ?ComputeMagnificationFactor@@YAXPEAU_MAGNIFICATION_INPUT_TRANSFORM@@@Z @ 0x1C0213E2C (-ComputeMagnificationFactor@@YAXPEAU_MAGNIFICATION_INPUT_TRANSFORM@@@Z.c)
 *     ?VerifyMagInputDimensions@@YAHPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x1C0213EA8 (-VerifyMagInputDimensions@@YAHPEAU_MAGN_INPUT_TRANSFORM@@@Z.c)
 */

__int64 __fastcall SetMagnificationInputTransform(__int128 *a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v8; // rcx
  int v9; // edx
  __int64 v10; // rax
  bool v11; // zf
  __int64 v12; // rax
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  _OWORD *v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  _OWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // [rsp+20h] [rbp-30h] BYREF
  __int128 v26; // [rsp+30h] [rbp-20h]
  __int128 v27; // [rsp+40h] [rbp-10h]

  v26 = 0LL;
  v4 = *((_DWORD *)a1 + 8);
  v27 = 0LL;
  v5 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( !v4 )
  {
    if ( !*(_QWORD *)(v5 + 216) )
    {
      if ( !(unsigned int)VerifyMagInputDimensions((struct _MAGN_INPUT_TRANSFORM *)a1) )
        return 0LL;
      v18 = *a1;
      *(_QWORD *)&v27 = gptiCurrent;
      v19 = a1[1];
      v25 = v18;
      v26 = v19;
      ComputeMagnificationFactor((struct _MAGNIFICATION_INPUT_TRANSFORM *)&v25);
      AcquireMagInputLock();
      v20 = (_OWORD *)Win32AllocPool(48LL, 1735226197LL);
      *(_QWORD *)(v5 + 216) = v20;
      if ( !v20 )
      {
        UserSetLastError(14LL, v21, v22);
        _InterlockedExchange64(&gpMagInputLock, 0LL);
        return 0LL;
      }
      v9 = 804;
      v23 = v26;
      *v20 = v25;
      v24 = v27;
      v20[1] = v23;
      v20[2] = v24;
      goto LABEL_24;
    }
    goto LABEL_21;
  }
  if ( v4 <= 0 )
    goto LABEL_7;
  if ( v4 > 2 )
  {
    if ( v4 == 3 )
    {
      v6 = *(_QWORD *)(v5 + 216);
      if ( !v6 )
        return 0LL;
      if ( gptiCurrent == *(_QWORD *)(v6 + 32) || gptiCurrent == gptiRit )
      {
        AcquireMagInputLock();
        Win32FreePool(*(void **)(v5 + 216));
        v9 = 805;
        *(_QWORD *)(v5 + 216) = 0LL;
LABEL_24:
        _InterlockedExchange64(&gpMagInputLock, 0LL);
        PostMessage(-1, v9, 0, 0);
        return 1LL;
      }
      goto LABEL_21;
    }
LABEL_7:
    v8 = 87LL;
LABEL_22:
    UserSetLastError(v8, a2, a3);
    return 0LL;
  }
  v10 = *(_QWORD *)(v5 + 216);
  if ( !v10 )
    goto LABEL_7;
  if ( gptiCurrent != *(_QWORD *)(v10 + 32) )
  {
LABEL_21:
    v8 = 5LL;
    goto LABEL_22;
  }
  if ( !(unsigned int)VerifyMagInputDimensions((struct _MAGN_INPUT_TRANSFORM *)a1) )
    return 0LL;
  v11 = *((_DWORD *)a1 + 8) == 1;
  v12 = *(_QWORD *)(v5 + 216);
  v13 = *(_OWORD *)(v12 + 32);
  v26 = *(_OWORD *)(v12 + 16);
  v14 = *a1;
  v27 = v13;
  v25 = v14;
  if ( v11 )
    v26 = a1[1];
  ComputeMagnificationFactor((struct _MAGNIFICATION_INPUT_TRANSFORM *)&v25);
  AcquireMagInputLock();
  v15 = *(_OWORD **)(v5 + 216);
  v16 = v26;
  *v15 = v25;
  v17 = v27;
  v15[1] = v16;
  v15[2] = v17;
  _InterlockedExchange64(&gpMagInputLock, 0LL);
  return 1LL;
}
