/*
 * XREFs of NtRemoveIoCompletionEx @ 0x14075AB50
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     IoRemoveIoCompletion @ 0x140315A70 (IoRemoveIoCompletion.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtRemoveIoCompletionEx(
        HANDLE Handle,
        volatile void *Address,
        unsigned int a3,
        _DWORD *a4,
        PLARGE_INTEGER a5,
        BOOLEAN a6)
{
  __int64 v7; // rdi
  __int64 Timeout; // r15
  KPROCESSOR_MODE PreviousMode; // si
  PLIST_ENTRY *Pool2; // r14
  int v13; // ebx
  __int64 v15; // rcx
  ULONG v16[3]; // [rsp+44h] [rbp-F4h] BYREF
  LARGE_INTEGER v17; // [rsp+50h] [rbp-E8h] BYREF
  PVOID Object; // [rsp+58h] [rbp-E0h] BYREF
  _BYTE P[128]; // [rsp+70h] [rbp-C8h] BYREF

  v7 = a3;
  Timeout = (__int64)a5;
  memset(P, 0, sizeof(P));
  v17.QuadPart = 0LL;
  v16[0] = 0;
  if ( (unsigned int)(v7 - 1) > 0x7FFFFFE )
    return 3221225485LL;
  *(_QWORD *)&v16[1] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(Address, 32 * v7, 8u);
    v15 = (__int64)a4;
    if ( (unsigned __int64)a4 >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v15 = *(_DWORD *)v15;
    if ( a5 )
    {
      *(_QWORD *)&v16[1] = &v17;
      if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
        Timeout = 0x7FFFFFFF0000LL;
      v17 = *(LARGE_INTEGER *)Timeout;
    }
    Timeout = *(_QWORD *)&v16[1];
  }
  else if ( !a5 )
  {
    Timeout = *(_QWORD *)&v16[1];
  }
  if ( (unsigned int)v7 > 0x10 )
  {
    Pool2 = (PLIST_ENTRY *)ExAllocatePool2(64LL, 8 * v7, 1866690377LL);
    if ( Pool2 )
      goto LABEL_7;
    LODWORD(v7) = 16;
  }
  Pool2 = (PLIST_ENTRY *)P;
LABEL_7:
  Object = 0LL;
  v13 = ObReferenceObjectByHandle(Handle, 2u, IoCompletionObjectType, PreviousMode, &Object, 0LL);
  if ( v13 >= 0 )
  {
    v13 = IoRemoveIoCompletion(
            (struct _KQUEUE *)Object,
            (__int64)Address,
            Pool2,
            v7,
            v16,
            PreviousMode,
            (PLARGE_INTEGER)Timeout,
            a6);
    ObfDereferenceObject(Object);
  }
  if ( Pool2 != (PLIST_ENTRY *)P )
    ExFreePoolWithTag(Pool2, 0);
  if ( v13 >= 0 )
    *a4 = v16[0];
  return (unsigned int)v13;
}
