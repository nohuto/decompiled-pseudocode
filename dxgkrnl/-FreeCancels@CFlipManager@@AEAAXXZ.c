/*
 * XREFs of ?FreeCancels@CFlipManager@@AEAAXXZ @ 0x1C00830AC
 * Callers:
 *     ?Delete@CFlipManager@@MEAAJPEAX@Z @ 0x1C0082E80 (-Delete@CFlipManager@@MEAAJPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFlipManager::FreeCancels(CFlipManager *this)
{
  _QWORD *v1; // rbx
  void (__fastcall ***v2)(_QWORD, __int64); // rcx
  __int64 *v3; // rdx
  __int64 *v4; // r8
  __int64 **v5; // rax
  _QWORD *v6; // rdx

  v1 = (_QWORD *)((char *)this + 192);
  while ( (_QWORD *)*v1 != v1 )
  {
    v2 = (void (__fastcall ***)(_QWORD, __int64))((*v1 - 8LL) & -(__int64)(*v1 != 0LL));
    v3 = (__int64 *)((unsigned __int64)(v2 + 1) & ((unsigned __int128)-(__int128)(unsigned __int64)v2 >> 64));
    v4 = (__int64 *)*v3;
    if ( *(__int64 **)(*v3 + 8) != v3
      || (v5 = *(__int64 ***)(((unsigned __int64)(v2 + 1) & ((unsigned __int128)-(__int128)(unsigned __int64)v2 >> 64))
                            + 8),
          *v5 != v3) )
    {
      __fastfail(3u);
    }
    *v5 = v4;
    v4[1] = (__int64)v5;
    v6 = (_QWORD *)((unsigned __int64)(v2 + 1) & ((unsigned __int128)-(__int128)(unsigned __int64)v2 >> 64));
    v6[1] = v6;
    *v6 = v6;
    if ( v2 )
      (**v2)(v2, 1LL);
  }
}
