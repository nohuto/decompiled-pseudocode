void HalpExtMarkHiberPhase()
{
  unsigned int i; // ebx
  unsigned __int64 v1; // rax
  void *v2; // r8

  for ( i = 0; i < HalpExtHandleCount; ++i )
  {
    v1 = HalpExtHandleArray + ((unsigned __int64)i << 6);
    v2 = *(void **)(v1 + 48);
    if ( v2 )
      PoSetHiberRange(0LL, 0x10000u, v2, *(unsigned int *)(v1 + 56), 0x456C6148u);
  }
}
