__int64 DrvDbOpenContext()
{
  __int64 v0; // r14
  __int64 v1; // rsi
  int v2; // edi
  __int64 Pool2; // rax
  PVOID *v4; // rbx
  _QWORD *v5; // rax
  struct _ERESOURCE *v6; // rax
  NTSTATUS DatabaseNode; // edi
  int v8; // eax
  PVOID v10; // rsi
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF

  v0 = *(_QWORD *)&PiPnpRtlCtx;
  v1 = 0LL;
  PiDrvDbCtx = 0LL;
  v11 = 0LL;
  v2 = **(_DWORD **)&PiPnpRtlCtx;
  Pool2 = ExAllocatePool2(256LL, 64LL, 1111770192LL);
  v4 = (PVOID *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  *(_QWORD *)Pool2 = v0;
  *(_DWORD *)(Pool2 + 8) = v2;
  *(_DWORD *)(Pool2 + 12) = -805306368;
  v5 = (_QWORD *)(Pool2 + 16);
  v5[1] = v5;
  *v5 = v5;
  v6 = (struct _ERESOURCE *)ExAllocatePool2(64LL, 104LL, 1111770192LL);
  v4[7] = v6;
  if ( v6 )
  {
    DatabaseNode = ExInitializeResourceLite(v6);
    if ( DatabaseNode < 0 )
    {
      ExFreePoolWithTag(v4[7], 0);
      v4[7] = 0LL;
    }
    else
    {
      v8 = DrvDbCreateDatabaseNode(v4, L"SYSTEM", 0LL, 1LL, L"DriverDatabase", 3, 0LL, 0LL, &v11);
      v1 = v11;
      DatabaseNode = v8;
      if ( v8 >= 0 )
      {
        DatabaseNode = DrvDbLoadDatabaseNode(v4, v11);
        if ( DatabaseNode >= 0 )
        {
          DatabaseNode = DrvDbRegisterObjects(v0, v4);
          if ( DatabaseNode >= 0 )
          {
            PiDrvDbCtx = (__int64)v4;
            return (unsigned int)DatabaseNode;
          }
        }
      }
    }
  }
  else
  {
    DatabaseNode = -1073741670;
  }
  if ( v1 )
    DrvDbDestroyDatabaseNode(v4, v1);
  v10 = v4[7];
  if ( v10 )
  {
    ExDeleteResourceLite((PERESOURCE)v4[7]);
    ExFreePoolWithTag(v10, 0);
  }
  ExFreePoolWithTag(v4, 0);
  return (unsigned int)DatabaseNode;
}
