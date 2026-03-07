struct PFT *__fastcall pAllocateAndInitializePFT(int a1)
{
  struct PFT *result; // rax

  if ( 8 * a1 == -40 )
    return 0LL;
  result = (struct PFT *)Win32AllocPoolZInit((unsigned int)(8 * a1 + 40), 1952870471LL);
  if ( result )
  {
    *((_DWORD *)result + 7) = 0;
    *((_DWORD *)result + 8) = 0;
    *((_DWORD *)result + 6) = a1;
  }
  return result;
}
