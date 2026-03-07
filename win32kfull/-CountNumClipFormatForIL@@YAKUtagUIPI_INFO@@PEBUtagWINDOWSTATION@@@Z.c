__int64 __fastcall CountNumClipFormatForIL(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rdi
  unsigned int v3; // esi
  int v6; // ebp
  _QWORD *v7; // r14

  v2 = *(unsigned int **)(a2 + 128);
  v3 = 0;
  if ( v2 )
  {
    v6 = *(_DWORD *)(a2 + 136);
    if ( v6 )
    {
      v7 = v2 + 5;
      do
      {
        --v6;
        if ( (unsigned int)CheckClipboardAccessForIntegrityLevel(*v7, a1) || !(unsigned int)IsFmtBlocked(*v2) )
          ++v3;
        v2 += 8;
        v7 += 4;
      }
      while ( v6 );
    }
  }
  return v3;
}
