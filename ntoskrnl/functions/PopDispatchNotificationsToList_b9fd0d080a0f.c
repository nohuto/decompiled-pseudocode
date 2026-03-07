struct _KTHREAD *__fastcall PopDispatchNotificationsToList(__int64 **a1)
{
  __int64 v2; // rdx
  __int64 *v3; // rdi
  __int64 *v4; // rsi
  int v5; // eax
  struct _KTHREAD *result; // rax
  int v7; // ebx
  int v8; // r8d
  int updated; // ebx
  unsigned int v10; // eax
  __int64 **v11; // rax
  __int64 v12; // [rsp+20h] [rbp-78h]
  int v13; // [rsp+28h] [rbp-70h]
  int v14; // [rsp+30h] [rbp-68h]
  int v15; // [rsp+40h] [rbp-58h] BYREF
  __int64 v16; // [rsp+48h] [rbp-50h] BYREF
  _BYTE v17[40]; // [rsp+50h] [rbp-48h] BYREF

  v15 = 0;
  v16 = 0LL;
  ExAcquireFastMutex(&PopSettingLock);
  v3 = *a1;
  while ( v3 != (__int64 *)a1 )
  {
    v4 = v3;
    while ( 1 )
    {
      v5 = *((_DWORD *)v3 + 13);
      if ( (v5 & 1) == 0 || (v5 & 2) != 0 )
        break;
      v16 = v3[7];
      *((_DWORD *)v3 + 13) = *((_DWORD *)v3 + 13) & 0xFFFFFFFC | 2;
      v7 = PopMarshalSettingValues(v3, v17, 36LL, &v15, v12, v13, v14);
      ExReleaseFastMutex(&PopSettingLock);
      v8 = v15;
      v14 = 0;
      v13 = 0;
      v12 = 0LL;
      if ( v7 < 0 )
        v8 = 0;
      v15 = v8;
      updated = ZwUpdateWnfStateData((__int64)&v16, (__int64)v17);
      if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
        goto LABEL_19;
      ExAcquireFastMutex(&PopSettingLock);
      v10 = *((_DWORD *)v3 + 13) & 0xFFFFFFFD;
      *((_DWORD *)v3 + 13) = v10;
      if ( updated < 0 )
      {
        v5 = v10 | 1;
        *((_DWORD *)v3 + 13) = v5;
        break;
      }
    }
    v3 = (__int64 *)*v3;
    if ( (v5 & 2) == 0 && (v5 & 4) != 0 )
    {
      if ( (__int64 *)v3[1] != v4 || (v11 = (__int64 **)v4[1], *v11 != v4) )
        __fastfail(3u);
      *v11 = v3;
      v3[1] = (__int64)v11;
      PopFreeRegistration(v4, v2);
    }
  }
  ExReleaseFastMutex(&PopSettingLock);
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
LABEL_19:
    __fastfail(0x20u);
  return result;
}
