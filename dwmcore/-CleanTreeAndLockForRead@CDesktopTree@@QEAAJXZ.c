__int64 __fastcall CDesktopTree::CleanTreeAndLockForRead(CDesktopTree *this)
{
  RTL_SRWLOCK *i; // rcx
  void *v3; // rdx
  unsigned int v4; // ecx
  __int64 v5; // rax
  unsigned int v6; // edi
  __int64 v8; // rdi
  __int64 v9; // rcx
  DWORD v10; // eax
  const char *v11; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  for ( i = (RTL_SRWLOCK *)*((_QWORD *)this + 2); ; i = (RTL_SRWLOCK *)*((_QWORD *)this + 2) )
  {
    AcquireSRWLockShared(i + 84);
    v5 = *((_QWORD *)this + 8);
    if ( !v5 || !*(_BYTE *)(v5 + 96) )
      return 0;
    v8 = *((_QWORD *)this + 2);
    if ( *(_BYTE *)(v8 + 1278) )
      break;
    wil::details::ResetEvent(*(wil::details **)(v8 + 1264), v3);
    v9 = *(_QWORD *)(v8 + 656);
    *(_BYTE *)(v8 + 1280) = 1;
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v9 + 32LL))(v9, 0LL, 0x100000LL);
    ReleaseSRWLockShared((PSRWLOCK)(*((_QWORD *)this + 2) + 672LL));
    v10 = WaitForSingleObjectEx(*(HANDLE *)(*((_QWORD *)this + 2) + 1264LL), 0xFFFFFFFF, 0);
    if ( v10 != 258 && v10 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xA2A,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
        v11);
  }
  v6 = -2147467260;
  MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2147467260, 0x88u, 0LL);
  ReleaseSRWLockShared((PSRWLOCK)(*((_QWORD *)this + 2) + 672LL));
  return v6;
}
