/*
 * XREFs of IovUnloadDrivers @ 0x140ABE7F0
 * Callers:
 *     IoShutdownSystem @ 0x140A96AB4 (IoShutdownSystem.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ZwDelayExecution @ 0x140412990 (ZwDelayExecution.c)
 *     ObEnumerateObjectsByType @ 0x140978854 (ObEnumerateObjectsByType.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     IovpUnloadDriver @ 0x140ABEEB8 (IovpUnloadDriver.c)
 */

__int64 IovUnloadDrivers()
{
  PVOID *v1; // rbx
  unsigned int v2; // ebp
  PVOID *v3; // rdi
  char v4; // dl
  PVOID *v5; // rdi
  PVOID *v6; // rsi
  _DWORD *v7; // rcx
  PVOID *v8; // rdi
  PVOID v9; // rcx
  int v10; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+44h] [rbp+Ch]

  if ( !PopShutdownCleanly )
    return 3221225473LL;
  IovDriverListHead = 0LL;
  v1 = 0LL;
  v2 = ObEnumerateObjectsByType();
  while ( 1 )
  {
    v3 = (PVOID *)IovDriverListHead;
    if ( !IovDriverListHead )
      break;
    IovDriverListHead = *(PVOID *)IovDriverListHead;
    if ( (unsigned int)IovpUnloadDriver(v3[1]) == 259 )
    {
      *v3 = v1;
      v1 = v3;
    }
    else
    {
      ObfDereferenceObject(v3[1]);
      ExFreePoolWithTag(v3, 0);
    }
  }
  while ( 1 )
  {
    v4 = 0;
    v5 = 0LL;
    while ( 1 )
    {
      v6 = v1;
      if ( !v1 )
        break;
      v7 = v1[1];
      v1 = (PVOID *)*v1;
      if ( (v7[4] & 1) != 0 )
      {
        ObfDereferenceObject(v7);
        ExFreePoolWithTag(v6, 0);
        v4 = 1;
      }
      else
      {
        *v6 = v5;
        v5 = v6;
      }
    }
    if ( !v4 )
      break;
    v11 = -1;
    v10 = -100000000;
    ZwDelayExecution(0LL, (__int64)&v10);
    v1 = v5;
    if ( !v5 )
      goto LABEL_17;
  }
  v1 = v5;
LABEL_17:
  while ( 1 )
  {
    v8 = v1;
    if ( !v1 )
      break;
    v9 = v1[1];
    v1 = (PVOID *)*v1;
    ObfDereferenceObject(v9);
    ExFreePoolWithTag(v8, 0);
  }
  return v2;
}
