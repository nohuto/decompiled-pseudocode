/*
 * XREFs of NtProtectVirtualMemory @ 0x1405F8E40
 * Callers:
 *     <none>
 * Callees:
 *     KeUnstackDetachProcess @ 0x140207580 (KeUnstackDetachProcess.c)
 *     MiMakeProtectionMask @ 0x14021A9E0 (MiMakeProtectionMask.c)
 *     KeStackAttachProcess @ 0x14025B970 (KeStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     MmProtectVirtualMemory @ 0x1405FA060 (MmProtectVirtualMemory.c)
 *     EtwTiLogProtectExecVm @ 0x1406296A8 (EtwTiLogProtectExecVm.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14063E2A0 (ObReferenceObjectByHandleWithTag.c)
 *     VslDebugProtectSecureProcessMemory @ 0x14088F388 (VslDebugProtectSecureProcessMemory.c)
 */

NTSTATUS __cdecl NtProtectVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        ULONG NewProtect,
        PULONG OldProtect)
{
  HANDLE v7; // r10
  PULONG v8; // r9
  int v9; // esi
  int ProtectionMask; // r13d
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rdi
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  PVOID v17; // rcx
  ULONG_PTR v18; // r14
  NTSTATUS result; // eax
  _BYTE *v20; // rbx
  NTSTATUS v21; // eax
  NTSTATUS v22; // edi
  char v23; // r8
  unsigned __int8 v24; // [rsp+40h] [rbp-A8h]
  unsigned int v25; // [rsp+44h] [rbp-A4h] BYREF
  PVOID v26; // [rsp+48h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+50h] [rbp-98h] BYREF
  ULONG_PTR v28; // [rsp+58h] [rbp-90h] BYREF
  PSIZE_T v29; // [rsp+60h] [rbp-88h]
  PULONG v30; // [rsp+68h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-78h] BYREF

  v29 = RegionSize;
  v7 = ProcessHandle;
  v8 = OldProtect;
  v30 = OldProtect;
  memset(&ApcState, 0, sizeof(ApcState));
  v9 = 0;
  Object = 0LL;
  v26 = 0LL;
  v28 = 0LL;
  v25 = 0;
  if ( NewProtect == 0x80000000 || NewProtect == 0x10000000 )
  {
    LOBYTE(ProtectionMask) = 24;
  }
  else
  {
    ProtectionMask = MiMakeProtectionMask(NewProtect & 0xFF807FF);
    if ( ProtectionMask == -1 )
      return -1073741755;
  }
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  v24 = PreviousMode;
  if ( PreviousMode )
  {
    v14 = (__int64)BaseAddress;
    if ( (unsigned __int64)BaseAddress >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v14 = *(_QWORD *)v14;
    v15 = (__int64)RegionSize;
    if ( (unsigned __int64)RegionSize >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v15 = *(_QWORD *)v15;
    v16 = (__int64)v8;
    if ( (unsigned __int64)v8 >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v16 = *(_DWORD *)v16;
    v17 = *BaseAddress;
    v26 = *BaseAddress;
    v18 = *RegionSize;
    v28 = *RegionSize;
    PreviousMode = v24;
  }
  else
  {
    v18 = *RegionSize;
    v28 = *RegionSize;
    v17 = *BaseAddress;
    v26 = *BaseAddress;
  }
  if ( (unsigned __int64)v17 > 0x7FFFFFFEFFFFLL )
    return -1073741584;
  if ( 0x7FFFFFFF0000LL - (__int64)v17 < v18 || !v18 )
    return -1073741583;
  result = ObReferenceObjectByHandleWithTag(
             v7,
             8u,
             (POBJECT_TYPE)PsProcessType,
             PreviousMode,
             0x76506D4Du,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v20 = Object;
    if ( Process != Object )
    {
      KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
      v9 = 1;
    }
    if ( (v20[992] & 1) != 0 )
      v21 = VslDebugProtectSecureProcessMemory(
              (_DWORD)v20,
              (_DWORD)Process,
              (unsigned int)&v26,
              (unsigned int)&v28,
              NewProtect,
              (__int64)&v25);
    else
      v21 = MmProtectVirtualMemory(
              (_DWORD)Process,
              (_DWORD)v20,
              (unsigned int)&v26,
              (unsigned int)&v28,
              NewProtect,
              (__int64)&v25);
    v22 = v21;
    LODWORD(Object) = v21;
    if ( v9 )
      KeUnstackDetachProcess(&ApcState);
    if ( v22 >= 0 && (((unsigned __int8)MiMakeProtectionMask(v25) | (unsigned __int8)ProtectionMask) & 2) != 0 )
      EtwTiLogProtectExecVm((_DWORD)v20, v24, (_DWORD)v26, v18, NewProtect, v23);
    ObfDereferenceObjectWithTag(v20, 0x76506D4Du);
    *v29 = v28;
    *BaseAddress = v26;
    *v30 = v25;
    return v22;
  }
  return result;
}
