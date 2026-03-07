__int64 __fastcall KiGetXSaveSupportedFeatures(__int64 a1)
{
  __int64 result; // rax
  unsigned int v11; // r11d
  __int64 v17; // rdi
  char v18; // r8
  int v19; // ecx
  int v20; // r8d
  int v21; // r8d
  unsigned __int64 v22; // rcx
  unsigned int *v23; // rsi
  _DWORD *v24; // r14
  unsigned int v25; // edi
  unsigned int i; // r9d
  __int64 v27; // r8
  __int64 v28; // r8
  unsigned int v34; // eax

  _RAX = 1LL;
  __asm { cpuid }
  if ( (_RCX & 0x4000000) == 0 )
    goto LABEL_27;
  _RAX = 13LL;
  __asm { cpuid }
  result = (unsigned int)result;
  *(_QWORD *)a1 = (unsigned int)result | ((unsigned __int64)(unsigned int)_RDX << 32);
  if ( (result & 3) == 3 )
  {
    v11 = 0;
    _RAX = 13LL;
    __asm { cpuid }
    v17 = (unsigned int)_RCX;
    v18 = 0;
    v19 = 0;
    if ( (_RAX & 0xA) == 0xA )
      v18 = 2;
    v20 = ((unsigned __int8)((unsigned int)_RAX >> 2) ^ (unsigned __int8)(*(_BYTE *)(a1 + 20) | v18)) & 4;
    if ( (_RAX & 0xA) == 0xA )
      v19 = 2;
    v21 = (*(_DWORD *)(a1 + 20) & 0xFFFFFFFC | _RAX & 1 | v19) ^ v20;
    *(_DWORD *)(a1 + 20) = v21;
    if ( (v21 & 2) != 0 )
      v22 = v17 | ((unsigned __int64)(unsigned int)_RDX << 32);
    else
      v22 = 0LL;
    *(_QWORD *)(a1 + 536) = v22;
    v23 = (unsigned int *)(a1 + 28);
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 28) = 160;
    v24 = (_DWORD *)(a1 + 44);
    *(_DWORD *)(a1 + 32) = 160;
    v25 = 576;
    *(_DWORD *)(a1 + 36) = 256;
    for ( i = 2; i < 0x40; ++i )
    {
      v27 = 1LL << i;
      if ( ((1LL << i) & *(_QWORD *)a1) != 0 )
      {
        _RAX = 13LL;
        __asm { cpuid }
        *v24 = _RAX;
        v34 = _RBX + _RAX;
        *(v24 - 1) = _RBX;
        if ( v25 >= v34 )
          v34 = v25;
        v25 = v34;
        if ( (_RCX & 2) != 0 )
          *(_QWORD *)(a1 + 544) |= v27;
        if ( (_RCX & 4) != 0 )
          *(_QWORD *)(a1 + 824) |= v27;
      }
      v24 += 2;
    }
    result = *(unsigned int *)(a1 + 20);
    *(_DWORD *)(a1 + 16) = v25;
    if ( (result & 2) != 0 )
    {
      v28 = 556LL;
      do
      {
        if ( ((1LL << v11) & *(_QWORD *)(a1 + 536)) != 0 )
        {
          _RAX = 13LL;
          __asm { cpuid }
          *(_DWORD *)(v28 + a1) = result;
          if ( (_RCX & 2) != 0 )
            *(_QWORD *)(a1 + 544) |= 1LL << v11;
        }
        else
        {
          result = *v23;
          *(_DWORD *)(v28 + a1) = result;
        }
        ++v11;
        v28 += 4LL;
        v23 += 2;
      }
      while ( v11 < 0x40 );
    }
  }
  else
  {
LABEL_27:
    *(_QWORD *)a1 = 0LL;
    *(_DWORD *)(a1 + 16) = 0;
  }
  return result;
}
