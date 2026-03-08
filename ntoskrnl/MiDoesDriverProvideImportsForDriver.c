/*
 * XREFs of MiDoesDriverProvideImportsForDriver @ 0x140B3C3A0
 * Callers:
 *     MiDoesDriverProvideBaseImageImports @ 0x140B3C350 (MiDoesDriverProvideBaseImageImports.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14035E710 (RtlImageDirectoryEntryToData.c)
 */

__int64 __fastcall MiDoesDriverProvideImportsForDriver(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rax
  unsigned int v5; // ebx
  unsigned __int64 v6; // rdi
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  unsigned int v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(unsigned int *)(a1 + 64);
  v4 = a2;
  v5 = 0;
  LOBYTE(a2) = 1;
  v10 = 0;
  v6 = v2 + v3;
  v7 = RtlImageDirectoryEntryToData(*(_QWORD *)(v4 + 48), a2, 12, (int)&v10);
  if ( !v7 || !(v10 >> 3) )
    return 0LL;
  while ( 1 )
  {
    v8 = *(_QWORD *)(v7 + 8LL * v5);
    if ( v8 >= v2 && v8 < v6 )
      break;
    if ( ++v5 >= v10 >> 3 )
      return 0LL;
  }
  return 1LL;
}
