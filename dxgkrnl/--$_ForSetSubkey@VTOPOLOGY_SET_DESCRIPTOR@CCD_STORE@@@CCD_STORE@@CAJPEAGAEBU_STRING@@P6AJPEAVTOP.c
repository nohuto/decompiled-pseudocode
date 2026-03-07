__int64 __fastcall CCD_STORE::_ForSetSubkey<CCD_STORE::TOPOLOGY_SET_DESCRIPTOR>(
        __int64 a1,
        struct _STRING *a2,
        int (__fastcall *a3)(_BYTE *, __int64),
        __int64 a4,
        char a5)
{
  int v8; // eax
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rax
  __int64 v17; // rcx
  int v18; // eax
  int v19; // [rsp+30h] [rbp-91h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-89h] BYREF
  HANDLE v21; // [rsp+40h] [rbp-81h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-79h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+58h] [rbp-69h] BYREF
  _BYTE v24[80]; // [rsp+70h] [rbp-51h] BYREF
  __int64 v25; // [rsp+C0h] [rbp-1h] BYREF
  int v26; // [rsp+C8h] [rbp+7h]

  v21 = 0LL;
  v19 = 0;
  v8 = CcdOpenRegistrySubkey(
         &v21,
         983103LL,
         0LL,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\",
         &v19);
  LODWORD(v9) = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry5(
      2LL,
      v8,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\",
      a2,
      a3,
      a4);
    return (unsigned int)v9;
  }
  Handle = 0LL;
  DestinationString = 0LL;
  v10 = CCD_SET_STRING_ID::_CcdCreateKeyFromSetIdStr(&DestinationString, a2);
  v9 = v10;
  if ( v10 < 0 )
    goto LABEL_9;
  v19 = 2;
  v9 = (int)CcdOpenRegistrySubkey_0(
              (unsigned int)&Handle,
              983103,
              (_DWORD)v21,
              (unsigned int)&DestinationString,
              (unsigned __int64)&v19 & -(__int64)(a5 != 0));
  operator delete(DestinationString.Buffer);
  DestinationString = 0LL;
  if ( (int)v9 < 0 )
  {
    v17 = 3LL;
    goto LABEL_11;
  }
  if ( v19 == 1 )
  {
    v26 = *(_DWORD *)L"d";
    ValueName.Buffer = (wchar_t *)&v25;
    v25 = *(_QWORD *)L"SetId";
    *(_QWORD *)&ValueName.Length = 786442LL;
    v18 = CcdWriteStrValueToRegistry(Handle, &ValueName, a2);
    v9 = v18;
    if ( v18 < 0 )
    {
      ZwClose(Handle);
LABEL_9:
      v17 = 2LL;
LABEL_11:
      WdLogSingleEntry5(
        v17,
        v9,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\",
        a2,
        a3,
        a4);
      goto LABEL_6;
    }
  }
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::TOPOLOGY_SET_DESCRIPTOR((CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *)v24, Handle, a2);
  v9 = a3(v24, a4);
  ZwClose(Handle);
  v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
  v15[3] = v9;
  v15[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
  v15[5] = a2;
  v15[6] = a3;
  v15[7] = a4;
  CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v24);
LABEL_6:
  ZwClose(v21);
  return (unsigned int)v9;
}
