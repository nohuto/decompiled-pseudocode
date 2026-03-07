__int64 __fastcall KiInitializePrcbContext(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  char v4; // di
  unsigned int v5; // ebp
  void *IndependentPages; // rax
  void *v7; // rsi
  _QWORD *v8; // rdx
  int v9; // r10d
  _DWORD *v10; // r8
  int v12; // eax
  unsigned int v13; // eax

  if ( (KeFeatureBits & 0x800000) != 0 )
  {
    v3 = (unsigned int)(KeXStateLength + KiXSaveAreaLengthFull + 893);
    if ( (_BYTE)KiKernelCetEnabled )
      v3 = (unsigned int)(v3 + 32);
    v4 = 1;
    if ( (_DWORD)v3 )
    {
      v5 = v3;
      IndependentPages = (void *)MmAllocateIndependentPages(v3, a2);
      v7 = IndependentPages;
      if ( !IndependentPages )
        return 3221225626LL;
      memset(IndependentPages, 0, v5);
      v8 = (_QWORD *)(a1 + 35280);
      *(_QWORD *)(a1 + 35280) = ((unsigned __int64)v7 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
      goto LABEL_7;
    }
  }
  else
  {
    v4 = 0;
  }
  v8 = (_QWORD *)(a1 + 35280);
  if ( v4 )
  {
LABEL_7:
    v9 = KeXStateLength - 512;
    v10 = (_DWORD *)(((unsigned int)KiXSaveAreaLengthFull + 15LL + *v8) & 0xFFFFFFFFFFFFFFF0uLL);
    v10[310] = -1232;
    v10[311] = 1232;
    v10[313] = v9;
    v10[308] = -1232;
    v10[312] = (((_DWORD)v10 + 1327) & 0xFFFFFFC0) - ((_DWORD)v10 + 1232);
    v10[309] = (((_DWORD)v10 + 1327) & 0xFFFFFFC0) - (_DWORD)v10 + v9;
    if ( (_BYTE)KiKernelCetEnabled )
    {
      v10[315] = 24;
      v13 = (((((_DWORD)v10 + 1327) & 0xFFFFFFC0) + v9 + 7) & 0xFFFFFFF8) - ((_DWORD)v10 + 1232);
      v10[314] = v13;
      v10[309] = v13 + 1256;
    }
    *(_QWORD *)(a1 + 35264) = v10;
  }
  *(_DWORD *)(a1 + 35272) = 1048587;
  if ( v4 && !*(_DWORD *)(a1 + 36) )
  {
    *(_DWORD *)(a1 + 35272) = 1048651;
    v12 = *(_DWORD *)(a1 + 35272);
    if ( (_BYTE)KiKernelCetEnabled )
      v12 = 1048779;
    *(_DWORD *)(a1 + 35272) = v12;
  }
  return 0LL;
}
