/*
 * XREFs of ?PushZbidToWindow@WindowWrapperBase@@AEAAXW4ZBID@@@Z @ 0x180022E6C
 * Callers:
 *     ?SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x180024FC8 (-SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Window.c)
 *     ?SetWindowOwner@WindowWrapperBase@@UEAAJPEAUHWND__@@@Z @ 0x18034F9C0 (-SetWindowOwner@WindowWrapperBase@@UEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapperBase::PushZbidToWindow(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // rsi
  _QWORD *v6; // rax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 288) + 216LL))(*(_QWORD *)(a1 + 288));
  *(_DWORD *)(a1 + 516) = a2;
  v5 = *(int *)(a1 + 304);
  if ( *(_DWORD *)(a1 + 304) && a2 )
  {
    v6 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 288) + 152LL))(
                     *(_QWORD *)(a1 + 288),
                     &v7);
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)*v6 + 32LL))(*v6, v5, 0LL, a2);
    if ( v7 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return result;
}
