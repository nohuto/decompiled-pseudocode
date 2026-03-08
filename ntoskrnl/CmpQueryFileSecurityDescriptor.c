/*
 * XREFs of CmpQueryFileSecurityDescriptor @ 0x1406C1120
 * Callers:
 *     CmpOpenHiveFiles @ 0x1406C02C8 (CmpOpenHiveFiles.c)
 *     CmpOpenHiveFile @ 0x1406C05C4 (CmpOpenHiveFile.c)
 *     CmpInitCmRM @ 0x1407334D4 (CmpInitCmRM.c)
 *     CmpLogHiveFileInaccessible @ 0x14078B330 (CmpLogHiveFileInaccessible.c)
 *     CmpStartRMLog @ 0x140863C7C (CmpStartRMLog.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     CmSiAllocateMemory @ 0x1402447A4 (CmSiAllocateMemory.c)
 *     ZwQuerySecurityObject @ 0x140414FD0 (ZwQuerySecurityObject.c)
 */

__int64 __fastcall CmpQueryFileSecurityDescriptor(HANDLE Handle, struct _PRIVILEGE_SET **a2)
{
  struct _PRIVILEGE_SET *Memory; // rdi
  NTSTATUS v5; // ebx
  __int64 result; // rax
  ULONG Length; // [rsp+48h] [rbp+10h] BYREF

  Memory = 0LL;
  Length = 0;
  v5 = ZwQuerySecurityObject(Handle, 4u, 0LL, 0, &Length);
  if ( v5 == -1073741789 )
  {
    Memory = (struct _PRIVILEGE_SET *)CmSiAllocateMemory(Length, 0x64734D43u);
    if ( Memory )
    {
      v5 = ZwQuerySecurityObject(Handle, 4u, Memory, Length, &Length);
      if ( v5 < 0 )
      {
        CmSiFreeMemory(Memory);
        Memory = 0LL;
      }
    }
    else
    {
      v5 = -1073741670;
    }
  }
  else if ( !v5 )
  {
    v5 = -1073741823;
  }
  result = (unsigned int)v5;
  *a2 = Memory;
  return result;
}
