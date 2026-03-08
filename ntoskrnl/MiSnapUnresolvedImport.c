/*
 * XREFs of MiSnapUnresolvedImport @ 0x140A283DC
 * Callers:
 *     MiResolveImageReferences @ 0x1407EC794 (MiResolveImageReferences.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14035E710 (RtlImageDirectoryEntryToData.c)
 */

__int64 __fastcall MiSnapUnresolvedImport(__int64 a1, __int64 *a2, int a3)
{
  __int64 *v3; // rbx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  char v8; // [rsp+48h] [rbp+20h] BYREF

  v3 = a2;
  LOBYTE(a2) = 1;
  result = RtlImageDirectoryEntryToData(a3, (int)a2, 0, (int)&v8);
  v6 = result;
  if ( result )
  {
    v7 = *v3;
    if ( *v3 >= 0 )
      return a1 + v7 + 2;
    else
      return (unsigned __int16)(v7 - *(_WORD *)(v6 + 16));
  }
  return result;
}
