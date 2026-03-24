/*
 * XREFs of zzzImeCanDestroyDefIME @ 0x1C0033A18
 * Callers:
 *     xxxDestroyWindow @ 0x1C007DC00 (xxxDestroyWindow.c)
 * Callees:
 *     unsafe_cast_fnid_or_class_to_PIMEWND @ 0x1C0033B5C (unsafe_cast_fnid_or_class_to_PIMEWND.c)
 *     zzzImeSetFutureOwner @ 0x1C0033FA4 (zzzImeSetFutureOwner.c)
 *     ImeCheckTopmost @ 0x1C0035868 (ImeCheckTopmost.c)
 *     DwmAsyncOwnerChange @ 0x1C0035C74 (DwmAsyncOwnerChange.c)
 */

__int64 __fastcall zzzImeCanDestroyDefIME(__int64 a1, struct tagWND *a2)
{
  ULONG64 *v4; // rax
  ULONG64 v5; // rdx
  struct tagWND **v7; // rsi
  __int64 v8; // rax
  struct tagWND *i; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
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
  v7 = (struct tagWND **)(a1 + 120);
  v8 = *(_QWORD *)(a1 + 120);
  if ( v8 )
  {
    while ( (struct tagWND *)v8 != a2 )
    {
      if ( !v8 )
        return 0LL;
      v8 = *(_QWORD *)(v8 + 120);
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
  zzzImeSetFutureOwner((struct tagWND *)a1, a2);
  ImeCheckTopmost(a1);
  if ( *v7 && a2 != *v7 )
    return 0LL;
  *(_QWORD *)(*(_QWORD *)(a1 + 40) + 64LL) = 0LL;
  HMAssignmentUnlock(a1 + 120);
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v13 = (void *)ReferenceDwmApiPort(v12, v11);
    DwmAsyncOwnerChange(v13);
  }
  return 1LL;
}
