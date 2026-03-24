/*
 * XREFs of ?DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ @ 0x1C0012FC0
 * Callers:
 *     ?DeleteAllTokens@CTokenManager@@UEAAXXZ @ 0x1C0013120 (-DeleteAllTokens@CTokenManager@@UEAAXXZ.c)
 *     ??1CTokenManager@@AEAA@XZ @ 0x1C001380C (--1CTokenManager@@AEAA@XZ.c)
 * Callees:
 *     ??_GCLegacyTokenBuffer@@AEAAPEAXI@Z @ 0x1C0012F8C (--_GCLegacyTokenBuffer@@AEAAPEAXI@Z.c)
 */

void __fastcall CTokenManager::DeleteAllLegacyTokenBuffers(CTokenManager *this)
{
  CLegacyTokenBuffer *v2; // rcx
  CLegacyTokenBuffer *v3; // rbx
  CLegacyTokenBuffer *v4; // rax
  __int64 v5; // rcx

  v2 = (CLegacyTokenBuffer *)*((_QWORD *)this + 23);
  if ( v2 )
  {
    CLegacyTokenBuffer::`scalar deleting destructor'(v2);
    *((_QWORD *)this + 23) = 0LL;
  }
  v3 = (CTokenManager *)((char *)this + 160);
  while ( 1 )
  {
    v4 = *(CLegacyTokenBuffer **)v3;
    if ( *(CLegacyTokenBuffer **)(*(_QWORD *)v3 + 8LL) != v3
      || (v5 = *(_QWORD *)v4, *(CLegacyTokenBuffer **)(*(_QWORD *)v4 + 8LL) != v4) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v3 = v5;
    *(_QWORD *)(v5 + 8) = v3;
    if ( v4 == v3 )
      break;
    if ( v4 )
      CLegacyTokenBuffer::`scalar deleting destructor'(v4);
  }
  *((_DWORD *)this + 44) = 0;
}
