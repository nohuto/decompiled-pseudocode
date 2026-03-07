__int64 __fastcall VfGetVerifierInformation(void *a1, size_t Size, unsigned int *a3, int a4)
{
  unsigned int v7; // eax
  unsigned int v8; // esi
  __int64 Pool2; // rax
  void *v10; // rbx
  unsigned int VerifierInformation; // edi
  unsigned int v12; // eax

  *a3 = 0;
  v7 = 10485760;
  if ( (unsigned int)Size <= 0xA00000 )
    v7 = Size;
  v8 = v7;
  Pool2 = ExAllocatePool2(64LL, v7, 1886213206LL);
  v10 = (void *)Pool2;
  if ( Pool2 )
  {
    VerifierInformation = VfSuspectDriversGetVerifierInformation(Pool2, v8, (_DWORD)a3, (_DWORD)a1, a4);
    v12 = *a3;
    if ( *a3 > v8 )
      v12 = v8;
    memmove(a1, v10, v12);
    ExFreePoolWithTag(v10, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return VerifierInformation;
}
