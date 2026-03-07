__int64 __fastcall RIMRegQueryDWord(struct _UNICODE_STRING *a1, const WCHAR *a2, int a3, int *a4)
{
  int v4; // ebx
  unsigned int v7; // edi
  void *v8; // rax
  void *v9; // rsi
  __int64 result; // rax
  int v11; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  v11 = a3;
  v7 = 0;
  v8 = RIMRegOpenKey(a1);
  v9 = v8;
  if ( v8 )
  {
    v7 = RIMRegQueryDWordFromKey(v8, a2, v4, &v11);
    ZwClose(v9);
    v4 = v11;
  }
  result = v7;
  *a4 = v4;
  return result;
}
