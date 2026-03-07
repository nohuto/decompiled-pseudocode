__int64 __fastcall PnpInstallerClassRaisePropertyChangeEventWorker(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall *a6)(__int64, __int64, __int64))
{
  __int64 result; // rax
  __int64 *v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx

  result = a6(a1, a2, 2LL);
  v9 = &qword_14000B1C8;
  v10 = 3LL;
  do
  {
    v11 = 0LL;
    if ( *(_DWORD *)v9 )
    {
      while ( 1 )
      {
        v12 = *(_QWORD *)(*(v9 - 1) + 8 * v11);
        if ( *(_DWORD *)(a5 + 16) == *(_DWORD *)(v12 + 16) )
        {
          v13 = *(_QWORD *)a5 - *(_QWORD *)v12;
          if ( *(_QWORD *)a5 == *(_QWORD *)v12 )
            v13 = *(_QWORD *)(a5 + 8) - *(_QWORD *)(v12 + 8);
          if ( !v13 )
            break;
        }
        v11 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v11 >= *(_DWORD *)v9 )
          goto LABEL_10;
      }
      result = a6(a1, a2, 2LL);
    }
LABEL_10:
    v9 += 3;
    --v10;
  }
  while ( v10 );
  return result;
}
