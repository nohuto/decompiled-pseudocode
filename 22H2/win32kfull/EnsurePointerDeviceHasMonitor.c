/*
 * XREFs of EnsurePointerDeviceHasMonitor @ 0x1C0152DC0
 * Callers:
 *     _GetPointerDeviceRects @ 0x1C00AC894 (_GetPointerDeviceRects.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0122344 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 */

__int64 __fastcall EnsurePointerDeviceHasMonitor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned int v5; // ebx

  v4 = *(_QWORD *)(a1 + 16);
  v5 = 0;
  if ( !*(_DWORD *)(v4 + 1336) )
    return 1;
  if ( *(_QWORD *)(v4 + 1344) )
  {
LABEL_5:
    if ( *(_DWORD *)(v4 + 1336) && !*(_QWORD *)(v4 + 1344) )
      return v5;
    return 1;
  }
  if ( IS_USERCRIT_OWNED_EXCLUSIVE(a1, a2, a3, a4) )
  {
    RIMFindMonitorForDigitizer(v4, a1, 1LL, 0LL);
    goto LABEL_5;
  }
  return 0LL;
}
