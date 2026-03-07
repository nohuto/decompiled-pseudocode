int __fastcall HUBID_BuildDeviceCompatibleID(__int64 a1, __int64 a2, _OWORD *a3)
{
  unsigned int v5; // esi
  int result; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-E0h] BYREF
  const void *v8[2]; // [rsp+30h] [rbp-D0h] BYREF
  const void *v9[2]; // [rsp+40h] [rbp-C0h] BYREF
  const void *v10[2]; // [rsp+50h] [rbp-B0h] BYREF
  const void *v11[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v12; // [rsp+70h] [rbp-90h] BYREF
  __int64 v13; // [rsp+80h] [rbp-80h]
  int v14; // [rsp+88h] [rbp-78h]
  _OWORD v15[2]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v16[3]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v17; // [rsp+E0h] [rbp-20h]
  _OWORD v18[4]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v19; // [rsp+130h] [rbp+30h]
  char v20; // [rsp+140h] [rbp+40h] BYREF

  v18[0] = *(_OWORD *)L"USB\\DevClass_00&SubClass_00&Prot_00";
  v18[2] = *(_OWORD *)L"SubClass_00&Prot_00";
  v18[1] = *(_OWORD *)L"lass_00&SubClass_00&Prot_00";
  v8[1] = v18;
  v19 = *(_QWORD *)L"_00";
  v18[3] = *(_OWORD *)L"_00&Prot_00";
  v9[1] = v16;
  v10[1] = v15;
  v14 = *(_DWORD *)L"E";
  v11[1] = &v12;
  v8[0] = (const void *)4718662;
  v9[0] = (const void *)3670070;
  v10[0] = (const void *)2097182;
  v11[0] = (const void *)1835034;
  *(_QWORD *)&DestinationString.Length = 0x1000000LL;
  DestinationString.Buffer = (wchar_t *)&v20;
  v16[0] = *(_OWORD *)L"USB\\DevClass_00&SubClass_00";
  v16[1] = *(_OWORD *)L"lass_00&SubClass_00";
  v17 = *(_QWORD *)L"_00";
  v16[2] = *(_OWORD *)L"SubClass_00";
  v15[1] = *(_OWORD *)L"lass_00";
  v13 = *(_QWORD *)L"OSITE";
  v15[0] = *(_OWORD *)L"USB\\DevClass_00";
  v12 = *(_OWORD *)L"USB\\COMPOSITE";
  if ( a3 )
    *a3 = 0LL;
  v5 = *(unsigned __int16 *)(a1 + 1996);
  result = RtlUnicodeStringPrintf(
             &DestinationString,
             L"USB\\COMPAT_VID_%04X&DevClass_00&SubClass_00&Prot00",
             *(unsigned __int16 *)(a1 + 1996));
  if ( result >= 0 )
  {
    result = HUBID_AssignIDString((const void **)&DestinationString, 2, a2, (__int64)a3);
    if ( result >= 0 )
    {
      result = RtlUnicodeStringPrintf(&DestinationString, L"USB\\COMPAT_VID_%04X&DevClass_00&SubClass_00", v5);
      if ( result >= 0 )
      {
        result = HUBID_AssignIDString((const void **)&DestinationString, 2, a2, (__int64)a3);
        if ( result >= 0 )
        {
          result = RtlUnicodeStringPrintf(&DestinationString, L"USB\\COMPAT_VID_%04X&DevClass_00", v5);
          if ( result >= 0 )
          {
            result = HUBID_AssignIDString((const void **)&DestinationString, 2, a2, (__int64)a3);
            if ( result >= 0 )
            {
              result = HUBID_AssignIDString(v8, 2, a2, (__int64)a3);
              if ( result >= 0 )
              {
                result = HUBID_AssignIDString(v9, 2, a2, (__int64)a3);
                if ( result >= 0 )
                {
                  result = HUBID_AssignIDString(v10, 2, a2, (__int64)a3);
                  if ( result >= 0 )
                    return HUBID_AssignIDString(v11, 2, a2, (__int64)a3);
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
