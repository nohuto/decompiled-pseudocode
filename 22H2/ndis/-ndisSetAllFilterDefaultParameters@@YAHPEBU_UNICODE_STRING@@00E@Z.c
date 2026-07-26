/*
 * XREFs of ?ndisSetAllFilterDefaultParameters@@YAHPEBU_UNICODE_STRING@@00E@Z @ 0x1C006A06C
 * Callers:
 *     ?ndisCreateFilterAdapterRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00252CC (-ndisCreateFilterAdapterRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisCreateFilterDriverRegistry@@YAHPEBU_UNICODE_STRING@@E@Z @ 0x1C002F9D0 (-ndisCreateFilterDriverRegistry@@YAHPEBU_UNICODE_STRING@@E@Z.c)
 *     ?ndisCreateFilterInstanceRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006820C (-ndisCreateFilterInstanceRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MIN.c)
 * Callees:
 *     WPP_RECORDER_SF_qqqL @ 0x1C000E1D0 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000E2D0 (WPP_RECORDER_SF_qqq.c)
 *     memset @ 0x1C0040B00 (memset.c)
 *     ?ndisSetFilterDefaultParameter@@YAHPEBU_UNICODE_STRING@@PEAX0E@Z @ 0x1C006A37C (-ndisSetFilterDefaultParameter@@YAHPEBU_UNICODE_STRING@@PEAX0E@Z.c)
 */

__int64 __fastcall ndisSetAllFilterDefaultParameters(
        const struct _UNICODE_STRING *a1,
        const struct _UNICODE_STRING *a2,
        const struct _UNICODE_STRING *a3,
        unsigned __int8 a4)
{
  ULONG v4; // r15d
  unsigned int v9; // ebx
  unsigned __int16 *v10; // rdi
  wchar_t *PoolWithTag; // rax
  int v12; // edx
  unsigned __int16 *v13; // rax
  ULONG i; // edx
  NTSTATUS v15; // eax
  _UNICODE_STRING Destination; // [rsp+50h] [rbp-39h] BYREF
  struct _UNICODE_STRING v18; // [rsp+60h] [rbp-29h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-19h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-9h] BYREF
  ULONG ResultLength; // [rsp+F0h] [rbp+67h] BYREF
  HANDLE KeyHandle; // [rsp+100h] [rbp+77h] BYREF

  v4 = 0;
  KeyHandle = 0LL;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  Destination.Length = 0;
  Destination.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v9 = 0;
  DestinationString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ResultLength = 0;
  v10 = 0LL;
  *(_QWORD *)&v18.Length = 0LL;
  v18.Buffer = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x52u,
      (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\");
  Destination.MaximumLength = DestinationString.Length + a3->Length + 2 + a1->Length;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, Destination.MaximumLength, 0x2020444Eu);
  Destination.Buffer = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, Destination.MaximumLength);
    RtlCopyUnicodeString(&Destination, &DestinationString);
    RtlAppendUnicodeStringToString(&Destination, a1);
    RtlAppendUnicodeStringToString(&Destination, a3);
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &Destination;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) )
    {
      KeyHandle = 0LL;
      goto LABEL_19;
    }
    v13 = (unsigned __int16 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x218uLL, 0x2020444Eu);
    v10 = v13;
    if ( v13 )
    {
      memset(v13, 0, 0x218uLL);
      for ( i = 0; ; i = v4 )
      {
        v15 = ZwEnumerateKey(KeyHandle, i, KeyBasicInformation, v10, 0x216u, &ResultLength);
        if ( v15 == -2147483622 )
          break;
        if ( v15 )
        {
          v9 = -1073741823;
          break;
        }
        v18.Length = v10[6];
        v18.MaximumLength = v18.Length + 2;
        v18.Buffer = v10 + 8;
        v9 = ndisSetFilterDefaultParameter(a2, KeyHandle, &v18, a4);
        if ( v9 )
          break;
        ++v4;
        memset(v10, 0, 0x218uLL);
        ResultLength = 0;
      }
    }
    else
    {
      v9 = -1073741670;
    }
    PoolWithTag = Destination.Buffer;
  }
  else
  {
    v9 = -1073741670;
  }
  if ( !KeyHandle )
    goto LABEL_20;
  ZwClose(KeyHandle);
LABEL_19:
  PoolWithTag = Destination.Buffer;
LABEL_20:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      1u,
      0x53u,
      (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
      (char)a1,
      (char)a2,
      (char)a3,
      v9);
  return v9;
}
