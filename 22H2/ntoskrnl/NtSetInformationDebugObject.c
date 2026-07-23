/*
 * XREFs of NtSetInformationDebugObject @ 0x140886310
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C9310 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1402CA770 (ExAcquireFastMutex.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtSetInformationDebugObject(
        HANDLE DebugObjectHandle,
        DEBUGOBJECTINFOCLASS DebugObjectInformationClass,
        PVOID DebugInformation,
        ULONG DebugInformationLength,
        PULONG ReturnLength)
{
  KPROCESSOR_MODE PreviousMode; // r11
  char *v8; // rcx
  __int64 v9; // rdx
  PULONG v10; // rcx
  NTSTATUS result; // eax
  int v12; // esi
  char *v13; // rdi
  unsigned int v14; // edx
  PVOID Object; // [rsp+38h] [rbp-20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
  {
    v10 = ReturnLength;
LABEL_14:
    if ( v10 )
      *v10 = 0;
    goto LABEL_16;
  }
  if ( DebugInformationLength )
  {
    if ( ((unsigned __int8)DebugInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = (char *)DebugInformation + DebugInformationLength;
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v8 > 0x7FFFFFFF0000LL || v8 < DebugInformation )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  else
  {
    v9 = 0x7FFFFFFF0000LL;
  }
  v10 = ReturnLength;
  if ( ReturnLength )
  {
    if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
      v9 = (__int64)ReturnLength;
    *(_DWORD *)v9 = *(_DWORD *)v9;
    goto LABEL_14;
  }
LABEL_16:
  if ( DebugObjectInformationClass != DebugObjectKillProcessOnExitInformation )
    return -1073741811;
  if ( DebugInformationLength == 4 )
  {
    v12 = *(_DWORD *)DebugInformation;
    if ( (*(_DWORD *)DebugInformation & 0xFFFFFFFE) != 0 )
    {
      return -1073741811;
    }
    else
    {
      Object = 0LL;
      result = ObReferenceObjectByHandle(DebugObjectHandle, 4u, DbgkDebugObjectType, PreviousMode, &Object, 0LL);
      if ( result >= 0 )
      {
        v13 = (char *)Object;
        ExAcquireFastMutex((PFAST_MUTEX)((char *)Object + 24));
        v14 = *((_DWORD *)v13 + 24) | 2;
        if ( (v12 & 1) == 0 )
          v14 = *((_DWORD *)v13 + 24) & 0xFFFFFFFD;
        *((_DWORD *)v13 + 24) = v14;
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v13 + 24));
        HalPutDmaAdapter((PADAPTER_OBJECT)v13);
        return 0;
      }
    }
  }
  else
  {
    if ( v10 )
      *v10 = 4;
    return -1073741820;
  }
  return result;
}
