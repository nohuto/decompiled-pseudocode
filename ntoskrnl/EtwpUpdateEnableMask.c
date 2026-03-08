/*
 * XREFs of EtwpUpdateEnableMask @ 0x140692F88
 * Callers:
 *     NtTraceEvent @ 0x140230D30 (NtTraceEvent.c)
 *     EtwpRegisterKMProvider @ 0x140690D64 (EtwpRegisterKMProvider.c)
 *     EtwpRegisterUMProvider @ 0x140694950 (EtwpRegisterUMProvider.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402331B0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpCheckLoggerControlAccess @ 0x140692E00 (EtwpCheckLoggerControlAccess.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140693AFC (EtwpAcquireLoggerContextByLoggerId.c)
 */

void __fastcall EtwpUpdateEnableMask(__int64 a1, char a2, char a3, char a4, _BYTE *a5)
{
  _DWORD *v5; // rbx
  unsigned int i; // ebp
  __int64 v10; // rdx
  int v11; // esi
  __int64 v12; // rax
  unsigned int *v13; // rdi

  v5 = (_DWORD *)(a1 + 136);
  for ( i = 0; i < 8; ++i )
  {
    if ( *(v5 - 2) && (!a3 || (*v5 & 0x400) != 0) )
    {
      v10 = *((unsigned __int16 *)v5 - 1);
      v11 = 0;
      if ( !a2 || (_DWORD)v10 == *(unsigned __int16 *)(a1 + 88) )
      {
        v12 = EtwpAcquireLoggerContextByLoggerId(*(_QWORD *)(a1 + 392), v10, 0LL);
        v13 = (unsigned int *)v12;
        if ( v12 )
        {
          if ( !a4 || a2 )
          {
            if ( (*(_DWORD *)(v12 + 12) & 0x1000000) != 0 )
              v11 = -1073741790;
          }
          else if ( (*(_DWORD *)(v12 + 12) & 0x80u) != 0 )
          {
            v11 = EtwpCheckLoggerControlAccess(0x200u, v12);
          }
          ExReleaseRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v13 + 137) + 448LL) + 8LL * *v13),
            1u);
          if ( !v11 )
            *a5 |= 1 << i;
        }
      }
    }
    v5 += 8;
  }
}
