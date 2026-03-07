unsigned __int64 __fastcall HalpBlkInitializeIdt(__int64 a1, char *a2)
{
  unsigned int v3; // edx
  void (__fastcall __noreturn **v4)(); // r8
  char *v5; // rbx
  unsigned __int64 result; // rax
  void (__fastcall __noreturn *v7)(); // rcx
  __int16 v8; // ax

  *(_QWORD *)(a1 + 8) = a2;
  *(_WORD *)(a1 + 6) = 4095;
  memset(a2, 0, 0x1000uLL);
  v3 = 0;
  v4 = &off_140C08DB8;
  v5 = a2 + 4;
  do
  {
    if ( v3 == *((unsigned __int8 *)v4 - 8) )
    {
      *((_WORD *)v5 - 2) = *(_WORD *)v4;
      *((_WORD *)v5 - 1) = 16;
      *(_WORD *)v5 = *(_WORD *)v5 & 0xF8 | *((_BYTE *)v4 - 7) & 7 | 0x8E00;
      result = (unsigned __int64)*(unsigned int *)v4 >> 16;
      *((_WORD *)v5 + 1) = result;
      v7 = *v4;
      v4 += 2;
    }
    else
    {
      *((_WORD *)v5 - 1) = 16;
      v7 = (void (__fastcall __noreturn *)())((char *)HalpBlkUnexpectedInterrupt + 8 * v3);
      v8 = *(_WORD *)v5 & 0xF8;
      *((_WORD *)v5 - 2) = (_WORD)v7;
      *(_WORD *)v5 = v8 | 0x8E00;
      result = (unsigned __int64)v7 >> 16;
      *((_WORD *)v5 + 1) = WORD1(v7);
    }
    ++v3;
    *((_DWORD *)v5 + 1) = HIDWORD(v7);
    v5 += 16;
  }
  while ( v3 < 0x100 );
  return result;
}
