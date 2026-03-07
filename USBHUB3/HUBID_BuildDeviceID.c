NTSTATUS __fastcall HUBID_BuildDeviceID(__int64 a1, __int64 a2)
{
  int v4; // eax
  int v5; // ecx
  const void **p_DestinationString; // rcx
  unsigned __int16 v7; // r8
  unsigned __int16 v8; // ax
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  NTSTATUS result; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-E0h] BYREF
  struct _UNICODE_STRING v18; // [rsp+30h] [rbp-D0h] BYREF
  char v19; // [rsp+40h] [rbp-C0h] BYREF
  char v20; // [rsp+A0h] [rbp-60h] BYREF

  *(_QWORD *)&v18.Length = 6029312LL;
  *(_QWORD *)&DestinationString.Length = 9961472LL;
  v18.Buffer = (wchar_t *)&v19;
  DestinationString.Buffer = (wchar_t *)&v20;
  v4 = *(_DWORD *)(a1 + 1636);
  if ( (v4 & 2) != 0 )
  {
    v5 = *(_DWORD *)(a1 + 1632);
    if ( (v5 & 1) != 0 && (v5 & 2) == 0 )
    {
      p_DestinationString = (const void **)(a1 + 2120);
      return HUBID_AssignIDString(p_DestinationString, 0, a2, 0LL);
    }
    v7 = *(_WORD *)(a1 + 1996);
    v8 = *(_WORD *)(a1 + 1998);
  }
  else if ( (v4 & 0x2000) != 0 )
  {
    v7 = *(_WORD *)(a1 + 1996);
    v8 = *(_WORD *)(a1 + 1998);
  }
  else
  {
    v7 = 0;
    v9 = *(_DWORD *)(a1 + 2432) - 1073807360;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 2;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( v13 )
            {
              v14 = v13 - 2;
              if ( v14 )
              {
                v15 = v14 - 18;
                if ( v15 )
                {
                  if ( v15 == 1 )
                    v8 = 8;
                  else
                    v8 = 0;
                }
                else
                {
                  v8 = 7;
                }
              }
              else
              {
                v8 = 3;
              }
            }
            else
            {
              v8 = 5;
            }
          }
          else
          {
            v8 = 6;
          }
        }
        else
        {
          v8 = 1;
        }
      }
      else
      {
        v8 = 4;
      }
    }
    else
    {
      v8 = 2;
    }
  }
  if ( (*(_DWORD *)(a1 + 1644) & 0x10000) != 0 )
  {
    result = RtlUnicodeStringPrintf(&DestinationString, L"USB\\VID_%04X&PID_%04X_NON_FUNCTIONAL", v7, v8);
    if ( result < 0 )
      return result;
    p_DestinationString = (const void **)&DestinationString;
  }
  else
  {
    result = RtlUnicodeStringPrintf(
               &v18,
               L"USB\\VID_%04X&PID_%04X",
               v7,
               v8,
               *(_QWORD *)&DestinationString.Length,
               DestinationString.Buffer);
    if ( result < 0 )
      return result;
    p_DestinationString = (const void **)&v18;
  }
  return HUBID_AssignIDString(p_DestinationString, 0, a2, 0LL);
}
