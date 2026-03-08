/*
 * XREFs of AlpcpCreateConnectionPort @ 0x14077D738
 * Callers:
 *     NtCreateWaitablePort @ 0x14077D650 (NtCreateWaitablePort.c)
 *     NtCreatePort @ 0x14077D6A0 (NtCreatePort.c)
 *     NtAlpcCreatePort @ 0x14077D6F0 (NtAlpcCreatePort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     AlpcpSetOwnerProcessPort @ 0x140712A4C (AlpcpSetOwnerProcessPort.c)
 *     AlpcpValidateAndSetPortAttributes @ 0x140712AA4 (AlpcpValidateAndSetPortAttributes.c)
 *     AlpcpInitializePort @ 0x140712D08 (AlpcpInitializePort.c)
 *     AlpcInitializeHandleTable @ 0x14071378C (AlpcInitializeHandleTable.c)
 *     AlpcpCreatePort @ 0x1407137E0 (AlpcpCreatePort.c)
 *     ObInsertObjectEx @ 0x1407BB7C0 (ObInsertObjectEx.c)
 *     NtClose @ 0x1407C00E0 (NtClose.c)
 *     AlpcpAllocateBlob @ 0x1407CBB50 (AlpcpAllocateBlob.c)
 */

__int64 __fastcall AlpcpCreateConnectionPort(
        HANDLE *a1,
        int a2,
        unsigned __int64 a3,
        unsigned int a4,
        char a5,
        char a6)
{
  __int64 v10; // rcx
  char PreviousMode; // r9
  __int64 v12; // rdx
  __int64 result; // rax
  char v14; // al
  PVOID v15; // rbx
  int v16; // r14d
  _QWORD *v17; // r14
  int v18; // edi
  __int64 Blob; // rax
  _QWORD *v20; // rax
  int v21; // eax
  int inserted; // ebx
  HANDLE Handle; // [rsp+40h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+48h] [rbp-A0h] BYREF
  _OWORD v25[5]; // [rsp+50h] [rbp-98h] BYREF

  memset(v25, 0, 0x48uLL);
  Object = 0LL;
  Handle = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v12 = 0x7FFFFFFF0000LL;
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v10 = (__int64)a1;
    *(_QWORD *)v10 = *(_QWORD *)v10;
    if ( a3 )
    {
      if ( a3 < 0x7FFFFFFF0000LL )
        v12 = a3;
      v25[0] = *(_OWORD *)v12;
      v25[1] = *(_OWORD *)(v12 + 16);
      v25[2] = *(_OWORD *)(v12 + 32);
      v25[3] = *(_OWORD *)(v12 + 48);
      *(_QWORD *)&v25[4] = *(_QWORD *)(v12 + 64);
    }
  }
  else if ( a3 )
  {
    v25[0] = *(_OWORD *)a3;
    v25[1] = *(_OWORD *)(a3 + 16);
    v25[2] = *(_OWORD *)(a3 + 32);
    v25[3] = *(_OWORD *)(a3 + 48);
    *(_QWORD *)&v25[4] = *(_QWORD *)(a3 + 64);
  }
  LOBYTE(v10) = PreviousMode;
  result = AlpcpCreatePort(v10, a2, &Object);
  if ( (int)result >= 0 )
  {
    if ( a3 )
    {
      v14 = a5;
      if ( (v25[0] & 0x40000) != 0 )
        v14 = 1;
      a5 = v14;
    }
    v15 = Object;
    v16 = AlpcpInitializePort((__int64)Object, 1, a5);
    if ( v16 < 0 )
    {
      ObfDereferenceObject(v15);
      return (unsigned int)v16;
    }
    v17 = (_QWORD *)((unsigned __int64)v25 & -(__int64)(a3 != 0));
    v18 = AlpcpValidateAndSetPortAttributes((__int64)v15, v17, (__int64)v15, 0LL, a4, a5, a6);
    if ( v18 >= 0 )
    {
      if ( a6 )
        *((_DWORD *)v15 + 104) |= 0x3000u;
      AlpcpSetOwnerProcessPort((__int64)v15, v17);
      Blob = AlpcpAllocateBlob(AlpcConnectionType, 80LL);
      *((_QWORD *)v15 + 2) = Blob;
      if ( Blob )
      {
        *(_QWORD *)(Blob + 16) = 0LL;
        **((_QWORD **)v15 + 2) = v15;
        *(_QWORD *)(*((_QWORD *)v15 + 2) + 8LL) = 0LL;
        *(_QWORD *)(*((_QWORD *)v15 + 2) + 72LL) = 0LL;
        v20 = (_QWORD *)(*((_QWORD *)v15 + 2) + 24LL);
        v20[1] = v20;
        *v20 = v20;
        v21 = AlpcInitializeHandleTable(*((_QWORD *)v15 + 2) + 40LL);
        if ( v21 >= 0 )
        {
          inserted = ObInsertObjectEx(v15, 0LL, 0, 0LL, (__int64)&Handle);
          if ( inserted >= 0 )
            *a1 = Handle;
          return (unsigned int)inserted;
        }
        v18 = v21;
      }
      else
      {
        v18 = -1073741801;
      }
    }
    ObfDereferenceObject(v15);
    return (unsigned int)v18;
  }
  return result;
}
