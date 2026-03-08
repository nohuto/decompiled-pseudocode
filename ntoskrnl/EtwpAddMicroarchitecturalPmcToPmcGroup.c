/*
 * XREFs of EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x1409DFEA4
 * Callers:
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1409E01D4 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1402078E4 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwCreateKey @ 0x1404126B0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x140412F10 (ZwSetValueKey.c)
 *     KiGetCpuVendor @ 0x140A85800 (KiGetCpuVendor.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpAddMicroarchitecturalPmcToPmcGroup(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // r14
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v8; // rbx
  wchar_t *Pool2; // r15
  NTSTATUS v10; // ebx
  int CpuVendor; // esi
  int v12; // eax
  unsigned __int8 v13; // al
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  int Data; // [rsp+B8h] [rbp+38h] BYREF
  HANDLE KeyHandle; // [rsp+C0h] [rbp+40h] BYREF

  v2 = a2 + 280;
  *(&ObjectAttributes.Length + 1) = 0;
  v4 = -1LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  v5 = -1LL;
  Data = 0;
  DestinationString = 0LL;
  do
    ++v5;
  while ( *(_WORD *)&v2[2 * v5] );
  if ( (unsigned int)v5 >= 0xFF )
    return 3221225476LL;
  do
    ++v4;
  while ( *(_WORD *)(a1 + 2 * v4) );
  v8 = (unsigned int)(2 * v4 + 512);
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, v8, 1350005829LL);
  RtlStringCbPrintfW(Pool2, (unsigned int)v8, L"%ws\\%ws", a1, v2);
  RtlInitUnicodeString(&DestinationString, Pool2);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v10 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Interval");
    v10 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, a2 + 8, 4u);
    if ( v10 >= 0 )
    {
      CpuVendor = KiGetCpuVendor();
      if ( CpuVendor == 2 )
      {
        v12 = *a2;
        goto LABEL_12;
      }
      if ( CpuVendor == 1 )
      {
        v12 = *(unsigned __int16 *)a2;
LABEL_12:
        Data = v12;
        RtlInitUnicodeString(&DestinationString, L"Event");
        v10 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
        if ( v10 >= 0 )
        {
          if ( CpuVendor == 2 )
            v13 = a2[1];
          else
            v13 = a2[2];
          Data = v13;
          RtlInitUnicodeString(&DestinationString, L"Unit");
          v10 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
          if ( v10 >= 0 && CpuVendor == 2 )
          {
            Data = a2[2];
            RtlInitUnicodeString(&DestinationString, L"CMask");
            v10 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
            if ( v10 >= 0 )
            {
              Data = a2[3];
              RtlInitUnicodeString(&DestinationString, L"CMaskInvert");
              v10 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
              if ( v10 >= 0 )
              {
                Data = a2[4];
                RtlInitUnicodeString(&DestinationString, L"AnyThread");
                v10 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
                if ( v10 >= 0 )
                {
                  Data = a2[5];
                  RtlInitUnicodeString(&DestinationString, L"EdgeDetect");
                  v10 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
                }
              }
            }
          }
        }
        goto LABEL_23;
      }
      v10 = -1073741822;
    }
  }
LABEL_23:
  ExFreePoolWithTag(Pool2, 0x50777445u);
  return (unsigned int)v10;
}
