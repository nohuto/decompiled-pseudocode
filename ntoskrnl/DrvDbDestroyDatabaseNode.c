/*
 * XREFs of DrvDbDestroyDatabaseNode @ 0x140A6ACC0
 * Callers:
 *     DrvDbOpenDriverDatabaseRegKey @ 0x1407FF984 (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbOpenContext @ 0x14081D690 (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x14081DF10 (DrvDbCreateDatabaseNode.c)
 *     DrvDbDispatchDriverDatabase @ 0x140864BE0 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbUnregisterDatabase @ 0x140A6AC64 (DrvDbUnregisterDatabase.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x140336580 (ExDeleteResourceLite.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     DrvDbUnloadDatabaseNode @ 0x140865E78 (DrvDbUnloadDatabaseNode.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DrvDbDestroyDatabaseNode(__int64 a1, void *a2)
{
  int v4; // esi
  void **v5; // rdx
  void **v6; // rax
  void *v7; // rax
  void *v8; // rdi

  v4 = DrvDbUnloadDatabaseNode(a1, (__int64)a2);
  if ( v4 >= 0 )
  {
    v5 = *(void ***)a2;
    if ( *(_QWORD *)a2 )
    {
      if ( v5[1] != a2 || (v6 = (void **)*((_QWORD *)a2 + 1), *v6 != a2) )
        __fastfail(3u);
      *v6 = v5;
      v5[1] = v6;
    }
    v7 = *(void **)(a1 + 32);
    if ( v7 == a2 )
    {
      *(_QWORD *)(a1 + 32) = 0LL;
      v7 = 0LL;
    }
    if ( *(void **)(a1 + 40) == a2 )
      *(_QWORD *)(a1 + 40) = v7;
    v8 = (void *)*((_QWORD *)a2 + 19);
    if ( v8 )
    {
      ExDeleteResourceLite(*((PERESOURCE *)a2 + 19));
      ExFreePoolWithTag(v8, 0);
    }
    RtlFreeUnicodeString((PUNICODE_STRING)a2 + 1);
    RtlFreeUnicodeString((PUNICODE_STRING)a2 + 3);
    ExFreePoolWithTag(a2, 0);
  }
  return (unsigned int)v4;
}
