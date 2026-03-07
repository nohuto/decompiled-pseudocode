__int64 __fastcall RtlUnicodeStringCat(struct _UNICODE_STRING *a1, const struct _UNICODE_STRING *a2)
{
  size_t v4; // rdx
  NTSTATUS v5; // r8d
  NTSTATUS v6; // eax
  wchar_t *Buffer; // r9
  unsigned __int64 v8; // rcx
  __int16 v9; // r11
  __int16 v10; // dx
  wchar_t *v11; // rbx
  size_t v12; // r10
  size_t v14; // [rsp+20h] [rbp-28h]
  ULONG v15; // [rsp+28h] [rbp-20h]
  wchar_t *v16; // [rsp+30h] [rbp-18h] BYREF
  size_t v17; // [rsp+60h] [rbp+18h] BYREF
  size_t v18; // [rsp+68h] [rbp+20h] BYREF

  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v5 = RtlUnicodeStringValidateDestWorker_0(a1, &v16, &v17, &v18, v14, v15);
  if ( v5 >= 0 )
  {
    v6 = RtlUnicodeStringValidateWorker_0(a2, v4, v5);
    v5 = v6;
    if ( v6 >= 0 && a2 )
    {
      Buffer = a2->Buffer;
      v8 = (unsigned __int64)a2->Length >> 1;
    }
    else
    {
      Buffer = 0LL;
      v8 = 0LL;
      if ( v6 < 0 )
        return (unsigned int)v5;
    }
    v9 = v18;
    v10 = 0;
    v5 = 0;
    v11 = &v16[v18];
    v12 = v17 - v18;
    if ( v17 == v18 )
    {
LABEL_9:
      if ( v8 )
        v5 = -2147483643;
    }
    else
    {
      while ( v8 )
      {
        --v8;
        *v11++ = *Buffer++;
        ++v10;
        if ( !--v12 )
          goto LABEL_9;
      }
    }
    a1->Length = 2 * (v9 + v10);
  }
  return (unsigned int)v5;
}
