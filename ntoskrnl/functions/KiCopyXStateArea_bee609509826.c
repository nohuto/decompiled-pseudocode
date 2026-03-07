void __fastcall KiCopyXStateArea(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  unsigned int v6; // r15d
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  _OWORD *v9; // rax
  __int64 v10; // r8
  _OWORD *v11; // rcx
  __int128 v12; // xmm1
  unsigned int v13; // ebp
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  _DWORD *v16; // r13
  unsigned __int64 v17; // r12
  unsigned int *v18; // rbp
  unsigned __int64 v19; // [rsp+58h] [rbp+10h]

  if ( a2 )
  {
    v3 = 0;
    v6 = 2;
    v7 = a2 & MEMORY[0xFFFFF780000003D8] & *(_QWORD *)(a3 + 512);
    *(_QWORD *)(a1 + 512) = v7 | *(_QWORD *)(a1 + 512) & ~a2;
    if ( (v7 & 2) != 0 )
      *(_DWORD *)(a1 + 24) = *(_DWORD *)(a3 + 24);
    if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      *(_QWORD *)(a1 + 520) = MEMORY[0xFFFFF780000003D8] | 0x8000000000000000uLL;
      v8 = *(_QWORD *)(a3 + 520);
      if ( (v7 & 1) != 0 )
      {
        *(_OWORD *)a1 = *(_OWORD *)a3;
        *(_OWORD *)(a1 + 16) = *(_OWORD *)(a3 + 16);
        *(_OWORD *)(a1 + 32) = *(_OWORD *)(a3 + 32);
        *(_OWORD *)(a1 + 48) = *(_OWORD *)(a3 + 48);
        *(_OWORD *)(a1 + 64) = *(_OWORD *)(a3 + 64);
        *(_OWORD *)(a1 + 80) = *(_OWORD *)(a3 + 80);
        *(_OWORD *)(a1 + 96) = *(_OWORD *)(a3 + 96);
        *(_OWORD *)(a1 + 112) = *(_OWORD *)(a3 + 112);
        *(_OWORD *)(a1 + 128) = *(_OWORD *)(a3 + 128);
        *(_OWORD *)(a1 + 144) = *(_OWORD *)(a3 + 144);
      }
      if ( (v7 & 2) != 0 )
      {
        v9 = (_OWORD *)(a1 + 160);
        v10 = 2LL;
        v11 = (_OWORD *)(a3 + 160);
        do
        {
          *v9 = *v11;
          v9[1] = v11[1];
          v9[2] = v11[2];
          v9[3] = v11[3];
          v9[4] = v11[4];
          v9[5] = v11[5];
          v9[6] = v11[6];
          v9 += 8;
          v12 = v11[7];
          v11 += 8;
          *(v9 - 1) = v12;
          --v10;
        }
        while ( v10 );
      }
      v13 = 576;
      v14 = v8 >> 2;
      v15 = v7 >> 2;
      v16 = (_DWORD *)0xFFFFF78000000404LL;
      v17 = MEMORY[0xFFFFF780000005F8] >> 2;
      v19 = v14;
      do
      {
        if ( (v14 & 1) != 0 )
        {
          if ( (v17 & 1) != 0 )
            v13 = (v13 + 63) & 0xFFFFFFC0;
          if ( (v15 & 1) != 0 )
          {
            memmove((void *)(a1 + (unsigned int)*(v16 - 1)), (const void *)(a3 + v13), (unsigned int)*v16);
            v14 = v19;
          }
          v13 += *v16;
        }
        v14 >>= 1;
        v17 >>= 1;
        v15 >>= 1;
        v19 = v14;
        if ( !v15 )
          break;
        ++v6;
        v16 += 2;
      }
      while ( v6 < 0x40 );
    }
    else
    {
      v18 = (unsigned int *)0xFFFFF780000003F4LL;
      do
      {
        if ( (v7 & 1) != 0 )
          memmove((void *)(*(v18 - 1) + a1), (const void *)(*(v18 - 1) + a3), *v18);
        v7 >>= 1;
        if ( !v7 )
          break;
        ++v3;
        v18 += 2;
      }
      while ( v3 < 0x40 );
    }
  }
}
