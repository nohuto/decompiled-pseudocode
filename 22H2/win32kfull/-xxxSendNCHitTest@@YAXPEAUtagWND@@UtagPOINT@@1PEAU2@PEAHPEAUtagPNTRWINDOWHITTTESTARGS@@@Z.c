/*
 * XREFs of ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C01E5250
 * Callers:
 *     ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1C01E4A70 (-xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01E5494 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01E5F80 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     PtInRect @ 0x1C00D0A58 (PtInRect.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00D3B08 (IsToplevelWindowDesktopComposed.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01271B0 (xxxSendTransformableMessageTimeout.c)
 *     DwmSyncHitTestQuery @ 0x1C026E030 (DwmSyncHitTestQuery.c)
 */

void __fastcall xxxSendNCHitTest(
        unsigned __int64 *BugCheckParameter2,
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
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // [rsp+90h] [rbp+8h] BYREF
  struct tagPOINT v23; // [rsp+98h] [rbp+10h]
  struct tagPOINT v24; // [rsp+A0h] [rbp+18h]
  __int64 v25; // [rsp+A8h] [rbp+20h]

  v24 = a3;
  v23 = a2;
  v6 = 0;
  LODWORD(v22) = 0;
  if ( a4 )
  {
    v24.x += a4->x;
    v24.y += a4->y;
    v25 = (__int64)*a4;
    if ( (unsigned int)IsWindowDesktopComposed(BugCheckParameter2) && (v8 = (float *)BugCheckParameter2[27]) != 0LL )
    {
      v9 = (int)(float)((float)(int)v25 * *v8);
      v10 = (int)(float)((float)SHIDWORD(v25) * v8[5]);
    }
    else
    {
      v10 = HIDWORD(v25);
      v9 = v25;
    }
    v23.x += v9;
    v23.y += v10;
    a3 = v24;
  }
  if ( PtInRect((_DWORD *)(BugCheckParameter2[5] + 88), *(_QWORD *)&a3) )
  {
    v13 = (*(_BYTE *)(v12 + 31) & 0x20) != 0 || !PtInRect((_DWORD *)(v12 + 104), v11);
    if ( BugCheckParameter2[2] == gptiCurrent )
    {
      v14 = a6;
      v15 = a5;
      if ( *((_DWORD *)a6 + 21)
        && (unsigned int)IsToplevelWindowDesktopComposed((__int64)BugCheckParameter2)
        && (*(_BYTE *)(BugCheckParameter2[5] + 26) & 8) != 0
        && v13 )
      {
        v17 = (void *)ReferenceDwmApiPort(v16);
        LODWORD(v22) = 1;
        UserSessionSwitchLeaveCrit(v19, v18, v20, v21);
        DwmSyncHitTestQuery(v17, *((_QWORD *)v14 + 1), *((_QWORD *)v14 + 2), -2, (__int64)v15, (__int64)&v22);
        EnterCrit(1LL, 0LL);
        v6 = v22;
      }
      if ( !*((_DWORD *)v14 + 21) || !v6 )
      {
        _InterlockedAdd(&glSendMessage, 1u);
        *v15 = xxxSendTransformableMessageTimeout(
                 BugCheckParameter2,
                 0x84u,
                 0LL,
                 (__int128 *)(LOWORD(v24.x) | (LOWORD(v24.y) << 16)),
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
