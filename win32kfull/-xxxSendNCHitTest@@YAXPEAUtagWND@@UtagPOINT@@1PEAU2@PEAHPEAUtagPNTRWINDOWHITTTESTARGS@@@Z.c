/*
 * XREFs of ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C01E6300
 * Callers:
 *     ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1C01E5B20 (-xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01E6544 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01E7030 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C002D900 (IsToplevelWindowDesktopComposed.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C006E550 (xxxSendTransformableMessageTimeout.c)
 *     PtInRect @ 0x1C00A34E8 (PtInRect.c)
 *     DwmSyncHitTestQuery @ 0x1C0270AE0 (DwmSyncHitTestQuery.c)
 */

void __fastcall xxxSendNCHitTest(
        float **a1,
        struct tagPOINT a2,
        struct tagPOINT a3,
        struct tagPOINT *a4,
        int *a5,
        struct tagPNTRWINDOWHITTTESTARGS *a6)
{
  int v6; // ebp
  float *v8; // rax
  int v9; // ecx
  int v10; // eax
  unsigned __int64 v11; // r8
  __int64 v12; // r9
  BOOL v13; // edi
  struct tagPNTRWINDOWHITTTESTARGS *v14; // r14
  int *v15; // r15
  __int64 v16; // rcx
  void *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // [rsp+90h] [rbp+8h] BYREF
  struct tagPOINT v20; // [rsp+98h] [rbp+10h]
  struct tagPOINT v21; // [rsp+A0h] [rbp+18h]
  __int64 v22; // [rsp+A8h] [rbp+20h]

  v21 = a3;
  v20 = a2;
  v6 = 0;
  LODWORD(v19) = 0;
  if ( a4 )
  {
    v21.x += a4->x;
    v21.y += a4->y;
    v22 = (__int64)*a4;
    if ( (unsigned int)IsWindowDesktopComposed(a1) && (v8 = a1[27]) != 0LL )
    {
      v9 = (int)(float)((float)(int)v22 * *v8);
      v10 = (int)(float)((float)SHIDWORD(v22) * v8[5]);
    }
    else
    {
      v10 = HIDWORD(v22);
      v9 = v22;
    }
    v20.x += v9;
    v20.y += v10;
    a3 = v21;
  }
  if ( PtInRect((_DWORD *)a1[5] + 22, *(_QWORD *)&a3) )
  {
    v13 = (*(_BYTE *)(v12 + 31) & 0x20) != 0 || !PtInRect((_DWORD *)(v12 + 104), v11);
    if ( a1[2] == (float *)gptiCurrent )
    {
      v14 = a6;
      v15 = a5;
      if ( *((_DWORD *)a6 + 21)
        && (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1)
        && (*((_BYTE *)a1[5] + 26) & 8) != 0
        && v13 )
      {
        v17 = (void *)ReferenceDwmApiPort(v16);
        LODWORD(v19) = 1;
        UserSessionSwitchLeaveCrit(v18);
        DwmSyncHitTestQuery(v17, *((_QWORD *)v14 + 1), *((_QWORD *)v14 + 2), -2, (__int64)v15, (__int64)&v19);
        EnterCrit(1LL, 0LL);
        v6 = v19;
      }
      if ( !*((_DWORD *)v14 + 21) || !v6 )
      {
        _InterlockedAdd(&glSendMessage, 1u);
        *v15 = xxxSendTransformableMessageTimeout(
                 (struct tagWND *)a1,
                 0x84u,
                 0LL,
                 (__int128 *)(LOWORD(v21.x) | (LOWORD(v21.y) << 16)),
                 0,
                 0,
                 0LL,
                 1,
                 0);
      }
    }
    else
    {
      *a5 = 1;
    }
  }
  else
  {
    *a5 = 0;
  }
}
