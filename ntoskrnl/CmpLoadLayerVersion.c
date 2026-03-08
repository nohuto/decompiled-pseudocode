/*
 * XREFs of CmpLoadLayerVersion @ 0x140814A94
 * Callers:
 *     CmpLoadLayerVersions @ 0x1408148C4 (CmpLoadLayerVersions.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlUnicodeStringToAnsiString @ 0x1407A34D0 (RtlUnicodeStringToAnsiString.c)
 *     CmpQueryLayerVersionUlong @ 0x140814F44 (CmpQueryLayerVersionUlong.c)
 *     CmpQueryLayerVersionString @ 0x14081502C (CmpQueryLayerVersionString.c)
 */

NTSTATUS __fastcall CmpLoadLayerVersion(_DWORD *a1, void *a2, UNICODE_STRING *a3, int a4)
{
  int v4; // ebx
  int v7; // esi
  int v9; // r12d
  NTSTATUS result; // eax
  int v11; // ecx
  unsigned int v12; // eax
  bool v13; // sf
  int v14; // ecx
  unsigned int v15; // eax
  int v16; // ecx
  unsigned int v17; // eax
  int v18; // ecx
  unsigned int v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  int v22; // ecx
  unsigned int v23; // eax
  int v24; // ecx
  unsigned int v25; // eax
  _WORD *v26; // r15
  int v27; // ecx
  unsigned int v28; // eax
  const UNICODE_STRING *v29; // r14
  int v30; // ecx
  unsigned int v31; // eax
  HANDLE v32; // r8
  int v33; // ecx
  HANDLE v34; // r8
  int v35; // eax
  HANDLE v36; // rcx
  STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+C0h] [rbp+50h] BYREF
  int v40; // [rsp+C8h] [rbp+58h] BYREF

  v4 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  v7 = ~a4;
  v40 = 0;
  memset(a1, 0, 0x328uLL);
  if ( a3->Length > 0x7Eu )
    return -1073741562;
  ObjectAttributes.Length = 48;
  v9 = 1;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a3;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  if ( result >= 0 )
  {
    *((_WORD *)a1 + 8) = a3->Length;
    *((_WORD *)a1 + 9) = 128;
    *((_QWORD *)a1 + 3) = a1 + 28;
    memset(a1 + 28, 0, 0x80uLL);
    memmove(*((void **)a1 + 3), a3->Buffer, a3->Length);
    if ( (int)CmpQueryLayerVersionUlong(a1, L"MajorVersion", KeyHandle) < 0 || (v11 = 8, !*a1) )
      v11 = 0;
    v12 = v11 | a1[200] & 0xFFFFFFF7;
    a1[200] = v12;
    if ( (((unsigned __int8)v7 | (unsigned __int8)v12) & 8) == 0 )
      return -2147483614;
    v13 = (int)CmpQueryLayerVersionUlong(a1 + 1, L"MinorVersion", KeyHandle) < 0;
    v14 = 0;
    if ( !v13 )
      v14 = 16;
    v15 = v14 | a1[200] & 0xFFFFFFEF;
    a1[200] = v15;
    if ( (((unsigned __int8)v7 | (unsigned __int8)v15) & 0x10) == 0 )
      return -2147483614;
    if ( (int)CmpQueryLayerVersionUlong(a1 + 2, L"BuildNumber", KeyHandle) < 0 || (v16 = 32, !a1[2]) )
      v16 = 0;
    v17 = v16 | a1[200] & 0xFFFFFFDF;
    a1[200] = v17;
    if ( (((unsigned __int8)v7 | (unsigned __int8)v17) & 0x20) == 0 )
      return -2147483614;
    v13 = (int)CmpQueryLayerVersionUlong(a1 + 3, L"BuildQfe", KeyHandle) < 0;
    v18 = 0;
    if ( !v13 )
      v18 = 64;
    v19 = v18 | a1[200] & 0xFFFFFFBF;
    a1[200] = v19;
    if ( (((unsigned __int8)v7 | (unsigned __int8)v19) & 0x40) == 0 )
      return -2147483614;
    if ( (int)CmpQueryLayerVersionString((PUNICODE_STRING)a1 + 2, (PCWSTR)a1 + 120, KeyHandle) < 0
      || (v20 = 128, !*((_WORD *)a1 + 16)) )
    {
      v20 = 0;
    }
    v21 = v20 | a1[200] & 0xFFFFFF7F;
    a1[200] = v21;
    if ( (((unsigned __int8)v7 | (unsigned __int8)v21) & 0x80) == 0 )
      return -2147483614;
    if ( (int)CmpQueryLayerVersionString((PUNICODE_STRING)a1 + 3, (PCWSTR)a1 + 133, KeyHandle) < 0
      || (v22 = 256, !*((_WORD *)a1 + 24)) )
    {
      v22 = 0;
    }
    v23 = v22 | a1[200] & 0xFFFFFEFF;
    a1[200] = v23;
    if ( (((unsigned __int16)v7 | (unsigned __int16)v23) & 0x100) == 0 )
      return -2147483614;
    if ( (int)CmpQueryLayerVersionString((PUNICODE_STRING)a1 + 4, (PCWSTR)a1 + 141, KeyHandle) < 0
      || (v24 = 512, !*((_WORD *)a1 + 32)) )
    {
      v24 = 0;
    }
    v25 = v24 | a1[200] & 0xFFFFFDFF;
    a1[200] = v25;
    if ( (((unsigned __int16)v7 | (unsigned __int16)v25) & 0x200) == 0 )
      return -2147483614;
    v26 = a1 + 20;
    if ( (int)CmpQueryLayerVersionString((PUNICODE_STRING)a1 + 5, (PCWSTR)a1 + 205, KeyHandle) < 0
      || (v27 = 1024, !*v26) )
    {
      v27 = 0;
    }
    v28 = v27 | a1[200] & 0xFFFFFBFF;
    a1[200] = v28;
    if ( (((unsigned __int16)v7 | (unsigned __int16)v28) & 0x400) == 0 )
      return -2147483614;
    v29 = (const UNICODE_STRING *)(a1 + 24);
    if ( (int)CmpQueryLayerVersionString((PUNICODE_STRING)a1 + 6, (PCWSTR)a1 + 269, KeyHandle) < 0
      || (v30 = 2048, !v29->Length) )
    {
      v30 = 0;
    }
    v31 = v30 | a1[200] & 0xFFFFF7FF;
    a1[200] = v31;
    if ( ((v7 | v31) & 0x800) == 0 )
      return -2147483614;
    *(_DWORD *)&DestinationString.Length = 0x800000;
    DestinationString.Buffer = (char *)a1 + 666;
    if ( !*((_QWORD *)a1 + 13) || !v29->Length )
    {
      if ( !*((_QWORD *)a1 + 11) || !*v26 )
      {
LABEL_42:
        *((_BYTE *)a1 + 666) = 0;
LABEL_33:
        if ( (int)CmpQueryLayerVersionUlong(&v40, L"IsTopLevel", KeyHandle) < 0 || !v40 )
          v9 = 0;
        v32 = KeyHandle;
        a1[200] = v9 | a1[200] & 0xFFFFFFFE;
        if ( (int)CmpQueryLayerVersionUlong(&v40, L"IsChecked", v32) < 0 || (v33 = 2, !v40) )
          v33 = 0;
        v34 = KeyHandle;
        a1[200] = v33 | a1[200] & 0xFFFFFFFD;
        v35 = CmpQueryLayerVersionUlong(&v40, L"OrderNumber", v34);
        v36 = KeyHandle;
        if ( v35 >= 0 )
          v4 = v40;
        a1[199] = v4;
        ZwClose(v36);
        return 0;
      }
      v29 = (const UNICODE_STRING *)(a1 + 20);
    }
    if ( RtlUnicodeStringToAnsiString(&DestinationString, v29, 0) >= 0 )
      goto LABEL_33;
    goto LABEL_42;
  }
  return result;
}
