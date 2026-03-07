char __fastcall RtlFirstFreeAce(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r10d
  unsigned __int64 v3; // r8
  unsigned int v5; // ecx

  v2 = 0;
  v3 = a1 + 8;
  *a2 = 0LL;
  v5 = *(unsigned __int16 *)(a1 + 4);
  if ( v5 )
  {
    while ( v3 < a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    {
      ++v2;
      v3 += *(unsigned __int16 *)(v3 + 2);
      if ( v2 >= v5 )
        goto LABEL_2;
    }
    return 0;
  }
  else
  {
LABEL_2:
    if ( v3 <= a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
      *a2 = v3;
    return 1;
  }
}
