/*
 * XREFs of PostMousePointerLeaveAndCleanup @ 0x1C01B6970
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0125270 (xxxProcessEventMessage.c)
 * Callees:
 *     _PostTransformableMessage @ 0x1C004F59C (_PostTransformableMessage.c)
 *     ?GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z @ 0x1C01503FA (-GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z.c)
 *     ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x1C01509EA (-SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z.c)
 *     IsMiPEnabledForWindow @ 0x1C0150E7A (IsMiPEnabledForWindow.c)
 *     ?StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C01B5C2C (-StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall PostMousePointerLeaveAndCleanup(__int64 a1, struct tagWND *a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 MiPWindowFlags; // rax
  __int64 v12; // r9

  v4 = (__int64 *)((char *)a2 + 16);
  if ( !a2 )
    v4 = (__int64 *)gptiCurrent;
  v7 = *v4;
  if ( !*(_QWORD *)(v7 + 1352) || (GetMiPWindowFlags(a2, (__int64)a2, a3, a4) & 1) != 0 )
    return 1LL;
  MiPWindowFlags = GetMiPWindowFlags(a2, v8, v9, v10);
  SetMiPWindowFlags(a2, MiPWindowFlags | 1);
  if ( !a1 || v7 != *(_QWORD *)(a1 + 16) )
  {
    **(_DWORD **)(v7 + 1352) &= ~4u;
    **(_DWORD **)(v7 + 1352) &= ~0x10u;
    **(_DWORD **)(v7 + 1352) &= ~2u;
    **(_DWORD **)(v7 + 1352) &= ~8u;
  }
  if ( (**(_DWORD **)(v7 + 1352) & 1) != 0 )
  {
    if ( a2 )
    {
      if ( IsMiPEnabledForWindow((__int64)a2) )
        PostTransformableMessage(a2, 0x24Au, ((unsigned __int64)(*(_WORD *)(v12 + 36) & 0xE1F7) << 16) | 1, 0LL, 0);
LABEL_13:
      if ( *(_QWORD *)a2 != *(_QWORD *)(*(_QWORD *)(v7 + 432) + 440LL) )
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
  *(_QWORD *)(*(_QWORD *)(v7 + 432) + 440LL) = 0LL;
  if ( a2 )
    goto LABEL_15;
  return 1LL;
}
