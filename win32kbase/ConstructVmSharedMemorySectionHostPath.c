NTSTATUS __fastcall ConstructVmSharedMemorySectionHostPath(
        PUNICODE_STRING Destination,
        unsigned int *a2,
        unsigned int *a3)
{
  WCHAR *Pool2; // rax
  NTSTATUS result; // eax
  int v8; // [rsp+20h] [rbp-88h]
  __int64 v9; // [rsp+20h] [rbp-88h]
  int v10; // [rsp+28h] [rbp-80h]
  __int64 v11; // [rsp+28h] [rbp-80h]
  int v12; // [rsp+30h] [rbp-78h]
  __int64 v13; // [rsp+30h] [rbp-78h]
  int v14; // [rsp+38h] [rbp-70h]
  __int64 v15; // [rsp+38h] [rbp-70h]
  int v16; // [rsp+40h] [rbp-68h]
  __int64 v17; // [rsp+40h] [rbp-68h]
  int v18; // [rsp+48h] [rbp-60h]
  __int64 v19; // [rsp+48h] [rbp-60h]
  int v20; // [rsp+50h] [rbp-58h]
  __int64 v21; // [rsp+50h] [rbp-58h]
  int v22; // [rsp+58h] [rbp-50h]
  __int64 v23; // [rsp+58h] [rbp-50h]
  int v24; // [rsp+60h] [rbp-48h]
  __int64 v25; // [rsp+60h] [rbp-48h]
  int v26; // [rsp+68h] [rbp-40h]
  __int64 v27; // [rsp+68h] [rbp-40h]
  NTSTATUS v28; // [rsp+B0h] [rbp+8h]

  *Destination = 0LL;
  Destination->MaximumLength = 198;
  Pool2 = (WCHAR *)ExAllocatePool2(64LL, 198LL, 1801997651LL);
  Destination->Buffer = Pool2;
  if ( Pool2 )
  {
    result = RtlAppendUnicodeToString(Destination, L"\\VmSharedMemory\\Host\\");
    if ( result >= 0 )
    {
      v26 = *((unsigned __int8 *)a3 + 15);
      v24 = *((unsigned __int8 *)a3 + 14);
      v22 = *((unsigned __int8 *)a3 + 13);
      v20 = *((unsigned __int8 *)a3 + 12);
      v18 = *((unsigned __int8 *)a3 + 11);
      v16 = *((unsigned __int8 *)a3 + 10);
      v14 = *((unsigned __int8 *)a3 + 9);
      v12 = *((unsigned __int8 *)a3 + 8);
      v10 = *((unsigned __int16 *)a3 + 3);
      v8 = *((unsigned __int16 *)a3 + 2);
      swprintf_s(
        &Destination->Buffer[(unsigned __int64)Destination->Length >> 1],
        (Destination->MaximumLength - (unsigned __int64)Destination->Length) >> 1,
        L"{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
        *a3,
        v8,
        v10,
        v12,
        v14,
        v16,
        v18,
        v20,
        v22,
        v24,
        v26);
      Destination->Length += 76;
      result = RtlAppendUnicodeToString(Destination, L"\\");
      v28 = result;
      if ( result >= 0 )
      {
        LODWORD(v27) = *((unsigned __int8 *)a2 + 15);
        LODWORD(v25) = *((unsigned __int8 *)a2 + 14);
        LODWORD(v23) = *((unsigned __int8 *)a2 + 13);
        LODWORD(v21) = *((unsigned __int8 *)a2 + 12);
        LODWORD(v19) = *((unsigned __int8 *)a2 + 11);
        LODWORD(v17) = *((unsigned __int8 *)a2 + 10);
        LODWORD(v15) = *((unsigned __int8 *)a2 + 9);
        LODWORD(v13) = *((unsigned __int8 *)a2 + 8);
        LODWORD(v11) = *((unsigned __int16 *)a2 + 3);
        LODWORD(v9) = *((unsigned __int16 *)a2 + 2);
        swprintf_s(
          &Destination->Buffer[(unsigned __int64)Destination->Length >> 1],
          (Destination->MaximumLength - (unsigned __int64)Destination->Length) >> 1,
          L"{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
          *a2,
          v9,
          v11,
          v13,
          v15,
          v17,
          v19,
          v21,
          v23,
          v25,
          v27);
        Destination->Length += 76;
        return v28;
      }
    }
  }
  else
  {
    Destination->MaximumLength = 0;
    return -1073741670;
  }
  return result;
}
