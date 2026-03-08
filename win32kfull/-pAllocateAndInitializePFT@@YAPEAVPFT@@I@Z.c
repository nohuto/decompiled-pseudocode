/*
 * XREFs of ?pAllocateAndInitializePFT@@YAPEAVPFT@@I@Z @ 0x1C00ECA6C
 * Callers:
 *     ?bInitPrivatePFT@@YAHXZ @ 0x1C026D728 (-bInitPrivatePFT@@YAHXZ.c)
 *     bInitFontTables @ 0x1C03B7A90 (bInitFontTables.c)
 * Callees:
 *     <none>
 */

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
