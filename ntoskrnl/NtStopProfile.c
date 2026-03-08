/*
 * XREFs of NtStopProfile @ 0x140A01C50
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseMutex @ 0x1402046C0 (KeReleaseMutex.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     MmUnlockPages @ 0x14027C0C0 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x14027CCB0 (MmUnmapLockedPages.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     KeStopProfile @ 0x140571BAC (KeStopProfile.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall NtStopProfile(void *a1)
{
  int v1; // ebp
  NTSTATUS result; // eax
  _QWORD *v3; // r14
  void *v4; // rbx
  struct _MDL *v5; // rdi
  void *v6; // rsi
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, 1u, ExProfileObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    KeWaitForSingleObject(&ExpProfileStateMutex, Executive, 0, 0, 0LL);
    v3 = Object;
    if ( *((_QWORD *)Object + 6) )
    {
      KeStopProfile(*((_QWORD *)Object + 5));
      v4 = (void *)v3[6];
      v5 = (struct _MDL *)v3[7];
      v6 = (void *)v3[5];
      --ExpCurrentProfileUsage;
      v3[6] = 0LL;
      KeReleaseMutex(&ExpProfileStateMutex, 0);
      MmUnmapLockedPages(v4, v5);
      MmUnlockPages(v5);
      ExFreePoolWithTag(v6, 0);
    }
    else
    {
      KeReleaseMutex(&ExpProfileStateMutex, 0);
      v1 = -1073741641;
    }
    ObfDereferenceObject(v3);
    return v1;
  }
  return result;
}
