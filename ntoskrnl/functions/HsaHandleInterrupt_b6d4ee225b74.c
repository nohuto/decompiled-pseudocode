char __fastcall HsaHandleInterrupt(__int64 *a1)
{
  __int64 v1; // r9
  __int64 v3; // rax
  __int64 v4; // rcx
  char v5; // dl
  __int64 v6; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v1 = *a1;
  v3 = *(_QWORD *)(*a1 + 8224);
  if ( (v3 & 0x67) != 0 )
  {
    v4 = *a1;
    v5 = 1;
    v6 = v3 & 0x47;
    while ( 1 )
    {
      *(_QWORD *)(v4 + 8224) = v6;
      _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
      v6 = *(_QWORD *)(v1 + 8224) & 0x67LL;
      if ( (*(_QWORD *)(v1 + 8224) & 0x67) == 0 )
        break;
      ++AmdErrataMissingEdges;
      v4 = *a1;
    }
  }
  else
  {
    v5 = 0;
    ++AmdErrataSpuriousInterrupt;
  }
  return v5;
}
