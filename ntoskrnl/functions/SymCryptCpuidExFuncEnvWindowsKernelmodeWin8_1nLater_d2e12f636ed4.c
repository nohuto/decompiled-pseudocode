__int64 __fastcall SymCryptCpuidExFuncEnvWindowsKernelmodeWin8_1nLater(_DWORD *a1, unsigned int a2)
{
  __int64 result; // rax

  _RAX = a2;
  __asm { cpuid }
  *a1 = result;
  a1[1] = _RBX;
  a1[2] = _RCX;
  a1[3] = _RDX;
  return result;
}
