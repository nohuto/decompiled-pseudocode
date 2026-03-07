__int64 __fastcall NVMeSetNonOperationalPowerStatePermissiveMode(__int64 a1, unsigned __int8 a2)
{
  int v2; // esi
  __int64 result; // rax
  int v5; // eax
  _BYTE *LocalCommand; // rax
  _BYTE *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // r8

  v2 = a2;
  if ( *(_BYTE *)(a1 + 20) || (v5 = *(_DWORD *)(a1 + 32), (v5 & 8) != 0) )
  {
LABEL_2:
    result = Feature_Servicing_Huawei22H2BluescreenAfterSleep__private_IsEnabledDeviceUsage();
    if ( !(_DWORD)result )
      return result;
    goto LABEL_10;
  }
  if ( (v5 & 4) != 0 )
  {
    *(_DWORD *)(a1 + 4336) = *(_DWORD *)(a1 + 4336) ^ (*(_DWORD *)(a1 + 4336) ^ (4 * a2)) & 4 | 2;
    goto LABEL_2;
  }
  if ( (unsigned int)Feature_Servicing_Huawei22H2BluescreenAfterSleep__private_IsEnabledDeviceUsage() )
  {
    LocalCommand = NVMeControllerGetLocalCommand(a1);
    v7 = LocalCommand;
    if ( LocalCommand )
    {
      v8 = (__int64)(LocalCommand + 8);
      *(_BYTE *)(*((_QWORD *)LocalCommand + 12) + 4253LL) |= 1u;
      *(_BYTE *)(*((_QWORD *)LocalCommand + 12) + 4253LL) &= ~2u;
      *(_WORD *)(*((_QWORD *)LocalCommand + 12) + 4244LL) = 0;
      v9 = *((_QWORD *)LocalCommand + 12);
      v10 = *(_DWORD *)(v9 + 4140) ^ v2;
      *(_BYTE *)(v9 + 4096) = 9;
      *(_DWORD *)(v9 + 4140) ^= v10 & 1;
      *(_BYTE *)(v9 + 4136) = 17;
      *(_QWORD *)(*((_QWORD *)v7 + 12) + 4224LL) = NVMeSetNonOperationalPowerStatePermissiveModeCompletion;
      ProcessCommand(a1, v8);
      LOBYTE(v11) = 1;
      WaitForCommandComplete(a1, v7 + 8, v11);
    }
  }
LABEL_10:
  result = Feature_Servicing_Huawei22H2BluescreenAfterSleep__private_IsEnabledDeviceUsage();
  if ( !(_DWORD)result )
  {
    LocalCommandReuse(a1, a1 + 944);
    *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 1040) + 4244LL) = 0;
    v12 = *(_QWORD *)(a1 + 1040);
    v13 = *(_DWORD *)(v12 + 4140) ^ v2;
    *(_BYTE *)(v12 + 4096) = 9;
    *(_DWORD *)(v12 + 4140) ^= v13 & 1;
    *(_BYTE *)(v12 + 4136) = 17;
    *(_QWORD *)(*(_QWORD *)(a1 + 1040) + 4224LL) = NVMeSetNonOperationalPowerStatePermissiveModeCompletion;
    ProcessCommand(a1, a1 + 952);
    LOBYTE(v14) = 1;
    return WaitForCommandComplete(a1, a1 + 952, v14);
  }
  return result;
}
