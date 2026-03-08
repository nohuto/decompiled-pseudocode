/*
 * XREFs of ?VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1C003E2AC
 * Callers:
 *     _ChangeWindowMessageFilterEx @ 0x1C00CB9E8 (_ChangeWindowMessageFilterEx.c)
 *     _DeregisterShellHookWindow @ 0x1C00EFC04 (_DeregisterShellHookWindow.c)
 *     FreeWindowMessageFilter @ 0x1C012EDC4 (FreeWindowMessageFilter.c)
 *     FreeWindowGCData @ 0x1C012EFE8 (FreeWindowGCData.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003E858 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 */

__int64 __fastcall VWPLRemoveBase(struct tagVWPL **a1, __int64 a2, struct tagWND *a3, __int64 a4, unsigned __int64 *a5)
{
  unsigned int *v5; // rbx
  struct tagWND *v6; // rsi
  bool v8; // dl
  unsigned int v10; // ecx
  unsigned int v11; // r8d
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax

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
      (_DWORD)gFullLog,
      4,
      11,
      16,
      (__int64)&WPP_6b46edcb4cb83e3ea91889dc4f8cc94b_Traceguids,
      (char)v5,
      (char)v6);
  }
  if ( !v5 )
    return 0LL;
  if ( v5[3] )
    return 0LL;
  v10 = *v5;
  v11 = 0;
  if ( !*v5 )
    return 0LL;
  do
  {
    if ( v6 == *(struct tagWND **)&v5[4 * v11 + 6] )
      break;
    ++v11;
  }
  while ( v11 < v10 );
  if ( v11 >= v10 )
    return 0LL;
  v12 = 2LL * v11;
  v13 = *(_QWORD *)&v5[4 * v11 + 4];
  *(_QWORD *)&v5[2 * v12 + 4] = 0LL;
  *(_QWORD *)&v5[2 * v12 + 6] = 0LL;
  --*v5;
  if ( a5 )
    *a5 = v13;
  v14 = *v5;
  if ( *v5 )
  {
    if ( v11 < v14 )
    {
      do
      {
        v15 = 2 * (v11 + 1LL);
        v16 = 2 * (++v11 + 1LL);
        *(_OWORD *)&v5[2 * v15] = *(_OWORD *)&v5[2 * v16];
        v14 = *v5;
      }
      while ( v11 < *v5 );
    }
    *(_QWORD *)&v5[4 * v14 + 6] = 0LL;
    if ( v5[1] - *v5 >= v5[2] )
    {
      v17 = UserReAllocPool(v5, 16 * (v5[1] + 1), 16 * (*v5 + 1), 1819702101LL);
      if ( v17 )
      {
        *(_DWORD *)(v17 + 4) = *(_DWORD *)v17;
        *a1 = (struct tagVWPL *)v17;
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
