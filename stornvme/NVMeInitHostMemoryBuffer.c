__int64 __fastcall NVMeInitHostMemoryBuffer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  int **v5; // rsi
  char v6; // r13
  __int64 v8; // rax
  int v9; // r12d
  __int64 v10; // r8
  unsigned int v11; // edx
  int v12; // eax
  unsigned int v13; // r14d
  unsigned __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // ecx
  int *v17; // rdx
  size_t Size; // [rsp+28h] [rbp-180h]
  unsigned int v20; // [rsp+64h] [rbp-144h]
  _DWORD v21[2]; // [rsp+68h] [rbp-140h]
  _QWORD Src[16]; // [rsp+70h] [rbp-138h] BYREF
  _QWORD v23[16]; // [rsp+F0h] [rbp-B8h] BYREF

  v4 = 0;
  v5 = (int **)(a1 + 4000);
  v6 = 0;
  if ( *(_QWORD *)(a1 + 4000) )
  {
    v6 = 1;
    goto LABEL_16;
  }
  v8 = *(_QWORD *)(a1 + 1840);
  v9 = 0;
  v10 = (unsigned int)(*(_DWORD *)(v8 + 276) << 12);
  v11 = *(_DWORD *)(v8 + 272) << 12;
  if ( v11 )
  {
    v12 = *(_DWORD *)(a1 + 124);
    if ( v12 )
    {
      if ( v12 != -1 )
      {
        v11 = *(_DWORD *)(a1 + 124);
        if ( (v12 & 0xFFF) != 0 )
          v11 = (v12 + 4095) & 0xFFFFF000;
        if ( v11 < (unsigned int)v10 )
          v11 = v10;
      }
      v20 = 1 << (((*(_DWORD *)(*(_QWORD *)(a1 + 184) + 20LL) >> 7) & 0xF) + 12);
      v13 = StorPortExtendedFunction(69LL, a1, v10, v11);
      if ( v13 )
        goto LABEL_19;
      v4 = 8;
      NVMeZeroMemory(Src, 0x80u);
      v14 = 0LL;
      v15 = 8LL;
      do
      {
        v16 = v23[v14 / 2 + 1];
        v9 += v16;
        Src[v14 / 2] = v23[v14 / 2];
        v14 += 4LL;
        v21[v14] = v16 / v20;
        --v15;
      }
      while ( v15 );
      v13 = StorPortExtendedFunction(0LL, a1, 136LL, 1701672526LL);
      if ( v13 )
        goto LABEL_17;
      **v5 = v9;
      memmove(*v5 + 2, Src, 0x80uLL);
      (*v5)[1] = 128;
LABEL_16:
      v17 = *v5;
      LOBYTE(v17) = 1;
      LODWORD(Size) = (*v5)[1];
      v13 = NVMeSetHostMemoryBuffer(a1, (int)v17, v6, **v5, *v5 + 2, Size);
      if ( !v13 )
        return v13;
LABEL_17:
      if ( v4 )
        StorPortExtendedFunction(70LL, a1, v23, v4);
      goto LABEL_19;
    }
  }
  v13 = -1056964606;
LABEL_19:
  if ( *v5 )
  {
    StorPortExtendedFunction(1LL, a1, *v5, a4);
    *v5 = 0LL;
  }
  return v13;
}
