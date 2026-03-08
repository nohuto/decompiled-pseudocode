/*
 * XREFs of ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C01E6CBC
 * Callers:
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01E7030 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00490C0 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0049E70 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C006E550 (xxxSendTransformableMessageTimeout.c)
 *     PtInRect @ 0x1C00A34E8 (PtInRect.c)
 *     ?xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z @ 0x1C00DEBE8 (-xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?OffsetInContact@@YAHUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@0@Z @ 0x1C01E5220 (-OffsetInContact@@YAHUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@0@Z.c)
 *     ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x1C01E5A00 (-_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@.c)
 */

HWND __fastcall xxxWindowHitTestFromTargetingProperty(
        struct tagWND *a1,
        struct tagPOINT a2,
        __int64 a3,
        int *a4,
        int a5,
        __int64 a6)
{
  HWND v8; // r12
  int v9; // esi
  __int128 *v10; // rcx
  int v11; // eax
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int16 v16; // r13
  __int64 v17; // rdi
  unsigned int v18; // r14d
  _DWORD *v19; // rdi
  HWND v20; // rax
  struct tagWND *v21; // r14
  struct tagPOINT v23; // [rsp+50h] [rbp-B0h] BYREF
  struct tagPOINT v24; // [rsp+58h] [rbp-A8h] BYREF
  struct tagPOINT v25; // [rsp+60h] [rbp-A0h] BYREF
  struct tagRECT v26; // [rsp+70h] [rbp-90h] BYREF
  int *v27; // [rsp+80h] [rbp-80h]
  _DWORD v28[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v29; // [rsp+98h] [rbp-68h]
  __int64 v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  int v32; // [rsp+B0h] [rbp-50h]
  int v33; // [rsp+B4h] [rbp-4Ch]
  __int64 v34; // [rsp+B8h] [rbp-48h]
  __int64 v35; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  __int128 v37; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v38; // [rsp+E0h] [rbp-20h]
  struct tagRECT v39; // [rsp+F0h] [rbp-10h] BYREF
  int v40; // [rsp+100h] [rbp+0h] BYREF
  __int64 v41; // [rsp+104h] [rbp+4h]
  __int128 v42; // [rsp+10Ch] [rbp+Ch]
  __int128 v43; // [rsp+11Ch] [rbp+1Ch]
  int v44; // [rsp+12Ch] [rbp+2Ch]

  v27 = a4;
  v23 = a2;
  *(_QWORD *)&v26.left = a6;
  v8 = 0LL;
  v9 = 1;
  *a4 = 1;
  if ( a5 == 1 && (*((_QWORD *)a1 + 2) == gptiCurrent || *((_QWORD *)a1 + 33) == gptiCurrent) )
  {
    v37 = 0LL;
    v38 = 0LL;
    ThreadLock(a1, &v37);
    EtwTraceTouchTargetingPointerTargetStart();
    v10 = *(__int128 **)(a3 + 40);
    v11 = *(unsigned __int16 *)(a3 + 8);
    v42 = 0LL;
    v40 = v11;
    v43 = 0LL;
    v41 = *((_QWORD *)v10 + 4);
    v42 = v10[1];
    v43 = *v10;
    v44 = *((_DWORD *)v10 + 10);
    _InterlockedAdd(&glSendMessage, 1u);
    v12 = xxxSendTransformableMessageTimeout(a1, 0x24Du, 0LL, (__int128 *)&v40, 0, 0, 0LL, 1, 0);
    EtwTraceTouchTargetingPointerTargetStop();
    ThreadUnlock1(v14, v13, v15);
    v24 = 0LL;
    v16 = (v12 >> 20) & 0xFFF;
    if ( v16 <= 0xFFDu )
    {
      if ( (unsigned int)v16 < *(_DWORD *)(a3 + 64)
        || !*(_QWORD *)(a3 + 56)
        || (*(_DWORD *)(a3 + 176) & 1) != 0
        && (v24.x = v23.x + *(_DWORD *)(a3 + 48),
            v24.y = v23.y + *(_DWORD *)(a3 + 52),
            PtInRect((_DWORD *)(*((_QWORD *)a1 + 5) + 88LL), *(_QWORD *)&v24)) )
      {
        v17 = (v12 >> 10) & 0x3FF;
        v24.x = v17;
        if ( (unsigned int)v17 > 0x1FF )
        {
          LODWORD(v17) = v17 - 1024;
          v24.x = v17;
        }
        v18 = v12 & 0x3FF;
        v24.y = v18;
        if ( v18 > 0x1FF )
        {
          v18 -= 1024;
          v24.y = v18;
        }
        if ( (unsigned int)OffsetInContact(v23, *(const struct tagTOUCHTARGETINGCONTACT **)(a3 + 40), v24) )
        {
          v23.y += v18;
          v23.x += v17;
          if ( *(_DWORD *)(a3 + 84) )
          {
            v25 = v23;
            LogicalToPhysicalDPIPoint(&v25, &v23, *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), 0LL);
            v19 = (_DWORD *)(a3 + 32);
            v28[0] = *(_DWORD *)a3;
            v31 = a3 + 32;
            v28[1] = 0;
            v29 = *(_QWORD *)(a3 + 8);
            v30 = *(_QWORD *)(a3 + 16);
            v32 = *(_DWORD *)(a3 + 36);
            v33 = 0;
            v35 = 0LL;
            v34 = 0LL;
            v36 = 0LL;
            v20 = xxxDCEWindowHitTestIndirect(a1, v25, 1, (struct tagDCE_WINDOW_HIT_TEST_ARGS *)v28);
          }
          else
          {
            v19 = (_DWORD *)(a3 + 32);
            v20 = xxxWindowHitTest2(a1, v23, (int *)(a3 + 32), *(_DWORD *)(a3 + 36));
          }
          v8 = v20;
          if ( v20 )
          {
            v21 = (struct tagWND *)ValidateHwnd(v20);
            if ( v21 )
            {
              if ( (unsigned int)IsCompositionInputWindow(a1) )
                v16 = 0;
              else
                *v19 = 1;
              v39 = *(struct tagRECT *)*(_QWORD *)&v26.left;
              TransformRectBetweenCoordinateSpaces(&v39, *(_QWORD *)&v26.left, v21, a1);
              v26 = v39;
              _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a3, v21, v16, &v24, 0LL, 1, &v26, 1);
              if ( !v16 || !*((_QWORD *)a1 + 14) )
                v9 = 0;
              *v27 = v9;
            }
          }
        }
      }
    }
  }
  return v8;
}
