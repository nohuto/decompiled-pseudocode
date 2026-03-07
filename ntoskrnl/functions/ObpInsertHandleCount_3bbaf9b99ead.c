char *__fastcall ObpInsertHandleCount(__int64 a1)
{
  int **v2; // rax
  int **v3; // r15
  unsigned int v4; // esi
  int *v5; // r12
  int v6; // ebp
  unsigned int v7; // edi
  int *Pool2; // rax
  int *v9; // r14
  char v10; // cl
  char *result; // rax
  int v12; // esi
  _BYTE Src[24]; // [rsp+20h] [rbp-48h] BYREF

  memset(Src, 0, 20);
  v2 = (int **)OBJECT_HEADER_TO_HANDLE_INFO(a1);
  v3 = v2;
  if ( !v2 )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 27) & 0x40) != 0 )
  {
    v4 = 24;
    *(_DWORD *)Src = 1;
    v5 = (int *)Src;
    *(_OWORD *)&Src[8] = *(_OWORD *)v2;
    v6 = 2;
    v7 = 40;
  }
  else
  {
    v5 = *v2;
    v12 = **v2;
    v6 = v12 + 4;
    v4 = 16 * v12 + 8;
    v7 = 16 * v6 + 8;
  }
  Pool2 = (int *)ExAllocatePool2(256LL, v7, 1682465359LL);
  v9 = Pool2;
  if ( !Pool2 )
    return 0LL;
  memmove(Pool2, v5, v4);
  v10 = *(_BYTE *)(a1 + 27);
  if ( (v10 & 0x40) != 0 )
    *(_BYTE *)(a1 + 27) = v10 & 0xBF;
  else
    ExFreePoolWithTag(v5, 0);
  memset((char *)v9 + v4, 0, v7 - v4);
  *v9 = v6;
  result = (char *)v9 + v4;
  *v3 = v9;
  return result;
}
