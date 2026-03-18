/*
 * XREFs of ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C0205BE8
 * Callers:
 *     ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1C02053A4 (-xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C0205E2C (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C02068EC (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C006FF18 (IsToplevelWindowDesktopComposed.c)
 *     PtInRect @ 0x1C0077984 (PtInRect.c)
 *     DwmSyncHitTestQuery @ 0x1C00CA230 (DwmSyncHitTestQuery.c)
 */

void __fastcall xxxSendNCHitTest(
        __int64 *BugCheckParameter2,
        struct tagPOINT a2,
        struct tagPOINT a3,
        struct tagPOINT *a4,
        int *a5,
        struct tagPNTRWINDOWHITTTESTARGS *a6)
{
  int v6; // ebp
  __int64 v7; // rbx
  float *v9; // rax
  int v10; // ecx
  int v11; // eax
  unsigned __int64 v12; // r8
  __int64 v13; // r9
  BOOL v14; // edi
  struct tagPNTRWINDOWHITTTESTARGS *v15; // r14
  int *v16; // r15
  __int64 v17; // rcx
  void *v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // [rsp+90h] [rbp+8h] BYREF
  struct tagPOINT v21; // [rsp+98h] [rbp+10h]
  struct tagPOINT v22; // [rsp+A0h] [rbp+18h]
  __int64 v23; // [rsp+A8h] [rbp+20h]

  v22 = a3;
  v21 = a2;
  v6 = 0;
  v7 = (__int64)a2;
  LODWORD(v20) = 0;
  if ( a4 )
  {
    v22.x += a4->x;
    v22.y += a4->y;
    v23 = (__int64)*a4;
    if ( (unsigned int)IsWindowDesktopComposed(BugCheckParameter2) && (v9 = (float *)BugCheckParameter2[27]) != 0LL )
    {
      v10 = (int)(float)((float)(int)v23 * *v9);
      v11 = (int)(float)((float)SHIDWORD(v23) * v9[5]);
    }
    else
    {
      v11 = HIDWORD(v23);
      v10 = v23;
    }
    v21.x += v10;
    v21.y += v11;
    v7 = (__int64)v21;
    a3 = v22;
  }
  if ( PtInRect((_DWORD *)(BugCheckParameter2[5] + 88), *(_QWORD *)&a3) )
  {
    v14 = (*(_BYTE *)(v13 + 31) & 0x20) != 0 || !PtInRect((_DWORD *)(v13 + 104), v12);
    if ( BugCheckParameter2[2] == gptiCurrent )
    {
      v15 = a6;
      v16 = a5;
      if ( *((_DWORD *)a6 + 21)
        && (unsigned int)IsToplevelWindowDesktopComposed((__int64)BugCheckParameter2)
        && (*(_BYTE *)(BugCheckParameter2[5] + 26) & 8) != 0
        && v14 )
      {
        v18 = (void *)ReferenceDwmApiPort(v17);
        LODWORD(v20) = 1;
        UserSessionSwitchLeaveCrit(v19);
        DwmSyncHitTestQuery(
          v18,
          *BugCheckParameter2,
          *(_DWORD *)v15,
          v7,
          *((_QWORD *)v15 + 1),
          *((_QWORD *)v15 + 2),
          -2,
          v16,
          &v20);
        EnterCrit(1LL, 0LL);
        v6 = v20;
      }
      if ( !*((_DWORD *)v15 + 21) || !v6 )
      {
        _InterlockedAdd(&glSendMessage, 1u);
        *v16 = xxxSendTransformableMessageTimeout(
                 (unsigned __int64 *)BugCheckParameter2,
                 0x84u,
                 0LL,
                 LOWORD(v22.x) | (LOWORD(v22.y) << 16),
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
