void __fastcall sub_140A75220(int a1)
{
  __int64 v3; // rbp
  _DWORD *v4; // rdi
  int v5; // esi

  *(_DWORD *)(v3 + 107) |= a1;
  __asm { xlat }
  *v4 = *(_DWORD *)(unsigned int)(v5 - *(_DWORD *)(_RBX + 27));
  JUMPOUT(0x71LL);
}
