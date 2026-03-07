__int64 __fastcall ExpConvertArcName(
        unsigned int a1,
        __int64 a2,
        unsigned int *a3,
        const wchar_t *a4,
        wchar_t *Src,
        unsigned int MaxCount)
{
  unsigned int v9; // esi
  unsigned int v10; // r15d
  wchar_t *Pool2; // rax
  wchar_t *v12; // rdi
  NTSTATUS v14; // ebx
  NTSTATUS OutputNT; // eax
  wchar_t *Buffer; // rcx
  unsigned int v17; // ebx
  __int64 v18; // rax
  unsigned int v19; // ebx
  __int64 v20; // rax
  wchar_t *v21; // rsi
  __int64 v22; // r14
  wchar_t *v23; // r14
  UNICODE_STRING v24[3]; // [rsp+20h] [rbp-38h] BYREF

  v9 = MaxCount + 10;
  v10 = 2 * (MaxCount + 10);
  v24[0] = 0LL;
  Pool2 = (wchar_t *)ExAllocatePool2(64LL, v10, 1920364101LL);
  v12 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  wcscpy_s(Pool2, v9, L"\\ArcName\\");
  wcsncat_s(v12, v9, a4, MaxCount);
  v12[MaxCount + 9] = 0;
  if ( a1 != 3 )
  {
    v17 = v10 + 12;
    if ( Src )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( Src[v18] );
      v17 += 2 * v18;
    }
    v19 = v17 + 2;
    v20 = ExAllocatePool2(64LL, v19, 1920364101LL);
    v21 = (wchar_t *)v20;
    if ( !v20 )
    {
      ExFreePoolWithTag(v12, 0);
      return 3221225626LL;
    }
    v22 = v20 + 12;
    *(_DWORD *)v20 = 1;
    *(_DWORD *)(v20 + 4) = v19;
    *(_DWORD *)(v20 + 8) = 3;
    wcscpy_s((wchar_t *)(v20 + 12), (unsigned __int64)(v19 - 12) >> 1, v12);
    v23 = (wchar_t *)(v10 + v22);
    ExFreePoolWithTag(v12, 0);
    if ( Src )
      wcscpy_s(v23, (unsigned __int64)(v19 - v10 - 12) >> 1, Src);
    else
      *v23 = 0;
    OutputNT = ExpTranslateNtPath(v21, a1, a2, a3);
    Buffer = v21;
    goto LABEL_16;
  }
  v14 = ExpTranslateSymbolicLink(v12, v24);
  ExFreePoolWithTag(v12, 0);
  if ( v14 >= 0 )
  {
    OutputNT = ExpCreateOutputNT(a2, a3, (const wchar_t **)v24, Src);
    Buffer = v24[0].Buffer;
LABEL_16:
    v14 = OutputNT;
    ExFreePoolWithTag(Buffer, 0);
  }
  return (unsigned int)v14;
}
