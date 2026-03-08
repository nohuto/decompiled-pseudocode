/*
 * XREFs of ExpSaBinaryArrayInsert @ 0x1403C0224
 * Callers:
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403BFEBC (ExpSaPageGroupDescriptorAllocate.c)
 * Callees:
 *     ExAllocatePool3 @ 0x140AAB320 (ExAllocatePool3.c)
 */

__int64 __fastcall ExpSaBinaryArrayInsert(__int64 *a1, __int64 a2, unsigned __int16 a3)
{
  int v3; // r14d
  unsigned int v6; // edi
  __int64 *v7; // r9
  unsigned int v8; // ebx
  __int64 v9; // r8
  __int64 i; // rdx
  unsigned int v11; // ebx
  __int64 Pool3; // rax
  __int128 v14; // [rsp+30h] [rbp-18h] BYREF

  v3 = a3;
  v6 = 0;
  while ( 1 )
  {
    v7 = (__int64 *)*a1;
    v8 = 1 << (v6 + 2);
    if ( !*a1 )
    {
      v14 = 0LL;
      LOBYTE(v14) = 3;
      DWORD2(v14) = v3 | 0x80000000;
      Pool3 = ExAllocatePool3(64, 8 * v8 + 8, 1632860229, (unsigned int)&v14, 1);
      v7 = (__int64 *)Pool3;
      if ( !Pool3 )
        return (unsigned int)-1;
      *a1 = Pool3;
    }
    v9 = *v7;
    if ( *v7 < (unsigned __int64)v8 )
      break;
    ++v6;
    ++a1;
    if ( v6 >= 0x10 )
      return (unsigned int)-1;
  }
  for ( i = (unsigned int)v9; v7[i + 1]; i = (v8 - 1) & ((_DWORD)i + 1) )
    ;
  v11 = i | v8;
  *v7 = v9 + 1;
  v7[i + 1] = a2;
  return v11;
}
