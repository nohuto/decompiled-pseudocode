/*
 * XREFs of draw_nf_tb_no_to_temp_start @ 0x1C0150C40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall draw_nf_tb_no_to_temp_start(__int64 a1, int a2, __int64 a3, int a4, unsigned int a5)
{
  __int64 result; // rax
  __int64 v6; // rdi
  int v9; // ebx
  __int64 v11; // rdx
  unsigned int v12; // r13d
  unsigned int v13; // r10d
  int v14; // eax
  __int64 v15; // rsi
  int v16; // r9d
  int v17; // r11d
  __int64 v18; // r8
  __int64 v19; // rcx

  if ( a2 )
  {
    v6 = 0LL;
    v9 = a2;
    do
    {
      --v9;
      v11 = **(_QWORD **)(a1 + 24 * v6 + 8);
      v12 = *(_DWORD *)(v11 + 12);
      v13 = (*(_BYTE *)v11 + *(_BYTE *)(a1 + 24 * v6 + 16) - (_BYTE)a4) & 7;
      v14 = *(_DWORD *)(v11 + 8);
      v15 = a3 + ((__int64)(*(_DWORD *)v11 + *(_DWORD *)(a1 + 24 * v6 + 16) - a4) >> 3);
      v16 = (int)(v13 + v14 + 7) >> 3;
      v17 = (v14 + 7) >> 3;
      if ( v16 > 4 )
      {
        v19 = 0LL;
        if ( v16 > v17 )
          v19 = 2LL;
        result = OrAllTableWide[(v13 == 0) | (unsigned __int64)v19](v12, v13, a5, v11 + 16, v15, v17, v16);
      }
      else
      {
        v18 = 0LL;
        if ( v16 > v17 )
          v18 = 2LL;
        result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64, __int64, int))OrInitialTableNarrow[(v13 == 0) | (unsigned int)(4 * ((int)(v13 + v14 + 7) >> 3)) | (unsigned __int64)v18])(
                   v12,
                   v13,
                   a5,
                   v11 + 16,
                   v15,
                   v17);
      }
      v6 = (unsigned int)(v6 + 1);
    }
    while ( v9 );
  }
  return result;
}
