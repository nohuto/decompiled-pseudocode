/*
 * XREFs of AcpiDiagTraceFrequentAmlEvaluation @ 0x1C0008574
 * Callers:
 *     AsyncEvalObject @ 0x1C00544D0 (AsyncEvalObject.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 */

void __fastcall AcpiDiagTraceFrequentAmlEvaluation(__int64 a1)
{
  ULONG TimeIncrement; // eax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  int v5; // ecx
  unsigned __int64 v6; // [rsp+30h] [rbp-50h] BYREF
  __int16 v7; // [rsp+38h] [rbp-48h] BYREF
  __int64 v8; // [rsp+40h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  __int64 v10; // [rsp+58h] [rbp-28h]
  int v11; // [rsp+60h] [rbp-20h]
  int v12; // [rsp+64h] [rbp-1Ch]
  unsigned __int64 *v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+70h] [rbp-10h]
  int v15; // [rsp+74h] [rbp-Ch]

  if ( AcpiDiagHandle && EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_FREQUENT_AML_METHOD) )
  {
    TimeIncrement = KeQueryTimeIncrement();
    v3 = *(_QWORD *)(a1 + 72);
    v4 = MEMORY[0xFFFFF78000000008] / (unsigned __int64)TimeIncrement / 0x11E1A300;
    v6 = *(_QWORD *)(v3 + 144);
    v8 = *(_QWORD *)(v3 + 152);
    if ( v8 == v4 )
    {
      ++v6;
      *(_DWORD *)(v3 + 148) = HIDWORD(v6);
      *(_DWORD *)(*(_QWORD *)(a1 + 72) + 144LL) = v6;
    }
    else
    {
      v6 = 1LL;
      *(_DWORD *)(v3 + 148) = 0;
      *(_DWORD *)(*(_QWORD *)(a1 + 72) + 144LL) = v6;
      *(_QWORD *)(*(_QWORD *)(a1 + 72) + 152LL) = v4;
    }
    if ( v6 >= 0x3C )
    {
      v5 = *(unsigned __int16 *)(a1 + 440);
      UserData.Reserved = 0;
      v12 = 0;
      v15 = 0;
      v7 = (unsigned __int16)v5 >> 1;
      UserData.Ptr = (unsigned __int64)&v7;
      v10 = *(_QWORD *)(a1 + 448);
      v13 = &v6;
      v11 = v5;
      UserData.Size = 2;
      v14 = 8;
      EtwWrite(AcpiDiagHandle, &ACPI_ETW_EVENT_FREQUENT_AML_METHOD, 0LL, 3u, &UserData);
    }
  }
}
