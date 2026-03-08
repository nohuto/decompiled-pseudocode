/*
 * XREFs of KiOpRetrieveRegMemAddress @ 0x14057D26C
 * Callers:
 *     KiOp_Div @ 0x14057D3D0 (KiOp_Div.c)
 *     KiOp_SGDTSIDT @ 0x14057D6A0 (KiOp_SGDTSIDT.c)
 *     KiOp_SLDTSTRSMSW @ 0x14057D870 (KiOp_SLDTSTRSMSW.c)
 * Callees:
 *     KiOpComputeLinearAddress @ 0x14057CDF8 (KiOpComputeLinearAddress.c)
 */

__int64 __fastcall KiOpRetrieveRegMemAddress(__int64 a1, __int64 *a2, _BYTE *a3, int *a4)
{
  char v4; // bp
  unsigned __int8 v6; // cl
  __int64 v7; // r11
  __int64 v8; // rdi
  int v12; // ebx
  unsigned int v13; // ecx
  __int64 v14; // r11
  unsigned int v15; // r9d
  unsigned int v16; // eax
  unsigned int v17; // edx
  __int64 v18; // rax
  unsigned int v19; // edx
  __int64 v20; // rcx
  unsigned int v21; // edx
  __int64 v22; // rcx
  unsigned int v23; // eax
  __int64 v25; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_BYTE *)(a1 + 81);
  v6 = *(_BYTE *)(a1 + 65);
  v7 = 0LL;
  v8 = 0LL;
  if ( (v6 & 0xC0) == 0xC0 )
  {
    v12 = 1;
    v13 = v6 & 7;
    v14 = v13 + 8;
    if ( (*(_BYTE *)(a1 + 64) & 1) == 0 )
      v14 = v13;
    v4 = 0;
    v7 = *(_QWORD *)(a1 + 24) + 120LL + 8 * v14;
  }
  else
  {
    if ( (v6 & 7) == 4 )
    {
      v15 = *(unsigned __int8 *)(a1 + 66);
      if ( (*(_BYTE *)(a1 + 66) & 7) != 5 || v6 >= 0x40u )
      {
        v16 = (v15 & 7) + 8;
        if ( (*(_BYTE *)(a1 + 64) & 1) == 0 )
          v16 = v15 & 7;
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * v16 + 120);
      }
      v17 = (v15 >> 3) & 7;
      v18 = v17 + 8;
      if ( (*(_BYTE *)(a1 + 64) & 2) == 0 )
        v18 = v17;
      if ( (_DWORD)v18 != 4 )
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v18 + 120) << (*(_BYTE *)(a1 + 66) >> 6);
    }
    else
    {
      v19 = v6 & 7;
      if ( v6 < 0x40u && v19 == 5 )
      {
        if ( !*(_BYTE *)(a1 + 58) )
          v7 = *(_QWORD *)(a1 + 16);
      }
      else
      {
        v20 = v19 + 8;
        if ( (*(_BYTE *)(a1 + 64) & 1) == 0 )
          v20 = v19;
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v20 + 120);
      }
    }
    v12 = 0;
  }
  v21 = 0;
  v22 = v7 + v8 + *(int *)(a1 + 68);
  v25 = v22;
  if ( !v12 && (*(_DWORD *)(a1 + 52) & 1) != 0 )
  {
    v23 = KiOpComputeLinearAddress(a1, &v25);
    v22 = v25;
    v21 = v23;
  }
  *a2 = v22;
  *a3 = v4;
  if ( a4 )
    *a4 = v12;
  return v21;
}
