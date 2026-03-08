/*
 * XREFs of ?TlgAggregateInternalRegisteredProviderEtwCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C00C34B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     LookUpTableFlushComplete @ 0x1C00C34FC (LookUpTableFlushComplete.c)
 *     LookUpTableFlushPartial @ 0x1C010A7BC (LookUpTableFlushPartial.c)
 */

void __fastcall TlgAggregateInternalRegisteredProviderEtwCallback(
        const struct _GUID *a1,
        __int64 a2,
        char a3,
        __int64 a4,
        unsigned __int64 a5,
        struct _EVENT_FILTER_DESCRIPTOR *a6,
        _QWORD *a7)
{
  int v8; // edi
  void (__fastcall *v9)(const struct _GUID *, __int64, unsigned __int64); // rax

  v8 = a2;
  v9 = (void (__fastcall *)(const struct _GUID *, __int64, unsigned __int64))a7[41];
  if ( v9 )
  {
    LOBYTE(a5) = a3;
    v9(a1, a2, a5);
  }
  if ( v8 == 1 )
  {
    LookUpTableFlushComplete(a7);
  }
  else if ( v8 == 2 )
  {
    LookUpTableFlushPartial(a7);
  }
}
