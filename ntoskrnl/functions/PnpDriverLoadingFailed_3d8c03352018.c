NTSTATUS __fastcall PnpDriverLoadingFailed(HANDLE Handle, UNICODE_STRING *a2)
{
  int v2; // r15d
  HANDLE v4; // rbx
  NTSTATUS result; // eax
  unsigned int v6; // edi
  NTSTATUS RegistryValue; // esi
  unsigned int v8; // r14d
  _QWORD *v9; // rax
  _QWORD *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rbx
  int v15; // r15d
  struct _KTHREAD *v16; // rax
  int v17; // r14d
  unsigned int i; // ebx
  signed __int64 v19; // rax
  unsigned int *v20; // rsi
  signed __int64 v21; // rax
  __int64 v22; // [rsp+30h] [rbp-89h]
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-79h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-69h] BYREF
  unsigned int Data; // [rsp+58h] [rbp-61h] BYREF
  int v26; // [rsp+5Ch] [rbp-5Dh]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+60h] [rbp-59h] BYREF
  PVOID P; // [rsp+68h] [rbp-51h] BYREF
  HANDLE v29; // [rsp+70h] [rbp-49h] BYREF
  ULONG dwFlags; // [rsp+78h] [rbp-41h] BYREF
  PVOID v31[2]; // [rsp+80h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-29h] BYREF
  wchar_t pszDest[20]; // [rsp+C0h] [rbp+7h] BYREF

  P = 0LL;
  v2 = 0;
  KeyHandle = 0LL;
  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  v29 = Handle;
  v4 = Handle;
  v26 = 0;
  *(_OWORD *)v31 = 0LL;
  if ( Handle )
  {
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ValueName.Buffer = L"Enum";
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.RootDirectory = Handle;
    ObjectAttributes.ObjectName = &ValueName;
    *(_DWORD *)&ValueName.Length = 655368;
    ObjectAttributes.Attributes = 576;
    result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  }
  else
  {
    result = PipOpenServiceEnumKeys(a2, 0x20019u, &v29, &KeyHandle, 0);
    v4 = v29;
    v2 = 1;
    v26 = 1;
  }
  if ( result >= 0 )
  {
    ValueName.Buffer = L"INITSTARTFAILED";
    *(_DWORD *)&ValueName.Length = 2097182;
    dwFlags = 1;
    ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &dwFlags, 4u);
    v6 = 0;
    RegistryValue = IopGetRegistryValue(KeyHandle, L"Count", 0, &P);
    if ( RegistryValue < 0 )
      goto LABEL_44;
    if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u )
      v6 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
    ExFreePoolWithTag(P, 0);
    if ( v6 )
    {
      v8 = 0;
      Data = v6;
      do
      {
        if ( (int)PipServiceInstanceToDeviceInstance(v4, a2, v8, v31) >= 0 )
        {
          v9 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)v31, 0x746C6644u);
          v10 = v9;
          if ( v9 )
          {
            v11 = v9[39];
            if ( *(_QWORD *)(v11 + 40) )
            {
              if ( !(unsigned int)PipIsDevNodeDNStarted(*(_QWORD *)(v11 + 40)) )
                IopReleaseDeviceResources(v12, 1LL);
            }
          }
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
          if ( v10 )
          {
            v14 = *(_QWORD *)(v10[39] + 40LL);
            if ( v14 && (*(_DWORD *)(v14 + 396) & 1) != 0 && (unsigned int)(*(_DWORD *)(v14 + 300) - 777) <= 1 )
            {
              PoFxAbandonDevice(v14);
              PipSetDevNodeState(v14, 788);
              PipSetDevNodeProblem(v14, 24LL, 0LL);
            }
            ObfDereferenceObject(v10);
          }
          ExFreePoolWithTag(v31[1], 0);
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          KeLeaveCriticalRegion();
          v4 = v29;
        }
        ++v8;
      }
      while ( v8 < v6 );
      v15 = v26;
      if ( Data != v6 )
      {
        v16 = KeGetCurrentThread();
        --v16->KernelApcDisable;
        ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
        if ( Data )
        {
          v17 = 0;
          for ( i = 0; i < v6; ++i )
          {
            LODWORD(v22) = i;
            ppszDestEnd = pszDest;
            RtlStringCchPrintfExW(pszDest, 0xAuLL, &ppszDestEnd, 0LL, 0, L"%u", v22);
            ValueName.MaximumLength = 20;
            v19 = ppszDestEnd - pszDest;
            if ( (_DWORD)v19 == -1 )
              ValueName.Length = 20;
            else
              ValueName.Length = 2 * v19;
            ValueName.Buffer = pszDest;
            if ( IopGetRegistryValue(KeyHandle, pszDest, 0, &P) >= 0 )
            {
              v20 = (unsigned int *)P;
              if ( i != v17 )
              {
                ZwDeleteValueKey(KeyHandle, &ValueName);
                LODWORD(v22) = v17;
                ppszDestEnd = pszDest;
                RtlStringCchPrintfExW(pszDest, 0xAuLL, &ppszDestEnd, 0LL, 0, L"%u", v22);
                ValueName.MaximumLength = 20;
                v21 = ppszDestEnd - pszDest;
                if ( (_DWORD)v21 == -1 )
                  ValueName.Length = 20;
                else
                  ValueName.Length = 2 * v21;
                ValueName.Buffer = pszDest;
                ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, (char *)v20 + v20[2], v20[3]);
              }
              ExFreePoolWithTag(v20, 0);
              ++v17;
            }
          }
          v15 = v26;
        }
        ValueName.Buffer = L"Count";
        *(_DWORD *)&ValueName.Length = 786442;
        ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
        ValueName.Buffer = L"NextInstance";
        *(_DWORD *)&ValueName.Length = 1703960;
        ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KeLeaveCriticalRegion();
        v4 = v29;
      }
      ZwClose(KeyHandle);
      if ( v15 )
        ZwClose(v4);
      return 0;
    }
    else
    {
LABEL_44:
      ZwClose(KeyHandle);
      if ( v2 )
        ZwClose(v4);
      return RegistryValue;
    }
  }
  return result;
}
