__int64 __fastcall HalpAllocateAdapterCallbackV2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rdi
  int *v5; // r12
  __int64 v6; // r14
  __int64 v7; // rsi
  int v8; // r13d
  char v9; // dl
  unsigned int v10; // ebp
  unsigned int v11; // eax
  int v12; // r12d
  __int64 v13; // rcx
  unsigned int v14; // edx
  int v15; // r15d
  unsigned int v16; // eax
  __int64 v17; // rcx
  unsigned int *v18; // rbx
  __int64 v19; // rax
  int *v21; // [rsp+30h] [rbp-58h]
  __int64 v22; // [rsp+38h] [rbp-50h]
  __int64 v23; // [rsp+40h] [rbp-48h]
  void (__fastcall *v24)(__int64, __int64, int *, __int64); // [rsp+48h] [rbp-40h]
  char v26; // [rsp+A0h] [rbp+18h]
  __int64 v27; // [rsp+A8h] [rbp+20h]
  unsigned int v28; // [rsp+A8h] [rbp+20h]

  v4 = *(__int64 **)(a4 + 8);
  v5 = (int *)(a4 + 48);
  v6 = a4 + 64;
  v7 = *(_QWORD *)(a4 + 32);
  v8 = a3;
  v9 = *(_BYTE *)(a4 + 152);
  v10 = *(_DWORD *)(a4 + 40);
  v24 = *(void (__fastcall **)(__int64, __int64, int *, __int64))(a4 + 120);
  v22 = *(_QWORD *)(a4 + 128);
  v23 = *(_QWORD *)(a4 + 104);
  v27 = *(_QWORD *)(a4 + 144);
  *(_QWORD *)(a4 + 24) = a3;
  *(_QWORD *)(a4 + 56) = a4;
  v11 = *((_DWORD *)v4 + 8) + *((_DWORD *)v4 + 10) + *((_DWORD *)v4 + 11) - v7;
  v26 = v9;
  v21 = (int *)(a4 + 48);
  if ( v10 )
  {
    v12 = v27;
    do
    {
      v13 = *v4;
      v14 = v10;
      v15 = v10;
      if ( v11 <= v10 )
        v14 = v11;
      if ( v13 )
        v15 = v14;
      v16 = v10 - v14;
      v17 = -v13;
      v10 = v17 != 0 ? v10 - v14 : 0;
      v28 = v17 != 0 ? v16 : 0;
      if ( v15 > 0 )
      {
        do
        {
          v18 = (unsigned int *)(v6 + 8);
          *(_DWORD *)(v6 + 8) = v15;
          *(_QWORD *)v6 = IopMapTransfer(v12, (_DWORD)v4, v8, v7, v6 + 8, v26);
          v6 += 24LL;
          v19 = *v18;
          v15 -= v19;
          v7 += v19;
        }
        while ( v15 > 0 );
        v10 = v28;
      }
      v4 = (__int64 *)*v4;
      if ( !v4 )
        break;
      v7 = v4[4] + *((unsigned int *)v4 + 11);
      v11 = *((_DWORD *)v4 + 10);
    }
    while ( v10 );
    v5 = v21;
  }
  *v5 = ((int)v6 - (int)v5 - 16) / 24;
  v24(a1, v23, v5, v22);
  return 3LL;
}
