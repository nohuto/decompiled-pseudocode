/*
 * XREFs of ?SetHostHandle@DXGKEYEDMUTEX@@QEAAJII@Z @ 0x1C034C830
 * Callers:
 *     ?VmBusSendOpenKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I@Z @ 0x1C0387414 (-VmBusSendOpenKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00078B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::SetHostHandle(DXGKEYEDMUTEX *this, int a2, int a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rcx

  v6 = operator new[](0x18uLL, 0x4B677844u, 256LL);
  v7 = (_QWORD *)v6;
  if ( v6 )
  {
    *(_QWORD *)(v6 + 8) = 0LL;
    *(_QWORD *)v6 = 0LL;
    *(_DWORD *)(v6 + 16) = a2;
    *(_DWORD *)(v6 + 20) = a3;
    DXGFASTMUTEX::Acquire((DXGKEYEDMUTEX *)((char *)this + 112));
    v8 = (_QWORD *)((char *)this + 40);
    v9 = *((_QWORD *)this + 5);
    if ( *(DXGKEYEDMUTEX **)(v9 + 8) != (DXGKEYEDMUTEX *)((char *)this + 40) )
      __fastfail(3u);
    *v7 = v9;
    v7[1] = v8;
    *(_QWORD *)(v9 + 8) = v7;
    *v8 = v7;
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 14);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(6LL, 5845LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate DXG_HOST_HANDLE_MAP",
      5845LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
