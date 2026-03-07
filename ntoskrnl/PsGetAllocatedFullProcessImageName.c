__int64 __fastcall PsGetAllocatedFullProcessImageName(__int64 a1, __int64 *a2)
{
  __int64 v2; // rsi
  __int64 Pool2; // rax
  unsigned int v5; // edi
  __int64 v6; // rbx

  v2 = *(_QWORD *)(a1 + 1472);
  Pool2 = ExAllocatePool2(64LL, *(unsigned __int16 *)(v2 + 2) + 16LL, 1850307408LL);
  v5 = 0;
  v6 = Pool2;
  if ( Pool2 )
  {
    *(_OWORD *)Pool2 = *(_OWORD *)v2;
    if ( *(_QWORD *)(Pool2 + 8) )
    {
      *(_QWORD *)(Pool2 + 8) = Pool2 + 16;
      memmove((void *)(Pool2 + 16), *(const void **)(v2 + 8), *(unsigned __int16 *)(v2 + 2));
    }
    *a2 = v6;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v5;
}
