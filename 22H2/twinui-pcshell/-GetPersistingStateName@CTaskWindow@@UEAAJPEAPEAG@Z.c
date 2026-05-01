/*
 * XREFs of ?GetPersistingStateName@CTaskWindow@@UEAAJPEAPEAG@Z @ 0x180022710
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CTaskWindow::GetPersistingStateName(CTaskWindow *this, unsigned __int16 **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rbx
  void (__fastcall *v6)(__int64, HSTRING *); // rdi
  HSTRING v7; // rcx
  __int64 v8; // rcx
  const WCHAR *StringRawBuffer; // rax
  HRESULT v11; // eax
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  HSTRING string; // [rsp+40h] [rbp+20h] BYREF
  __int64 v15; // [rsp+48h] [rbp+28h] BYREF

  *a2 = 0LL;
  v15 = 0LL;
  v3 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 6))(
         *((_QWORD *)this + 6),
         &GUID_9fab3399_4736_4f3d_8419_41d0ae23f2bc,
         &v15);
  v4 = v3;
  if ( v3 >= 0 )
  {
    string = 0LL;
    v5 = v15;
    v6 = *(void (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v15 + 72LL);
    WindowsDeleteString(0LL);
    string = 0LL;
    v6(v5, &string);
    v7 = string;
    if ( string )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      v11 = SHStrDupW(StringRawBuffer, a2);
      v4 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x23C,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\taskwindow.cpp",
          (const char *)(unsigned int)v11,
          savedregs);
        v7 = string;
        goto LABEL_4;
      }
      v7 = string;
    }
    v4 = 0;
LABEL_4:
    WindowsDeleteString(v7);
    string = 0LL;
    goto LABEL_5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x236,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\taskwindow.cpp",
    (const char *)(unsigned int)v3,
    savedregs);
LABEL_5:
  v8 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v4;
}
