__int64 __fastcall CCD_SET_STRING_ID::_ReallocString(struct _STRING *a1, USHORT a2)
{
  __int64 v2; // rdi
  CHAR *v4; // rax
  CHAR *v5; // rbp

  v2 = a2;
  if ( a2 <= a1->MaximumLength )
    return 0LL;
  v4 = (CHAR *)operator new[](a2, 0x63644356u, 256LL);
  v5 = v4;
  if ( v4 )
  {
    memmove(v4, a1->Buffer, a1->Length);
    operator delete(a1->Buffer);
    a1->Buffer = v5;
    a1->MaximumLength = v2;
    return 0LL;
  }
  WdLogSingleEntry1(6LL, v2);
  return 3221225495LL;
}
