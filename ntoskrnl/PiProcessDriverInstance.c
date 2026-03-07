__int64 __fastcall PiProcessDriverInstance(unsigned __int16 *a1, __int64 a2, const wchar_t *a3, char *a4)
{
  NTSTATUS v8; // eax
  __int64 v9; // r8
  int DevInstMatch; // ebx
  NTSTRSAFE_PWSTR v11; // rdi
  wchar_t *Buffer; // rax
  char v13; // cl
  void *v14; // r15
  _WORD *v15; // rbx
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rsi
  _WORD *Pool2; // rax
  signed __int64 v19; // rax
  int Data; // [rsp+40h] [rbp-39h] BYREF
  UNICODE_STRING ValueName; // [rsp+48h] [rbp-31h] BYREF
  int v23; // [rsp+58h] [rbp-21h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+60h] [rbp-19h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-11h] BYREF
  wchar_t pszDest[12]; // [rsp+78h] [rbp-1h] BYREF

  Data = 0;
  v23 = 0;
  ppszDestEnd = 0LL;
  UnicodeString = 0LL;
  ValueName = 0LL;
  v8 = PipOpenServiceEnumKeys((UNICODE_STRING *)a2, 0xF003Fu, 0LL, (HANDLE *)&ppszDestEnd, 1);
  DevInstMatch = v8;
  if ( v8 >= 0 )
  {
    v11 = ppszDestEnd;
    DevInstMatch = PiFindDevInstMatch(
                     (_DWORD)ppszDestEnd,
                     (_DWORD)a1,
                     (unsigned int)&Data,
                     (unsigned int)&UnicodeString,
                     (__int64)&v23);
    if ( DevInstMatch < 0 )
    {
LABEL_17:
      ZwClose(v11);
      return (unsigned int)DevInstMatch;
    }
    Buffer = UnicodeString.Buffer;
    v13 = *a4;
    if ( UnicodeString.Buffer )
    {
      if ( v13 )
      {
LABEL_14:
        if ( Buffer )
          RtlFreeUnicodeString(&UnicodeString);
        goto LABEL_16;
      }
      ZwDeleteValueKey(v11, &UnicodeString);
      if ( --Data )
        PiRearrangeDeviceInstances(v11);
    }
    else
    {
      if ( !v13 )
      {
LABEL_16:
        DevInstMatch = 0;
        goto LABEL_17;
      }
      v14 = (void *)*((_QWORD *)a1 + 1);
      v15 = 0LL;
      v16 = *a1;
      v17 = v16 >> 1;
      if ( *((_WORD *)v14 + (v16 >> 1) - 1) )
      {
        Pool2 = (_WORD *)ExAllocatePool2(256LL, v16 + 2, 538996816LL);
        v15 = Pool2;
        if ( Pool2 )
        {
          memmove(Pool2, v14, (unsigned int)v16);
          LODWORD(v16) = v16 + 2;
          v15[v17] = 0;
          v14 = v15;
        }
      }
      ppszDestEnd = pszDest;
      RtlStringCchPrintfExW(pszDest, 0xAuLL, &ppszDestEnd, 0LL, 0, L"%u", Data);
      v19 = ppszDestEnd - pszDest;
      ValueName.MaximumLength = 20;
      if ( (_DWORD)v19 == -1 )
        ValueName.Length = 20;
      else
        ValueName.Length = 2 * v19;
      ValueName.Buffer = pszDest;
      ZwSetValueKey(v11, &ValueName, 0, 1u, v14, v16);
      if ( v15 )
        ExFreePoolWithTag(v15, 0);
      ++Data;
    }
    *(_DWORD *)&ValueName.Length = 786442;
    ValueName.Buffer = L"Count";
    ZwSetValueKey(v11, &ValueName, 0, 4u, &Data, 4u);
    ValueName.Buffer = L"NextInstance";
    *(_DWORD *)&ValueName.Length = 1703960;
    ZwSetValueKey(v11, &ValueName, 0, 4u, &Data, 4u);
    Buffer = UnicodeString.Buffer;
    goto LABEL_14;
  }
  if ( *a4 && (byte_140C0E10B & 0x20) != 0 )
    McTemplateK0zzzd_EtwWriteTransfer(
      *(_QWORD *)(a2 + 8),
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ServiceOpenFailure,
      v9,
      *((const wchar_t **)a1 + 1),
      *(const wchar_t **)(a2 + 8),
      a3,
      v8);
  return (unsigned int)DevInstMatch;
}
