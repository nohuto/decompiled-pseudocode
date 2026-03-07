bool __fastcall TR_DoesSegmentContainDequeuePointer(__int64 a1, int a2, unsigned int a3, signed __int64 a4)
{
  unsigned __int64 v4; // r10
  __int64 v5; // rcx
  unsigned __int64 v6; // r11
  int v7; // r8d

  v4 = *(unsigned int *)(a1 + 44);
  v5 = *(_QWORD *)(a1 + 24);
  v6 = 16LL * a3;
  if ( a4 < v5 + (unsigned int)(16 * a2) )
    return 0;
  v7 = 16 * a3;
  if ( v6 <= v4 )
    LODWORD(v4) = v7;
  return a4 < v5 + (unsigned int)v4;
}
