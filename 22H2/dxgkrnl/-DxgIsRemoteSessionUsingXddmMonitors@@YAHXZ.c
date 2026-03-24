/*
 * XREFs of ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1C0284EFC
 * Callers:
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C014DA60 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 *     DxgkGetScanLine @ 0x1C016F3E0 (DxgkGetScanLine.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgIsRemoteSessionUsingXddmMonitors(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct DXGPROCESS *Current; // rax
  unsigned int v5; // ebx
  __int64 v6; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF

  Current = DXGPROCESS::GetCurrent(a1, a2, a3, a4);
  v5 = 0;
  if ( !Current )
    return 0LL;
  v6 = *((_QWORD *)Current + 11);
  if ( !v6 )
    return 0LL;
  v8 = 0;
  if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, int *))(v6 + 224))(0LL, 0LL, &v8) )
    return v8 == 0;
  return v5;
}
