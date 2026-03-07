__int64 __fastcall GetNamespaceId(__int64 a1, unsigned int a2)
{
  __int64 v2; // rcx

  if ( a2 < *(_DWORD *)(a1 + 232) && (_mm_lfence(), (v2 = *(_QWORD *)(a1 + 8LL * a2 + 1952)) != 0) )
    return *(unsigned int *)(v2 + 16);
  else
    return 0LL;
}
