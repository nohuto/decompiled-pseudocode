/*
 * XREFs of ?GetBoundaryDescriptorAndInitializeName@SipcPrivateNamespace@@AEAAJPEAPEAX@Z @ 0x1800C09E4
 * Callers:
 *     ?Open@SipcPrivateNamespace@@QEAAJAEBUSipcPrivateNamespaceAttributes@@@Z @ 0x1800C13F0 (-Open@SipcPrivateNamespace@@QEAAJAEBUSipcPrivateNamespaceAttributes@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag0@details@wil@@YAJXZ @ 0x1800BEFE8 (-Return_GetLastError@in1diag0@details@wil@@YAJXZ.c)
 */

__int64 __fastcall SipcPrivateNamespace::GetBoundaryDescriptorAndInitializeName(SipcPrivateNamespace *this, void **a2)
{
  char *v4; // rcx
  _WORD *v5; // r8
  unsigned __int64 i; // r9
  unsigned __int8 v7; // dl
  __int64 v8; // rdx
  wil::details::in1diag0 *v9; // rcx
  __int64 v10; // r8
  const char *v11; // r9
  unsigned int LastError; // ebx
  HANDLE BoundaryDescriptor; // [rsp+20h] [rbp-20h] BYREF
  int RequiredSid; // [rsp+28h] [rbp-18h] BYREF
  __int64 v16; // [rsp+2Ch] [rbp-14h]

  *a2 = 0LL;
  v4 = (char *)this + 8;
  *(_QWORD *)v4 = SipcPrivateNamespace::NamespacePrefix;
  *((_DWORD *)v4 + 2) = 95;
  v5 = (_WORD *)((char *)this + 18);
  for ( i = 0LL; i < 0x10; ++i )
  {
    v7 = *((_BYTE *)this + i + 84);
    *v5 = a0123456789abcd[(unsigned __int64)v7 >> 4];
    v5[1] = a0123456789abcd[v7 & 0xF];
    v5 += 2;
  }
  *v5 = 0;
  BoundaryDescriptor = CreateBoundaryDescriptorW((LPCWSTR)v4, 0);
  if ( BoundaryDescriptor
    && (RequiredSid = 257, v16 = 0x1000000LL, AddSIDToBoundaryDescriptor(&BoundaryDescriptor, &RequiredSid))
    && (IsWellKnownSid((char *)this + 100, WinNullSid)
     || AddSIDToBoundaryDescriptor(&BoundaryDescriptor, (char *)this + 100)) )
  {
    *a2 = BoundaryDescriptor;
    return 0LL;
  }
  else
  {
    LastError = wil::details::in1diag0::Return_GetLastError(v9, v8, v10, v11);
    if ( (char *)BoundaryDescriptor - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      DeleteBoundaryDescriptor(BoundaryDescriptor);
    return LastError;
  }
}
