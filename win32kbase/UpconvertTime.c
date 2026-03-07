unsigned __int64 __fastcall UpconvertTime(unsigned int a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rax

  if ( !a1 )
    return 0LL;
  v1 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  v2 = HIDWORD(v1);
  if ( (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 96 )
  {
    if ( a1 > (unsigned int)v1 )
      v2 = (unsigned int)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                          * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 96)
                        - 1);
  }
  return a1 | (v2 << 32);
}
