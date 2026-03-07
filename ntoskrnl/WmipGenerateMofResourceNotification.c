void __fastcall WmipGenerateMofResourceNotification(_WORD *Src, _WORD *a2, _OWORD *a3, int a4)
{
  __int64 v4; // rax
  __int64 v6; // r10
  __int64 v10; // rsi
  __int64 v11; // rbp
  size_t v12; // rbx
  char *Pool2; // rax
  char *v14; // rdi
  int v15; // eax
  size_t v16; // rsi

  v4 = -1LL;
  v6 = -1LL;
  do
    ++v6;
  while ( Src[v6] );
  v10 = 2 * v6 + 4;
  do
    ++v4;
  while ( a2[v4] );
  v11 = 2 * v4 + 4;
  v12 = v10 + 2 * v4 + 76;
  Pool2 = (char *)ExAllocatePool2(256LL, v12, 1885957463LL);
  v14 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, v12);
    *(_DWORD *)v14 = v12;
    *((_DWORD *)v14 + 1) = a4;
    *((_QWORD *)v14 + 1) = 1LL;
    *((_DWORD *)v14 + 11) = 266;
    *(_OWORD *)(v14 + 24) = *a3;
    *((_QWORD *)v14 + 2) = MEMORY[0xFFFFF78000000014];
    v15 = v10 + v11;
    *((_WORD *)v14 + 32) = 0;
    v16 = v10 - 2;
    *((_DWORD *)v14 + 12) = 64;
    *((_DWORD *)v14 + 14) = 72;
    *((_DWORD *)v14 + 15) = v15;
    *((_WORD *)v14 + 36) = v16;
    memmove(v14 + 74, Src, v16);
    v16 >>= 1;
    *(_WORD *)&v14[2 * v16 + 74] = v11 - 2;
    memmove(&v14[2 * v16 + 76], a2, v11 - 2);
    WmipProcessEvent(v14);
    ExFreePoolWithTag(v14, 0);
  }
}
