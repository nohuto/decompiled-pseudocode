__int64 __fastcall HeadlessTerminalAddResources(void *Src, size_t Size, char a3, _QWORD *a4, _DWORD *a5)
{
  size_t v8; // rbx
  __int64 result; // rax
  void *Pool2; // rax
  PHYSICAL_ADDRESS v11; // rax
  _DWORD *v12; // rcx
  ULONG AddressSpace; // [rsp+30h] [rbp-28h] BYREF
  LARGE_INTEGER TranslatedAddress; // [rsp+38h] [rbp-20h] BYREF

  TranslatedAddress.QuadPart = 0LL;
  AddressSpace = 0;
  v8 = (unsigned int)Size;
  if ( !HeadlessGlobals || (HeadlessGlobals[6] & 0x1000) != 0 )
  {
    *a4 = 0LL;
    result = 0LL;
LABEL_3:
    *a5 = 0;
    return result;
  }
  *a5 = Size + 36;
  if ( (int)Size + 36 < (unsigned int)Size
    || (Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)(Size + 36), 1936483400LL), (*a4 = Pool2) == 0LL) )
  {
    result = 3221225626LL;
    goto LABEL_3;
  }
  memmove(Pool2, Src, v8);
  v11.QuadPart = HeadlessGlobals[8];
  if ( a3 )
  {
    AddressSpace = 1;
    HalTranslateBusAddress(Internal, 0, v11, &AddressSpace, &TranslatedAddress);
  }
  else
  {
    TranslatedAddress.QuadPart = HeadlessGlobals[8];
  }
  v12 = (_DWORD *)*a4;
  ++*v12;
  *(_QWORD *)((char *)v12 + v8) = 1LL;
  *(_DWORD *)((char *)v12 + v8 + 12) = 1;
  *(_DWORD *)((char *)v12 + v8 + 8) = 0;
  *(_DWORD *)((char *)v12 + v8 + 16) = 66049;
  *(LARGE_INTEGER *)((char *)v12 + v8 + 20) = TranslatedAddress;
  result = 0LL;
  *(_DWORD *)((char *)v12 + v8 + 28) = 8;
  return result;
}
