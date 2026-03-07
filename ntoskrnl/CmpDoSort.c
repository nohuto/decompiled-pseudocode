char __fastcall CmpDoSort(__int64 **a1, unsigned __int16 *a2)
{
  __int16 v4; // r15
  wchar_t *v5; // rcx
  __int64 *v6; // rbp
  wchar_t *i; // rbx
  __int64 **v8; // rdi
  __int64 *v9; // r14
  __int64 ***v10; // r12
  __int64 *v11; // rcx
  __int64 **v12; // rax
  __int64 *v13; // rax
  __int64 *v14; // rax
  UNICODE_STRING String1; // [rsp+20h] [rbp-38h] BYREF

  String1 = 0LL;
  if ( !(unsigned __int8)CmpSortByTag(a1, a2) )
    return 0;
  v4 = 0;
  v5 = (wchar_t *)*((_QWORD *)a2 + 1);
  v6 = (__int64 *)a1;
  for ( i = &v5[((unsigned __int64)*a2 >> 1) - 1]; i > v5; --i )
  {
    do
    {
      if ( !*i )
        v4 = (__int16)i;
      --i;
    }
    while ( i != v5 && *(i - 1) );
    v8 = (__int64 **)a1[1];
    String1.Buffer = i;
    String1.Length = v4 - (_WORD)i;
    String1.MaximumLength = v4 - (_WORD)i;
    while ( v8 != (__int64 **)v6 && v8 != a1 )
    {
      v9 = (__int64 *)v8;
      v10 = (__int64 ***)(v8 + 1);
      v8 = (__int64 **)v8[1];
      if ( v9[14] && RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)(v9 + 13), 1u) )
      {
        v11 = (__int64 *)*v9;
        if ( *(__int64 **)(*v9 + 8) != v9
          || (v12 = *v10, **v10 != v9)
          || (*v12 = v11, v11[1] = (__int64)v12, v13 = *a1, (__int64 **)(*a1)[1] != a1) )
        {
          __fastfail(3u);
        }
        *v9 = (__int64)v13;
        *v10 = a1;
        v13[1] = (__int64)v9;
        v14 = v9;
        if ( v6 != (__int64 *)a1 )
          v14 = v6;
        *a1 = v9;
        v6 = v14;
      }
    }
    v5 = (wchar_t *)*((_QWORD *)a2 + 1);
  }
  return 1;
}
