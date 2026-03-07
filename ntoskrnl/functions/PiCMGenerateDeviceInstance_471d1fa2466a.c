__int64 __fastcall PiCMGenerateDeviceInstance(NTSTRSAFE_PCWSTR pszSrc, char a2, wchar_t *a3, int a4)
{
  char v4; // r12
  HANDLE v8; // rdi
  int inited; // ebx
  wchar_t v10; // cx
  NTSTRSAFE_PCWSTR v11; // rdx
  NTSTRSAFE_PWSTR *v12; // r9
  NTSTRSAFE_PWSTR *v13; // r9
  wchar_t *Pool2; // rsi
  int v15; // r15d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v17; // rcx
  size_t *pcchRemaining; // [rsp+20h] [rbp-50h]
  size_t *pcchRemaininga; // [rsp+20h] [rbp-50h]
  ULONG dwFlags; // [rsp+28h] [rbp-48h]
  ULONG dwFlagsa; // [rsp+28h] [rbp-48h]
  int v23; // [rsp+40h] [rbp-30h] BYREF
  int v24; // [rsp+44h] [rbp-2Ch] BYREF
  int v25; // [rsp+48h] [rbp-28h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-20h] BYREF
  size_t pcchLength; // [rsp+58h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF
  int v29; // [rsp+C0h] [rbp+50h] BYREF
  size_t v30; // [rsp+C8h] [rbp+58h] BYREF

  LODWORD(v30) = a4;
  v4 = 0;
  *a3 = 0;
  v25 = 0;
  v24 = 0;
  v23 = 0;
  v29 = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  v8 = 0LL;
  inited = RtlStringCchLengthW(pszSrc, 0xC8uLL, &pcchLength);
  if ( inited >= 0 )
  {
    v10 = *pszSrc;
    v11 = pszSrc;
    while ( v10 )
    {
      if ( (unsigned __int16)(v10 - 33) > 0x5Eu || v10 == 44 || v10 == 92 )
        return (unsigned int)-1073741773;
      v10 = *++v11;
    }
    inited = RtlStringCchCopyExW(a3, 0xC8uLL, L"Root", 0LL, 0LL, 0x800u);
    if ( inited >= 0 )
    {
      inited = RtlInitUnicodeStringEx(&DestinationString, a3);
      if ( inited >= 0 )
      {
        inited = RtlUpcaseUnicodeString(&DestinationString, &DestinationString, 0);
        if ( inited >= 0 )
        {
          inited = RtlStringCchCatExW(a3, 0xC8uLL, L"\\", v12, pcchRemaining, dwFlags);
          if ( inited >= 0 )
          {
            inited = RtlStringCchCatExW(a3, 0xC8uLL, pszSrc, v13, pcchRemaininga, dwFlagsa);
            if ( inited >= 0 )
            {
              Pool2 = (wchar_t *)ExAllocatePool2(256LL, 400LL, 879783504LL);
              if ( !Pool2 )
                return (unsigned int)-1073741670;
              v15 = 0;
              while ( 1 )
              {
                if ( v8 )
                {
                  ZwClose(v8);
                  v8 = 0LL;
                  KeyHandle = 0LL;
                }
                inited = RtlStringCchPrintfExW(Pool2, 0xC8uLL, 0LL, 0LL, 0x800u, L"%s\\%04u");
                if ( inited < 0 )
                  break;
                if ( (int)CmGetDeviceStatus(PiPnpRtlCtx, Pool2, 0, &v25, &v24, &v23, (unsigned int)a3) < 0 )
                {
                  CurrentThread = KeGetCurrentThread();
                  --CurrentThread->KernelApcDisable;
                  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
                  v4 = 1;
                  LOBYTE(v30) = 0;
                  inited = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)Pool2, 131078, &KeyHandle, &v30, 0);
                  if ( inited < 0 )
                    goto LABEL_34;
                  if ( (_BYTE)v30 )
                  {
                    v8 = KeyHandle;
                    inited = CmValidateDeviceName(v17, Pool2);
                    if ( inited < 0 || (inited = RtlStringCchCopyExW(a3, 0xC8uLL, Pool2, 0LL, 0LL, 0x800u), inited < 0) )
                    {
                      CmDeleteDevice(*(_QWORD *)&PiPnpRtlCtx, Pool2, 0LL);
                    }
                    else if ( a2 )
                    {
                      v29 = 1;
                      inited = RegRtlSetValue(v8, L"Phantom", 4u, &v29, 4u);
                    }
LABEL_33:
                    if ( !v4 )
                      break;
LABEL_34:
                    ExReleaseResourceLite(&PnpRegistryDeviceResource);
                    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                    v8 = KeyHandle;
                    break;
                  }
                  ExReleaseResourceLite(&PnpRegistryDeviceResource);
                  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                  v8 = KeyHandle;
                  v4 = 0;
                }
                if ( (unsigned int)++v15 > 0x270F )
                {
                  inited = -2147483622;
                  goto LABEL_33;
                }
                v4 = 0;
              }
              if ( v8 )
                ZwClose(v8);
              ExFreePoolWithTag(Pool2, 0x34706E50u);
            }
          }
        }
      }
    }
  }
  if ( inited == -2147483643 )
    return (unsigned int)-1073741789;
  return (unsigned int)inited;
}
