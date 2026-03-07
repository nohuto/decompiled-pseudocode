__int64 __fastcall AuthzBasepFindSystemSecurityAttribute(const UNICODE_STRING *a1)
{
  char v1; // bl
  __int64 v3; // rdx
  const UNICODE_STRING *v4; // rsi
  const UNICODE_STRING *v5; // rax
  const UNICODE_STRING *v6; // rdi
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v10 = 0LL;
  _InterlockedExchange64(&v10, WindowsSystemAttributes);
  v3 = v10;
  v4 = 0LL;
  if ( v10 )
  {
    v5 = (const UNICODE_STRING *)(v10 + 8);
    v6 = *(const UNICODE_STRING **)(v10 + 8);
    while ( v6 != v5 )
    {
      v4 = v6;
      if ( AuthzBasepEqualUnicodeString(v6 + 2, a1) )
      {
LABEL_5:
        v1 = 1;
        return (unsigned __int64)v4 & -(__int64)(v1 != 0);
      }
      v3 = v10;
      v6 = *(const UNICODE_STRING **)&v6->Length;
      v5 = (const UNICODE_STRING *)(v10 + 8);
    }
    v8 = (_QWORD *)(v3 + 32);
    v9 = *(_QWORD **)(v3 + 32);
    while ( v9 != v8 )
    {
      v4 = (const UNICODE_STRING *)(v9 - 2);
      if ( (v9[5] & 1) == 0 )
      {
        if ( AuthzBasepEqualUnicodeString(v4 + 2, a1) )
          goto LABEL_5;
        v3 = v10;
      }
      v9 = (_QWORD *)*v9;
      v8 = (_QWORD *)(v3 + 32);
    }
  }
  return (unsigned __int64)v4 & -(__int64)(v1 != 0);
}
