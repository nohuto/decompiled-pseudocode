__int64 __fastcall PiControlCopyUserModeCallersBuffer(
        void *a1,
        char *Src,
        size_t Size,
        ULONG Alignment,
        char a5,
        int a6)
{
  char *v8; // rcx
  size_t v9; // rsi

  if ( a5 )
  {
    if ( a6 )
    {
      if ( (_DWORD)Size )
      {
        if ( ((Alignment - 1) & (unsigned int)Src) != 0 )
          ExRaiseDatatypeMisalignment();
        v8 = &Src[(unsigned int)Size];
        if ( (unsigned __int64)v8 > 0x7FFFFFFF0000LL || v8 < Src )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v9 = (unsigned int)Size;
    }
    else
    {
      v9 = (unsigned int)Size;
      ProbeForWrite(a1, (unsigned int)Size, Alignment);
    }
    memmove(a1, Src, v9);
    return 0LL;
  }
  else
  {
    memmove(a1, Src, (unsigned int)Size);
    return 0LL;
  }
}
