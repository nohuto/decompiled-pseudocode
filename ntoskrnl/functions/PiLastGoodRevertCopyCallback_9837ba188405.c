__int64 __fastcall PiLastGoodRevertCopyCallback(UNICODE_STRING *a1, __int64 a2, __int64 a3, _WORD *a4)
{
  ULONG_PTR Length; // rdx
  unsigned __int16 v6; // bx
  __int64 Pool2; // rsi
  wchar_t *Buffer; // rax
  __int16 v10; // ax
  unsigned int v11; // ebx
  UNICODE_STRING v12; // [rsp+20h] [rbp-18h] BYREF

  Length = a1->Length;
  v6 = *a4 + 2;
  v12 = 0LL;
  Pool2 = ExAllocatePool2(256LL, Length, 0x674C7050u);
  if ( !Pool2 )
    return 3221225626LL;
  Buffer = a1->Buffer;
  *(_OWORD *)Pool2 = *(_OWORD *)Buffer;
  *(_QWORD *)(Pool2 + 16) = *((_QWORD *)Buffer + 2);
  memmove((void *)(Pool2 + 24), &a1->Buffer[(unsigned __int64)v6 >> 1], a1->Length - (unsigned __int64)v6);
  v10 = a1->Length - v6;
  v12.Buffer = (wchar_t *)Pool2;
  v12.Length = v10 + 24;
  v12.MaximumLength = v10 + 24;
  v11 = IopFileUtilRename(a1, &v12, 1);
  ExFreePoolWithTag((PVOID)Pool2, 0);
  return v11;
}
