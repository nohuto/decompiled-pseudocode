/*
 * XREFs of VidSchResetGPUTimeout @ 0x1C00CE2AC
 * Callers:
 *     VidSchiCheckHwProgress @ 0x1C007EFE0 (VidSchiCheckHwProgress.c)
 *     VidSchRestartAdapter @ 0x1C00D1010 (VidSchRestartAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchResetGPUTimeout(__int64 a1)
{
  unsigned int i; // r9d
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  for ( i = 0; i < *(_DWORD *)(a1 + 72); *(_DWORD *)(*(_QWORD *)v5 + 440LL) &= ~2u )
  {
    v3 = *(_QWORD *)(a1 + 624);
    v4 = 8LL * i;
    if ( i < *(_DWORD *)(a1 + 696) )
      v3 += v4;
    *(_DWORD *)(*(_QWORD *)v3 + 440LL) &= ~1u;
    v5 = *(_QWORD *)(a1 + 624) + v4;
    if ( i >= *(_DWORD *)(a1 + 696) )
      v5 = *(_QWORD *)(a1 + 624);
    ++i;
  }
}
