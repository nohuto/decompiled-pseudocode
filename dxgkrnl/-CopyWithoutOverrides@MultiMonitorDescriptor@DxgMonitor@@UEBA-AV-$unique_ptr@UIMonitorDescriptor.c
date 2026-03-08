/*
 * XREFs of ?CopyWithoutOverrides@MultiMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x1C006C380
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall DxgMonitor::MultiMonitorDescriptor::CopyWithoutOverrides(__int64 a1, _QWORD *a2)
{
  char v2; // bl
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  void (__fastcall ***v10)(_QWORD, __int64); // rcx
  void (__fastcall ***v11)(_QWORD, __int64); // rcx
  void (__fastcall ***v13)(_QWORD, __int64); // [rsp+48h] [rbp+10h] BYREF
  void (__fastcall ***v14)(_QWORD, __int64); // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  LODWORD(v13) = 0;
  v5 = (_QWORD *)operator new[](0x28uLL, 0x4D677844u, 256LL);
  if ( v5 )
  {
    v6 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(a1 + 16) + 24LL))(
                     *(_QWORD *)(a1 + 16),
                     &v14);
    v7 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(a1 + 8) + 24LL))(
                     *(_QWORD *)(a1 + 8),
                     &v13);
    *v5 = &DxgMonitor::MultiMonitorDescriptor::`vftable';
    v5[1] = *v7;
    v5[2] = *v6;
    v8 = *v7;
    *v7 = 0LL;
    v5[3] = v8;
    v9 = *v6;
    *v6 = 0LL;
    v2 = 3;
    v5[4] = v9;
  }
  else
  {
    v5 = 0LL;
  }
  *a2 = v5;
  if ( (v2 & 2) != 0 )
  {
    v10 = v13;
    v2 &= ~2u;
    v13 = 0LL;
    if ( v10 )
      (**v10)(v10, 1LL);
  }
  if ( (v2 & 1) != 0 )
  {
    v11 = v14;
    v14 = 0LL;
    if ( v11 )
      (**v11)(v11, 1LL);
  }
  return a2;
}
