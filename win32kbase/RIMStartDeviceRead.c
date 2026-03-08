/*
 * XREFs of RIMStartDeviceRead @ 0x1C0088FD8
 * Callers:
 *     RIMStartDeviceSpecificRead @ 0x1C0087454 (RIMStartDeviceSpecificRead.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMStartDeviceRead(struct _IO_STATUS_BLOCK *ApcContext, __int64 a2, void *a3, ULONG a4)
{
  NTSTATUS File; // eax

  File = ZwReadFile(
           ApcContext[14].Pointer,
           0LL,
           rimInputApc,
           ApcContext,
           ApcContext + 16,
           a3,
           a4,
           (PLARGE_INTEGER)&gZero,
           0LL);
  ApcContext[17].Status = File;
  if ( File >= 0 )
    ApcContext[143].Information = MEMORY[0xFFFFF78000000014];
  return (unsigned int)ApcContext[17].Status;
}
