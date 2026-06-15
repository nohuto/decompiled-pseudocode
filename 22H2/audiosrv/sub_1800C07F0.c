/*
 * XREFs of sub_1800C07F0 @ 0x1800C07F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_1800BF7A8 @ 0x1800BF7A8 (sub_1800BF7A8.c)
 *     sub_1800C0E5C @ 0x1800C0E5C (sub_1800C0E5C.c)
 */

__int64 __fastcall sub_1800C07F0(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x2Au, (__int64)&unk_18016DDC0, a1);
  }
  v6 = *a3 - *(_QWORD *)(a1 + 264);
  if ( *a3 == *(_QWORD *)(a1 + 264) )
    v6 = a3[1] - *(_QWORD *)(a1 + 272);
  if ( !v6 )
    return 0LL;
  sub_1800C0E5C(a1);
  if ( !a2 )
  {
    v7 = 0x4E60C5060DE6C1AFLL - *a3;
    if ( *a3 == 0x4E60C5060DE6C1AFLL )
      v7 = 0x2ADE9700B0F38CBDLL - a3[1];
    if ( !v7 )
      sub_1800BF7A8((LPCRITICAL_SECTION)(a1 + 288));
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(**(_QWORD **)(a1 + 136) + 40LL))(
         *(_QWORD *)(a1 + 136),
         a2,
         a3);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  sub_18004BD84((int)retaddr, 1537, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp", v8);
  return v9;
}
