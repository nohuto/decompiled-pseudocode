_UNKNOWN **__fastcall PnpNotifyDerivedKeys(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        __int64 (__fastcall *a8)(__int64, __int64, _QWORD, __int64, __int64))
{
  _UNKNOWN **result; // rax
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  if ( a6 )
  {
    v13 = a6;
    v14 = a5 + 8;
    do
    {
      v15 = 0LL;
      if ( *(_DWORD *)v14 )
      {
        while ( 1 )
        {
          v16 = *(_QWORD *)(*(_QWORD *)(v14 - 8) + 8 * v15);
          if ( *(_DWORD *)(a4 + 16) == *(_DWORD *)(v16 + 16) )
          {
            v17 = *(_QWORD *)a4 - *(_QWORD *)v16;
            if ( *(_QWORD *)a4 == *(_QWORD *)v16 )
              v17 = *(_QWORD *)(a4 + 8) - *(_QWORD *)(v16 + 8);
            if ( !v17 )
              break;
          }
          v15 = (unsigned int)(v15 + 1);
          if ( (unsigned int)v15 >= *(_DWORD *)v14 )
            goto LABEL_6;
        }
        *(_QWORD *)(a7 + 16) = *(_QWORD *)(v14 + 8);
        result = (_UNKNOWN **)a8(a1, a2, a3, 4LL, a7);
      }
LABEL_6:
      v14 += 24LL;
      --v13;
    }
    while ( v13 );
  }
  return result;
}
