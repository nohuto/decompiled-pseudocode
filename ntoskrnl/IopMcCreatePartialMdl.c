/*
 * XREFs of IopMcCreatePartialMdl @ 0x14094E75C
 * Callers:
 *     IopMcGetBuffer @ 0x14094E810 (IopMcGetBuffer.c)
 * Callees:
 *     IopAllocateMdl @ 0x140241F90 (IopAllocateMdl.c)
 *     IoBuildPartialMdl @ 0x1402B7A60 (IoBuildPartialMdl.c)
 */

struct _MDL *__fastcall IopMcCreatePartialMdl(__int64 a1, void *a2, unsigned int a3, __int64 a4)
{
  struct _MDL *Mdl; // rax
  struct _MDL *v8; // rbx
  struct _MDL *result; // rax
  unsigned __int64 v10; // r8

  if ( !*(_QWORD *)(a1 + 56) )
    return 0LL;
  Mdl = (struct _MDL *)IopAllocateMdl((__int64)a2, a3, 0, a4, 0LL, 16);
  v8 = Mdl;
  if ( !Mdl )
    return 0LL;
  IoBuildPartialMdl(*(PMDL *)(a1 + 56), Mdl, a2, a3);
  result = v8;
  v10 = ((v8->ByteOffset & 0xFFF) + (unsigned __int64)v8->ByteCount + 4095) >> 12;
  *((_DWORD *)&v8[1].Next + 2 * v10) = 1051651;
  *((_QWORD *)&v8[1].Size + v10) = a1;
  return result;
}
