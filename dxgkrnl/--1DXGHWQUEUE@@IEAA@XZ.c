/*
 * XREFs of ??1DXGHWQUEUE@@IEAA@XZ @ 0x1C03119C8
 * Callers:
 *     ??_GDXGHWQUEUE@@IEAAPEAXI@Z @ 0x1C005194C (--_GDXGHWQUEUE@@IEAAPEAXI@Z.c)
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C0009B30 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000A070 (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C0047790 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 */

void __fastcall DXGHWQUEUE::~DXGHWQUEUE(DXGHWQUEUE *this)
{
  void *v2; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  DXGDEVICESYNCOBJECT *v4; // rcx
  DXGDEVICESYNCOBJECT *v5; // rcx
  DXGDEVICESYNCOBJECT *v6; // rcx
  unsigned int v7; // edx
  ULONG_PTR NumberOfBytes; // [rsp+60h] [rbp+8h] BYREF
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF

  if ( !*((_BYTE *)this + 112) )
  {
    WdLogSingleEntry1(1LL, 32LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"_DestroyedCoreState", 32LL, 0LL, 0LL, 0LL, 0LL);
  }
  v2 = (void *)*((_QWORD *)this + 15);
  if ( v2 )
  {
    NumberOfBytes = 4096LL;
    MmRotatePhysicalView(v2, &NumberOfBytes, 0LL, MmToRegularMemoryNoCopy, 0LL, 0LL);
    v9 = 4096LL;
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    (*((void (__fastcall **)(__int64, char *, __int64 *, __int64))VirtualMemoryInterface + 2))(
      -1LL,
      (char *)this + 120,
      &v9,
      0x8000LL);
  }
  v4 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 9);
  if ( v4 )
    DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v4);
  v5 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 11);
  if ( v5 )
    DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v5);
  v6 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 6);
  if ( v6 )
    DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v6);
  v7 = *((_DWORD *)this + 6);
  if ( v7 )
    DXGPROCESS::FreeHandleSafe(*(DXGPROCESS **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 40LL), v7);
  *((_QWORD *)this + 2) = 0LL;
}
