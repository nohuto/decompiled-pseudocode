/*
 * XREFs of DxgkRetrieveStringFromRegistry @ 0x1C01EDDF0
 * Callers:
 *     DpiGetAdapterInfo @ 0x1C01ECB58 (DpiGetAdapterInfo.c)
 *     DpiFdoStartAdapter @ 0x1C01F17F0 (DpiFdoStartAdapter.c)
 *     ?FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z @ 0x1C020E1FC (-FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0027340 (memmove.c)
 */

NTSTATUS __fastcall DxgkRetrieveStringFromRegistry(HANDLE KeyHandle, PUNICODE_STRING ValueName, __int64 a3)
{
  NTSTATUS result; // eax
  _DWORD *Pool2; // rax
  _DWORD *v8; // rdi
  NTSTATUS ValueKey; // ebx
  int v10; // ebp
  __int64 v11; // rbx
  __int16 v12; // si
  ULONG v13[14]; // [rsp+30h] [rbp-38h] BYREF
  ULONG ResultLength; // [rsp+88h] [rbp+20h] BYREF

  ResultLength = 0;
  v13[0] = 0;
  result = ZwQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength);
  if ( result != -1073741789 && result != -2147483643 )
  {
    if ( result >= 0 )
      return -1073741823;
    return result;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, ResultLength, 1953656900LL);
  v8 = Pool2;
  if ( !Pool2 )
    return -1073741801;
  ValueKey = ZwQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, Pool2, ResultLength, v13);
  if ( ValueKey < 0 )
  {
LABEL_19:
    ExFreePoolWithTag(v8, 0);
    return ValueKey;
  }
  v10 = v8[1];
  if ( v10 != 7 && v10 != 1 )
  {
    ValueKey = -1073741788;
    goto LABEL_19;
  }
  v11 = (unsigned int)v8[2];
  v13[0] = v11;
  if ( (_DWORD)v11 && (v12 = ResultLength, (unsigned int)v11 <= ResultLength - 12) )
  {
    if ( (unsigned int)v11 > 0xFFFC )
      v11 = 65532LL;
    v13[0] = v11;
    memmove(v8, v8 + 3, (unsigned int)v11);
    if ( v10 != 7 )
    {
      *(_WORD *)((char *)v8 + v11) = 0;
      v12 = ResultLength;
      LOWORD(v11) = LOWORD(v13[0]) + 2;
    }
    *(_WORD *)(a3 + 2) = v12;
    result = 0;
    *(_WORD *)a3 = v11;
    *(_QWORD *)(a3 + 8) = v8;
  }
  else
  {
    ExFreePoolWithTag(v8, 0);
    return -1073741772;
  }
  return result;
}
