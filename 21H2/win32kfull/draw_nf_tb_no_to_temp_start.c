/*
 * XREFs of draw_nf_tb_no_to_temp_start @ 0x1C013F280
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall draw_nf_tb_no_to_temp_start(__int64 a1, int a2, __int64 a3, int a4, unsigned int a5)
{
  __int64 v5; // rdi
  int v8; // ebx
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r11
  int v14; // r9d
  int v15; // r10d
  __int64 v16; // r8
  __int64 result; // rax
  __int64 v18; // rcx

  if ( a2 )
  {
    v5 = 0LL;
    v8 = a2;
    do
    {
      --v8;
      v10 = **(_QWORD **)(a1 + 24 * v5 + 8);
      v11 = *(_DWORD *)(v10 + 8);
      v12 = (*(_BYTE *)v10 + *(_BYTE *)(a1 + 24 * v5 + 16) - (_BYTE)a4) & 7;
      v13 = a3 + ((__int64)(*(_DWORD *)v10 + *(_DWORD *)(a1 + 24 * v5 + 16) - a4) >> 3);
      v14 = ((int)v12 + v11 + 7) >> 3;
      v15 = (v11 + 7) >> 3;
      if ( v14 > 4 )
      {
        v18 = 0LL;
        if ( v14 > v15 )
          v18 = 2LL;
        result = OrAllTableWide[((_DWORD)v12 == 0) | (unsigned __int64)v18](
                   *(_DWORD *)(v10 + 12),
                   v12,
                   a5,
                   v10 + 16,
                   v13,
                   v15,
                   v14);
      }
      else
      {
        v16 = 0LL;
        if ( v14 > v15 )
          v16 = 2LL;
        result = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, __int64, __int64, int))OrInitialTableNarrow[((_DWORD)v12 == 0) | (unsigned int)(4 * v14) | (unsigned __int64)v16])(
                   *(unsigned int *)(v10 + 12),
                   v12,
                   a5,
                   v10 + 16,
                   v13,
                   v15);
      }
      v5 = (unsigned int)(v5 + 1);
    }
    while ( v8 );
  }
  return result;
}
