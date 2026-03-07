__int64 __fastcall MiCaptureUlongPtrArray(_QWORD *a1, unsigned int *a2, unsigned __int64 a3)
{
  _KPROCESS *Process; // r8
  __int16 v6; // ax
  char v7; // al
  unsigned __int64 v8; // rax
  unsigned __int64 i; // rax
  __int64 v10; // rcx
  size_t v11; // r8

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process[1].Affinity.StaticBitmap[30]
    && ((v6 = WORD2(Process[2].Affinity.StaticBitmap[20]), v6 == 332) || v6 == 452 ? (v7 = 1) : (v7 = 0), v7) )
  {
    if ( 4 * a3 )
    {
      if ( ((unsigned __int8)a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v8 = (unsigned __int64)&a2[a3];
      if ( v8 > 0x7FFFFFFF0000LL || v8 < (unsigned __int64)a2 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    for ( i = 0LL; i < a3; ++i )
    {
      v10 = a2[i];
      a1[i] = v10;
      if ( (v10 & 0xFFFFFFFF80000000uLL) != 0 )
      {
        LODWORD(v10) = v10 & 0x7FFFFFFF;
        a1[i] = v10;
        a1[i] = v10 | 0x8000000000000000uLL;
      }
    }
  }
  else
  {
    v11 = 2 * a3;
    if ( 8 * a3 )
    {
      if ( ((unsigned __int8)a2 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a2[v11] > 0x7FFFFFFF0000LL || &a2[v11] < a2 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(a1, a2, v11 * 4);
  }
  return 0LL;
}
