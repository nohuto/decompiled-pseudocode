__int64 __fastcall PostMousePointerLeaveAndCleanup(__int64 a1, struct tagWND *a2)
{
  __int64 *v2; // rdi
  __int64 v5; // rdi
  __int64 MiPWindowFlags; // rax
  __int64 v7; // r9

  v2 = (__int64 *)((char *)a2 + 16);
  if ( !a2 )
    v2 = (__int64 *)gptiCurrent;
  v5 = *v2;
  if ( !*(_QWORD *)(v5 + 1352) || (GetMiPWindowFlags(a2) & 1) != 0 )
    return 1LL;
  MiPWindowFlags = GetMiPWindowFlags(a2);
  SetMiPWindowFlags(a2, MiPWindowFlags | 1);
  if ( !a1 || v5 != *(_QWORD *)(a1 + 16) )
  {
    **(_DWORD **)(v5 + 1352) &= ~4u;
    **(_DWORD **)(v5 + 1352) &= ~0x10u;
    **(_DWORD **)(v5 + 1352) &= ~2u;
    **(_DWORD **)(v5 + 1352) &= ~8u;
  }
  if ( (**(_DWORD **)(v5 + 1352) & 1) != 0 )
  {
    if ( a2 )
    {
      if ( IsMiPEnabledForWindow((__int64)a2) )
        PostTransformableMessage(
          (unsigned __int64)a2,
          0x24Au,
          ((unsigned __int64)(*(_WORD *)(v7 + 36) & 0xE1F7) << 16) | 1,
          0LL,
          0);
LABEL_13:
      if ( *(_QWORD *)a2 != *(_QWORD *)(*(_QWORD *)(v5 + 432) + 440LL) )
      {
LABEL_15:
        StopMiPIdleNotificationTimer(a2);
        return 1LL;
      }
    }
  }
  else if ( a2 )
  {
    goto LABEL_13;
  }
  *(_QWORD *)(*(_QWORD *)(v5 + 432) + 440LL) = 0LL;
  if ( a2 )
    goto LABEL_15;
  return 1LL;
}
