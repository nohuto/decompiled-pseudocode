__int64 __fastcall NVMeFreeHostMemoryBuffer(__int64 a1)
{
  int *v1; // rdx
  __int64 v3; // rcx
  __int64 v4; // r9
  unsigned int v5; // eax
  __int64 v6; // r11
  _DWORD *v7; // rdx
  __int64 v8; // r9
  __int64 result; // rax
  size_t Size; // [rsp+28h] [rbp-B0h]
  _BYTE v11[8]; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v12[120]; // [rsp+48h] [rbp-90h] BYREF

  v1 = *(int **)(a1 + 4000);
  LODWORD(Size) = v1[1];
  NVMeSetHostMemoryBuffer(a1, 0, 0, *v1, v1 + 2, Size);
  v3 = *(_QWORD *)(a1 + 4000);
  v4 = 8LL;
  v5 = *(_DWORD *)(v3 + 4) >> 4;
  if ( v5 > 8 || (v4 = v5) != 0 )
  {
    v6 = (unsigned int)v4;
    v7 = (_DWORD *)(v3 + 16);
    do
    {
      *(_QWORD *)&v11[(_QWORD)v7 - v3 - 16] = *((_QWORD *)v7 - 1);
      *(_DWORD *)&v12[(_QWORD)v7 - v3 - 16] = *v7;
      v7 += 4;
      --v6;
    }
    while ( v6 );
  }
  StorPortExtendedFunction(70LL, a1, v11, v4);
  result = StorPortExtendedFunction(1LL, a1, *(_QWORD *)(a1 + 4000), v8);
  *(_QWORD *)(a1 + 4000) = 0LL;
  return result;
}
