__int64 __fastcall RtlUnicodeStringCopy(struct _UNICODE_STRING *a1, const struct _UNICODE_STRING *a2)
{
  __int16 v3; // bx
  size_t v5; // rdx
  NTSTATUS v6; // r8d
  NTSTATUS v7; // eax
  PWSTR Buffer; // rdx
  unsigned __int64 v9; // rcx
  size_t v10; // r9
  wchar_t *v11; // r11
  __int16 v12; // r10
  size_t v14; // [rsp+20h] [rbp-18h]
  ULONG v15; // [rsp+28h] [rbp-10h]
  size_t v16; // [rsp+50h] [rbp+18h] BYREF
  wchar_t *v17; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v17 = 0LL;
  v16 = 0LL;
  v6 = RtlUnicodeStringValidateDestWorker(a1, &v17, &v16, 0LL, v14, v15);
  if ( v6 >= 0 )
  {
    v7 = RtlUnicodeStringValidateWorker(a2, v5, v6);
    v6 = v7;
    if ( v7 >= 0 && a2 )
    {
      Buffer = a2->Buffer;
      v9 = (unsigned __int64)a2->Length >> 1;
    }
    else
    {
      Buffer = 0LL;
      v9 = 0LL;
      if ( v7 < 0 )
      {
LABEL_10:
        a1->Length = 2 * v3;
        return (unsigned int)v6;
      }
    }
    v10 = v16;
    v6 = 0;
    v11 = v17;
    v12 = 0;
    if ( v16 )
    {
      while ( v9 )
      {
        --v9;
        *v11++ = *Buffer++;
        ++v12;
        if ( !--v10 )
          goto LABEL_14;
      }
    }
    else
    {
LABEL_14:
      if ( v9 )
        v6 = -2147483643;
    }
    v3 = v12;
    goto LABEL_10;
  }
  return (unsigned int)v6;
}
