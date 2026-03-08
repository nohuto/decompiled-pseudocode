/*
 * XREFs of ?GetInputDestFromForegroundCapture@QHelper@@YA?AUtagINPUTDEST@@XZ @ 0x1C022D25C
 * Callers:
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C022DC78 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C0079D90 (INPUTDEST_FROM_PWND.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

_OWORD *__fastcall QHelper::GetInputDestFromForegroundCapture(_OWORD *a1)
{
  __int64 v2; // rdx
  _OWORD *v3; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  _DWORD v11[30]; // [rsp+20h] [rbp-78h] BYREF

  memset(a1, 0, 0x70uLL);
  if ( gpqForeground )
  {
    v2 = *(_QWORD *)(gpqForeground + 112);
    if ( v2 )
    {
      v3 = INPUTDEST_FROM_PWND(v11, v2);
      v4 = v3[1];
      *a1 = *v3;
      v5 = v3[2];
      a1[1] = v4;
      v6 = v3[3];
      a1[2] = v5;
      v7 = v3[4];
      a1[3] = v6;
      v8 = v3[5];
      a1[4] = v7;
      v9 = v3[6];
      a1[5] = v8;
      a1[6] = v9;
    }
  }
  return a1;
}
