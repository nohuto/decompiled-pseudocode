__int64 __fastcall DbgkWerAddSecondaryData(__int64 a1, __int128 *a2, const void *a3, unsigned int a4)
{
  size_t v4; // rsi
  int v8; // eax
  __int64 v9; // rbp
  __int64 v10; // rbp
  int v11; // ecx
  __int64 result; // rax
  _OWORD *Pool2; // rdi
  void *v14; // rax
  __int128 v15; // xmm0

  v4 = a4;
  if ( !a1 || !a3 || !a2 || !a4 )
  {
    DbgPrintEx(5u, 0, "DBGK: DbgkWerAddSecondaryData: Invalid parameter.\n\n");
    return 3221225485LL;
  }
  v8 = *(_DWORD *)(a1 + 88);
  if ( v8 != 1 )
  {
    if ( v8 != 2 )
      return 3221225659LL;
    v10 = *(_QWORD *)(a1 + 120);
    if ( v10 )
    {
      v9 = v10 + 32;
      goto LABEL_10;
    }
    return 3221225485LL;
  }
  v9 = a1 + 152;
LABEL_10:
  v11 = *(_DWORD *)(a1 + 80);
  if ( a4 > v11 - *(_DWORD *)(a1 + 84) )
  {
    DbgPrintEx(
      5u,
      0,
      "DBGK: DbgkWerAddSecondaryData: Secondary data exceeds buffer. Size 0x%x Maxsize 0x%x Datasize 0x%x.\n\n",
      a4,
      v11,
      *(_DWORD *)(a1 + 84));
    return 3221225626LL;
  }
  Pool2 = (_OWORD *)ExAllocatePool2(256LL, 40LL, 1466393156LL);
  if ( !Pool2 )
    return 3221225495LL;
  v14 = (void *)ExAllocatePool2(256LL, (v4 + 4095) & 0xFFFFFFFFFFFFF000uLL, 1466393156LL);
  *((_QWORD *)Pool2 + 2) = v14;
  if ( !v14 )
  {
    ExFreePoolWithTag(Pool2, 0x57676244u);
    return 3221225495LL;
  }
  memmove(v14, a3, v4);
  v15 = *a2;
  *((_DWORD *)Pool2 + 6) = v4;
  *Pool2 = v15;
  *(_DWORD *)(a1 + 84) += v4;
  if ( *(_DWORD *)(a1 + 88) == 1 )
    ++*(_DWORD *)(a1 + 168);
  *((_QWORD *)Pool2 + 4) = *(_QWORD *)(v9 + 8);
  result = 0LL;
  *(_QWORD *)(v9 + 8) = Pool2;
  return result;
}
