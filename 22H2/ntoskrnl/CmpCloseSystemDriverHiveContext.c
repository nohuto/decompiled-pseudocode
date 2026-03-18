/*
 * XREFs of CmpCloseSystemDriverHiveContext @ 0x140B76504
 * Callers:
 *     CmGetSystemDriverList @ 0x140B41BA0 (CmGetSystemDriverList.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     RtlFreeUnicodeString @ 0x14076F8E0 (RtlFreeUnicodeString.c)
 */

void __fastcall CmpCloseSystemDriverHiveContext(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = -1;
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 16));
  v2 = *(void **)(a1 + 40);
  if ( v2 )
  {
    ObfDereferenceObjectWithTag(v2, 0x746C6644u);
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  v3 = *(void **)(a1 + 32);
  if ( v3 )
  {
    ZwClose(v3);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
}
