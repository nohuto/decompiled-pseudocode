/*
 * XREFs of ?DeleteAllFlipManagerTokens@CTokenManager@@IEAAXXZ @ 0x1C0018E74
 * Callers:
 *     ??1CTokenManager@@AEAA@XZ @ 0x1C00172B0 (--1CTokenManager@@AEAA@XZ.c)
 *     ?DeleteAllTokens@CTokenManager@@UEAAXXZ @ 0x1C0017590 (-DeleteAllTokens@CTokenManager@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?FlipManagerConsumerAdapterCleanupTokenDiscard@@YAJPEAUFlipManagerTokenObject@@@Z @ 0x1C0081048 (-FlipManagerConsumerAdapterCleanupTokenDiscard@@YAJPEAUFlipManagerTokenObject@@@Z.c)
 */

void __fastcall CTokenManager::DeleteAllFlipManagerTokens(CTokenManager *this)
{
  _QWORD **v2; // rdi
  _QWORD *v3; // rbx
  _QWORD **v4; // rbx
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // rax

  v2 = (_QWORD **)((char *)this + 304);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)v3[1] != v2 || (v6 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
LABEL_12:
      __fastfail(3u);
    *v2 = v6;
    v6[1] = v2;
    (*(void (__fastcall **)(_QWORD *))(*(v3 - 1) + 56LL))(v3 - 1);
    (*(void (__fastcall **)(_QWORD *, __int64))*(v3 - 1))(v3 - 1, 1LL);
  }
  v4 = (_QWORD **)((char *)this + 288);
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == v4 )
      break;
    if ( (_QWORD **)v5[1] != v4 )
      goto LABEL_12;
    v7 = (_QWORD *)*v5;
    if ( *(_QWORD **)(*v5 + 8LL) != v5 )
      goto LABEL_12;
    *v4 = v7;
    v7[1] = v4;
    FlipManagerConsumerAdapterCleanupTokenDiscard(v5 - 6);
  }
}
