__int64 __fastcall KiFindSubNodeForProcessorNumber(__int64 a1, unsigned __int16 *a2, __int64 *a3, _QWORD *a4)
{
  unsigned __int16 v5; // r10
  __int64 v6; // rdx
  __int64 v7; // rax

  v5 = 0;
  if ( !KiSubNodeCount )
    return 3221226021LL;
  while ( 1 )
  {
    v6 = KiSubNodeConfigBlock + 24LL * v5;
    if ( (*(_BYTE *)(v6 + 5) & 1) != 0 && *(_WORD *)(v6 + 6) == *(_WORD *)a1 )
    {
      v7 = *(_QWORD *)(v6 + 16);
      if ( _bittest64(&v7, *(unsigned __int8 *)(a1 + 2)) )
        break;
    }
    if ( ++v5 >= (unsigned __int16)KiSubNodeCount )
      return 3221226021LL;
  }
  if ( a2 )
    *a2 = v5;
  if ( a3 )
    *a3 = v6;
  if ( a4 )
    *a4 = *(_QWORD *)(KiSubNodes + 8LL * v5);
  return 0LL;
}
