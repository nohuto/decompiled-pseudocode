/*
 * XREFs of ?HampSessionDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18003BEC0
 * Callers:
 *     <none>
 * Callees:
 *     CemRcObjectCleanup @ 0x180034B80 (CemRcObjectCleanup.c)
 *     _guard_dispatch_icall_nop @ 0x180047B60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HampSessionDestroy(struct _CEM_RC_OBJECT *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi

  v1 = *((_QWORD *)a1 + 14);
  if ( v1 )
  {
    v3 = *((_QWORD *)a1 + 15);
    if ( v3 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v1 + 160LL))(*((_QWORD *)a1 + 14), *((unsigned int *)a1 + 32));
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      *((_QWORD *)a1 + 15) = 0LL;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    *((_QWORD *)a1 + 14) = 0LL;
  }
  CemRcObjectCleanup(a1);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
