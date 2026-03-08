/*
 * XREFs of ViThunkCreateThunkTable @ 0x140AD8784
 * Callers:
 *     VfThunkAddDriverThunks @ 0x140AD7F7C (VfThunkAddDriverThunks.c)
 *     VfThunkAddSpecialDriverThunks @ 0x140AD8020 (VfThunkAddSpecialDriverThunks.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall ViThunkCreateThunkTable(void *Src, unsigned int a2, __int64 a3)
{
  unsigned int v5; // edi
  unsigned int v6; // esi
  __int64 result; // rax
  __int64 v8; // rbx

  v5 = a2 >> 4;
  v6 = 16 * (a2 >> 4);
  result = ExAllocatePool2(256LL, v6 + 32, 0x74566D4Du);
  v8 = result;
  if ( result )
  {
    memmove((void *)(result + 32), Src, v6);
    result = v8;
    *(_QWORD *)(v8 + 16) = a3;
    *(_DWORD *)(v8 + 24) = v5;
  }
  return result;
}
