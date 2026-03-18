/*
 * XREFs of ?VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1C00786B0
 * Callers:
 *     ClearHungFlag @ 0x1C005F8F0 (ClearHungFlag.c)
 *     FreeWindowGCData @ 0x1C005FC00 (FreeWindowGCData.c)
 *     FreeWindowMessageFilter @ 0x1C005FCD0 (FreeWindowMessageFilter.c)
 *     _ChangeWindowMessageFilterEx @ 0x1C00A70D8 (_ChangeWindowMessageFilterEx.c)
 *     _DeregisterShellHookWindow @ 0x1C011B194 (_DeregisterShellHookWindow.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C0078850 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 */

__int64 __fastcall VWPLRemoveBase(struct tagVWPL **a1, __int64 a2, struct tagWND *a3, __int64 a4, unsigned __int64 *a5)
{
  unsigned int *v5; // rbx
  struct tagWND *v6; // rsi
  bool v8; // dl
  unsigned int v9; // r8d
  __int64 v11; // rax
  unsigned __int64 v12; // r9
  unsigned int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax

  v5 = (unsigned int *)*a1;
  v6 = a3;
  v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qq(
      WPP_GLOBAL_Control->AttachedDevice,
      v8,
      (_DWORD)a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      11,
      15,
      (__int64)&WPP_638f61f5370132f305bd20c35bb3250c_Traceguids,
      (char)v5,
      v6);
  }
  if ( !v5 )
    return 0LL;
  if ( v5[3] )
    return 0LL;
  v9 = 0;
  if ( !*v5 )
    return 0LL;
  while ( v6 != *(struct tagWND **)&v5[4 * v9 + 6] )
  {
    if ( ++v9 >= *v5 )
      return 0LL;
  }
  v11 = 2LL * v9;
  *(_QWORD *)&v5[2 * v11 + 6] = 0LL;
  v12 = *(_QWORD *)&v5[4 * v9 + 4];
  *(_QWORD *)&v5[2 * v11 + 4] = 0LL;
  v13 = --*v5;
  if ( a5 )
  {
    *a5 = v12;
    v13 = *v5;
  }
  if ( v13 )
  {
    if ( v9 < v13 )
    {
      do
      {
        v14 = 2 * (v9 + 1LL);
        v15 = 2 * (++v9 + 1LL);
        *(_OWORD *)&v5[2 * v14] = *(_OWORD *)&v5[2 * v15];
        v13 = *v5;
      }
      while ( v9 < *v5 );
    }
    *(_QWORD *)&v5[4 * v13 + 6] = 0LL;
    if ( v5[1] - *v5 >= v5[2] )
    {
      v16 = UserReAllocPool(v5, 16 * (v5[1] + 1), 16 * (*v5 + 1), 1819702101LL);
      if ( v16 )
      {
        *(_DWORD *)(v16 + 4) = *(_DWORD *)v16;
        *a1 = (struct tagVWPL *)v16;
      }
    }
  }
  else
  {
    Win32FreePool(v5);
    *a1 = 0LL;
  }
  return 1LL;
}
