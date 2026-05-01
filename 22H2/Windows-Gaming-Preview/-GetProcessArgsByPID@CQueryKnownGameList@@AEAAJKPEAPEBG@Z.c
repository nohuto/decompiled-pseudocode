/*
 * XREFs of ?GetProcessArgsByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x180041230
 * Callers:
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x180040784 (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProcessArgsByPID@Common@@YAJKPEAGPEAK@Z @ 0x18003ECB8 (-GetProcessArgsByPID@Common@@YAJKPEAGPEAK@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180044AD8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044B1C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CQueryKnownGameList::GetProcessArgsByPID(
        struct _RTL_CRITICAL_SECTION *this,
        DWORD a2,
        const unsigned __int16 **a3)
{
  ULONG_PTR v7; // rbx
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  ULONG_PTR SpinCount; // rax
  int v10; // esi
  unsigned __int64 v11; // rax
  void *v12; // rax
  void *v13; // rdi
  const struct std::nothrow_t *v14; // rdx
  const struct std::nothrow_t *v15; // rdx
  _WORD *v16; // rbp
  unsigned int *v17; // r9
  int ProcessArgsByPID; // eax
  __int64 v19; // r9
  __int64 v20; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v22; // [rsp+80h] [rbp+18h] BYREF
  ULONG_PTR v23; // [rsp+88h] [rbp+20h]

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x396,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  v7 = 0LL;
  v23 = 0LL;
  v8 = this + 19;
  EnterCriticalSection(this + 19);
  SpinCount = this[18].SpinCount;
  if ( SpinCount )
  {
    v7 = this[18].SpinCount;
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)SpinCount + 8LL))(v7);
    v23 = v7;
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  if ( !v7 )
  {
    v22 = 4096;
    v13 = 0LL;
    v16 = operator new[](0x2000uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v16 )
    {
      operator delete(0LL, v15);
      v13 = v16;
      ProcessArgsByPID = Common::GetProcessArgsByPID(a2, v16, (unsigned __int16 *)&v22, v17);
      v10 = ProcessArgsByPID;
      if ( ProcessArgsByPID >= 0 )
      {
        *a3 = v16;
LABEL_19:
        operator delete(0LL, v14);
        v10 = 0;
        goto LABEL_23;
      }
      v19 = (unsigned int)ProcessArgsByPID;
      v20 = 949LL;
    }
    else
    {
      v10 = -2147024882;
      v19 = 2147942414LL;
      v20 = 946LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)v19);
    goto LABEL_22;
  }
  v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _QWORD, unsigned int *))(*(_QWORD *)v7 + 32LL))(v7, a2, 0LL, &v22);
  if ( v10 >= 0 )
  {
    v11 = 2LL * v22;
    if ( !is_mul_ok(v22, 2uLL) )
      v11 = -1LL;
    v12 = operator new[](v11, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v12;
    if ( !v12 )
    {
      v10 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3A6,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8007000ELL);
LABEL_22:
      operator delete(v13, v14);
      goto LABEL_23;
    }
    v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, void *, unsigned int *))(*(_QWORD *)v7 + 32LL))(
            v7,
            a2,
            v12,
            &v22);
    if ( v10 < 0 )
      goto LABEL_22;
    *a3 = (const unsigned __int16 *)v13;
    goto LABEL_19;
  }
LABEL_23:
  if ( v7 )
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v10;
}
