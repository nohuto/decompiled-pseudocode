/*
 * XREFs of PsCreateSiloContext @ 0x140738810
 * Callers:
 *     CmpAllocateSiloContext @ 0x1407384A4 (CmpAllocateSiloContext.c)
 *     PspAssignSiloSystemRootPath @ 0x1409A99E0 (PspAssignSiloSystemRootPath.c)
 *     ObCreateSiloRootDirectory @ 0x140A70E70 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     ObCreateObjectEx @ 0x1407D1090 (ObCreateObjectEx.c)
 */

__int64 __fastcall PsCreateSiloContext(__int64 a1, __int64 a2, int a3, __int64 a4, _QWORD *a5)
{
  _QWORD *v5; // rbx
  int v8; // edx
  int Object; // r9d

  v5 = 0LL;
  if ( a3 == 1 )
  {
    v8 = (int)PsSiloContextPagedType;
  }
  else
  {
    if ( a3 != 512 )
      return 3221225485LL;
    v8 = (int)PsSiloContextNonPagedType;
  }
  Object = ObCreateObjectEx(0, v8, 0, 0);
  if ( Object >= 0 )
  {
    if ( (MEMORY[0xFFFFFFFFFFFFFFEA] & 0x40) != 0 )
      v5 = (_QWORD *)(*(_QWORD *)(-48LL - ObpInfoMaskToOffset[MEMORY[0xFFFFFFFFFFFFFFEA] & 0x7F]) + 32LL);
    *v5 = a1;
    v5[1] = a4;
    *a5 = 0LL;
  }
  return (unsigned int)Object;
}
