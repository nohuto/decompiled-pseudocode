/*
 * XREFs of IoGetContainerInformation @ 0x1409451E0
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionObjectById @ 0x1402BE684 (MmGetSessionObjectById.c)
 *     PsGetCurrentProcessSessionId @ 0x140343AA0 (PsGetCurrentProcessSessionId.c)
 *     MmGetIoSessionState @ 0x140A2F8D0 (MmGetIoSessionState.c)
 */

NTSTATUS __stdcall IoGetContainerInformation(
        IO_CONTAINER_INFORMATION_CLASS InformationClass,
        PVOID ContainerObject,
        PVOID Buffer,
        ULONG BufferLength)
{
  PVOID SessionObjectById; // rax
  unsigned int CurrentProcessSessionId; // eax
  __int64 v8; // rdx
  bool v9; // zf
  int v10; // [rsp+30h] [rbp+8h] BYREF

  SessionObjectById = ContainerObject;
  if ( InformationClass )
    return -1073741585;
  if ( BufferLength < 0xC )
    return -1073741582;
  if ( !ContainerObject )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    SessionObjectById = MmGetSessionObjectById(CurrentProcessSessionId, v8);
    if ( !SessionObjectById )
      return -1073741584;
  }
  v10 = 0;
  *((_DWORD *)Buffer + 1) = MmGetIoSessionState(SessionObjectById, &v10);
  v9 = v10 == MEMORY[0xFFFFF780000002D8];
  *(_DWORD *)Buffer = v10;
  *((_BYTE *)Buffer + 8) = v9;
  return 0;
}
