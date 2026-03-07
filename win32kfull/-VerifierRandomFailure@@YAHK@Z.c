__int64 __fastcall VerifierRandomFailure(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // rbx
  int v3; // eax

  v1 = 0;
  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  if ( (*(_DWORD *)(v2 + 23592) & 4) != 0 )
  {
    if ( *(_DWORD *)(v2 + 23596) )
      goto LABEL_6;
    v3 = MEMORY[0xFFFFF78000000014];
    if ( MEMORY[0xFFFFF78000000014] > *(_QWORD *)(v2 + 23584) + 0x117D78400LL )
    {
      *(_DWORD *)(v2 + 23596) = 1;
      *(_DWORD *)(v2 + 23600) = v3;
    }
    if ( *(_DWORD *)(v2 + 23596) )
    {
LABEL_6:
      if ( (RtlRandom((PULONG)(v2 + 23600)) & *(_DWORD *)(v2 + 23604)) == 0 )
        return 1;
    }
  }
  return v1;
}
