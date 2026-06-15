/*
 * XREFs of sub_1800C59F8 @ 0x1800C59F8
 * Callers:
 *     sub_1800C50AC @ 0x1800C50AC (sub_1800C50AC.c)
 *     sub_1800C5A78 @ 0x1800C5A78 (sub_1800C5A78.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800C59F8(__int64 a1)
{
  bool v1; // zf
  unsigned int v3; // edi
  struct _TP_WAIT *v4; // rcx

  v1 = (*(_DWORD *)(a1 + 72))-- == 1;
  v3 = *(_DWORD *)(a1 + 72);
  if ( v1 )
  {
    if ( *(_BYTE *)(a1 + 64) )
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)&dwCreationFlags + 56LL))(*(_QWORD *)&dwCreationFlags, a1);
    v4 = *(struct _TP_WAIT **)(a1 + 208);
    *(_BYTE *)(a1 + 64) = 0;
    if ( v4 )
    {
      SetThreadpoolWait(v4, 0LL, 0LL);
      WaitForThreadpoolWaitCallbacks(*(PTP_WAIT *)(a1 + 208), 1);
    }
  }
  return v3;
}
