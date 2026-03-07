__int64 __fastcall DxgkDeviceIoctl(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  DWORD LowPart; // ecx
  ULONG Length; // r12d
  ULONG Options; // r14d
  __int64 v7; // rdi
  DXGVIRTUALMACHINE **v8; // rsi
  DxgkCompositionObject *v9; // r15
  struct _GUID *v10; // rax
  NTSTATUS v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  DXGVIRTUALMACHINE ***Current; // rax
  int v16; // eax
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // eax
  int v21; // eax
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  int v25; // eax
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  int v29; // edx
  int v30; // edx
  int v31; // ecx
  int v32; // r8d
  int v33; // edx
  int v34; // ecx
  int v35; // r8d
  bool v36; // r8
  int Handle; // eax
  void **v38; // rdx
  DXGVIRTUALMACHINE *Parameters; // [rsp+68h] [rbp-70h] BYREF
  void *v41[3]; // [rsp+70h] [rbp-68h] BYREF
  struct _GUID v42; // [rsp+88h] [rbp-50h] BYREF
  unsigned int v43; // [rsp+F0h] [rbp+18h]
  PVOID Address; // [rsp+F8h] [rbp+20h]

  v43 = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Address = a2->UserBuffer;
  v41[1] = Address;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Parameters = (DXGVIRTUALMACHINE *)CurrentStackLocation->Parameters.CreatePipe.Parameters;
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( LowPart != 2310147 )
  {
    LODWORD(v7) = -1073741808;
    WdLogSingleEntry2(3LL, LowPart, -1073741808LL);
    goto LABEL_57;
  }
  v8 = 0LL;
  v9 = 0LL;
  v41[0] = 0LL;
  v42 = 0LL;
  if ( !DXGVAILOBJECT::IsFeatureEnabled() )
  {
    WdLogSingleEntry1(3LL, 963LL);
    LODWORD(v7) = -1073741637;
    goto LABEL_57;
  }
  if ( Options != 16 )
  {
    WdLogSingleEntry1(3LL, 970LL);
LABEL_7:
    LODWORD(v7) = -1073741306;
    goto LABEL_57;
  }
  if ( Length != 8 )
  {
    WdLogSingleEntry1(3LL, 977LL);
    goto LABEL_7;
  }
  v10 = (struct _GUID *)Parameters;
  if ( (unsigned __int64)Parameters >= MmUserProbeAddress )
    v10 = (struct _GUID *)MmUserProbeAddress;
  v42 = *v10;
  ProbeForWrite(Address, 8uLL, 1u);
  v11 = CheckTokenForVMGroupMembership();
  v7 = v11;
  if ( v11 < 0 )
  {
    WdLogSingleEntry1(2LL, v11);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v13,
          v12,
          v14,
          0LL,
          0,
          -1,
          L"CheckTokenForVMGroupMembership failed: 0x%I64x",
          v7,
          0LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( (int)v7 >= 0 )
  {
    Current = (DXGVIRTUALMACHINE ***)DXGPROCESS::GetCurrent();
    Parameters = (DXGVIRTUALMACHINE *)Current;
    if ( Current )
    {
      v29 = *((_DWORD *)Current + 106);
      if ( (v29 & 0x80) != 0 )
      {
        if ( (v29 & 0x100) != 0 )
          v8 = Current[76];
        else
          v8 = (DXGVIRTUALMACHINE **)((unsigned __int64)Current & -(__int64)((v29 & 0x80) != 0));
        LODWORD(v7) = 0;
        goto LABEL_43;
      }
      LODWORD(v7) = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v31,
          v30,
          v32,
          0LL,
          0,
          -1,
          L"Process is belonging to VM group, but not VMWP or VMMEM : 0x%I64x",
          -1073741811LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
    else
    {
      v16 = DXGPROCESS::CreateDxgProcess(&Parameters, 0LL, 0LL, 1u, 0LL);
      v7 = v16;
      if ( v16 >= 0 )
      {
        v20 = *((_DWORD *)Parameters + 106);
        if ( (v20 & 0x100) != 0 )
          v8 = (DXGVIRTUALMACHINE **)*((_QWORD *)Parameters + 76);
        else
          v8 = (DXGVIRTUALMACHINE **)((unsigned __int64)Parameters & -(__int64)((v20 & 0x80u) != 0));
        v21 = DXGPROCESSVMWP::InitializeVmwpProcess((DXGPROCESSVMWP *)v8, 0LL, 0LL, 0LL, 0LL, 0, 0LL);
        v7 = v21;
        if ( v21 >= 0 )
        {
          Parameters = v8[76];
          v25 = DXGVIRTUALMACHINE::InitializeVirtualMachine(Parameters, 0LL, 1u);
          v7 = v25;
          if ( v25 < 0 )
          {
            WdLogSingleEntry1(2LL, v25);
            if ( bTracingEnabled )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
                McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                  v27,
                  v26,
                  v28,
                  0LL,
                  0,
                  -1,
                  L"Failed to initalize virtual machine : 0x%I64x",
                  v7,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
            }
          }
          DXGVIRTUALMACHINE::SetVmGuid(Parameters, &v42);
        }
        else
        {
          WdLogSingleEntry1(2LL, v21);
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
            McTemplateK0zqqzxxxxx_EtwWriteTransfer(
              v23,
              v22,
              v24,
              0LL,
              0,
              -1,
              L"DXGPROCESS::InitializeVmwpProcess failed: : 0x%I64x",
              v7,
              0LL,
              0LL,
              0LL,
              0LL);
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, v16);
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v18,
            v17,
            v19,
            0LL,
            0,
            -1,
            L"DXGPROCESS::CreateDxgProcess failed: : 0x%I64x",
            v7,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( (int)v7 >= 0 )
    {
LABEL_43:
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)&v42,
        (struct _KTHREAD **)v8[76] + 8);
      v9 = DXGVIRTUALMACHINE::ReferenceVailObject(v8[76]);
      if ( !v9 )
      {
        LODWORD(v7) = -1073741275;
        WdLogSingleEntry2(1LL, -1073741275LL, 1061LL);
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
            McTemplateK0zqqzxxxxx_EtwWriteTransfer(
              v34,
              v33,
              v35,
              0LL,
              2,
              -1,
              L"Failed to find Vail object: 0xI64x",
              -1073741275LL,
              1061LL,
              0LL,
              0LL,
              0LL,
              0LL);
        }
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v42);
      if ( (int)v7 >= 0 )
      {
        Handle = DxgkCompositionObject::CreateHandle(v9, 0xC0060000, v36, 1, v41);
        LODWORD(v7) = Handle;
        if ( Handle >= 0 )
          v43 = 8;
        else
          WdLogSingleEntry1(3LL, Handle);
        if ( (int)v7 >= 0 )
        {
          v38 = (void **)Address;
          if ( (unsigned __int64)Address >= MmUserProbeAddress )
            v38 = (void **)MmUserProbeAddress;
          *v38 = v41[0];
        }
      }
    }
  }
  if ( v9 )
    ObfDereferenceObject(v9);
LABEL_57:
  a2->IoStatus.Information = v43;
  a2->IoStatus.Status = v7;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v7;
}
