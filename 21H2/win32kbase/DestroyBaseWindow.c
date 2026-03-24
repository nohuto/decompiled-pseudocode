/*
 * XREFs of DestroyBaseWindow @ 0x1C0138D20
 * Callers:
 *     <none>
 * Callees:
 *     HMDestroyObject @ 0x1C0007ED0 (HMDestroyObject.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     CleanupInputDelegation @ 0x1C0091270 (CleanupInputDelegation.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     ?DeleteMinWindowProperties@@YAXPEAUtagBWND@@@Z @ 0x1C0138BE8 (-DeleteMinWindowProperties@@YAXPEAUtagBWND@@@Z.c)
 *     ?UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019FC40 (-UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     HandleBaseWindowDestruction @ 0x1C01AE9B0 (HandleBaseWindowDestruction.c)
 */

__int64 __fastcall DestroyBaseWindow(_DWORD *a1)
{
  _QWORD **v2; // rsi
  _QWORD *v3; // rdi
  _QWORD *v4; // rax
  __int64 v5; // rcx

  if ( a1[18] )
    CleanupInputDelegation(a1);
  if ( qword_1C0258AD8 )
    qword_1C0258AD8(a1);
  DeleteMinWindowProperties((struct tagBWND *)a1);
  v2 = (_QWORD **)(a1 + 24);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)v3[1] != v2 || (v4 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v4;
    v4[1] = v2;
    CTouchProcessor::UnreferenceMsgDataExternal(gpTouchProcessor, v3[2], 7LL);
    Win32FreePool((__int64)v3);
  }
  v5 = *((_QWORD *)a1 + 15);
  if ( v5 )
  {
    Win32FreePool(v5);
    *((_QWORD *)a1 + 15) = 0LL;
  }
  HandleBaseWindowDestruction(a1);
  return HMDestroyObject(a1);
}
