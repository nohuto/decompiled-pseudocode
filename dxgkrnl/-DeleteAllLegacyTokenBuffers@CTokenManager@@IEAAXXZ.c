/*
 * XREFs of ?DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ @ 0x1C00174D8
 * Callers:
 *     ??1CTokenManager@@AEAA@XZ @ 0x1C00172B0 (--1CTokenManager@@AEAA@XZ.c)
 *     ?DeleteAllTokens@CTokenManager@@UEAAXXZ @ 0x1C0017590 (-DeleteAllTokens@CTokenManager@@UEAAXXZ.c)
 * Callees:
 *     ??_GCLegacyTokenBuffer@@AEAAPEAXI@Z @ 0x1C0017554 (--_GCLegacyTokenBuffer@@AEAAPEAXI@Z.c)
 */

void __fastcall CTokenManager::DeleteAllLegacyTokenBuffers(CTokenManager *this, unsigned int a2)
{
  void *v3; // rcx
  char *v4; // rbx
  char *v5; // rax
  __int64 v6; // rcx

  v3 = (void *)*((_QWORD *)this + 24);
  if ( v3 )
  {
    CLegacyTokenBuffer::`scalar deleting destructor'(v3, a2);
    *((_QWORD *)this + 24) = 0LL;
  }
  v4 = (char *)this + 168;
  while ( 1 )
  {
    v5 = *(char **)v4;
    if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 || (v6 = *(_QWORD *)v5, *(char **)(*(_QWORD *)v5 + 8LL) != v5) )
      __fastfail(3u);
    *(_QWORD *)v4 = v6;
    *(_QWORD *)(v6 + 8) = v4;
    if ( v5 == v4 )
      break;
    if ( v5 )
      CLegacyTokenBuffer::`scalar deleting destructor'(v5, a2);
  }
  *((_DWORD *)this + 46) = 0;
}
