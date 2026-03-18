/*
 * XREFs of MxPageAlwaysHot @ 0x140B46D5C
 * Callers:
 *     MxInitializeFreeNodeDescriptors @ 0x140B46278 (MxInitializeFreeNodeDescriptors.c)
 * Callees:
 *     MiSearchChannelTable @ 0x1406457C0 (MiSearchChannelTable.c)
 */

__int64 __fastcall MxPageAlwaysHot(ULONG_PTR a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !qword_140C65BD0 )
    return 0LL;
  LOBYTE(v1) = *((_BYTE *)MiSearchChannelTable(a1) + 14) == 0;
  return v1;
}
