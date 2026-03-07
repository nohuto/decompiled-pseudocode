__int64 __fastcall sub_140097DC8(__int64 a1, unsigned int *a2, unsigned int a3)
{
  __int64 v3; // r11
  __int64 v5; // rbx
  __int64 v8; // r10
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // rax
  unsigned __int16 v12; // cx
  unsigned __int64 v13; // rax
  __int64 v15; // [rsp+20h] [rbp-30h] BYREF
  int v16; // [rsp+28h] [rbp-28h]
  __int16 v17; // [rsp+2Ch] [rbp-24h]
  __int16 v18; // [rsp+2Eh] [rbp-22h]
  __int16 v19; // [rsp+30h] [rbp-20h]
  __int16 v20; // [rsp+32h] [rbp-1Eh]
  char v21; // [rsp+34h] [rbp-1Ch]
  char v22; // [rsp+35h] [rbp-1Bh]
  int v23; // [rsp+36h] [rbp-1Ah]
  __int64 v24; // [rsp+3Ch] [rbp-14h]
  __int16 v25; // [rsp+44h] [rbp-Ch]
  char v26; // [rsp+46h] [rbp-Ah]
  __int64 v27; // [rsp+48h] [rbp-8h]

  v3 = *(_QWORD *)(a1 + 384);
  v5 = *a2;
  v8 = *(unsigned __int16 *)(v3 + 2);
  *(_DWORD *)(v3 + 52) = *(_DWORD *)(v3 + 8) & (v5 + *((unsigned __int16 *)a2 + 2));
  v9 = *(_QWORD *)(a1 + 616) * (unsigned int)v5;
  v10 = v5 * v8;
  v24 = 0LL;
  v11 = *(_QWORD *)(a1 + 608);
  v22 = 0;
  v23 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0LL;
  v15 = *(_QWORD *)(v9 + v11) + ((*(_QWORD *)(v10 + v3 + 64) >> 52) & 0x3FFLL);
  v12 = *((_WORD *)a2 + 3);
  v21 = 1;
  v16 = v5;
  v17 = *(_WORD *)(v10 + v3 + 64);
  v18 = v12 & 0x7F;
  v20 = *((unsigned __int8 *)a2 + 8);
  v13 = (unsigned __int64)*((unsigned __int8 *)a2 + 9) >> 4;
  v19 = v12 >> 7;
  LODWORD(v24) = dword_1400DA130[v13];
  HIDWORD(v24) = dword_1400DA150[*((_BYTE *)a2 + 10) & 0xF];
  sub_140095FDC(a1, (__int64)&v15, a3);
  if ( (unsigned int)sub_140095B80(a1, (__int64)&v15, (unsigned __int16 *)a2 + 3, a3) )
  {
    *((_BYTE *)a2 + 11) |= 2u;
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 848));
    return 0LL;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 456) + 56LL))(*(_QWORD *)(a1 + 456), &v15);
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 776));
    return *((unsigned __int16 *)a2 + 2);
  }
}
