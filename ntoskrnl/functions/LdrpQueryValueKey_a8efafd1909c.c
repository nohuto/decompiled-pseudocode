__int64 __fastcall LdrpQueryValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName, _DWORD *a3, void *a4, ULONG *a5)
{
  ULONG *v5; // rbx
  ULONG v10; // ebp
  ULONG Length; // ebp
  _DWORD *Pool2; // rsi
  NTSTATUS v13; // eax
  unsigned int v14; // edi
  ULONG v16; // eax
  ULONG ResultLength; // [rsp+78h] [rbp+20h] BYREF

  v5 = a5;
  if ( !a4 )
  {
    if ( !a5 )
    {
      ResultLength = 0;
      Length = 12;
LABEL_4:
      Pool2 = (_DWORD *)ExAllocatePool2(256LL, Length, 1920232557LL);
      if ( Pool2 )
      {
        v13 = ZwQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, Pool2, Length, &ResultLength);
        v14 = v13;
        if ( v13 >= 0 )
        {
          if ( a4 )
          {
            if ( !v5 )
              goto LABEL_15;
            v16 = Pool2[2];
            if ( v16 > *v5 )
            {
              v14 = -2147483643;
            }
            else if ( v16 <= Length )
            {
              memmove(a4, Pool2 + 3, v16);
            }
            goto LABEL_14;
          }
        }
        else if ( v13 != -2147483643 )
        {
LABEL_7:
          ExFreePoolWithTag(Pool2, 0);
          return v14;
        }
        if ( !v5 )
        {
LABEL_15:
          if ( a3 )
            *a3 = Pool2[1];
          goto LABEL_7;
        }
LABEL_14:
        *v5 = Pool2[2];
        goto LABEL_15;
      }
      return (unsigned int)-1073741670;
    }
LABEL_3:
    v10 = *a5;
    ResultLength = 0;
    Length = v10 + 12;
    if ( !Length )
      return (unsigned int)-1073741670;
    goto LABEL_4;
  }
  if ( a5 )
    goto LABEL_3;
  return 3221225485LL;
}
