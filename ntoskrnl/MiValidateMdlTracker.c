/*
 * XREFs of MiValidateMdlTracker @ 0x14061ABD8
 * Callers:
 *     MiFreeMdlTracker @ 0x14061A3EC (MiFreeMdlTracker.c)
 *     MmUpdateMdlTrackerForMdlSwitch @ 0x14061AFA8 (MmUpdateMdlTrackerForMdlSwitch.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x1406797B0 (-Hash@MetroHash64@@SAXPEBE_KQEAE1@Z.c)
 */

__int64 __fastcall MiValidateMdlTracker(ULONG_PTR BugCheckParameter3, int a2)
{
  ULONG_PTR v2; // rsi
  __int64 v4; // rax
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 result; // rax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(BugCheckParameter3 + 24);
  v4 = *(_QWORD *)(BugCheckParameter3 + 40);
  v6 = (*(_DWORD *)(v2 + 32) + *(_DWORD *)(v2 + 44)) & 0xFFF;
  v7 = (v6 + *(unsigned int *)(v2 + 40) + 4095LL) >> 12;
  if ( v4 != v7 )
    KeBugCheckEx(0x76u, 5uLL, *(_QWORD *)(BugCheckParameter3 + 24), BugCheckParameter3, v7 | (v4 << 32));
  v8 = *(_QWORD *)(BugCheckParameter3 + 64);
  result = *(_QWORD *)(v2 + 48);
  if ( v8 != result )
    KeBugCheckEx(0x76u, 6uLL, v2, BugCheckParameter3, result | (v8 << 32));
  if ( a2 )
  {
    v10 = 0LL;
    MetroHash64::Hash((const unsigned __int8 *)(v2 + 48), 8 * v7, (unsigned __int8 *const)&v10, v6);
    result = v10;
    if ( *(_DWORD *)(BugCheckParameter3 + 60) != (_DWORD)v10 )
      KeBugCheckEx(0x76u, 7uLL, v2, BugCheckParameter3, (unsigned int)v10 | (unsigned __int64)(v8 << 32));
  }
  return result;
}
