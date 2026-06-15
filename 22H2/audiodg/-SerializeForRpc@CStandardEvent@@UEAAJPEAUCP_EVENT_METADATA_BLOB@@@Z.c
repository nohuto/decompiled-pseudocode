/*
 * XREFs of ?SerializeForRpc@CStandardEvent@@UEAAJPEAUCP_EVENT_METADATA_BLOB@@@Z @ 0x14004A030
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14003BFB4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CStandardEvent::SerializeForRpc(CStandardEvent *this, struct CP_EVENT_METADATA_BLOB *a2)
{
  void *v2; // rdi
  HANDLE CurrentProcess; // rbx
  HANDLE v5; // rax
  const char *v6; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HANDLE TargetHandle; // [rsp+50h] [rbp+8h] BYREF

  v2 = (void *)*((_QWORD *)this + 2);
  CurrentProcess = GetCurrentProcess();
  v5 = GetCurrentProcess();
  if ( !DuplicateHandle(v5, v2, CurrentProcess, &TargetHandle, 0, 0, 2u) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x21,
             (__int64)"avcore\\audiocore\\Engine\\Core\\CrossProcessEngineObjects\\CPStandardEvent.h",
             v6);
  *((_QWORD *)a2 + 1) = TargetHandle;
  result = 0LL;
  *(_DWORD *)a2 = 1;
  return result;
}
