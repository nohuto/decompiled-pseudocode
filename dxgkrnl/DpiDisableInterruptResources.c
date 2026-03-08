/*
 * XREFs of DpiDisableInterruptResources @ 0x1C0395CD8
 * Callers:
 *     DpiFdoHandleFilterResources @ 0x1C0217020 (DpiFdoHandleFilterResources.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiDisableInterruptResources(__int64 a1)
{
  unsigned int v1; // r9d
  __int64 i; // rdx
  __int64 v3; // rax
  unsigned int j; // r8d
  __int64 v5; // rax

  if ( a1 )
  {
    v1 = 0;
    for ( i = a1 + 32; v1 < *(_DWORD *)(a1 + 28); ++v1 )
    {
      v3 = *(unsigned int *)(i + 4);
      for ( j = 0; j < (unsigned int)v3; ++j )
      {
        v5 = 32LL * j;
        if ( *(_BYTE *)(v5 + i + 9) == 2 )
          *(_BYTE *)(v5 + i + 9) = 0;
        v3 = *(unsigned int *)(i + 4);
      }
      i += 32 * v3 + 8;
    }
  }
}
