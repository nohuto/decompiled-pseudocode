/*
 * XREFs of PipCreateComputerId @ 0x140B56980
 * Callers:
 *     PipInitComputerIds @ 0x140B552F0 (PipInitComputerIds.c)
 * Callees:
 *     RtlStringCbPrintfExW @ 0x1402986C0 (RtlStringCbPrintfExW.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwSetValueKey @ 0x140412F10 (ZwSetValueKey.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     _PnpStringFromGuid @ 0x1406881E8 (_PnpStringFromGuid.c)
 *     RtlGenerateClass5Guid @ 0x14081B430 (RtlGenerateClass5Guid.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipCreateComputerId(void *a1, void *a2, unsigned __int16 **a3, unsigned int a4, int *a5)
{
  unsigned int v5; // ebp
  unsigned __int16 v9; // bx
  unsigned int v10; // r8d
  _WORD **v11; // rdx
  _WORD *v12; // rax
  unsigned __int16 v13; // cx
  unsigned __int16 v14; // bx
  __int64 Pool2; // rax
  UCHAR *Data; // rsi
  _WORD *v17; // rdi
  ULONG DataSize; // edi
  int Class5Guid; // ebx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-118h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-108h]
  WCHAR SourceString[40]; // [rsp+60h] [rbp-F8h] BYREF
  wchar_t pszDest[48]; // [rsp+B0h] [rbp-A8h] BYREF

  v5 = 0;
  KeyHandle = a1;
  v9 = 0;
  v10 = 0;
  DestinationString = 0LL;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v11 = a3;
  do
  {
    v12 = *v11;
    v13 = v9 + 2;
    ++v11;
    if ( !v10 )
      v13 = v9;
    ++v10;
    v9 = *v12 + v13;
  }
  while ( v10 < a4 );
  if ( v9 > 2u )
  {
    v14 = v9 + 2;
    Pool2 = ExAllocatePool2(256LL, v14, 0x6E697050u);
    Data = (UCHAR *)Pool2;
    if ( Pool2 )
    {
      v17 = (_WORD *)Pool2;
      do
      {
        if ( v5 )
          *v17++ = 38;
        if ( **a3 )
        {
          memmove(v17, *((const void **)*a3 + 1), **a3);
          v17 += (unsigned __int64)**a3 >> 1;
        }
        ++v5;
        ++a3;
      }
      while ( v5 < a4 );
      *v17 = 0;
      DataSize = v14;
      Class5Guid = RtlGenerateClass5Guid((__int64)qword_1400116C8, Data, (unsigned int)v14 - 2, (__int64)a5);
      if ( Class5Guid >= 0 )
      {
        Class5Guid = PnpStringFromGuid(a5, SourceString);
        if ( Class5Guid >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, SourceString);
          Class5Guid = ZwSetValueKey(KeyHandle, &DestinationString, 0, 1u, Data, DataSize);
          if ( Class5Guid >= 0 )
          {
            if ( a2 )
            {
              Class5Guid = RtlStringCbPrintfExW(
                             pszDest,
                             0x5CuLL,
                             0LL,
                             0LL,
                             0x800u,
                             L"%ws_%ws",
                             SourceString,
                             L"amd64",
                             *(_QWORD *)&DestinationString.Length,
                             DestinationString.Buffer);
              if ( Class5Guid >= 0 )
              {
                RtlInitUnicodeString(&DestinationString, pszDest);
                Class5Guid = ZwSetValueKey(a2, &DestinationString, 0, 1u, 0LL, 0);
              }
            }
          }
        }
      }
      ExFreePoolWithTag(Data, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)Class5Guid;
}
