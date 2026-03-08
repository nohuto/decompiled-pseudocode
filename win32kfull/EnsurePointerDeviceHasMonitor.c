/*
 * XREFs of EnsurePointerDeviceHasMonitor @ 0x1C0146090
 * Callers:
 *     _GetPointerDeviceRects @ 0x1C00E4B94 (_GetPointerDeviceRects.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C004A174 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 */

__int64 __fastcall EnsurePointerDeviceHasMonitor(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  if ( !*(_DWORD *)(v1 + 1336) )
    return 1;
  if ( *(_QWORD *)(v1 + 1344) )
  {
LABEL_5:
    if ( *(_DWORD *)(v1 + 1336) && !*(_QWORD *)(v1 + 1344) )
      return v2;
    return 1;
  }
  if ( IS_USERCRIT_OWNED_EXCLUSIVE(a1) )
  {
    RIMFindMonitorForDigitizer(v1, a1, 1LL, 0LL);
    goto LABEL_5;
  }
  return 0LL;
}
