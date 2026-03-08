/*
 * XREFs of ObInitServerSilo @ 0x14085264C
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1409AA0D0 (PspInitializeServerSiloDeferred.c)
 *     ObInitSystem @ 0x140B403CC (ObInitSystem.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     PsGetServerSiloGlobals @ 0x1402992FC (PsGetServerSiloGlobals.c)
 *     PsGetPermanentSiloContext @ 0x1402B6120 (PsGetPermanentSiloContext.c)
 *     PsIsHostSilo @ 0x14030F2E0 (PsIsHostSilo.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ObReferenceObjectByNameEx @ 0x140710ADC (ObReferenceObjectByNameEx.c)
 *     ObOpenObjectByPointer @ 0x1407C93D0 (ObOpenObjectByPointer.c)
 */

int __fastcall ObInitServerSilo(PVOID Object)
{
  __int64 *ServerSiloGlobals; // rax
  __int64 v3; // rdx
  __int64 *v4; // r14
  _QWORD *v5; // rcx
  int result; // eax
  int v7; // ebx
  __int64 v8; // rbx
  PVOID v9; // rcx
  _DWORD v10[2]; // [rsp+40h] [rbp-30h] BYREF
  HANDLE v11; // [rsp+48h] [rbp-28h]
  __int64 *v12; // [rsp+50h] [rbp-20h]
  int v13; // [rsp+58h] [rbp-18h]
  int v14; // [rsp+5Ch] [rbp-14h]
  __int128 v15; // [rsp+60h] [rbp-10h]
  HANDLE Handle; // [rsp+A8h] [rbp+38h] BYREF
  PVOID v17; // [rsp+B0h] [rbp+40h] BYREF
  PVOID Objecta; // [rsp+B8h] [rbp+48h] BYREF

  v17 = 0LL;
  v14 = 0;
  Handle = 0LL;
  Objecta = 0LL;
  v10[1] = 0;
  ServerSiloGlobals = (__int64 *)PsGetServerSiloGlobals((__int64)Object);
  v3 = 37LL;
  v4 = ServerSiloGlobals;
  ServerSiloGlobals[15] = 0LL;
  v5 = ServerSiloGlobals + 16;
  ServerSiloGlobals[90] = 0LL;
  do
  {
    v5[1] = v5;
    *v5 = v5;
    v5 += 2;
    --v3;
  }
  while ( v3 );
  if ( PsIsHostSilo((__int64)Object) )
    return 0;
  result = PsGetPermanentSiloContext((__int64)Object, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&Objecta);
  if ( result >= 0 )
  {
    result = ObOpenObjectByPointer(Objecta, 0x240u, 0LL, 2u, ObpDirectoryObjectType, 0, &Handle);
    if ( result >= 0 )
    {
      v11 = Handle;
      v10[0] = 48;
      v12 = &ObpGlobalDirectoryName;
      v13 = 576;
      v15 = 0LL;
      v7 = ObReferenceObjectByNameEx((__int64)v10, 0LL, 2, (__int64)ObpDirectoryObjectType, 0, 0LL, (__int64 *)&v17);
      ZwClose(Handle);
      if ( v7 < 0 )
        return v7;
      v8 = *((_QWORD *)v17 + 38);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 240), 0x10uLL) <= 0 )
        __fastfail(0xEu);
      *v4 = (v8 + 15) & -(__int64)(v8 != 0);
      ObfReferenceObjectWithTag(Object, 0x6D44624Fu);
      v9 = v17;
      *(_QWORD *)(v8 + 16) = Object;
      ObfDereferenceObject(v9);
      return 0;
    }
  }
  return result;
}
