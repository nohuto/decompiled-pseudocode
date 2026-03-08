/*
 * XREFs of Crashdump_UcxEvtFreeDumpData @ 0x1C004D0A0
 * Callers:
 *     <none>
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x1C001E754 (CommonBuffer_ReleaseBuffer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     Crashdump_FreeDeviceContext @ 0x1C004C300 (Crashdump_FreeDeviceContext.c)
 */

ULONG __fastcall Crashdump_UcxEvtFreeDumpData(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned int i; // edi
  void *v7; // rcx
  _QWORD **v8; // rdi
  _QWORD *v9; // rdx
  _QWORD *v10; // rax

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UcxEvtFreeDumpData: Begin\n");
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0063428);
  v5 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( *(_QWORD *)(v4 + 424) == v5 )
    *(_QWORD *)(v4 + 424) = 0LL;
  if ( *(_QWORD *)(v5 + 568) )
  {
    for ( i = 0; i < *(_DWORD *)(v5 + 536); ++i )
      Crashdump_FreeDeviceContext(*(_QWORD *)(v5 + 568) + 376LL * i);
    ExFreePoolWithTag(*(PVOID *)(v5 + 568), 0x43434858u);
  }
  v7 = *(void **)(v5 + 176);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *(_QWORD *)(v5 + 176) = 0LL;
  }
  v8 = (_QWORD **)(v5 + 496);
  while ( 1 )
  {
    v9 = *v8;
    if ( *v8 == v8 )
      break;
    if ( (_QWORD **)v9[1] != v8 || (v10 = (_QWORD *)*v9, *(_QWORD **)(*v9 + 8LL) != v9) )
      __fastfail(3u);
    *v8 = v10;
    v10[1] = v8;
    CommonBuffer_ReleaseBuffer(*(_QWORD *)(v5 + 488), (__int64)v9);
  }
  ExFreePoolWithTag((PVOID)v5, 0x43434858u);
  return DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UcxEvtFreeDumpData: End\n");
}
