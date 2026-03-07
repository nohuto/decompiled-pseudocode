__int64 __fastcall MiCompareActiveCrcEntries(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  unsigned int v4; // eax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 < *(_QWORD *)(a2 + 8) )
    return 0xFFFFFFFFLL;
  if ( v2 <= *(_QWORD *)(a2 + 8) )
  {
    v3 = *(_QWORD *)(a1 + 24);
    if ( v3 >= *(_QWORD *)(a2 + 24) )
    {
      if ( v3 <= *(_QWORD *)(a2 + 24) )
      {
        v4 = *(_DWORD *)(a1 + 32);
        if ( v4 <= *(_DWORD *)(a2 + 32) )
          return (unsigned int)-(v4 < *(_DWORD *)(a2 + 32));
      }
      return 1LL;
    }
    return 0xFFFFFFFFLL;
  }
  return 1LL;
}
