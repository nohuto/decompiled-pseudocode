_QWORD *__fastcall Set<DMMVIDPNPRESENTPATH>::FindByValue(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v3; // r8
  _QWORD *v4; // r8
  __int64 v6; // rcx

  v2 = a1 + 24;
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 == a1 + 24 )
    return 0LL;
  v4 = (_QWORD *)(v3 - 8);
  while ( v4 )
  {
    if ( *(_DWORD *)(v4[11] + 24LL) == *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL)
      && *(_DWORD *)(v4[12] + 24LL) == *(_DWORD *)(*(_QWORD *)(a2 + 96) + 24LL) )
    {
      break;
    }
    v6 = v4[1];
    v4 = (_QWORD *)(v6 - 8);
    if ( v6 == v2 )
      v4 = 0LL;
  }
  return v4;
}
