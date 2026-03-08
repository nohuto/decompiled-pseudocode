/*
 * XREFs of ?CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z @ 0x1C0213444
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0072BF4 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0010938 (-_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?_NotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1C0012FE8 (-_NotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 *     ?_EnsureInputSpace@CInputConfig@@AEAAXXZ @ 0x1C00158E8 (-_EnsureInputSpace@CInputConfig@@AEAAXXZ.c)
 *     ?Entry@Iter@CInputConfig@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C001634C (-Entry@Iter@CInputConfig@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 */

void __fastcall CInputConfig::CleanupInputSpaces(CInputConfig *this, const struct tagPROCESSINFO *a2)
{
  CInputConfig *v2; // rdi
  CInputConfig *v4; // rdx
  _QWORD *i; // rbx
  _QWORD **v6; // rcx
  __int64 v7; // rcx
  struct _LIST_ENTRY *v8; // rax
  CInputConfig *v9; // rcx
  _QWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  CInputConfig *v11; // [rsp+30h] [rbp-18h]
  _QWORD *v12; // [rsp+38h] [rbp-10h]

  v2 = gpInputConfig;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(CInputConfig::slock, 1u);
  v10[0] = &CInputConfig::slock;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
  v4 = *(CInputConfig **)v2;
  v10[1] = v2;
  v11 = v4;
  for ( i = *(_QWORD **)v4; ; i = (_QWORD *)*i )
  {
    v6 = 0LL;
    v12 = i;
    if ( v4 != v2 )
      v6 = (_QWORD **)((char *)v4 + 16);
    if ( !v6 )
      break;
    v7 = 16LL;
    if ( v4 != v2 )
      v7 = (__int64)v4 + 32;
    if ( *(const struct tagPROCESSINFO **)v7 == a2 )
    {
      v8 = CInputConfig::Iter::Entry((CInputConfig::Iter *)v10);
      CInputConfig::_FreeInputSpace(v9, v8);
    }
    v4 = (CInputConfig *)i;
    v11 = (CInputConfig *)i;
  }
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  CInputConfig::_EnsureInputSpace(v2);
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  CInputConfig::_NotifyExternalComponents(v2);
}
