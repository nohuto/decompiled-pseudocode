__int64 __fastcall SepAllocateAndInitializeCachedHandleEntry(int *a1, __int64 *a2)
{
  int v3; // ecx
  __int64 v5; // r8
  __int64 v6; // rsi
  __int64 Pool2; // rax
  __int64 v8; // rbx

  *a2 = 0LL;
  v3 = *a1;
  v5 = 72LL;
  if ( v3 )
  {
    if ( v3 == 1 )
      v5 = *((unsigned __int16 *)a1 + 5) + 72LL;
  }
  else
  {
    v5 = 4LL * *(unsigned __int8 *)(*((_QWORD *)a1 + 1) + 1LL) + 80;
  }
  v6 = (v5 + 3) & 0xFFFFFFFCLL;
  Pool2 = ExAllocatePool2(256LL, v6, 1934386515LL);
  v8 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_QWORD *)(Pool2 + 64) = 0LL;
  *(_DWORD *)(Pool2 + 56) = 0;
  *(_QWORD *)(Pool2 + 24) = 1LL;
  *(_DWORD *)(Pool2 + 32) = *a1;
  if ( *a1 )
  {
    if ( *a1 == 1 )
    {
      *(_WORD *)(Pool2 + 40) = *((_WORD *)a1 + 4);
      *(_WORD *)(Pool2 + 42) = *((_WORD *)a1 + 5);
      *(_QWORD *)(Pool2 + 48) = Pool2 + 72;
      RtlCopyUnicodeString((PUNICODE_STRING)(Pool2 + 40), (PCUNICODE_STRING)(a1 + 2));
    }
  }
  else
  {
    *(_QWORD *)(Pool2 + 40) = Pool2 + 72;
    RtlCopySid(v6 - 72, (PSID)(Pool2 + 72), *((PSID *)a1 + 1));
  }
  *a2 = v8;
  return 0LL;
}
