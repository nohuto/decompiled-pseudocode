__int64 __fastcall Edgy::_GrowListeners(Edgy *this, struct tagEDGY_DATA *a2)
{
  unsigned int v2; // eax
  unsigned int v4; // edx
  unsigned int v5; // eax
  unsigned int v6; // esi
  void *v7; // rax
  void *v8; // rdi
  size_t v9; // r8

  v2 = *(_DWORD *)this;
  if ( *((_DWORD *)this + 1) > *(_DWORD *)this )
    return 1LL;
  if ( v2 <= 0x20 )
  {
    v4 = v2 + 4;
    v5 = 2 * v2;
    if ( v4 <= v5 )
      v4 = v5;
    v6 = v4;
    v7 = (void *)Win32AllocPoolZInit(32LL * v4, 1684370261LL);
    if ( v7 )
    {
      v8 = (void *)*((_QWORD *)this + 1);
      v9 = 32LL * *(unsigned int *)this;
      *((_QWORD *)this + 1) = v7;
      *((_DWORD *)this + 1) = v6;
      memmove(v7, v8, v9);
      if ( v8 )
        Win32FreePool(v8);
      return 1LL;
    }
  }
  return 0LL;
}
