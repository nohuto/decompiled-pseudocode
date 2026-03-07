__int64 XmInitializeEmulator()
{
  _WORD *v0; // rax
  _DWORD *v1; // rdi
  __int64 v2; // rcx
  __int64 result; // rax

  memset(&XmContext, 0, 0x1C0uLL);
  v0 = &unk_140D1744E;
  do
    *v0-- = -1;
  while ( (__int64)v0 >= (__int64)word_140D17444 );
  dword_140D175A0 = 0x8000000;
  dword_140D17428 = 2048;
  word_140D1743C = 0;
  qword_140D175A8 = (__int64)x86BiosReadIoSpace;
  qword_140D175B0 = (__int64)x86BiosWriteIoSpace;
  qword_140D175B8 = (__int64)x86BiosTranslateAddress;
  v1 = (_DWORD *)x86BiosTranslateAddress(0LL, 0LL);
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
