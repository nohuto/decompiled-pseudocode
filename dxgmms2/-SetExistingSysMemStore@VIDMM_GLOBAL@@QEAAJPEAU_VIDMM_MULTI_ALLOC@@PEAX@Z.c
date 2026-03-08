/*
 * XREFs of ?SetExistingSysMemStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@PEAX@Z @ 0x1C00E78C4
 * Callers:
 *     VidMmSetExistingSysMemStore @ 0x1C002D4B0 (VidMmSetExistingSysMemStore.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002124 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B90 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VIDMM_GLOBAL::SetExistingSysMemStore(
        VIDMM_GLOBAL *this,
        struct _KTHREAD ****a2,
        struct _KTHREAD *a3)
{
  struct _KTHREAD **v5; // rsi
  __int64 v6; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rcx

  v5 = **a2;
  if ( ((_DWORD)v5[9] & 0x8000) != 0 )
  {
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v5 + 37));
    v8 = 0;
    if ( *((_DWORD *)v5 + 146) )
    {
      WdLogSingleEntry1(1LL, 2513LL);
      DxgkLogInternalTriageEvent(v9, 0x40000LL);
      v8 = -1073741811;
    }
    else
    {
      (**a2)[72] = a3;
    }
    DXGFASTMUTEX::Release(v5 + 37);
    return v8;
  }
  else
  {
    WdLogSingleEntry1(1LL, a2);
    DxgkLogInternalTriageEvent(v6, 0x40000LL);
    return 3221225485LL;
  }
}
