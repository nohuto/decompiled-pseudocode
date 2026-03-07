__int64 *__fastcall ViThunkFindAllExportAddresses(__int64 a1, __int64 **a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 *result; // rax
  __int64 **v8; // rbx
  __int64 ExportAddress; // rax
  __int64 *v10; // rcx
  bool v11; // zf
  _BYTE *v12; // rdx
  int v13; // [rsp+40h] [rbp+18h] BYREF
  int v14; // [rsp+44h] [rbp+1Ch]

  v14 = HIDWORD(a3);
  v13 = 0;
  v4 = 0;
  result = *a2;
  if ( *a2 )
  {
    v8 = a2 + 5;
    do
    {
      ExportAddress = ViThunkFindExportAddress(a1, result, &v13);
      v10 = *v8;
      if ( *v8 )
      {
        if ( !*v10 )
          *v10 = ExportAddress;
        if ( **v8 == 1 )
          **v8 = 0LL;
      }
      v11 = v13 == 0;
      *(v8 - 2) = (__int64 *)ExportAddress;
      if ( !v11 )
      {
        v12 = (_BYTE *)(*(_QWORD *)(a4 + 8) + ((unsigned __int64)v4 >> 3));
        *v12 &= ~(1 << (v4 & 7));
        *((_DWORD *)v8 - 2) |= 2u;
        ExportAddress = 0LL;
      }
      *(v8 - 3) = (__int64 *)ExportAddress;
      ++v4;
      result = v8[2];
      v8 += 7;
    }
    while ( result );
  }
  return result;
}
