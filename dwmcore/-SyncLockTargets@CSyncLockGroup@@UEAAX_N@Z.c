/*
 * XREFs of ?SyncLockTargets@CSyncLockGroup@@UEAAX_N@Z @ 0x1801E3970
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetMaxOutstandingFrames@CSyncLockGroup@@IEBAIXZ @ 0x1801E374C (-GetMaxOutstandingFrames@CSyncLockGroup@@IEBAIXZ.c)
 */

void __fastcall CSyncLockGroup::SyncLockTargets(__int64 ***this, char a2)
{
  unsigned int MaxOutstandingFrames; // eax
  __int64 **v5; // rbx
  unsigned int v6; // esi
  __int64 **v7; // rdi
  __int64 v8; // rdx
  void (__fastcall *v9)(_QWORD, __int64, _QWORD); // rax

  if ( (unsigned __int64)(this[3] - this[2]) >= 2 )
  {
    MaxOutstandingFrames = CSyncLockGroup::GetMaxOutstandingFrames((CSyncLockGroup *)this);
    v5 = this[2];
    v6 = MaxOutstandingFrames;
    v7 = this[3];
    while ( v5 != v7 )
    {
      v8 = **v5;
      v9 = *(void (__fastcall **)(_QWORD, __int64, _QWORD))(v8 + 64);
      LOBYTE(v8) = a2;
      v9(*v5++, v8, v6);
    }
  }
}
