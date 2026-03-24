/*
 * XREFs of xxxPointerSpeedHitTest @ 0x1C021741C
 * Callers:
 *     EditionPointerSpeedHitTest @ 0x1C0216AD0 (EditionPointerSpeedHitTest.c)
 * Callees:
 *     xxxSpeedHitTest @ 0x1C004CCF4 (xxxSpeedHitTest.c)
 *     ?CanHitTestInDwm@@YA_NXZ @ 0x1C004CE34 (-CanHitTestInDwm@@YA_NXZ.c)
 *     xxxDCompSpeedHitTest @ 0x1C004CE8C (xxxDCompSpeedHitTest.c)
 *     INPUTDEST_FROM_PWND @ 0x1C0132244 (INPUTDEST_FROM_PWND.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 *     ?TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H@Z @ 0x1C0214E00 (-TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H@Z.c)
 *     TouchTargetChildTree @ 0x1C0216D6C (TouchTargetChildTree.c)
 *     TouchTargetingCreateContact @ 0x1C025F244 (TouchTargetingCreateContact.c)
 */

__int64 __fastcall xxxPointerSpeedHitTest(int a1, __int64 a2, LONG a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r12
  struct tagWND *v6; // rbx
  unsigned __int8 v10; // r14
  int v11; // eax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  struct tagPOINT v18; // rcx
  __int128 *v19; // r15
  __int128 v20; // xmm0
  int v21; // eax
  _QWORD *v22; // rax
  struct tagWND *v23; // rsi
  struct tagWND *v24; // rax
  _OWORD *v25; // rax
  __int128 v26; // xmm1
  __int128 v27; // xmm2
  __int128 v28; // xmm3
  __int128 v29; // xmm4
  __int128 v30; // xmm5
  __int128 v31; // xmm6
  struct tagPOINT v33[2]; // [rsp+48h] [rbp-C0h] BYREF
  struct tagPOINT v34; // [rsp+58h] [rbp-B0h] BYREF
  int v35[5]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+74h] [rbp-94h]
  int v37; // [rsp+7Ch] [rbp-8Ch]
  __int64 v38; // [rsp+80h] [rbp-88h]
  int v39; // [rsp+88h] [rbp-80h]
  int v40; // [rsp+8Ch] [rbp-7Ch]
  __int64 v41; // [rsp+90h] [rbp-78h]
  __int128 v42; // [rsp+98h] [rbp-70h] BYREF
  _OWORD v43[7]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v44; // [rsp+118h] [rbp+10h] BYREF
  __int128 v45; // [rsp+128h] [rbp+20h] BYREF
  int v46; // [rsp+138h] [rbp+30h] BYREF
  __int64 v47; // [rsp+13Ch] [rbp+34h]
  __int128 v48; // [rsp+144h] [rbp+3Ch]
  __int128 v49; // [rsp+154h] [rbp+4Ch]
  int v50; // [rsp+164h] [rbp+5Ch]
  _BYTE v51[184]; // [rsp+168h] [rbp+60h] BYREF
  __int64 v52; // [rsp+220h] [rbp+118h]

  v5 = a2 + 8;
  v6 = 0LL;
  v35[0] = *(_DWORD *)(a2 + 8);
  v35[1] = *(_DWORD *)(a2 + 20);
  v35[3] = *(_DWORD *)(a2 + 12);
  v10 = 0;
  v35[4] = *(_DWORD *)(a2 + 180);
  v36 = *(_QWORD *)(a2 + 40);
  v38 = *(_QWORD *)(a2 + 24);
  v41 = *(_QWORD *)(a2 + 88);
  v11 = *(_DWORD *)(a2 + 72);
  v33[0].x = a3;
  v35[2] = 0;
  v37 = 0;
  v40 = 0;
  v39 = v11;
  memset(v43, 0, sizeof(v43));
  v12 = v43[1];
  *(_OWORD *)a5 = v43[0];
  v13 = v43[2];
  *(_OWORD *)(a5 + 16) = v12;
  v14 = v43[3];
  *(_OWORD *)(a5 + 32) = v13;
  v15 = v43[4];
  *(_OWORD *)(a5 + 48) = v14;
  v16 = v43[5];
  *(_OWORD *)(a5 + 64) = v15;
  v17 = v43[6];
  *(_OWORD *)(a5 + 80) = v16;
  *(_OWORD *)(a5 + 96) = v17;
  v18 = *(struct tagPOINT *)(a2 + 40);
  v34 = v18;
  if ( a1 || !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))TouchTargetingEnabledForInput)(v18, v5) )
  {
    return (unsigned int)xxxSpeedHitTest(a1, (__int64)v35, v33[0].x, 0LL, a4, (_OWORD *)a5) != 0;
  }
  else
  {
    memset(v51, 0, sizeof(v51));
    v46 = 0;
    v19 = 0LL;
    v44 = 0LL;
    v45 = 0LL;
    EtwTraceTouchTargetingSpeedHitTestStart();
    v52 = 0LL;
    if ( (unsigned int)_GetDeviceRects(v5, &v44, &v45) )
    {
      *(_OWORD *)&v33[0].x = v45;
      v42 = v44;
      _SetHimetricToPixelRatio(&v42, v33, v51);
      v19 = &v44;
    }
    v20 = *(_OWORD *)(a2 + 112);
    v47 = *(_QWORD *)(a2 + 40);
    v21 = *(_DWORD *)(a2 + 108);
    v48 = v20;
    v49 = v20;
    if ( (v21 & 2) != 0 )
      v50 = *(_DWORD *)(a2 + 144);
    else
      v50 = 0;
    TouchTargetingCreateContact(&v46, v19, 1LL, v51);
    if ( g_bHitTestDwmFirstForTouch && CanHitTestInDwm() )
    {
      return (unsigned __int8)xxxDCompSpeedHitTest(
                                (__int64)v35,
                                0x10u,
                                0LL,
                                0LL,
                                (struct tagTOUCHTARGETINGCONTACT *)v51,
                                a4,
                                (_OWORD *)a5);
    }
    else
    {
      v33[0] = 0LL;
      v22 = *(_QWORD **)(grpdeskRitInput + 8LL);
      v23 = (struct tagWND *)v22[3];
      v24 = TopLevelTouchTarget(v23, (struct tagTOUCHTARGETINGCONTACT *)v51, &v34, v33, *(_DWORD *)(*v22 + 64LL) & 1);
      if ( v24 )
      {
        v10 = 1;
        v23 = TouchTargetChildTree(v24, (struct tagTOUCHTARGETINGCONTACT *)v51, *(_QWORD *)&v34, v33);
      }
      if ( *(_DWORD *)(a5 + 92) == 2 )
        v6 = *(struct tagWND **)(a5 + 80);
      if ( v6 != v23 )
      {
        v25 = INPUTDEST_FROM_PWND(v43, (__int64)v23);
        v26 = v25[1];
        v27 = v25[2];
        v28 = v25[3];
        v29 = v25[4];
        v30 = v25[5];
        v31 = v25[6];
        *(_OWORD *)a5 = *v25;
        *(_OWORD *)(a5 + 16) = v26;
        *(_OWORD *)(a5 + 32) = v27;
        *(_OWORD *)(a5 + 48) = v28;
        *(_OWORD *)(a5 + 64) = v29;
        *(_OWORD *)(a5 + 80) = v30;
        *(_OWORD *)(a5 + 96) = v31;
      }
    }
  }
  return v10;
}
