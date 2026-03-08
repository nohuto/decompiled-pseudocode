/*
 * XREFs of MagContextThreadCallout @ 0x1C01A4070
 * Callers:
 *     xxxSetThreadDesktop @ 0x1C00361B8 (xxxSetThreadDesktop.c)
 *     MagContextDestroy @ 0x1C00F61E0 (MagContextDestroy.c)
 *     MagControl @ 0x1C01A42B4 (MagControl.c)
 * Callees:
 *     MagpFindThreadContext @ 0x1C0141978 (MagpFindThreadContext.c)
 *     ChangeComposableCursor @ 0x1C01AA1C4 (ChangeComposableCursor.c)
 *     DwmAsyncMagnDestroy @ 0x1C026F38C (DwmAsyncMagnDestroy.c)
 *     DwmAsyncMagnSetDesktopColorTransform @ 0x1C026F43C (DwmAsyncMagnSetDesktopColorTransform.c)
 *     DwmAsyncMagnSetDesktopTransform @ 0x1C026F6A8 (DwmAsyncMagnSetDesktopTransform.c)
 */

void __fastcall MagContextThreadCallout(_QWORD *a1, __int64 a2, _QWORD *a3, int a4)
{
  _QWORD *ThreadContext; // rdi
  _QWORD *v6; // r14
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  _QWORD *v9; // rcx
  int v10; // eax
  void *v11; // rax
  __int64 v12; // rax
  void *v13; // rax
  __int64 v14; // rax
  void *v15; // rax
  void *v16; // rcx
  void *v17; // rcx
  __int64 v18; // rcx
  _QWORD *v19; // rax

  ThreadContext = a3;
  if ( (a3 || (ThreadContext = MagpFindThreadContext(a1, a2)) != 0LL) && a4 == 1 )
  {
    v6 = (_QWORD *)ThreadContext[5];
    while ( v6 != ThreadContext + 5 )
    {
      v7 = (_QWORD *)*v6;
      v8 = v6;
      v6 = v7;
      v9 = (_QWORD *)v8[1];
      if ( (_QWORD *)v7[1] != v8 || (_QWORD *)*v9 != v8 )
        goto LABEL_28;
      *v9 = v7;
      v7[1] = v9;
      if ( v8[3] == -1LL )
      {
        v12 = *(_QWORD *)(ThreadContext[2] + 456LL);
        if ( *(_QWORD **)(v12 + 232) == v8 )
        {
          v13 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v12 + 8));
          DwmAsyncMagnSetDesktopColorTransform(v13);
          *(_QWORD *)(*(_QWORD *)(ThreadContext[2] + 456LL) + 232LL) = 0LL;
        }
        v14 = *(_QWORD *)(ThreadContext[2] + 456LL);
        if ( *(_QWORD **)(v14 + 224) == v8 )
        {
          v15 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v14 + 8));
          DwmAsyncMagnSetDesktopTransform(v15, 0);
          *(_QWORD *)(*(_QWORD *)(ThreadContext[2] + 456LL) + 224LL) = 0LL;
        }
      }
      else
      {
        v10 = *((_DWORD *)v8 + 4);
        if ( (v10 & 0x40) != 0 )
        {
          ChangeComposableCursor(0LL);
          *((_DWORD *)v8 + 4) &= ~0x40u;
          v10 = *((_DWORD *)v8 + 4);
        }
        if ( (v10 & 0x20) == 0 )
        {
          v11 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(ThreadContext[2] + 456LL) + 8LL));
          DwmAsyncMagnDestroy(v11);
        }
        if ( v8[3] )
          HMAssignmentUnlock(v8 + 3);
      }
      v16 = (void *)v8[29];
      if ( v16 )
        Win32FreePool(v16);
      v17 = (void *)v8[32];
      if ( v17 )
        Win32FreePool(v17);
      Win32FreePool(v8);
    }
    v18 = *ThreadContext;
    if ( *(_QWORD **)(*ThreadContext + 8LL) != ThreadContext
      || (v19 = (_QWORD *)ThreadContext[1], (_QWORD *)*v19 != ThreadContext) )
    {
LABEL_28:
      __fastfail(3u);
    }
    *v19 = v18;
    *(_QWORD *)(v18 + 8) = v19;
    Win32FreePool(ThreadContext);
    *(_DWORD *)(a2 + 1272) &= ~8u;
  }
}
