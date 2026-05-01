/*
 * XREFs of ?IsFrameWindowForHost@XamlAllUpViewHost@@UEAA_NPEAUHWND__@@@Z @ 0x180374590
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007D6B4 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall XamlAllUpViewHost::IsFrameWindowForHost(XamlAllUpViewHost *this, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  char v4; // si
  int v5; // r14d
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rcx

  v3 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this - 104) & -(__int64)(this != (XamlAllUpViewHost *)128));
  v4 = 1;
  v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v3, 1);
  v6 = *((_QWORD *)this + 25);
  v7 = *((_QWORD *)this + 26);
  while ( v6 != v7 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)v6 + 48LL);
    if ( v8 )
      LOBYTE(v8) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 40LL))(v8) == a2;
    if ( (_BYTE)v8 )
      goto LABEL_8;
    v6 += 8LL;
  }
  v4 = 0;
LABEL_8:
  if ( v5 >= 0 )
    LeaveCriticalSection(v3);
  return v4;
}
