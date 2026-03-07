__int64 __fastcall AllocateUnicodeString(struct _UNICODE_STRING *a1, const void **a2)
{
  USHORT v4; // si
  WCHAR *v5; // rax
  unsigned int v6; // eax
  USHORT v8; // [rsp+58h] [rbp+10h] BYREF

  v8 = 0;
  if ( !a2 )
  {
    RtlInitUnicodeString(a1, 0LL);
    return 1LL;
  }
  if ( UShortAdd(*(_WORD *)a2, 2u, &v8) >= 0 )
  {
    v4 = v8;
    v5 = (WCHAR *)Win32AllocPoolWithQuotaZInit(v8, 2020897621LL);
    a1->Buffer = v5;
    if ( v5 )
    {
      memmove(v5, a2[1], *(unsigned __int16 *)a2);
      a1->MaximumLength = v4;
      v6 = *(unsigned __int16 *)a2;
      a1->Length = v6;
      a1->Buffer[(unsigned __int64)v6 >> 1] = 0;
      return 1LL;
    }
  }
  return 0LL;
}
