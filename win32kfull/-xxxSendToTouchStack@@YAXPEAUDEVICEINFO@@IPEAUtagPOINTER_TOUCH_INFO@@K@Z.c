/*
 * XREFs of ?xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z @ 0x1C01B1194
 * Callers:
 *     ?xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z @ 0x1C01B102C (-xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z.c)
 *     xxxInjectTouchInput @ 0x1C01B19B4 (xxxInjectTouchInput.c)
 * Callees:
 *     CreateTouchInputBuffer @ 0x1C01B368C (CreateTouchInputBuffer.c)
 */

void __fastcall xxxSendToTouchStack(struct DEVICEINFO *a1, unsigned int a2, struct tagPOINTER_TOUCH_INFO *a3, ULONG a4)
{
  __int64 v4; // rax
  int v6; // r15d
  unsigned int v9; // edi
  ULONG v10; // eax
  __int64 v11; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // r10

  v4 = *((_QWORD *)a1 + 57);
  *((_DWORD *)a1 + 64) = 0;
  v6 = (int)a3;
  v9 = 0;
  for ( *((_QWORD *)a1 + 33) = *(unsigned __int16 *)(v4 + 44); v9 < a2; v9 += 4 )
  {
    v10 = a4;
    if ( v9 )
      v10 = 0;
    CreateTouchInputBuffer((int)a1, a2, v6, v9, v10);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
    if ( CurrentProcessWin32Process )
    {
      v13 = -*(_QWORD *)CurrentProcessWin32Process;
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    }
    v14 = *(_QWORD *)(*(_QWORD *)(CurrentProcessWin32Process + 880) + 88LL);
    v15 = PsGetCurrentProcessWin32Process(v13);
    v16 = v15;
    if ( v15 )
      v16 = -(__int64)(*(_QWORD *)v15 != 0LL) & v15;
    RIMInjectInput(
      v14,
      *(_QWORD *)(*(_QWORD *)(v16 + 880) + 96LL),
      0LL,
      *(_QWORD *)(*((_QWORD *)a1 + 57) + 24LL),
      *(unsigned __int16 *)(*((_QWORD *)a1 + 57) + 44LL));
  }
}
