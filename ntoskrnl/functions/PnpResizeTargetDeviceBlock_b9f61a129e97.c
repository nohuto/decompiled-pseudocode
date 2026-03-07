__int64 __fastcall PnpResizeTargetDeviceBlock(const void **a1, unsigned int a2)
{
  unsigned int v3; // edi
  _DWORD *v4; // rcx
  unsigned int v5; // r14d
  __int64 v6; // rax
  int v7; // eax
  int v8; // ecx
  unsigned int v9; // ebp
  _DWORD *CriticalMemory; // rax
  _DWORD *v11; // rsi
  const void *v12; // rbx

  v3 = 0;
  v4 = *a1;
  v5 = v4[37] + 112;
  v6 = -1LL;
  do
    ++v6;
  while ( *((_WORD *)v4 + v6 + 80) );
  v7 = 2 * v6 + 2;
  v8 = 0;
  if ( v7 != 2 )
    v8 = v7;
  v9 = v5 - v8 + 400;
  if ( v9 > v5 )
  {
    CriticalMemory = (_DWORD *)PnpAllocateCriticalMemory(a2, 256LL, v9, 1265659472LL);
    v11 = CriticalMemory;
    if ( CriticalMemory )
    {
      v12 = *a1;
      memmove(CriticalMemory, *a1, v5);
      v11[16] = 1;
      v11[37] = v9 - 112;
      *((_QWORD *)v11 + 10) = v12;
      *a1 = v11;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v3;
}
