/*
 * XREFs of ?SerializeForRPC@CCrossProcessBaseMemory@@UEAAJPEAUSTANDARD_CROSSPROCESS_MEMORY@@@Z @ 0x140011D10
 * Callers:
 *     ?SerializeForRPC@CCrossProcessServerMemory@@UEAAJPEAUCP_MEMORY_METADATA_BLOB@@@Z @ 0x140011C30 (-SerializeForRPC@CCrossProcessServerMemory@@UEAAJPEAUCP_MEMORY_METADATA_BLOB@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B430 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14003BFB4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CCrossProcessBaseMemory::SerializeForRPC(
        CCrossProcessBaseMemory *this,
        struct STANDARD_CROSSPROCESS_MEMORY *a2)
{
  unsigned int v3; // esi
  void *v4; // rdi
  HANDLE CurrentProcess; // rbx
  HANDLE v6; // rax
  const char *v7; // r9
  HANDLE v8; // rax
  char *v9; // rcx
  unsigned int LastError; // eax
  DWORD dwDesiredAccess; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HANDLE TargetHandle; // [rsp+50h] [rbp+8h] BYREF

  if ( ((*((_QWORD *)this + 2) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    v3 = 0;
    *(_QWORD *)a2 = 0LL;
    v4 = (void *)*((_QWORD *)this + 2);
    TargetHandle = 0LL;
    CurrentProcess = GetCurrentProcess();
    v6 = GetCurrentProcess();
    if ( DuplicateHandle(v6, v4, CurrentProcess, &TargetHandle, 0, 0, 2u) )
    {
      v8 = TargetHandle;
      v9 = 0LL;
      TargetHandle = 0LL;
      *(_QWORD *)a2 = v8;
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x27,
                    (unsigned int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpbasememory.cpp",
                    v7);
      v9 = (char *)TargetHandle;
      v3 = LastError;
    }
    if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v9);
    return v3;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A,
      (unsigned int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpbasememory.cpp",
      (const char *)0x80004005LL,
      dwDesiredAccess);
    return 2147500037LL;
  }
}
