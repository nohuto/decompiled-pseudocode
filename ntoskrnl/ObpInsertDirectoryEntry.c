/*
 * XREFs of ObpInsertDirectoryEntry @ 0x14076F04C
 * Callers:
 *     ObpLookupObjectName @ 0x1406E86B0 (ObpLookupObjectName.c)
 *     ObCreateObjectTypeEx @ 0x14080CB20 (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x140B403CC (ObInitSystem.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

char __fastcall ObpInsertDirectoryEntry(char *Object, char *a2, __int64 a3)
{
  __int64 Pool2; // rax
  __int64 v7; // rbx
  char *v8; // rcx

  Pool2 = ExAllocatePool2(256LL, 24LL, 1766089295LL);
  v7 = Pool2;
  if ( Pool2 )
  {
    ObfReferenceObjectWithTag(a2, 0x6944624Fu);
    v8 = &Object[8 * *(unsigned __int8 *)(a3 + 20)];
    *(_DWORD *)(v7 + 16) = *(_DWORD *)(a3 + 16);
    *(_QWORD *)v7 = *(_QWORD *)v8;
    *(_QWORD *)v8 = v7;
    *(_QWORD *)(v7 + 8) = a2;
    *(_QWORD *)(a3 + 8) = v8;
    ObfReferenceObjectWithTag(Object, 0x6944624Fu);
    LOBYTE(Pool2) = 1;
    *(_QWORD *)&a2[-ObpInfoMaskToOffset[*(a2 - 22) & 3] - 48] = Object;
  }
  return Pool2;
}
