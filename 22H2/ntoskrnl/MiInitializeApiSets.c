/*
 * XREFs of MiInitializeApiSets @ 0x140A54650
 * Callers:
 *     MiInitSystem @ 0x140A53E5C (MiInitSystem.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     MmMapViewInSystemSpace @ 0x1406A2470 (MmMapViewInSystemSpace.c)
 *     MmCreateSection @ 0x140701F50 (MmCreateSection.c)
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
  ViewSize = *(unsigned int *)(v1 + 2696);
  result = MmCreateSection((int)&Section, 983071LL, 0, &ViewSize, 4, 0x8000000, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v4 = Section;
    ViewSize = 0LL;
    v5 = MmMapViewInSystemSpace(Section, &MappedBase, &ViewSize);
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
        *(const void **)(*(_QWORD *)(a1 + 240) + 2688LL),
        *(unsigned int *)(*(_QWORD *)(a1 + 240) + 2696LL));
      qword_140C4CBF8 = (__int64)v4;
      qword_140C4CC00 = (__int64)v6;
      result = 0LL;
      qword_140C4CC08 = *(unsigned int *)(*(_QWORD *)(a1 + 240) + 2696LL);
    }
  }
  return result;
}
