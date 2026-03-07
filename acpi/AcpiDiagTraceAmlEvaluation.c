void __fastcall AcpiDiagTraceAmlEvaluation(__int64 a1, unsigned __int8 a2)
{
  __int16 v3; // bx
  int v4; // ecx
  __int16 v5; // [rsp+30h] [rbp-9h] BYREF
  __int16 v6; // [rsp+34h] [rbp-5h] BYREF
  unsigned __int64 v7; // [rsp+38h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp+7h] BYREF
  __int64 v9; // [rsp+50h] [rbp+17h]
  int v10; // [rsp+58h] [rbp+1Fh]
  int v11; // [rsp+5Ch] [rbp+23h]
  __int16 *v12; // [rsp+60h] [rbp+27h]
  int v13; // [rsp+68h] [rbp+2Fh]
  int v14; // [rsp+6Ch] [rbp+33h]
  unsigned __int64 *v15; // [rsp+70h] [rbp+37h]
  int v16; // [rsp+78h] [rbp+3Fh]
  int v17; // [rsp+7Ch] [rbp+43h]

  v7 = 0LL;
  v3 = a2;
  if ( AcpiDiagHandle && EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_AML_METHOD_TRACE) )
  {
    if ( !(_BYTE)v3 )
      v7 = (MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 456)) / 0x2710uLL;
    v4 = *(unsigned __int16 *)(a1 + 440);
    UserData.Reserved = 0;
    v11 = 0;
    v14 = 0;
    v17 = 0;
    v5 = (unsigned __int16)v4 >> 1;
    UserData.Size = 2;
    UserData.Ptr = (unsigned __int64)&v5;
    v9 = *(_QWORD *)(a1 + 448);
    v12 = &v6;
    v15 = &v7;
    v10 = v4;
    v13 = 2;
    v6 = v3;
    v16 = 8;
    EtwWrite(AcpiDiagHandle, &ACPI_ETW_EVENT_AML_METHOD_TRACE, 0LL, 4u, &UserData);
  }
}
