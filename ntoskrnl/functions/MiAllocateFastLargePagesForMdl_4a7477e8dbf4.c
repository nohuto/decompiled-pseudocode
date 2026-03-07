__int64 __fastcall MiAllocateFastLargePagesForMdl(__int64 a1, unsigned int a2, char a3)
{
  int v6; // eax
  __int64 v7; // rsi
  int v8; // ecx
  int v9; // eax
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r12
  bool v12; // zf
  unsigned __int64 v13; // rax
  __int64 v14; // r15
  __int64 result; // rax
  unsigned __int64 v16; // r14
  __int64 v17; // r8
  unsigned int v18; // r11d
  __int64 v19; // r11
  unsigned __int64 *v20; // rdi
  unsigned __int64 v21; // r12
  __int64 v22; // r15
  _QWORD **v23; // rbx
  _QWORD *v24; // rdx
  unsigned __int64 v25; // r14
  _QWORD *v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int64 i; // r8
  unsigned __int64 v29; // rax
  _QWORD v30[4]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v31; // [rsp+50h] [rbp-B0h]
  int v32; // [rsp+54h] [rbp-ACh]
  __int64 v33; // [rsp+58h] [rbp-A8h]
  __int128 v34; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v35; // [rsp+70h] [rbp-90h]
  _QWORD *v36; // [rsp+78h] [rbp-88h]
  _QWORD v37[46]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v38[12]; // [rsp+1F0h] [rbp+F0h] BYREF

  memset(v37, 0, 0x168uLL);
  memset(v38, 0, sizeof(v38));
  v6 = *(_DWORD *)(a1 + 80);
  v7 = *(_QWORD *)(a1 + 64);
  v30[0] = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  if ( v6 )
  {
    if ( v6 == 2 )
    {
      v8 = 28;
    }
    else
    {
      v8 = 4;
      if ( v6 == 3 )
        v8 = 0;
    }
  }
  else
  {
    v8 = 12;
  }
  v9 = 16;
  v10 = *(_QWORD *)(a1 + 48);
  v11 = (unsigned __int64)*(unsigned int *)(v7 + 40) >> 12;
  if ( (a3 & 1) != 0 )
    v9 = 24;
  v12 = *(_QWORD *)(a1 + 8) == 0x100000LL;
  LODWORD(v30[0]) = v9;
  if ( v12 )
    LODWORD(v30[0]) = v9 | 1;
  v30[1] = *(_QWORD *)a1;
  v13 = *(_QWORD *)(a1 + 32) - v11 * v10;
  v31 = a2;
  v33 = -1LL;
  v30[2] = v13;
  v30[3] = *(_QWORD *)(a1 + 24);
  v36 = v38;
  v32 = v8;
  while ( 1 )
  {
    v14 = qword_140C66830;
    result = *(_QWORD *)a1;
    if ( *(_QWORD *)(a1 + 16) < *(_QWORD *)(*(_QWORD *)a1 + 17032LL) )
      break;
    MiInitializeLargePfnList(v38);
    result = MiAllocateLargeZeroPages((unsigned int *)v30);
    v16 = v35;
    if ( !v35 )
      break;
    if ( v14 == qword_140C66830 )
    {
      if ( MiTimeToWriteMemory(a2, 3, 1, 0, 48 * (v35 / v10)) < 0x1388
        || KeGetCurrentIrql() >= 2u
        || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      {
        v18 = 6;
      }
      MiInitializeDpcGang(v37, a2, v17, v18);
      LODWORD(v37[23]) |= 0x40u;
      v37[0] = a1;
      v19 = 0LL;
      v20 = (unsigned __int64 *)(v7 + 48 + 8 * v11);
      do
      {
        v21 = MiLargePageSizes[v19];
        v22 = 3 * v19;
        v23 = (_QWORD **)&v38[3 * v19];
        while ( 1 )
        {
          v24 = *v23;
          if ( *v23 == v23 )
            break;
          if ( (_QWORD **)v24[1] != v23 || (v26 = (_QWORD *)*v24, *(_QWORD **)(*v24 + 8LL) != v24) )
            __fastfail(3u);
          *v23 = v26;
          v26[1] = v23;
          --v38[v22 + 2];
          v27 = 0LL;
          for ( i = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v24 + 0x44000000000LL) >> 4); v27 < v21; ++v20 )
          {
            v29 = i + v27;
            v27 += v10;
            *v20 = v29;
          }
          MiInsertDpcGang(v37, v24, i);
        }
        v19 = (unsigned int)(v19 + 1);
      }
      while ( (unsigned int)v19 < 4 );
      v25 = v16 << 12;
      *(_DWORD *)(v7 + 40) += v25 / v10;
      MiStartDpcGang(v37, v25 % v10);
      MiEndDpcGang(v37);
      *(_QWORD *)(v7 + 16) = 0LL;
      result = 2LL;
      *(_WORD *)(v7 + 10) |= 2u;
      return result;
    }
    MiFreeLargeZeroPages(*(_QWORD *)a1, (__int64)v38, (LODWORD(v30[0]) >> 3) & 1);
    v35 = 0LL;
  }
  return result;
}
