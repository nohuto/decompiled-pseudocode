__int64 __fastcall HaliWheaInitProcessorGenericSection(_QWORD *a1)
{
  __int64 v12; // rax
  __int64 InitialApicId; // rcx
  __int64 result; // rax
  __int64 v20; // [rsp+20h] [rbp-30h]

  memset(a1, 0, 0xC0uLL);
  *a1 |= 0x43uLL;
  _RAX = 1LL;
  *((_BYTE *)a1 + 9) = 2;
  __asm { cpuid }
  a1[2] = (unsigned int)_RAX;
  if ( HalpGetCpuVendor() == 2 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    if ( (_RDX & 0x8000) != 0 )
    {
      v12 = a1[2];
      *a1 |= 0x2000uLL;
      LODWORD(v20) = v12;
      _RAX = 26LL;
      __asm { cpuid }
      HIDWORD(v20) = _RAX;
      a1[2] = v20;
    }
  }
  InitialApicId = KeGetCurrentPrcb()->InitialApicId;
  *a1 |= 0x100uLL;
  result = 0LL;
  a1[19] = InitialApicId;
  return result;
}
