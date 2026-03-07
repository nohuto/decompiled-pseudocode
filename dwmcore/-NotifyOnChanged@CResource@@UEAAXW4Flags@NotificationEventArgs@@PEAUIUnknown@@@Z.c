__int64 __fastcall CResource::NotifyOnChanged(__int64 a1, unsigned int a2, __int64 a3)
{
  int v3; // eax
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 *v13; // rdx
  __int64 result; // rax

  v3 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6;
  if ( (((unsigned __int8)v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6) & 6) == 2
    && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 176LL))(a1) )
  {
    v7 = *(_QWORD *)(a1 + 24);
    if ( (v7 & 2) != 0 )
      v7 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v7) = v7 & 1;
    if ( (_DWORD)v7 )
    {
      v8 = 0LL;
      v9 = (unsigned int)v7;
      v10 = 2LL;
      do
      {
        v11 = *(_QWORD *)(a1 + 24);
        if ( (v11 & 2) != 0 )
        {
          v13 = (unsigned __int64 *)(v11 & 0xFFFFFFFFFFFFFFFCuLL);
          v12 = *v13;
        }
        else
        {
          v12 = *(_QWORD *)(a1 + 24) & 1LL;
          v13 = (unsigned __int64 *)(v11 & 0xFFFFFFFFFFFFFFFCuLL);
        }
        if ( v8 >= v12 )
        {
          v13 = 0LL;
        }
        else if ( v12 != 1 )
        {
          v13 = (unsigned __int64 *)v13[v10];
        }
        (*(void (__fastcall **)(__int64, unsigned __int64 *, _QWORD, __int64))(*(_QWORD *)a1 + 80LL))(a1, v13, a2, a3);
        ++v8;
        ++v10;
        --v9;
      }
      while ( v9 );
    }
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
  result = *(_DWORD *)(a1 + 32) ^ ((unsigned __int8)*(_DWORD *)(a1 + 32) ^ (unsigned __int8)(2
                                                                                           * (*(_DWORD *)(a1 + 32) >> 1)
                                                                                           - 2)) & 6u;
  *(_DWORD *)(a1 + 32) = result;
  return result;
}
