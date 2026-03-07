__int64 __fastcall HviGetHypervisorFeatures(_DWORD *a1)
{
  __int64 result; // rax

  _RAX = 1LL;
  __asm { cpuid }
  if ( (int)_RCX >= 0 )
    goto LABEL_4;
  _RAX = 1073741825LL;
  __asm { cpuid }
  if ( (_DWORD)_RAX == 1986945624 )
  {
LABEL_4:
    LODWORD(_RAX) = 0;
  }
  else
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
  }
  if ( (_DWORD)_RAX == 824407624 )
  {
    _RAX = 1073741827LL;
    __asm { cpuid }
    *a1 = result;
    a1[1] = _RBX;
    a1[2] = _RCX;
    a1[3] = _RDX;
  }
  else
  {
    result = 0LL;
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
  }
  return result;
}
