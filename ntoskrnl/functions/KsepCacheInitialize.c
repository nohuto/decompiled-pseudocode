_QWORD *__fastcall KsepCacheInitialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *Paged; // rax
  _QWORD *v8; // rbx
  void *v9; // rax
  unsigned int i; // ecx
  __int64 v11; // rax
  _QWORD *v12; // rax

  Paged = KsepPoolAllocatePaged(0x60uLL);
  v8 = Paged;
  if ( !Paged )
    goto LABEL_8;
  *((_DWORD *)Paged + 6) = 256;
  Paged[5] = Paged + 4;
  Paged[4] = Paged + 4;
  Paged[9] = a2;
  Paged[10] = a3;
  Paged[11] = a4;
  *((_DWORD *)Paged + 3) = 223;
  v9 = KsepPoolAllocatePaged(0xDF0uLL);
  v8[2] = v9;
  if ( !v9 )
  {
    KsepPoolFreePaged(0LL);
LABEL_8:
    KsepPoolFreePaged(v8);
    return 0LL;
  }
  for ( i = 0; i < *((_DWORD *)v8 + 3); *v12 = v12 )
  {
    v11 = i++;
    v12 = (_QWORD *)(v8[2] + 16 * v11);
    v12[1] = v12;
  }
  *v8 = 0LL;
  return v8;
}
