/*
 * XREFs of _GetPointerDeviceCursors @ 0x1C01C49DC
 * Callers:
 *     NtUserGetPointerDeviceCursors @ 0x1C01D3F00 (NtUserGetPointerDeviceCursors.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 */

__int64 __fastcall GetPointerDeviceCursors(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 i; // r10

  for ( i = 0LL; (unsigned int)i < a2; i = (unsigned int)(i + 1) )
  {
    *(_DWORD *)(a3 + 8 * i) = *(_DWORD *)(*(_QWORD *)(a1 + 1024) + 12 * i + 4);
    *(_DWORD *)(a3 + 8 * i + 4) = *(_DWORD *)(*(_QWORD *)(a1 + 1024) + 12 * i);
  }
  return 1LL;
}
