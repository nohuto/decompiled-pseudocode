__int64 __fastcall CmpVEExecuteVirtualStoreParseLogic(
        __int64 a1,
        const UNICODE_STRING *a2,
        _DWORD *a3,
        UNICODE_STRING *a4)
{
  volatile signed __int32 *v6; // rsi
  __int64 v9; // r8
  int v10; // ebx
  unsigned int v11; // edx
  char PathByName; // bl
  wchar_t *Buffer; // rcx
  wchar_t *v14; // rcx
  unsigned int v16; // [rsp+30h] [rbp-40h] BYREF
  volatile signed __int32 *v17; // [rsp+38h] [rbp-38h] BYREF
  ULONG_PTR v18; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING v19; // [rsp+48h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-18h] BYREF
  char v21; // [rsp+B0h] [rbp+40h] BYREF

  v18 = 0LL;
  v16 = 0;
  v21 = 0;
  v6 = 0LL;
  DestinationString = 0LL;
  v17 = 0LL;
  v19 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v19, 0LL);
  *a3 |= 8u;
  if ( (unsigned __int8)CmpVirtualBranchIsReplicated(a1, a2, &v21) )
    goto LABEL_2;
  v10 = CmVirtualKCBToRealPath(a1, &DestinationString, v9);
  if ( v10 >= 0 )
  {
    v11 = a2->Length + DestinationString.Length + 2;
    if ( v11 <= 0xFFFF )
    {
      v19.MaximumLength = a2->Length + DestinationString.Length + 2;
      v19.Buffer = (wchar_t *)ExAllocatePool2(256LL, (unsigned __int16)v11, 1649298755LL);
      if ( !v19.Buffer )
      {
        v10 = -1073741670;
        goto LABEL_24;
      }
      RtlUnicodeStringCopy(&v19, &DestinationString);
      CmpUnicodeStringAppendCharacter(&v19);
      RtlUnicodeStringCat(&v19, a2);
      if ( (*a3 & 1) != 0 && v21 )
      {
        v10 = CmpBlockHiveWrites(0LL, 16, &v17);
        if ( v10 >= 0 )
        {
          PathByName = CmpFindPathByNameEx(0LL, (__m128i *)&v19, 0LL, 16, &v16, &v18);
          CmpUnblockHiveWrites(0LL, 16, v17);
          if ( PathByName )
          {
            Buffer = a4->Buffer;
            if ( Buffer )
              ExFreePoolWithTag(Buffer, 0);
            *a4 = v19;
            RtlInitUnicodeString(&v19, 0LL);
            v10 = 260;
            goto LABEL_22;
          }
          goto LABEL_2;
        }
        v6 = v17;
      }
      else
      {
        if ( (*(_DWORD *)(a1 + 8) & 0x7FE00000u) <= 0x800000 )
        {
LABEL_2:
          v10 = -1073741199;
          goto LABEL_22;
        }
        v14 = a4->Buffer;
        if ( v14 )
          ExFreePoolWithTag(v14, 0);
        *a4 = v19;
        RtlInitUnicodeString(&v19, 0LL);
        v10 = 260;
      }
      if ( v6 )
        CmpUnblockHiveWrites(0LL, 16, v6);
      goto LABEL_22;
    }
    v10 = -1073741811;
  }
LABEL_22:
  if ( v19.Buffer )
    ExFreePoolWithTag(v19.Buffer, 0);
LABEL_24:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  return (unsigned int)v10;
}
