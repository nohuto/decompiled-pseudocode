/*
 * XREFs of NtCreateRegistryTransaction @ 0x1407837C0
 * Callers:
 *     <none>
 * Callees:
 *     CmCleanupThreadInfo @ 0x140263740 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140263760 (CmpInitializeThreadInfo.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObInsertObjectEx @ 0x1407BB7C0 (ObInsertObjectEx.c)
 *     NtClose @ 0x1407C00E0 (NtClose.c)
 *     ObCreateObjectEx @ 0x1407D1090 (ObCreateObjectEx.c)
 *     CmpAcquireShutdownRundown @ 0x140AF23A0 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF23F0 (CmpReleaseShutdownRundown.c)
 */

__int64 __fastcall NtCreateRegistryTransaction(HANDLE *a1, __int64 a2, int a3, int a4)
{
  int v7; // ecx
  int v8; // r9d
  char v9; // r14
  char PreviousMode; // r15
  __int64 v11; // rax
  int inserted; // edi
  _OWORD *v13; // rcx
  HANDLE Handle; // [rsp+58h] [rbp-40h] BYREF
  PVOID Object; // [rsp+60h] [rbp-38h]
  __int64 v17[3]; // [rsp+68h] [rbp-30h] BYREF

  *(_OWORD *)v17 = 0LL;
  Object = 0LL;
  Handle = 0LL;
  CmpInitializeThreadInfo((__int64)v17);
  v9 = CmpAcquireShutdownRundown();
  if ( v9 )
  {
    if ( a4 )
    {
      inserted = -1073741811;
    }
    else
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( PreviousMode == 1 )
      {
        v11 = 0x7FFFFFFF0000LL;
        if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
          v11 = (__int64)a1;
        *(_QWORD *)v11 = 0LL;
      }
      else
      {
        *a1 = 0LL;
      }
      LOBYTE(v8) = PreviousMode;
      LOBYTE(v7) = PreviousMode;
      inserted = ObCreateObjectEx(v7, (_DWORD)CmRegistryTransactionType, a3, v8);
      if ( inserted >= 0 )
      {
        v13 = Object;
        *(_OWORD *)Object = 0LL;
        v13[1] = 0LL;
        *((_QWORD *)v13 + 1) = 0LL;
        inserted = ObInsertObjectEx(v13, 0LL, 0, 0LL, (__int64)&Handle);
        Object = 0LL;
        if ( inserted >= 0 )
        {
          *a1 = Handle;
          Handle = 0LL;
          inserted = 0;
        }
      }
    }
  }
  else
  {
    inserted = -1073741431;
  }
  if ( Handle )
    NtClose(Handle);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v9 )
    CmpReleaseShutdownRundown();
  CmCleanupThreadInfo(v17);
  return (unsigned int)inserted;
}
