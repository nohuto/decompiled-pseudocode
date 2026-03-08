/*
 * XREFs of MiInitializeApiSets @ 0x140B3A510
 * Callers:
 *     MiInitSystem @ 0x140B39508 (MiInitSystem.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     MmCreateSection @ 0x140711DC0 (MmCreateSection.c)
 *     MmMapViewInSessionSpace @ 0x14078FC80 (MmMapViewInSessionSpace.c)
 */

__int64 __fastcall MiInitializeApiSets(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  PVOID v4; // rdi
  NTSTATUS v5; // ebx
  PVOID v6; // rbx
  PVOID Section; // [rsp+60h] [rbp+8h] BYREF
  PVOID MappedBase; // [rsp+68h] [rbp+10h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp+18h] BYREF

  v1 = *(_QWORD *)(a1 + 240);
  MappedBase = 0LL;
  Section = 0LL;
  ViewSize = *(unsigned int *)(v1 + 2728);
  result = MmCreateSection((int)&Section, 983071LL, 0, &ViewSize, 4, 0x8000000, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v4 = Section;
    ViewSize = 0LL;
    v5 = MmMapViewInSessionSpace(Section, &MappedBase, &ViewSize);
    if ( v5 < 0 )
    {
      ObfDereferenceObjectWithTag(v4, 0x746C6644u);
      return (unsigned int)v5;
    }
    else
    {
      v6 = MappedBase;
      memmove(
        MappedBase,
        *(const void **)(*(_QWORD *)(a1 + 240) + 2720LL),
        *(unsigned int *)(*(_QWORD *)(a1 + 240) + 2728LL));
      qword_140C65470 = (__int64)v4;
      qword_140C65478 = (__int64)v6;
      result = 0LL;
      qword_140C65480 = *(unsigned int *)(*(_QWORD *)(a1 + 240) + 2728LL);
    }
  }
  return result;
}
