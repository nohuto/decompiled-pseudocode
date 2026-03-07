void __fastcall AuthzBasepAddSecurityAttributeToLists(__int64 a1, __int64 a2, char a3, char a4)
{
  _QWORD *v4; // r9
  _QWORD *v5; // rax
  _QWORD *v6; // r8

  if ( a4 && (*(_DWORD *)(a2 + 56) & 2) == 0 )
  {
    v4 = *(_QWORD **)(a1 + 40);
    v5 = (_QWORD *)(a2 + 16);
    if ( *v4 != a1 + 32 )
      goto FatalListEntryError_8;
    *v5 = a1 + 32;
    *(_QWORD *)(a2 + 24) = v4;
    *v4 = v5;
    *(_QWORD *)(a1 + 40) = v5;
    *(_DWORD *)(a2 + 56) |= 2u;
    ++*(_DWORD *)(a1 + 24);
  }
  if ( a3 && (*(_DWORD *)(a2 + 56) & 1) == 0 )
  {
    v6 = *(_QWORD **)(a1 + 16);
    if ( *v6 == a1 + 8 )
    {
      *(_QWORD *)a2 = a1 + 8;
      *(_QWORD *)(a2 + 8) = v6;
      *v6 = a2;
      *(_QWORD *)(a1 + 16) = a2;
      *(_DWORD *)(a2 + 56) |= 1u;
      ++*(_DWORD *)a1;
      return;
    }
FatalListEntryError_8:
    __fastfail(3u);
  }
}
