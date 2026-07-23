/*
 * XREFs of NtResetWriteWatch @ 0x14063A770
 * Callers:
 *     <none>
 * Callees:
 *     KeUnstackDetachProcess @ 0x140207580 (KeUnstackDetachProcess.c)
 *     MiUnlockAndDereferenceVad @ 0x14021AF40 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x14021B260 (MiObtainReferencedVadEx.c)
 *     KeStackAttachProcess @ 0x14025B970 (KeStackAttachProcess.c)
 *     MiMoveDirtyBitsToPfns @ 0x140297B10 (MiMoveDirtyBitsToPfns.c)
 *     MiGetVadMandatoryPageSize @ 0x140298600 (MiGetVadMandatoryPageSize.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14063E2A0 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __cdecl NtResetWriteWatch(HANDLE ProcessHandle, PVOID BaseAddress, SIZE_T RegionSize)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rdi
  char *v8; // r12
  PVOID v9; // r13
  int v10; // ebx
  volatile signed __int32 *v11; // rax
  char *v12; // rdi
  int v13; // esi
  unsigned __int64 VadMandatoryPageSize; // rax
  __int64 v16; // rax
  PVOID Object; // [rsp+40h] [rbp-88h] BYREF
  int v18; // [rsp+48h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-78h] BYREF

  Object = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( (unsigned __int64)BaseAddress > 0x7FFFFFFEFFFFLL )
    return -1073741584;
  if ( 0x7FFFFFFF0000LL - (__int64)BaseAddress >= RegionSize && RegionSize )
  {
    CurrentThread = KeGetCurrentThread();
    Process = CurrentThread->ApcState.Process;
    v8 = (char *)BaseAddress + RegionSize - 1;
    if ( ProcessHandle == (HANDLE)-1LL )
    {
      v9 = CurrentThread->ApcState.Process;
      v10 = 0;
    }
    else
    {
      v13 = ObReferenceObjectByHandleWithTag(
              ProcessHandle,
              8u,
              (POBJECT_TYPE)PsProcessType,
              CurrentThread->PreviousMode,
              0x77576D4Du,
              &Object,
              0LL);
      if ( v13 < 0 )
        return v13;
      v9 = Object;
      v10 = 0;
      if ( Process != Object )
      {
        KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
        v10 = 1;
      }
    }
    v11 = MiObtainReferencedVadEx((unsigned __int64)BaseAddress, 0, &v18);
    v12 = (char *)v11;
    if ( !v11 )
    {
      v13 = -1073741585;
      goto LABEL_10;
    }
    if ( (v11[12] & 0x300000) == 0x300000
      && (unsigned __int64)v8 <= (((*((unsigned int *)v11 + 7) | ((unsigned __int64)*((unsigned __int8 *)v11 + 33) << 32)) << 12) | 0xFFF) )
    {
      VadMandatoryPageSize = MiGetVadMandatoryPageSize((__int64)v11);
      if ( VadMandatoryPageSize <= 1 )
      {
LABEL_17:
        MiMoveDirtyBitsToPfns((unsigned __int64)BaseAddress, (unsigned __int64)v8, (__int64)v12, 1);
        v13 = 0;
        goto LABEL_9;
      }
      v16 = (VadMandatoryPageSize << 12) - 1;
      if ( (v16 & (unsigned __int64)BaseAddress) == 0 )
      {
        if ( (v16 & RegionSize) != 0 )
        {
          v13 = -1073741583;
          goto LABEL_9;
        }
        goto LABEL_17;
      }
    }
    v13 = -1073741585;
LABEL_9:
    MiUnlockAndDereferenceVad(v12);
LABEL_10:
    if ( v10 )
      KeUnstackDetachProcess(&ApcState);
    if ( ProcessHandle != (HANDLE)-1LL )
      ObfDereferenceObjectWithTag(v9, 0x77576D4Du);
    return v13;
  }
  return -1073741583;
}
