__int64 __fastcall DXGVIRTUALMACHINE::InitializeVirtualMachine(struct DXGPROCESSVMWP **this, void *a2, char a3)
{
  __int64 v6; // rdi
  struct VMBCHANNEL__ **v7; // rcx
  int VmBusChannel; // eax
  int v9; // eax
  DXGVAILOBJECT *v10; // rcx
  int v11; // eax
  const wchar_t *v12; // r9
  int updated; // eax
  DxgkCompositionObject *v15; // [rsp+78h] [rbp+10h] BYREF

  LODWORD(v6) = 0;
  if ( a2 )
  {
    v7 = this + 20;
    if ( *v7 )
      return 0LL;
    VmBusChannel = DXG_HOST_GLOBAL_VMBUS::CreateVmBusChannel(v7, a2, this[7]);
    v6 = VmBusChannel;
    if ( VmBusChannel < 0 )
    {
      WdLogSingleEntry1(2LL, VmBusChannel);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"CreateVmBusChannel failed: 0x%I64x",
        v6,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  if ( !DXGVAILOBJECT::IsFeatureEnabled() )
  {
    if ( (int)v6 < 0 )
      return (unsigned int)v6;
    goto LABEL_22;
  }
  if ( (int)v6 >= 0 )
  {
    if ( !this[41] && a3 )
    {
      v15 = 0LL;
      v9 = DXGVAILOBJECT::Create(&v15);
      v6 = v9;
      if ( v9 < 0 )
      {
        WdLogSingleEntry1(2LL, v9);
        v12 = L"DXGVAILOBJECT::Create failed: 0x%I64x";
        goto LABEL_16;
      }
      DXGVIRTUALMACHINE::SetVailObject((DXGVIRTUALMACHINE *)this, v15);
      DxgkCompositionObject::Release(v15);
    }
    if ( a2 )
    {
      v10 = this[41];
      if ( v10 )
      {
        if ( *((_QWORD *)v10 + 14) )
        {
          updated = DXGVAILOBJECT::UpdateVmBus(v10, a2);
          v6 = updated;
          if ( updated < 0 )
          {
            WdLogSingleEntry1(2LL, updated);
            v12 = L"DXGVAILOBJECT::UpdateVmBus failed: 0x%I64x";
            goto LABEL_16;
          }
        }
        else
        {
          v11 = DXGVAILOBJECT::InitializeVmBus(v10, a2);
          v6 = v11;
          if ( v11 < 0 )
          {
            WdLogSingleEntry1(2LL, v11);
            v12 = L"DXGVAILOBJECT::InitializeVmBus failed: 0x%I64x";
LABEL_16:
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v12, v6, 0LL, 0LL, 0LL, 0LL);
            return (unsigned int)v6;
          }
        }
      }
    }
LABEL_22:
    *((_BYTE *)this + 337) = 0;
  }
  return (unsigned int)v6;
}
