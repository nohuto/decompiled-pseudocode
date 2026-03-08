/*
 * XREFs of ?Commit@CChannel@@UEAAJXZ @ 0x1800440C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalCommit@CChannel@@AEAAJPEAX@Z @ 0x180044118 (-InternalCommit@CChannel@@AEAAJPEAX@Z.c)
 *     ??1CChannelLock@CChannel@@QEAA@XZ @ 0x1800441FC (--1CChannelLock@CChannel@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CChannel::Commit(CChannel *this)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *((_QWORD *)this + 8);
  v5[1] = v2;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL))(v2);
  }
  else
  {
    v5[0] = (char *)this + 184;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  }
  v3 = CChannel::InternalCommit(this, 0LL);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v5);
  return v3;
}
