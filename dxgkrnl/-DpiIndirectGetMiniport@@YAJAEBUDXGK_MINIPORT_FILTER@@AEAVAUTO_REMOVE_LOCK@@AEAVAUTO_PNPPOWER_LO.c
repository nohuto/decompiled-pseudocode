__int64 __fastcall DpiIndirectGetMiniport(
        const struct DXGK_MINIPORT_FILTER *a1,
        PVOID *a2,
        struct AUTO_PNPPOWER_LOCK *a3,
        struct _FDO_CONTEXT **a4)
{
  char v5; // bl
  int DeviceInstanceId; // r15d
  __int64 v7; // r12
  _QWORD *v8; // rdi
  _QWORD *i; // r14
  AUTO_PNPPOWER_LOCK *v10; // rdi
  char v11; // di
  struct _DEVICE_OBJECT *v12; // rcx
  char v14; // [rsp+30h] [rbp-40h]
  char v15; // [rsp+31h] [rbp-3Fh]
  PCWSTR SourceString; // [rsp+38h] [rbp-38h] BYREF
  PVOID v17; // [rsp+40h] [rbp-30h] BYREF
  char v18; // [rsp+48h] [rbp-28h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v20[16]; // [rsp+60h] [rbp-10h] BYREF

  v5 = 0;
  DeviceInstanceId = 0;
  v15 = 0;
  if ( !IsMiniportListMutexOwnedByCurrentThread() )
  {
    AcquireMiniportListMutex();
    v5 = 1;
    v15 = 1;
  }
  v7 = qword_1C013B4C8;
  v14 = 0;
  if ( (__int64 *)qword_1C013B4C8 == &qword_1C013B4C8 )
    goto LABEL_33;
  do
  {
    if ( *((_BYTE *)a1 + 4) || *(_BYTE *)(v7 + 134) )
    {
      KeWaitForSingleObject((PVOID)(v7 + 72), Executive, 0, 0, 0LL);
      v8 = (_QWORD *)(v7 + 56);
      for ( i = *(_QWORD **)(v7 + 56); i != v8; i = (_QWORD *)*i )
      {
        if ( i && *((_DWORD *)i + 4) == 1953656900 && *((_DWORD *)i + 5) == 2 )
        {
          v17 = i;
          AUTO_REMOVE_LOCK::Release(a2);
          *a2 = i;
          *((_BYTE *)a2 + 8) = 0;
          v18 = 0;
          AUTO_REMOVE_LOCK::Release(&v17);
          DeviceInstanceId = AUTO_REMOVE_LOCK::Acquire((struct _IO_REMOVE_LOCK **)a2);
          if ( DeviceInstanceId >= 0 )
          {
            v10 = AUTO_PNPPOWER_LOCK::AUTO_PNPPOWER_LOCK((AUTO_PNPPOWER_LOCK *)v20, (struct _COMMON_PNP_CONTEXT *)i);
            AUTO_PNPPOWER_LOCK::Release(a3);
            *(_QWORD *)a3 = *(_QWORD *)v10;
            *((_BYTE *)a3 + 8) = *((_BYTE *)v10 + 8);
            *((_BYTE *)a3 + 9) = *((_BYTE *)v10 + 9);
            *((_BYTE *)a3 + 10) = *((_BYTE *)v10 + 10);
            *((_BYTE *)v10 + 10) = 0;
            AUTO_PNPPOWER_LOCK::Release((AUTO_PNPPOWER_LOCK *)v20);
            if ( *(_DWORD *)a1 == 1 )
            {
              if ( *((_DWORD *)i + 668) == *((_DWORD *)a1 + 2) && *((_DWORD *)i + 669) == *((_DWORD *)a1 + 3) )
              {
                v11 = 1;
                *a4 = (struct _FDO_CONTEXT *)i;
                v14 = 1;
                goto LABEL_27;
              }
            }
            else if ( !*(_DWORD *)a1 )
            {
              v12 = (struct _DEVICE_OBJECT *)i[19];
              SourceString = 0LL;
              DeviceInstanceId = DpiGetDeviceInstanceId(v12, (ULONG_PTR *)&SourceString);
              if ( DeviceInstanceId < 0 )
              {
                AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&SourceString);
                break;
              }
              DestinationString = 0LL;
              RtlInitUnicodeString(&DestinationString, SourceString);
              if ( !RtlCompareUnicodeString(&DestinationString, *((PCUNICODE_STRING *)a1 + 1), 1u) )
              {
                v11 = 1;
                *a4 = (struct _FDO_CONTEXT *)i;
                v14 = 1;
                AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&SourceString);
                goto LABEL_27;
              }
              AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&SourceString);
            }
            AUTO_PNPPOWER_LOCK::Release(a3);
            v8 = (_QWORD *)(v7 + 56);
          }
          else
          {
            DeviceInstanceId = 0;
          }
        }
      }
      v11 = v14;
LABEL_27:
      KeReleaseMutex((PRKMUTEX)(v7 + 72), 0);
    }
    else
    {
      v11 = v14;
    }
    if ( DeviceInstanceId < 0 )
      break;
    v7 = *(_QWORD *)v7;
  }
  while ( (__int64 *)v7 != &qword_1C013B4C8 );
  v5 = v15;
  if ( !v11 && DeviceInstanceId >= 0 )
LABEL_33:
    DeviceInstanceId = -1073741275;
  if ( v5 )
  {
    _InterlockedExchange64(&qword_1C013B4D8, 0LL);
    KeReleaseMutex(Mutex, 0);
  }
  return (unsigned int)DeviceInstanceId;
}
