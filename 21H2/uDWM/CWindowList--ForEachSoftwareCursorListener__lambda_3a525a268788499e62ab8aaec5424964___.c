/*
 * XREFs of CWindowList::ForEachSoftwareCursorListener__lambda_3a525a268788499e62ab8aaec5424964___ @ 0x1800513FC
 * Callers:
 *     ?IsCursorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180051320 (-IsCursorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800135CC (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowList::ForEachSoftwareCursorListener__lambda_3a525a268788499e62ab8aaec5424964___(
        __int64 a1,
        __int64 **a2)
{
  __int64 i; // rbx
  void (__fastcall ***v5)(_QWORD, __int64); // rcx
  __int64 v6; // r8
  void (__fastcall **v7)(_QWORD, __int64); // rax
  __int64 v8; // rdx
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 632); i = (unsigned int)(i + 1) )
  {
    v5 = *(void (__fastcall ****)(_QWORD, __int64))(*(_QWORD *)(a1 + 608) + 8 * i);
    v6 = **a2;
    v7 = *v5;
    v8 = *(_QWORD *)(v6 + 384);
    if ( (*(_BYTE *)(v6 + 612) & 4) != 0 )
      (*v7)(v5, v8);
    else
      v7[1](v5, v8);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
}
