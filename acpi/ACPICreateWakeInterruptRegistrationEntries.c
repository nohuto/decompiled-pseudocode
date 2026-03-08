/*
 * XREFs of ACPICreateWakeInterruptRegistrationEntries @ 0x1C0098B50
 * Callers:
 *     ACPIWakeEmulationPrepare @ 0x1C0098BFC (ACPIWakeEmulationPrepare.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPICreateWakeInterruptRegistrationEntries(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  unsigned int v4; // edi
  __int64 v5; // r10
  unsigned int i; // ebx
  __int64 v8; // rdx

  v4 = *a4;
  v5 = 0LL;
  for ( i = 0; i < *(_DWORD *)(a1 + 4); ++i )
  {
    if ( *(_BYTE *)(a1 + 20LL * i + 8) == 2 && (*(_BYTE *)(a1 + 20LL * i + 10) & 0x20) != 0 )
    {
      if ( (unsigned int)v5 < v4 )
      {
        v8 = a3 + 40 * v5;
        *(_QWORD *)(v8 + 8) = v8;
        *(_QWORD *)v8 = v8;
        *(_QWORD *)(v8 + 32) = *(_QWORD *)(a1 + 20LL * i + 20);
        *(_DWORD *)(v8 + 24) = *(_DWORD *)(a1 + 20LL * i + 16);
        *(_QWORD *)(v8 + 16) = a2;
        *(_DWORD *)(v8 + 28) = *(_BYTE *)(a1 + 20LL * i + 10) & 1;
      }
      v5 = (unsigned int)(v5 + 1);
    }
  }
  *a4 = v5;
  return v4 < (unsigned int)v5 ? 0xC0000023 : 0;
}
