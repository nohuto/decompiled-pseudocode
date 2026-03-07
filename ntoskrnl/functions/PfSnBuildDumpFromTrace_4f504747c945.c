__int64 __fastcall PfSnBuildDumpFromTrace(PVOID *a1, __int64 a2)
{
  int v2; // r12d
  PVOID *v4; // r14
  __int64 v5; // rdi
  char *Pool2; // rax
  char *v7; // rbx
  _DWORD *v8; // rbp
  char *v9; // r13
  __int64 *v10; // r15
  int v11; // edi
  __int64 *v12; // rdx
  unsigned int v13; // edi
  unsigned int v14; // ebx
  int v15; // eax
  unsigned int v16; // ebx
  int v19; // [rsp+68h] [rbp+10h] BYREF

  v19 = 0;
  v2 = 0;
  *a1 = 0LL;
  v4 = a1;
  if ( *(int *)(a2 + 332) < 32 )
  {
    v16 = -1073741789;
  }
  else if ( (*(_BYTE *)(a2 + 484) & 2) != 0 )
  {
    v16 = -1072103399;
  }
  else
  {
    v5 = ((16 * (*(_DWORD *)(a2 + 120) + *(_DWORD *)(a2 + 344)) + 215) & 0xFFFFFFF8)
       + 8 * (*(_DWORD *)(a2 + 480) + 2 * (*(_DWORD *)(a2 + 480) + 1));
    Pool2 = (char *)ExAllocatePool2(256LL, v5, 1146118979LL);
    *v4 = Pool2;
    v7 = Pool2;
    if ( Pool2 )
    {
      memset(Pool2, 0, (unsigned int)v5);
      *((_DWORD *)v7 + 5) = 1128485697;
      v8 = v7 + 16;
      *((_DWORD *)v7 + 4) = 30;
      v9 = (char *)((unsigned __int64)(v7 + 231) & 0xFFFFFFFFFFFFFFF8uLL);
      *(_OWORD *)(v7 + 28) = *(_OWORD *)(a2 + 24);
      *(_OWORD *)(v7 + 44) = *(_OWORD *)(a2 + 40);
      *(_OWORD *)(v7 + 60) = *(_OWORD *)(a2 + 56);
      *(_OWORD *)(v7 + 76) = *(_OWORD *)(a2 + 72);
      *((_DWORD *)v7 + 23) = *(_DWORD *)(a2 + 88);
      *((_QWORD *)v7 + 21) = *(_QWORD *)(a2 + 464);
      *((_QWORD *)v7 + 15) = *(_QWORD *)(a2 + 200);
      *((_DWORD *)v7 + 44) ^= (*((_DWORD *)v7 + 44) ^ *(unsigned __int16 *)(a2 + 484)) & 1;
      *((_DWORD *)v7 + 44) ^= ((unsigned __int8)*((_DWORD *)v7 + 44) ^ (unsigned __int8)(2 * *(_WORD *)(a2 + 486))) & 2;
      *((_DWORD *)v7 + 24) = (((_DWORD)v7 + 231) & 0xFFFFFFF8) - ((_DWORD)v7 + 16);
      v10 = *(__int64 **)(a2 + 104);
      if ( v10 != (__int64 *)(a2 + 104) )
      {
        do
        {
          v11 = *((_DWORD *)v10 + 4);
          v12 = v10;
          v10 = (__int64 *)*v10;
          memmove(v9, v12 + 3, (unsigned int)(16 * v11));
          v9 += (unsigned int)(16 * v11);
          v2 += v11;
        }
        while ( v10 != (__int64 *)(a2 + 104) );
        v4 = a1;
      }
      *((_DWORD *)v7 + 25) = v2;
      *((_DWORD *)v7 + 26) = *(_DWORD *)(a2 + 332);
      v13 = (((_DWORD)v9 + 7) & 0xFFFFFFF8) - (_DWORD)v8;
      *((_DWORD *)v7 + 27) = *(_DWORD *)(a2 + 336);
      *((_OWORD *)v7 + 8) = *(_OWORD *)(a2 + 284);
      *((_OWORD *)v7 + 9) = *(_OWORD *)(a2 + 300);
      *((_QWORD *)v7 + 20) = *(_QWORD *)(a2 + 316);
      *((_DWORD *)v7 + 28) = v13;
      v14 = 24 * *(_DWORD *)(a2 + 480);
      memmove((void *)((unsigned __int64)(v9 + 7) & 0xFFFFFFFFFFFFFFF8uLL), *(const void **)(a2 + 472), v14);
      v15 = *(_DWORD *)(a2 + 480);
      v8[2] = v13 + v14;
      v8[25] = v15;
      if ( PfVerifyTraceBuffer(v8, v13 + v14, &v19) )
        return 0;
      v16 = -1073741823;
    }
    else
    {
      v16 = -1073741670;
    }
  }
  if ( *v4 )
  {
    ExFreePoolWithTag(*v4, 0);
    *v4 = 0LL;
  }
  return v16;
}
