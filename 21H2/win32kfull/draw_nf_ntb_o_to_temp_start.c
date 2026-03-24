/*
 * XREFs of draw_nf_ntb_o_to_temp_start @ 0x1C00D1840
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall draw_nf_ntb_o_to_temp_start(__int64 a1, int a2, __int64 a3, int a4, unsigned int a5, int a6, int a7)
{
  int v9; // edi
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // r8
  unsigned int v13; // ebp
  unsigned int v14; // r10d
  __int64 v15; // rdx
  int v16; // r11d
  int v17; // eax
  __int64 v18; // rsi
  int v19; // r9d
  int v20; // r11d
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 result; // rax
  __int64 v24; // rcx

  if ( a2 )
  {
    v9 = a2;
    v10 = a1;
    v11 = 0LL;
    do
    {
      --v9;
      v12 = **(_QWORD **)(v10 + 24 * v11 + 8);
      v13 = *(_DWORD *)(v12 + 12);
      v14 = (*(_BYTE *)v12 + *(_BYTE *)(v10 + 24 * v11 + 16) - (_BYTE)a4) & 7;
      v15 = (__int64)(*(_DWORD *)v12 + *(_DWORD *)(v10 + 24 * v11 + 16) - a4) >> 3;
      v16 = *(_DWORD *)(v12 + 8) + 7;
      v17 = *(_DWORD *)(v10 + 24 * v11 + 20) + *(_DWORD *)(v12 + 4);
      v18 = v12 + 16;
      v19 = (int)(v14 + v16) >> 3;
      v20 = v16 >> 3;
      v21 = a3 + (int)(a5 * (v17 - a7)) + v15;
      if ( v19 > 4 )
      {
        v24 = 0LL;
        if ( v19 > v20 )
          v24 = 2LL;
        result = OrAllTableWide[(v14 == 0) | (unsigned __int64)v24](v13, v14, a5, v12 + 16, v21, v20, v19);
      }
      else
      {
        v22 = 0LL;
        if ( v19 > v20 )
          v22 = 2LL;
        result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64, __int64, int))OrAllTableNarrow[(v14 == 0) | (unsigned int)(4 * v19) | (unsigned __int64)v22])(
                   v13,
                   v14,
                   a5,
                   v18,
                   v21,
                   v20);
      }
      v10 = a1;
      v11 = (unsigned int)(v11 + 1);
    }
    while ( v9 );
  }
  return result;
}
