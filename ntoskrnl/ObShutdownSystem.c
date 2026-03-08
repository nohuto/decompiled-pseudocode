/*
 * XREFs of ObShutdownSystem @ 0x140977E00
 * Callers:
 *     PopGracefulShutdown @ 0x140A9D970 (PopGracefulShutdown.c)
 *     PoBroadcastSystemState @ 0x140AA38F8 (PoBroadcastSystemState.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x1402992F0 (PdcCreateWatchdogAroundClientCall.c)
 *     PsGetServerSiloGlobals @ 0x1402992FC (PsGetServerSiloGlobals.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ObReferenceObjectByName @ 0x140698F90 (ObReferenceObjectByName.c)
 *     ExEnumHandleTable @ 0x14070F670 (ExEnumHandleTable.c)
 *     ObpDeleteSymbolicLinkName @ 0x14076F408 (ObpDeleteSymbolicLinkName.c)
 *     ObMakeTemporaryObject @ 0x140791C40 (ObMakeTemporaryObject.c)
 *     ObCleanupSiloState @ 0x140977DD0 (ObCleanupSiloState.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     ObpShutdownTraceLoggingProvider @ 0x140B93128 (ObpShutdownTraceLoggingProvider.c)
 */

LONG_PTR __fastcall ObShutdownSystem(int a1)
{
  _QWORD *v1; // rdi
  _QWORD *v2; // rbx
  void *v3; // rcx
  __int64 v4; // rax
  volatile __int64 *ServerSiloGlobals; // rax
  char *v7; // rsi
  __int64 *v8; // r15
  unsigned int v9; // r14d
  unsigned int v10; // ebx
  __int64 v11; // rax
  char *v12; // r9
  char *v13; // rdx
  char *v14; // rdi
  __int64 *v15; // r13
  __int64 *v16; // r11
  __int64 *v17; // r10
  struct _OBJECT_TYPE *v18; // rax
  char v19; // cl
  __int64 v20; // r12
  struct _KTHREAD *CurrentThread; // rax
  char *v22; // rcx
  struct _OBJECT_TYPE *v23; // rbx
  PVOID *v24; // rcx
  int v25; // [rsp+40h] [rbp-28h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-18h] BYREF
  int v27; // [rsp+B0h] [rbp+48h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+50h] BYREF
  char *v29; // [rsp+C0h] [rbp+58h]
  struct _OBJECT_TYPE *v30; // [rsp+C8h] [rbp+60h]

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v27 = 0;
      return ExEnumHandleTable(
               PsInitialSystemProcess[1].Affinity.StaticBitmap[28],
               (__int64 (__fastcall *)(__int64, signed __int64 *, _QWORD, __int64))ObpShutdownCloseHandleProcedure,
               (__int64)&v27,
               0LL);
    }
    else
    {
      v1 = ObpTypeObjectType;
      Object = 0LL;
      DestinationString = 0LL;
      v2 = *(_QWORD **)ObpTypeObjectType;
      while ( v2 != v1 )
      {
        v3 = v2 + 10;
        v2 = (_QWORD *)*v2;
        Object = v3;
        ObMakeTemporaryObject(v3);
      }
      RtlInitUnicodeString(&DestinationString, L"DosDevices");
      if ( (int)ObReferenceObjectByName(
                  (__int64)&DestinationString,
                  64,
                  0LL,
                  0,
                  (__int64)ObpSymbolicLinkObjectType,
                  0,
                  0,
                  (__int64 *)&Object) >= 0 )
      {
        ObMakeTemporaryObject(Object);
        ObfDereferenceObject(Object);
      }
      RtlInitUnicodeString(&DestinationString, L"Global");
      if ( (int)ObReferenceObjectByName(
                  (__int64)&DestinationString,
                  64,
                  0LL,
                  0,
                  (__int64)ObpSymbolicLinkObjectType,
                  0,
                  0,
                  (__int64 *)&Object) >= 0 )
      {
        ObMakeTemporaryObject(Object);
        ObfDereferenceObject(Object);
      }
      RtlInitUnicodeString(&DestinationString, L"GLOBALROOT");
      if ( (int)ObReferenceObjectByName(
                  (__int64)&DestinationString,
                  64,
                  0LL,
                  0,
                  (__int64)ObpSymbolicLinkObjectType,
                  0,
                  0,
                  (__int64 *)&Object) >= 0 )
      {
        ObMakeTemporaryObject(Object);
        ObfDereferenceObject(Object);
      }
      v4 = PdcCreateWatchdogAroundClientCall();
      ServerSiloGlobals = (volatile __int64 *)PsGetServerSiloGlobals(v4);
      ObCleanupSiloState(ServerSiloGlobals);
      ObfDereferenceObject(ObpRootDirectoryObject);
      ObfDereferenceObject(ObpDirectoryObjectType);
      ObfDereferenceObject(ObpSymbolicLinkObjectType);
      ObfDereferenceObject(ObpTypeDirectoryObject);
      return ObfDereferenceObject(ObpTypeObjectType);
    }
  }
  else
  {
    v7 = (char *)ObpRootDirectoryObject;
    v27 = 1;
    v8 = 0LL;
    v9 = 1;
    v10 = 1;
    if ( ObpRootDirectoryObject )
    {
LABEL_15:
      while ( 2 )
      {
        v11 = 0LL;
LABEL_16:
        LODWORD(Object) = v11;
        if ( (unsigned int)v11 < 0x25 )
        {
          v12 = &v7[8 * v11];
          v13 = *(char **)v12;
          v14 = v12;
          v29 = v12;
          while ( 1 )
          {
            if ( !v13 )
            {
              v11 = (unsigned int)((_DWORD)Object + 1);
              goto LABEL_16;
            }
            v15 = (__int64 *)*((_QWORD *)v13 + 1);
            v16 = v8;
            v17 = v8;
            v18 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v15 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v15 - 48) >> 8)];
            v19 = *((_BYTE *)v15 - 22);
            v30 = v18;
            if ( (v19 & 2) != 0 )
            {
              v20 = (__int64)v15 - ObpInfoMaskToOffset[v19 & 3] - 48;
              v18 = v30;
            }
            else
            {
              v20 = 0LL;
            }
            if ( v8 )
            {
              if ( v15 == v8 && (v8 = 0LL, v10 > v9) )
              {
                v10 = v9;
                v14 = v12;
                v27 = v9;
              }
              else
              {
                v8 = 0LL;
                v14 = v13;
                if ( v15 != v17 )
                  v8 = v16;
              }
            }
            else if ( v18 == ObpTypeObjectType )
            {
              v14 = v13;
            }
            else
            {
              if ( v18 == ObpDirectoryObjectType )
              {
                ++v9;
                v7 = (char *)v15;
                goto LABEL_15;
              }
              CurrentThread = KeGetCurrentThread();
              --CurrentThread->KernelApcDisable;
              ExAcquirePushLockExclusiveEx((ULONG_PTR)(v15 - 4), 0LL);
              *((_BYTE *)v15 - 21) &= ~0x10u;
              ExReleasePushLockEx(v15 - 4, 0LL);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              v22 = *(char **)v14;
              if ( *(v15 - 5) )
              {
                v10 = v27;
                v14 = *(char **)v14;
              }
              else
              {
                *(_QWORD *)v14 = *(_QWORD *)v22;
                ExFreePoolWithTag(v22, 0);
                v23 = v30;
                if ( (v30->TypeInfo.ObjectTypeFlags & 8) == 0 )
                {
                  LOBYTE(v25) = 0;
                  v30->TypeInfo.SecurityProcedure(
                    v15,
                    DeleteSecurityDescriptor,
                    0LL,
                    0LL,
                    0LL,
                    (void **)v15 - 1,
                    v30->TypeInfo.PoolType,
                    0LL,
                    v25);
                }
                if ( v23 == ObpSymbolicLinkObjectType )
                {
                  v10 = v9;
                  v27 = v9;
                  ObpDeleteSymbolicLinkName((__int64)v15);
                  v14 = v29;
                }
                else
                {
                  v10 = v27;
                }
                ExFreePoolWithTag(*(PVOID *)(v20 + 16), 0);
                *(_QWORD *)(v20 + 16) = 0LL;
                *(_DWORD *)(v20 + 8) = 0;
                *(_QWORD *)v20 = 0LL;
                ObfDereferenceObject(v15);
                ObfDereferenceObject(v7);
              }
              v12 = v29;
            }
            v13 = *(char **)v14;
          }
        }
        --v9;
        if ( (*(v7 - 22) & 2) != 0 )
          v24 = (PVOID *)&v7[-ObpInfoMaskToOffset[*(v7 - 22) & 3] - 48];
        else
          v24 = 0LL;
        v8 = (__int64 *)v7;
        v7 = (char *)*v24;
        if ( *v24 )
          continue;
        break;
      }
    }
    return ObpShutdownTraceLoggingProvider();
  }
}
