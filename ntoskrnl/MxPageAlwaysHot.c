/*
 * XREFs of MxPageAlwaysHot @ 0x140B3864C
 * Callers:
 *     MxInitializeFreeNodeDescriptors @ 0x140B37B68 (MxInitializeFreeNodeDescriptors.c)
 * Callees:
 *     MiSearchChannelTable @ 0x14064319C (MiSearchChannelTable.c)
 */

__int64 __fastcall MxPageAlwaysHot(ULONG_PTR a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !qword_140C65750 )
    return 0LL;
  LOBYTE(v1) = *((_BYTE *)MiSearchChannelTable(a1) + 14) == 0;
  return v1;
}
