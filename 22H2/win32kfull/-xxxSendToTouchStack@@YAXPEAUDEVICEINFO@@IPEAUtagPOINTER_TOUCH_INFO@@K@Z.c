/*
 * XREFs of ?xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z @ 0x1C01DBEC4
 * Callers:
 *     ?xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z @ 0x1C01DBD5C (-xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z.c)
 *     xxxInjectTouchInput @ 0x1C01DC7EC (xxxInjectTouchInput.c)
 * Callees:
 *     CreateTouchInputBuffer @ 0x1C01DDB98 (CreateTouchInputBuffer.c)
 */

void __fastcall xxxSendToTouchStack(struct DEVICEINFO *a1, unsigned int a2, struct tagPOINTER_TOUCH_INFO *a3, ULONG a4)
{
  __int64 v4; // rax
  int v6; // r15d
  unsigned int v9; // ebp
  ULONG v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 CurrentProcessWin32Process; // rax

  v4 = *((_QWORD *)a1 + 58);
  *((_DWORD *)a1 + 64) = 0;
  v6 = (int)a3;
  v9 = 0;
  for ( *((_QWORD *)a1 + 33) = *(unsigned __int16 *)(v4 + 44); v9 < a2; v9 += 4 )
  {
    v10 = a4;
    if ( v9 )
      v10 = 0;
    CreateTouchInputBuffer((int)a1, a2, v6, v9, v10);
    v12 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v11) + 896);
    v13 = *(_QWORD *)(v12 + 88);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
    RIMInjectInput(
      v13,
      *(_QWORD *)(*(_QWORD *)(CurrentProcessWin32Process + 896) + 96LL),
      0LL,
      *(_QWORD *)(*((_QWORD *)a1 + 58) + 24LL),
      *(unsigned __int16 *)(*((_QWORD *)a1 + 58) + 44LL));
  }
}
