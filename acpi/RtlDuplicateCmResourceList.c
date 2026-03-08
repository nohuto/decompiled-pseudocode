/*
 * XREFs of RtlDuplicateCmResourceList @ 0x1C00AA814
 * Callers:
 *     ACPIRootIrpStartDevice @ 0x1C00AA580 (ACPIRootIrpStartDevice.c)
 * Callees:
 *     memmove @ 0x1C0001E80 (memmove.c)
 */

void *__fastcall RtlDuplicateCmResourceList(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // r9d
  unsigned int v3; // r8d
  unsigned int v5; // ecx
  unsigned int *v6; // rdx
  unsigned int v7; // r11d
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // r10d
  unsigned int v11; // esi
  void *Pool2; // rax
  void *v13; // rbx

  v2 = *a2;
  v3 = 0;
  v5 = 40;
  if ( *a2 )
  {
    v6 = a2 + 4;
    do
    {
      v7 = *v6;
      v8 = v5 + 36;
      if ( !v3 )
        v8 = v5;
      v5 = v8;
      v9 = 0;
      if ( v7 )
      {
        v10 = v5;
        do
        {
          v5 = v10 + 20;
          if ( !v9 )
            v5 = v10;
          ++v9;
          v10 = v5;
        }
        while ( v9 < v7 );
      }
      ++v3;
      v6 += 9;
    }
    while ( v3 < v2 );
  }
  v11 = v5;
  Pool2 = (void *)ExAllocatePool2(64LL, v5, 1383097153LL);
  v13 = Pool2;
  if ( Pool2 )
    memmove(Pool2, a2, v11);
  return v13;
}
