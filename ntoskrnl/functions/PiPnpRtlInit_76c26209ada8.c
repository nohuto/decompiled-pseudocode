__int64 __fastcall PiPnpRtlInit(unsigned int a1)
{
  int v2; // ebx
  int v4; // ecx
  int v5; // r8d
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r14
  HANDLE v12; // r12
  _QWORD *v13; // rsi
  UNICODE_STRING *v14; // rdi
  UNICODE_STRING *i; // rbx
  UNICODE_STRING **v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  PVOID v20; // rcx
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  PVOID P; // [rsp+98h] [rbp+38h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+40h] BYREF

  Handle = 0LL;
  if ( a1 )
    return (unsigned int)PiDrvDbInit(a1);
  qword_140C5BD38 = (__int64)&PiPnpRtlActiveOperations;
  PiPnpRtlActiveOperations = (__int64)&PiPnpRtlActiveOperations;
  v2 = ExInitializeResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
  if ( v2 >= 0 )
  {
    v2 = ExInitializeResourceLite(&PiPnpRtlActiveOperationsLock);
    if ( v2 >= 0 )
    {
      v2 = PnpCtxOpenMachine(v4, 0, v5, 0);
      if ( v2 >= 0 )
      {
        if ( !CmIsStateSeparationEnabled()
          || (int)PnpCtxRegOpenKey(PiPnpRtlCtx, -2147483646, (unsigned int)L"DEVICES", 0, 0x2000000, (__int64)&Handle) < 0 )
        {
          goto LABEL_35;
        }
        v11 = *(_QWORD *)&PiPnpRtlCtx;
        v12 = Handle;
        v13 = (_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 56LL);
        if ( (_QWORD *)*v13 == v13 )
        {
          P = 0LL;
          DestinationString = 0LL;
          RtlInitUnicodeString(&DestinationString, L"DEVICES");
          v14 = (UNICODE_STRING *)(v11 + 8);
          for ( i = *(UNICODE_STRING **)(v11 + 8); i != v14; i = *(UNICODE_STRING **)&i->Length )
          {
            if ( RtlEqualUnicodeString(i + 2, &DestinationString, 1u) )
            {
              P = i;
              if ( i )
              {
                v2 = -1073741771;
                goto LABEL_31;
              }
              break;
            }
          }
          v2 = PnpCtxCreateNode(
                 v11,
                 L"DEVICES",
                 2LL,
                 0LL,
                 v12,
                 -1LL,
                 -1LL,
                 *(_QWORD *)(*(_QWORD *)(v11 + 224) + 8LL),
                 &P);
          if ( v2 < 0 )
          {
            v20 = P;
          }
          else
          {
            v16 = *(UNICODE_STRING ***)(v11 + 16);
            if ( *v16 != v14
              || (v17 = P,
                  *(_QWORD *)P = v14,
                  v17[1] = v16,
                  *v16 = (UNICODE_STRING *)v17,
                  *(_QWORD *)(v11 + 16) = v17,
                  v18 = v17 + 2,
                  v19 = (_QWORD *)v13[1],
                  (_QWORD *)*v19 != v13) )
            {
              __fastfail(3u);
            }
            v18[1] = v19;
            *v18 = v13;
            *v19 = v18;
            v13[1] = v18;
            memset((void *)(v11 + 96), 0, 0x80uLL);
            v20 = 0LL;
            *(_BYTE *)(v11 + 4) = *v13 != (_QWORD)v13;
            P = 0LL;
          }
          if ( v20 )
            PnpCtxDestroyNode(v20);
        }
        else
        {
          v2 = -1073741298;
        }
LABEL_31:
        ZwClose(Handle);
        if ( v2 >= 0 )
        {
LABEL_35:
          v2 = PnpCtxSetNtPlugPlayRoutine(v6, 1LL, PiPnpRtlGetDeviceNtPropertyRoutine);
          if ( v2 >= 0 )
          {
            v2 = PnpCtxSetNtPlugPlayRoutine(v7, 2LL, PiPnpRtlGetDeviceStatus);
            if ( v2 >= 0 )
            {
              v2 = PnpCtxSetNtPlugPlayRoutine(v8, 3LL, PiPnpRtlGetDeviceRelatedDeviceRoutine);
              if ( v2 >= 0 )
              {
                v2 = PnpCtxSetNtPlugPlayRoutine(v9, 4LL, PiPnpRtlGetDeviceRelationsList);
                if ( v2 >= 0 )
                {
                  v2 = PnpCtxSetNtPlugPlayRoutine(v10, 5LL, PiPnpRtlGetDeviceInterfaceEnabled);
                  if ( v2 >= 0 )
                  {
                    _InterlockedExchange64(
                      (volatile __int64 *)(*(_QWORD *)&PiPnpRtlCtx + 488LL),
                      (__int64)PiPnpRtlObjectActionCallback);
                    _InterlockedExchange64(
                      (volatile __int64 *)(*(_QWORD *)&PiPnpRtlCtx + 504LL),
                      (__int64)PiPnpRtlCmActionCallback);
                    _InterlockedExchange64(
                      (volatile __int64 *)(*(_QWORD *)&PiPnpRtlCtx + 496LL),
                      (__int64)PiPnpRtlObjectEventCallback);
                    return (unsigned int)PiDrvDbInit(a1);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v2;
}
