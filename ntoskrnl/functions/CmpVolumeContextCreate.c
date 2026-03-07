__int64 __fastcall CmpVolumeContextCreate(__int64 a1, __int64 a2, struct _PRIVILEGE_SET **a3)
{
  struct _PRIVILEGE_SET *Memory; // rax
  unsigned int v7; // edi
  struct _PRIVILEGE_SET *v8; // rbx
  int v9; // esi

  Memory = (struct _PRIVILEGE_SET *)CmSiAllocateMemory(72LL, 0x39384D43u);
  v7 = 0;
  v8 = Memory;
  if ( Memory )
  {
    memset(Memory, 0, 0x48uLL);
    *(_QWORD *)&v8[1].Control = 1LL;
    v9 = CmpVolumeContextStart(v8, a1, a2);
    if ( v9 < 0 )
    {
      CmpVolumeContextCleanup(v8);
      CmSiFreeMemory(v8);
      return (unsigned int)v9;
    }
    else
    {
      *a3 = v8;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
