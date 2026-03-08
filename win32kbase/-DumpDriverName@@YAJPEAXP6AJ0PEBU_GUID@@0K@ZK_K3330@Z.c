/*
 * XREFs of ?DumpDriverName@@YAJPEAXP6AJ0PEBU_GUID@@0K@ZK_K3330@Z @ 0x1C017F3C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DumpDriverName(
        void *a1,
        int (*a2)(void *, const struct _GUID *, void *, unsigned int),
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        _WORD *a8)
{
  __int64 result; // rax
  __int64 v9; // r9

  result = 0LL;
  if ( a8 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a8[v9] );
    return ((__int64 (__fastcall *)(void *, void *, _WORD *, _QWORD))a2)(
             a1,
             &unk_1C02A25E0,
             a8,
             (unsigned int)(2 * v9 + 2));
  }
  return result;
}
