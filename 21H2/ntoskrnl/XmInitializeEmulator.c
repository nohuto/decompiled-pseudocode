/*
 * XREFs of XmInitializeEmulator @ 0x1403D04EC
 * Callers:
 *     x86BiosInitializeBiosEx @ 0x1403D0428 (x86BiosInitializeBiosEx.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x1403A3520 (x86BiosTranslateAddress.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 XmInitializeEmulator()
{
  _WORD *v0; // rax
  int *v1; // rdi
  __int64 v2; // rcx
  __int64 result; // rax

  memset(&XmContext, 0, 0x1C0uLL);
  v0 = &unk_140CF714E;
  do
    *v0-- = -1;
  while ( (__int64)v0 >= (__int64)word_140CF7144 );
  dword_140CF72A0 = 0x8000000;
  dword_140CF7128 = 2048;
  word_140CF713C = 0;
  qword_140CF72A8 = (__int64)x86BiosReadIoSpace;
  qword_140CF72B0 = (__int64)x86BiosWriteIoSpace;
  qword_140CF72B8 = (__int64)x86BiosTranslateAddress;
  v1 = x86BiosTranslateAddress(0, 0);
  XmEmulatorInitialized = 1;
  v2 = 256LL;
  v1[320] = 207;
  result = 1280LL;
  while ( v2 )
  {
    *v1++ = 1280;
    --v2;
  }
  return result;
}
