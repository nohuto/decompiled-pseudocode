/*
 * XREFs of ImeCanDestroyDefIMEforChild @ 0x1C00339F4
 * Callers:
 *     xxxDestroyWindow @ 0x1C007DCA0 (xxxDestroyWindow.c)
 * Callees:
 *     unsafe_cast_fnid_or_class_to_PIMEWND @ 0x1C0033BFC (unsafe_cast_fnid_or_class_to_PIMEWND.c)
 *     _GetDesktopWindow @ 0x1C00704C0 (_GetDesktopWindow.c)
 *     IsChildSameThread @ 0x1C01E3234 (IsChildSameThread.c)
 */

__int64 __fastcall ImeCanDestroyDefIMEforChild(__int64 a1, __int64 a2)
{
  ULONG64 *v4; // rax
  ULONG64 v5; // rdx
  __int64 v7; // rax
  __int64 v8; // rbx

  v4 = (ULONG64 *)unsafe_cast_fnid_or_class_to_PIMEWND(a1);
  if ( !v4 )
    return 0LL;
  v5 = *v4;
  if ( !*v4 || v5 == -1LL )
    return 0LL;
  if ( v5 >= MmUserProbeAddress )
    v5 = MmUserProbeAddress;
  if ( (*(_DWORD *)(v5 + 44) & 0x10) == 0 )
    return 0LL;
  v7 = *(_QWORD *)(a1 + 120);
  if ( v7 )
  {
    if ( v7 != a2 )
      return 0LL;
  }
  v8 = *(_QWORD *)(a2 + 104);
  if ( !v8 || *(_QWORD *)(a2 + 16) == *(_QWORD *)(v8 + 16) )
    return 0LL;
  do
  {
    if ( v8 == GetDesktopWindow(v8) )
      break;
    if ( (unsigned int)IsChildSameThread(v8, a2) )
      return 0LL;
    v8 = *(_QWORD *)(v8 + 104);
  }
  while ( v8 );
  return 1LL;
}
