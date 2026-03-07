char __fastcall LinearFitT<256>::RebaseSums(__int64 a1)
{
  int v1; // esi
  char v2; // bl
  unsigned int v3; // edi

  v1 = *(_DWORD *)(a1 + 8);
  v2 = 1;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  v3 = 0;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a1 + 112);
  while ( (unsigned __int8)LinearFitT<256>::AddToSums(a1, 16LL * v3 + a1 + 104) )
  {
    if ( ++v3 >= 0x100 )
      goto LABEL_4;
  }
  v2 = 0;
LABEL_4:
  *(_DWORD *)(a1 + 8) = v1;
  return v2;
}
