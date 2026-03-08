/*
 * XREFs of ?zzzImeCanDestroyDefIME@@YAHPEAUtagWND@@0@Z @ 0x1C00A0A28
 * Callers:
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 * Callees:
 *     ?ImeCheckTopmost@@YAXPEAUtagWND@@@Z @ 0x1C0026C08 (-ImeCheckTopmost@@YAXPEAUtagWND@@@Z.c)
 *     DwmAsyncOwnerChange @ 0x1C00280A4 (DwmAsyncOwnerChange.c)
 *     ?zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z @ 0x1C009EC08 (-zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z.c)
 *     unsafe_cast_fnid_or_class_to_PIMEWND @ 0x1C00A0B80 (unsafe_cast_fnid_or_class_to_PIMEWND.c)
 */

__int64 __fastcall zzzImeCanDestroyDefIME(struct tagWND *a1, struct tagWND *a2)
{
  ULONG64 *v4; // rax
  ULONG64 v5; // rdx
  struct tagWND **v7; // rsi
  struct tagWND *v8; // rax
  struct tagWND *i; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rbx
  void *v13; // rax

  v4 = (ULONG64 *)unsafe_cast_fnid_or_class_to_PIMEWND(a1);
  if ( !v4 )
    return 0LL;
  v5 = *v4;
  if ( !*v4 || v5 == -1LL )
    return 0LL;
  if ( v5 >= MmUserProbeAddress )
    v5 = MmUserProbeAddress;
  if ( (*(_DWORD *)(v5 + 44) & 4) != 0 )
    return 0LL;
  v7 = (struct tagWND **)((char *)a1 + 120);
  v8 = (struct tagWND *)*((_QWORD *)a1 + 15);
  if ( v8 )
  {
    while ( v8 != a2 )
    {
      if ( !v8 )
        return 0LL;
      v8 = (struct tagWND *)*((_QWORD *)v8 + 15);
    }
    if ( !v8 )
      return 0LL;
  }
  for ( i = a2; i; i = (struct tagWND *)*((_QWORD *)i + 15) )
  {
    v10 = *(_QWORD *)(*((_QWORD *)i + 17) + 8LL);
    if ( (*(_BYTE *)(v10 + 10) & 1) != 0 || *(_WORD *)v10 == *(_WORD *)(gpsi + 898LL) )
      return 0LL;
  }
  zzzImeSetFutureOwner(a1, a2);
  ImeCheckTopmost(a1);
  if ( *v7 && a2 != *v7 )
    return 0LL;
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 64LL) = 0LL;
  HMAssignmentUnlock((char *)a1 + 120);
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v12 = *(_QWORD *)a1;
    v13 = (void *)ReferenceDwmApiPort(v11);
    DwmAsyncOwnerChange(v13, v12, 0LL);
  }
  return 1LL;
}
