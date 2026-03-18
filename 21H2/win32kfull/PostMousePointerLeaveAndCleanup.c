/*
 * XREFs of PostMousePointerLeaveAndCleanup @ 0x1C01DCEB0
 * Callers:
 *     xxxProcessEventMessage @ 0x1C005C220 (xxxProcessEventMessage.c)
 * Callees:
 *     _PostTransformableMessage @ 0x1C00A755C (_PostTransformableMessage.c)
 *     ?GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z @ 0x1C01DBC6C (-GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z.c)
 *     ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x1C01DC4F4 (-SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z.c)
 *     ?StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C01DC55C (-StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     IsMiPEnabledForWindow @ 0x1C01DCDE0 (IsMiPEnabledForWindow.c)
 */

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
  if ( !*(_QWORD *)(v5 + 1312) || (GetMiPWindowFlags(a2) & 1) != 0 )
    return 1LL;
  MiPWindowFlags = GetMiPWindowFlags(a2);
  SetMiPWindowFlags(a2, MiPWindowFlags | 1);
  if ( !a1 || v5 != *(_QWORD *)(a1 + 16) )
  {
    **(_DWORD **)(v5 + 1312) &= ~4u;
    **(_DWORD **)(v5 + 1312) &= ~0x10u;
    **(_DWORD **)(v5 + 1312) &= ~2u;
    **(_DWORD **)(v5 + 1312) &= ~8u;
  }
  if ( (**(_DWORD **)(v5 + 1312) & 1) != 0 )
  {
    if ( a2 )
    {
      if ( IsMiPEnabledForWindow((__int64)a2) )
        PostTransformableMessage(a2, 0x24Au, ((unsigned __int64)(*(_WORD *)(v7 + 36) & 0xE1F7) << 16) | 1, 0LL, 0);
LABEL_13:
      if ( *(_QWORD *)a2 != *(_QWORD *)(*(_QWORD *)(v5 + 432) + 432LL) )
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
  *(_QWORD *)(*(_QWORD *)(v5 + 432) + 432LL) = 0LL;
  if ( a2 )
    goto LABEL_15;
  return 1LL;
}
