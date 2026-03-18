/*
 * XREFs of _SetMagnificationInputTransform @ 0x1C0098370
 * Callers:
 *     MagpRevokeInputTransfrom @ 0x1C0098330 (MagpRevokeInputTransfrom.c)
 *     xxxDoHotKeyStuff @ 0x1C00F6330 (xxxDoHotKeyStuff.c)
 *     FreeDesktop @ 0x1C011D500 (FreeDesktop.c)
 *     ?MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x1C01C95EC (-MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     _PostMessage @ 0x1C00A5270 (_PostMessage.c)
 *     AcquireMagInputLock @ 0x1C00FB868 (AcquireMagInputLock.c)
 *     ?ComputeMagnificationFactor@@YAXPEAU_MAGNIFICATION_INPUT_TRANSFORM@@@Z @ 0x1C0212608 (-ComputeMagnificationFactor@@YAXPEAU_MAGNIFICATION_INPUT_TRANSFORM@@@Z.c)
 *     ?VerifyMagInputDimensions@@YAHPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x1C0212684 (-VerifyMagInputDimensions@@YAHPEAU_MAGN_INPUT_TRANSFORM@@@Z.c)
 */

__int64 __fastcall SetMagnificationInputTransform(__int128 *a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  bool v10; // zf
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  _OWORD *v14; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  _OWORD *v19; // rax
  __int64 v20; // rdx
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // [rsp+20h] [rbp-30h] BYREF
  __int128 v24; // [rsp+30h] [rbp-20h]
  __int128 v25; // [rsp+40h] [rbp-10h]

  v24 = 0LL;
  v3 = *((_DWORD *)a1 + 8);
  v25 = 0LL;
  v4 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( !v3 )
  {
    if ( !*(_QWORD *)(v4 + 216) )
    {
      if ( !(unsigned int)VerifyMagInputDimensions((struct _MAGN_INPUT_TRANSFORM *)a1) )
        return 0LL;
      v17 = *a1;
      *(_QWORD *)&v25 = gptiCurrent;
      v18 = a1[1];
      v23 = v17;
      v24 = v18;
      ComputeMagnificationFactor((struct _MAGNIFICATION_INPUT_TRANSFORM *)&v23);
      AcquireMagInputLock();
      v19 = (_OWORD *)Win32AllocPoolZInit(48LL, 1735226197LL);
      *(_QWORD *)(v4 + 216) = v19;
      if ( !v19 )
      {
        UserSetLastError(14LL, v20);
        _InterlockedExchange64(&gpMagInputLock, 0LL);
        return 0LL;
      }
      v8 = 804LL;
      v21 = v24;
      *v19 = v23;
      v22 = v25;
      v19[1] = v21;
      v19[2] = v22;
      goto LABEL_24;
    }
    goto LABEL_21;
  }
  if ( v3 <= 0 )
    goto LABEL_7;
  if ( v3 > 2 )
  {
    if ( v3 == 3 )
    {
      v5 = *(_QWORD *)(v4 + 216);
      if ( !v5 )
        return 0LL;
      if ( gptiCurrent == *(_QWORD *)(v5 + 32) || gptiCurrent == gptiRit )
      {
        AcquireMagInputLock();
        Win32FreePool(*(_QWORD *)(v4 + 216));
        v8 = 805LL;
        *(_QWORD *)(v4 + 216) = 0LL;
LABEL_24:
        _InterlockedExchange64(&gpMagInputLock, 0LL);
        PostMessage(-1LL, v8, 0LL);
        return 1LL;
      }
      goto LABEL_21;
    }
LABEL_7:
    v7 = 87LL;
LABEL_22:
    UserSetLastError(v7, a2);
    return 0LL;
  }
  v9 = *(_QWORD *)(v4 + 216);
  if ( !v9 )
    goto LABEL_7;
  if ( gptiCurrent != *(_QWORD *)(v9 + 32) )
  {
LABEL_21:
    v7 = 5LL;
    goto LABEL_22;
  }
  if ( !(unsigned int)VerifyMagInputDimensions((struct _MAGN_INPUT_TRANSFORM *)a1) )
    return 0LL;
  v10 = *((_DWORD *)a1 + 8) == 1;
  v11 = *(_QWORD *)(v4 + 216);
  v12 = *(_OWORD *)(v11 + 32);
  v24 = *(_OWORD *)(v11 + 16);
  v13 = *a1;
  v25 = v12;
  v23 = v13;
  if ( v10 )
    v24 = a1[1];
  ComputeMagnificationFactor((struct _MAGNIFICATION_INPUT_TRANSFORM *)&v23);
  AcquireMagInputLock();
  v14 = *(_OWORD **)(v4 + 216);
  v15 = v24;
  *v14 = v23;
  v16 = v25;
  v14[1] = v15;
  v14[2] = v16;
  _InterlockedExchange64(&gpMagInputLock, 0LL);
  return 1LL;
}
