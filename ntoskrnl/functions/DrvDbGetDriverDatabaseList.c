__int64 __fastcall DrvDbGetDriverDatabaseList(
        _QWORD *a1,
        unsigned __int8 (__fastcall *a2)(_QWORD, __int64, __int64, __int64),
        __int64 a3,
        _WORD *a4,
        unsigned int a5,
        _DWORD *a6)
{
  unsigned int v6; // ebx
  unsigned __int8 (__fastcall *v8)(_QWORD, __int64, __int64, __int64); // r10
  _QWORD *v9; // rax
  int v10; // r13d
  __int64 **v11; // r15
  __int64 **v12; // rdi
  int v13; // r12d
  int v14; // eax
  __int64 v15; // rcx
  __int64 v19; // [rsp+80h] [rbp+18h]

  v19 = a3;
  v6 = 0;
  v8 = a2;
  v9 = a1;
  v10 = 0;
  *a6 = 0;
  if ( a4 && a5 )
    *a4 = 0;
  v11 = (__int64 **)(a1 + 2);
  v12 = (__int64 **)a1[2];
  while ( v12 != v11 )
  {
    if ( !v8 || v8(*v9, (__int64)v12[3], 7LL, a3) )
    {
      v14 = (*((unsigned __int16 *)v12 + 8) >> 1) + 1;
      *a6 += v14;
      if ( a4 )
      {
        v13 = v14 + v10;
        if ( v14 + v10 < a5 )
        {
          RtlStringCchCopyExW(&a4[v10], a5 - v10, (NTSTRSAFE_PCWSTR)v12[3], 0LL, 0LL, 0x900u);
          v10 = v13;
        }
      }
    }
    v12 = (__int64 **)*v12;
    v9 = a1;
    v8 = a2;
    a3 = v19;
  }
  v15 = (unsigned int)*a6;
  *a6 = v15 + 1;
  if ( a4 && (int)v15 + 1 <= a5 )
    a4[v15] = 0;
  else
    return (unsigned int)-1073741789;
  return v6;
}
