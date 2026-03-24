/*
 * XREFs of ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C0216334
 * Callers:
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C02166DC (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     PtInRect @ 0x1C004DE1C (PtInRect.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00598F0 (xxxSendTransformableMessageTimeout.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C006B87C (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     xxxWindowHitTest2 @ 0x1C00D70C4 (xxxWindowHitTest2.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ?xxxDCEWindowHitTestIndirect_Iterative@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0167424 (-xxxDCEWindowHitTestIndirect_Iterative@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW.c)
 *     ?OffsetInContact@@YAHUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@0@Z @ 0x1C0214ADC (-OffsetInContact@@YAHUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@0@Z.c)
 *     ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x1C02153BC (-_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@.c)
 */

__int64 __fastcall xxxWindowHitTestFromTargetingProperty(
        unsigned __int64 a1,
        struct tagPOINT a2,
        __int64 a3,
        int *a4,
        int a5,
        struct tagRECT *a6)
{
  __int64 v8; // r15
  int v9; // edi
  __int64 ThreadWin32Thread; // rax
  __int128 *v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rcx
  unsigned __int16 v14; // r13
  BOOL v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // r14d
  unsigned int v19; // r12d
  _DWORD *v20; // r14
  __int64 v21; // rax
  struct tagWND *v22; // r12
  struct tagPOINT v24; // [rsp+50h] [rbp-B0h] BYREF
  struct tagPOINT v25; // [rsp+58h] [rbp-A8h] BYREF
  int v26; // [rsp+60h] [rbp-A0h]
  struct tagPOINT v27; // [rsp+68h] [rbp-98h] BYREF
  struct tagRECT *v28; // [rsp+70h] [rbp-90h]
  int *v29; // [rsp+78h] [rbp-88h]
  _DWORD v30[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v31; // [rsp+88h] [rbp-78h]
  __int64 v32; // [rsp+90h] [rbp-70h]
  __int64 v33; // [rsp+98h] [rbp-68h]
  int v34; // [rsp+A0h] [rbp-60h]
  int v35; // [rsp+A4h] [rbp-5Ch]
  __int64 v36; // [rsp+A8h] [rbp-58h]
  __int64 v37; // [rsp+B0h] [rbp-50h]
  __int64 v38; // [rsp+B8h] [rbp-48h]
  _QWORD v39[4]; // [rsp+C0h] [rbp-40h] BYREF
  struct tagRECT v40; // [rsp+E0h] [rbp-20h] BYREF
  struct tagRECT v41; // [rsp+F0h] [rbp-10h] BYREF
  int v42; // [rsp+100h] [rbp+0h] BYREF
  __int64 v43; // [rsp+104h] [rbp+4h]
  __int128 v44; // [rsp+10Ch] [rbp+Ch]
  __int128 v45; // [rsp+11Ch] [rbp+1Ch]
  int v46; // [rsp+12Ch] [rbp+2Ch]

  v29 = a4;
  v24 = a2;
  v28 = a6;
  v8 = 0LL;
  v9 = 1;
  *a4 = 1;
  if ( a5 == 1 && (*(_QWORD *)(a1 + 16) == gptiCurrent || *(_QWORD *)(a1 + 264) == gptiCurrent) )
  {
    v39[2] = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v39[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v39;
    v39[1] = a1;
    HMLockObject(a1);
    EtwTraceTouchTargetingPointerTargetStart();
    v11 = *(__int128 **)(a3 + 40);
    v42 = *(unsigned __int16 *)(a3 + 8);
    v43 = *((_QWORD *)v11 + 4);
    v44 = v11[1];
    v45 = *v11;
    v46 = *((_DWORD *)v11 + 10);
    _InterlockedAdd(&glSendMessage, 1u);
    v12 = xxxSendTransformableMessageTimeout(a1, 0x24Du, 0LL, (struct _LARGE_STRING *)&v42, 0, 0, 0LL, 1, 0);
    EtwTraceTouchTargetingPointerTargetStop();
    ThreadUnlock1(v13);
    v14 = (v12 >> 20) & 0xFFF;
    if ( v14 <= 0xFFDu )
    {
      if ( (unsigned int)v14 >= *(_DWORD *)(a3 + 64) && *(_QWORD *)(a3 + 56) )
      {
        if ( (*(_DWORD *)(a3 + 176) & 1) == 0 )
          return v8;
        v25.x = v24.x + *(_DWORD *)(a3 + 48);
        v25.y = v24.y + *(_DWORD *)(a3 + 52);
        v15 = PtInRect((_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL), *(_QWORD *)&v25);
      }
      else
      {
        v15 = 1;
      }
      if ( v15 )
      {
        v16 = (v12 >> 10) & 0x3FF;
        v25.x = v16;
        if ( (unsigned int)v16 > 0x1FF )
          v25.x = v16 - 1024;
        v17 = v16 - 1024;
        if ( (unsigned int)v16 <= 0x1FF )
          v17 = (v12 >> 10) & 0x3FF;
        v18 = v12 & 0x3FF;
        v26 = v17;
        v25.y = v18;
        if ( v18 > 0x1FF )
          v25.y = v18 - 1024;
        v19 = v18 - 1024;
        if ( v18 <= 0x1FF )
          v19 = v18;
        if ( (unsigned int)OffsetInContact(v24, *(const struct tagTOUCHTARGETINGCONTACT **)(a3 + 40), v25) )
        {
          v24.y += v19;
          v24.x += v26;
          if ( *(_DWORD *)(a3 + 84) )
          {
            v27 = v24;
            LogicalToPhysicalDPIPoint(&v27, &v24, *(unsigned int *)(*(_QWORD *)(a1 + 40) + 288LL), 0LL);
            v20 = (_DWORD *)(a3 + 32);
            v30[0] = *(_DWORD *)a3;
            v33 = a3 + 32;
            v30[1] = 0;
            v31 = *(_QWORD *)(a3 + 8);
            v32 = *(_QWORD *)(a3 + 16);
            v34 = *(_DWORD *)(a3 + 36);
            v37 = 0LL;
            v35 = 0;
            v36 = 0LL;
            v38 = 0LL;
            v21 = (__int64)xxxDCEWindowHitTestIndirect_Iterative(
                             (struct tagWND *)a1,
                             v27,
                             1,
                             (struct tagDCE_WINDOW_HIT_TEST_ARGS *)v30);
          }
          else
          {
            v20 = (_DWORD *)(a3 + 32);
            v21 = xxxWindowHitTest2((const struct tagWND *)a1, *(_QWORD *)&v24, (int *)(a3 + 32), *(_DWORD *)(a3 + 36));
          }
          v8 = v21;
          if ( v21 )
          {
            v22 = (struct tagWND *)ValidateHwnd(v21);
            if ( v22 )
            {
              if ( (unsigned int)IsCompositionInputWindow((const struct tagWND *)a1) )
                v14 = 0;
              else
                *v20 = 1;
              v41 = *v28;
              TransformRectBetweenCoordinateSpaces(&v41, v28, v22, a1);
              v40 = v41;
              _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a3, v22, v14, &v25, 0LL, 1, &v40, 1);
              if ( !v14 || !*(_QWORD *)(a1 + 112) )
                v9 = 0;
              *v29 = v9;
            }
          }
        }
      }
    }
  }
  return v8;
}
