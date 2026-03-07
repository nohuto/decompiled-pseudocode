char __fastcall PopReadSimulateProcessorClass(unsigned __int16 a1, void *a2, ULONG a3, __int64 a4)
{
  char v5; // di
  ULONG v6; // esi
  ULONG i; // edx
  unsigned int v11; // r8d
  unsigned int v12; // ecx
  unsigned __int16 *v13; // rdx
  __int64 v14; // r10
  int v15; // r9d
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v17; // rbx
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp-39h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-35h] BYREF
  UNICODE_STRING ValueName; // [rsp+38h] [rbp-31h] BYREF
  __int128 KeyValueInformation; // [rsp+48h] [rbp-21h] BYREF
  _OWORD v23[2]; // [rsp+58h] [rbp-11h] BYREF
  __int64 v24; // [rsp+78h] [rbp+Fh]
  int v25; // [rsp+80h] [rbp+17h]

  v24 = 0LL;
  v25 = 0;
  KeyValueInformation = 0LL;
  ResultLength = 0;
  v5 = 0;
  memset(v23, 0, sizeof(v23));
  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  v6 = 0;
  ProcNumber = 0;
  for ( i = 0; ZwEnumerateValueKey(a2, i, KeyValueBasicInformation, v23, 0x2Cu, &ResultLength) >= 0; i = v6 )
  {
    ++v6;
    ValueName.Buffer = (wchar_t *)v23 + 6;
    v11 = 0;
    ValueName.Length = WORD4(v23[0]);
    ValueName.MaximumLength = 32;
    v12 = 64;
    if ( DWORD2(v23[0]) >> 1 )
    {
      v13 = (unsigned __int16 *)v23 + 6;
      v14 = DWORD2(v23[0]) >> 1;
      do
      {
        v15 = *v13;
        if ( (unsigned __int16)(v15 - 48) <= 9u )
        {
          v11 = v15 + 2 * (v11 + 4 * (v11 - 6));
          v12 = v11;
        }
        ++v13;
        --v14;
      }
      while ( v14 );
      if ( v12 < 0x40 )
      {
        ProcNumber.Number = v12;
        ProcNumber.Group = a1;
        ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
        v17 = ProcessorIndexFromNumber;
        if ( ProcessorIndexFromNumber < a3
          && ZwQueryValueKey(a2, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x10u, &ResultLength) >= 0
          && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
        {
          v5 = 1;
          *(_BYTE *)(v17 + a4) = BYTE12(KeyValueInformation);
        }
      }
    }
  }
  return v5;
}
