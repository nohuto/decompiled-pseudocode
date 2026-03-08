/*
 * XREFs of DbgkPostModuleMessage @ 0x1405395FC
 * Callers:
 *     DbgkPostEnclaveModuleMessages @ 0x140539580 (DbgkPostEnclaveModuleMessages.c)
 *     PsDispatchIumService @ 0x1405A2A44 (PsDispatchIumService.c)
 *     DbgkpPostModuleMessages @ 0x140934C44 (DbgkpPostModuleMessages.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x140412970 (ZwOpenFile.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ObCloseHandle @ 0x1407F0D20 (ObCloseHandle.c)
 *     MmGetFileNameForAddress @ 0x1408A737E (MmGetFileNameForAddress.c)
 *     DbgkpQueueMessage @ 0x140934EE8 (DbgkpQueueMessage.c)
 *     DbgkpSendApiMessage @ 0x1409370E0 (DbgkpSendApiMessage.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall DbgkPostModuleMessage(
        PVOID Object,
        PVOID a2,
        void *a3,
        unsigned int a4,
        unsigned int a5,
        PRKEVENT a6)
{
  NTSTATUS v10; // eax
  HANDLE v11; // r8
  NTSTATUS result; // eax
  PVOID P[2]; // [rsp+30h] [rbp-D0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-90h] BYREF
  HANDLE v16[34]; // [rsp+80h] [rbp-80h] BYREF

  IoStatusBlock = 0LL;
  *(_OWORD *)P = 0LL;
  memset(&ObjectAttributes, 0, 44);
  memset(v16, 0, sizeof(v16));
  LODWORD(v16[5]) = 5;
  v16[7] = a3;
  v16[8] = (HANDLE)__PAIR64__(a5, a4);
  if ( (int)MmGetFileNameForAddress(a3, P) >= 0 )
  {
    ObjectAttributes.ObjectName = (PUNICODE_STRING)P;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 1600;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v10 = ZwOpenFile(&v16[6], 0x80100000, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u);
    v11 = v16[6];
    if ( v10 < 0 )
      v11 = 0LL;
    v16[6] = v11;
    ExFreePoolWithTag(P[1], 0);
  }
  if ( a6 )
  {
    result = DbgkpQueueMessage(Object, a2, a6);
    if ( result >= 0 )
      return result;
  }
  else
  {
    result = DbgkpSendApiMessage(Object);
  }
  if ( v16[6] )
    return ObCloseHandle(v16[6], 0);
  return result;
}
