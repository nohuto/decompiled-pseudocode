/*
 * XREFs of __cpu_features_init @ 0x1C0001D30
 * Callers:
 *     __memset_query @ 0x1C0002340 (__memset_query.c)
 * Callees:
 *     <none>
 */

__int64 _cpu_features_init()
{
  int v5; // r8d
  char v7; // r9
  int v12; // r10d

  _RAX = 0LL;
  __asm { cpuid }
  v5 = _RAX;
  _RAX = 1LL;
  v7 = 0;
  __asm { cpuid }
  v12 = _RCX;
  _RAX = 7LL;
  if ( v5 >= 7 )
  {
    v7 = 0;
    __asm { cpuid }
    LOBYTE(_RAX) = 2;
    if ( (_RBX & 0x200) != 0 )
      v7 = 2;
  }
  if ( (v12 & 0x100000) != 0 && (v12 & 0x8000000) != 0 && (v12 & 0x10000000) != 0 )
  {
    __asm { xgetbv }
    if ( (_RAX & 6) == 6 )
      v7 |= 4u;
  }
  _isa_info = v7 | 1;
  return 0LL;
}
