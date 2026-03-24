/*
 * XREFs of XmInitializeEmulator @ 0x1403C4E1C
 * Callers:
 *     x86BiosInitializeBiosEx @ 0x1403C4D50 (x86BiosInitializeBiosEx.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x140397B50 (x86BiosTranslateAddress.c)
 *     memset @ 0x140414200 (memset.c)
 */

__int64 XmInitializeEmulator()
{
  _WORD *v0; // rax
  int *v1; // rdi
  __int64 v2; // rcx
  __int64 result; // rax

  memset(&XmContext, 0, 0x1C0uLL);
  v0 = &unk_140CED5DE;
  do
    *v0-- = -1;
  while ( (__int64)v0 >= (__int64)word_140CED5D4 );
  dword_140CED730 = 0x8000000;
  dword_140CED5B8 = 2048;
  word_140CED5CC = 0;
  qword_140CED738 = (__int64)x86BiosReadIoSpace;
  qword_140CED740 = (__int64)x86BiosWriteIoSpace;
  qword_140CED748 = (__int64)x86BiosTranslateAddress;
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
