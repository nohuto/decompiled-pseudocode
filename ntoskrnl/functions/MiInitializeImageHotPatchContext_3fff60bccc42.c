void *__fastcall MiInitializeImageHotPatchContext(_QWORD *a1, __int16 a2, __int64 a3)
{
  void *result; // rax
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdx

  result = memset(a1, 0, 0x90uLL);
  *((_WORD *)a1 + 68) = a2;
  if ( a3 )
  {
    *a1 = a3;
    v7 = (*(unsigned int *)(a3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 32) << 32)) << 12;
    a1[1] = v7;
    v8 = ((*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) << 12) | 0xFFF;
    a1[2] = v8 + 1;
    result = a1 + 15;
    v9 = ((unsigned __int64)*(unsigned int *)(***(_QWORD ***)(a3 + 72) + 8LL) << 12)
       + ((*(unsigned int *)(a3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 32) << 32)) << 12);
    a1[13] = v7;
    a1[3] = v9;
    a1[14] = v8;
    *((_DWORD *)a1 + 8) = v9 - v7;
    a1[16] = a1 + 15;
    a1[15] = a1 + 15;
  }
  return result;
}
