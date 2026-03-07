char __fastcall I_MinCryptCheckEKURequirements(unsigned int a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // eax
  __int64 v7; // rdi
  __int64 v8; // rcx
  char v9; // bp
  int v10; // r15d
  size_t v11; // r12
  __int64 i; // r14
  size_t Size; // [rsp+20h] [rbp-C8h] BYREF
  void *Buf2; // [rsp+28h] [rbp-C0h]
  char v16; // [rsp+30h] [rbp-B8h] BYREF

  HIDWORD(Size) = 0;
  if ( !a1 )
    return 1;
  if ( !a3 )
    return 1;
  v6 = *(_DWORD *)(a3 + 8);
  if ( !v6 )
    return 1;
  if ( v6 <= a1 )
  {
    v7 = 0LL;
    Buf2 = &v16;
    while ( 1 )
    {
      v8 = *(_QWORD *)(a3 + 8 * v7 + 16);
      v9 = 0;
      LODWORD(Size) = 127;
      if ( (int)MinAsn1StringToOid(v8, &Size) < 0 )
        break;
      v10 = 0;
      if ( a1 )
      {
        v11 = (unsigned int)Size;
        for ( i = a2; *(_DWORD *)i != (_DWORD)v11 || memcmp(*(const void **)(i + 8), Buf2, v11); i += 16LL )
        {
          if ( ++v10 >= a1 )
            return v9;
        }
        v7 = (unsigned int)(v7 + 1);
        v9 = 1;
        if ( (unsigned int)v7 < *(_DWORD *)(a3 + 8) )
          continue;
      }
      return v9;
    }
  }
  return 0;
}
