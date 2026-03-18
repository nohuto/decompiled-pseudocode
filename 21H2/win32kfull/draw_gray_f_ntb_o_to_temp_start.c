/*
 * XREFs of draw_gray_f_ntb_o_to_temp_start @ 0x1C0277400
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall draw_gray_f_ntb_o_to_temp_start(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        int a6,
        int a7)
{
  int v8; // esi
  int v9; // ebp
  unsigned __int64 v10; // rdi
  __int64 result; // rax
  unsigned __int64 v12; // r14
  __int64 v13; // rbx

  v8 = *(_DWORD *)(a1 + 16) - a4;
  v9 = *(_DWORD *)(a1 + 20) - a7;
  v10 = a1;
  result = a2;
  v12 = a1 + 24LL * a2;
  if ( a1 < v12 )
  {
    do
    {
      v13 = **(_QWORD **)(v10 + 8);
      result = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD))(&(&apfnGray)[2
                                                                                      * (((_BYTE)v8 + *(_BYTE *)v13) & 1u)])[*(_DWORD *)(v13 + 8) & 1])(
                 v13,
                 (unsigned int)(*(_DWORD *)(v13 + 8) + 1) >> 1,
                 a3 + a5 * (__int64)(v9 + *(_DWORD *)(v13 + 4)) + (v8 + *(_DWORD *)v13) / 2,
                 a5);
      v8 += a6;
      v10 += 24LL;
    }
    while ( v10 < v12 );
  }
  return result;
}
