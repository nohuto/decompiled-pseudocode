/*
 * XREFs of xxxShowScrollBar @ 0x1C0231FE0
 * Callers:
 *     NtUserShowScrollBar @ 0x1C01DEBD0 (NtUserShowScrollBar.c)
 * Callees:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C002678C (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     xxxSetWindowPos @ 0x1C0028898 (xxxSetWindowPos.c)
 *     _InitPwSB @ 0x1C00C7998 (_InitPwSB.c)
 *     Feature_Backport_ScrollbarApiCallsOnServerWindows__private_IsEnabledDeviceUsage @ 0x1C013CAD8 (Feature_Backport_ScrollbarApiCallsOnServerWindows__private_IsEnabledDeviceUsage.c)
 *     GetScrollbarCodeString @ 0x1C013DB84 (GetScrollbarCodeString.c)
 *     WPP_RECORDER_AND_TRACE_SF_qslsl @ 0x1C013DBCC (WPP_RECORDER_AND_TRACE_SF_qslsl.c)
 *     GetFnidString @ 0x1C013DE70 (GetFnidString.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall xxxShowScrollBar(struct tagWND *a1, int a2, int a3)
{
  int v3; // ebx
  int v5; // r15d
  int v6; // edi
  PDEVICE_OBJECT v9; // rbp
  char v10; // dl
  const char *ScrollbarCodeString; // rax
  char v12; // dl
  char v13; // r8
  const char *v14; // r11
  int v15; // esi
  int v16; // esi
  __int64 v17; // rdx
  int v18; // ecx
  int v20; // [rsp+20h] [rbp-78h]
  int v21; // [rsp+28h] [rbp-70h]
  int v22; // [rsp+30h] [rbp-68h]
  int v23; // [rsp+38h] [rbp-60h]

  v3 = 0;
  v5 = 0;
  v6 = 0;
  if ( (unsigned int)Feature_Backport_ScrollbarApiCallsOnServerWindows__private_IsEnabledDeviceUsage() )
  {
    v9 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (v10 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v10 = 0;
    }
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      GetFnidString((__int64)a1);
      ScrollbarCodeString = GetScrollbarCodeString(a2);
      WPP_RECORDER_AND_TRACE_SF_qslsl(
        (__int64)v9->AttachedDevice,
        v12,
        v13,
        (__int64)gFullLog,
        v20,
        v21,
        v22,
        v23,
        *(_QWORD *)a1,
        v14,
        (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 0x20) != 0,
        (__int64)ScrollbarCodeString);
    }
    if ( a2 == 2 )
      goto LABEL_17;
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 0x20) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTellMeIf", 0x20000, 56);
  }
  if ( a2 )
  {
    v15 = a2 - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        if ( v16 == 1 )
          v6 = 3145728;
        goto LABEL_20;
      }
LABEL_17:
      LOBYTE(v3) = a3 != 0;
      xxxShowWindowEx((ULONG_PTR)a1, a3 != 0, gdwPUDFlags & 0x10000 | v3 & 0x10000);
      return 1LL;
    }
    v6 = 0x200000;
  }
  else
  {
    v6 = 0x100000;
  }
LABEL_20:
  v17 = *((_QWORD *)a1 + 5);
  v18 = *(_DWORD *)(v17 + 28);
  if ( a3 )
  {
    if ( (v6 & v18) != v6 )
    {
      v5 = 1;
      *(_DWORD *)(v17 + 28) = v6 | v18;
    }
    if ( !*((_QWORD *)a1 + 19) )
      InitPwSB((__int64)a1);
  }
  else
  {
    if ( (v18 & v6) == 0 )
      return 1LL;
    v5 = 1;
    *(_DWORD *)(v17 + 28) = v18 & ~v6;
  }
  if ( v5 )
    xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
  return 1LL;
}
