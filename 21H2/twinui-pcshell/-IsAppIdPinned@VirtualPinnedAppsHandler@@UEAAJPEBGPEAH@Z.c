/*
 * XREFs of ?IsAppIdPinned@VirtualPinnedAppsHandler@@UEAAJPEBGPEAH@Z @ 0x1804B5970
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualPinnedAppsHandler::IsAppIdPinned(
        VirtualPinnedAppsHandler *this,
        const unsigned __int16 *a2,
        int *a3)
{
  __int64 v6; // rbp
  __int64 v7; // rbx
  int v8; // edi
  const WCHAR *v9; // rcx
  RTL_SRWLOCK *v10; // rcx
  const unsigned __int16 *v12; // [rsp+50h] [rbp+8h]
  PSRWLOCK SRWLock; // [rsp+58h] [rbp+10h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 9) + 24LL))(*((_QWORD *)this + 9), &SRWLock);
  v6 = *((_QWORD *)this + 13);
  v7 = *((_QWORD *)this + 12);
  v12 = a2;
  if ( v7 == v6 )
  {
LABEL_8:
    v8 = 0;
  }
  else
  {
    v8 = 1;
    while ( 1 )
    {
      v9 = (const WCHAR *)v7;
      if ( *(_QWORD *)(v7 + 24) >= 8uLL )
        v9 = *(const WCHAR **)v7;
      if ( CompareStringOrdinal(v9, -1, a2, -1, 1) == 2 )
        break;
      v7 += 32LL;
      if ( v7 == v6 )
        goto LABEL_8;
      a2 = v12;
    }
  }
  v10 = SRWLock;
  *a3 = v8;
  if ( v10 )
    ReleaseSRWLockShared(v10);
  return 0LL;
}
