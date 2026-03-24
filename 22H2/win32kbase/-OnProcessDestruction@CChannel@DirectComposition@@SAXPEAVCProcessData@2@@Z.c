/*
 * XREFs of ?OnProcessDestruction@CChannel@DirectComposition@@SAXPEAVCProcessData@2@@Z @ 0x1C005C550
 * Callers:
 *     ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x1C005C4E4 (--_GCProcessData@DirectComposition@@AEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CChannel::OnProcessDestruction(struct DirectComposition::CProcessData *a1)
{
  struct _RTL_GENERIC_TABLE *v2; // rsi
  _QWORD *v3; // rax
  struct _ERESOURCE *v4; // rcx
  __int64 v5; // rdi
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_QWORD *)a1 )
  {
    while ( 1 )
    {
      v2 = *(struct _RTL_GENERIC_TABLE **)a1;
      RestartKey = 0LL;
      v3 = RtlEnumerateGenericTableWithoutSplaying(v2, &RestartKey);
      if ( !v3 )
        break;
      v5 = v3[1];
      RtlDeleteElementGenericTable(v2, v3);
      if ( !v5 )
        break;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
    }
    Win32FreePool(*(_QWORD *)a1);
  }
  v4 = (struct _ERESOURCE *)*((_QWORD *)a1 + 1);
  if ( v4 )
  {
    ExDeleteResourceLite(v4);
    Win32FreePool(*((_QWORD *)a1 + 1));
  }
}
