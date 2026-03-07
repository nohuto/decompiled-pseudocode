__int64 __fastcall pReadDetailTimingFromReg(HANDLE KeyHandle, int a2, unsigned int a3, __int64 a4)
{
  unsigned int *v4; // rsi
  unsigned int v5; // edi
  __int64 v6; // r14
  __int64 v8; // rbp
  HANDLE v9; // rax
  NTSTATUS v10; // eax
  int valid; // ebx
  unsigned int v12; // eax
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-78h] BYREF
  HANDLE i; // [rsp+38h] [rbp-70h]
  _BYTE KeyValueInformation[4]; // [rsp+40h] [rbp-68h] BYREF
  int v20; // [rsp+44h] [rbp-64h]
  int v21; // [rsp+48h] [rbp-60h]
  unsigned int v22; // [rsp+4Ch] [rbp-5Ch]

  ResultLength = 0;
  v4 = (unsigned int *)(a4 + 4);
  v5 = 0;
  v6 = a3;
  v8 = a2;
  v9 = KeyHandle;
  for ( i = KeyHandle; ; v9 = i )
  {
    v10 = ZwQueryValueKey(
            v9,
            (PUNICODE_STRING)&unk_1C008DDC0 + v5,
            KeyValuePartialInformation,
            KeyValueInformation,
            0x13u,
            &ResultLength);
    valid = v10;
    if ( v10 < 0 )
    {
      WdLogSingleEntry4(3LL, v8, v6, v5, v10);
      return (unsigned int)valid;
    }
    if ( v20 != 4 || v21 != 4 )
    {
      WdLogSingleEntry4(3LL, v8, v6, v5, v10);
      return (unsigned int)-1073741811;
    }
    v12 = v22;
    if ( v5 )
    {
      *v4 = v22;
    }
    else
    {
      *(_DWORD *)a4 = HIBYTE(v22);
      *(_DWORD *)(a4 + 4) = v12 & 0xFFFFFF;
      valid = IsValidVideoStandardType((enum _D3DKMDT_VIDEO_SIGNAL_STANDARD)HIBYTE(v12));
      if ( valid < 0 )
      {
        WdLogSingleEntry2(3LL, v6, v8);
        return (unsigned int)valid;
      }
    }
    ++v5;
    ++v4;
    if ( v5 >= 6 )
      break;
  }
  v13 = *(_DWORD *)(a4 + 8);
  if ( (v13 & 0xFFFFFF) == 0 )
  {
    v14 = v13 & 0xFFFFFF;
    goto LABEL_13;
  }
  v15 = *(unsigned __int16 *)(a4 + 12);
  if ( (unsigned int)v15 < 0x64 || (v15 = *(unsigned __int16 *)(a4 + 20), (unsigned int)v15 < 0x64) )
  {
    v14 = v15;
LABEL_13:
    WdLogSingleEntry2(3LL, v14, a4 + 8);
    return (unsigned int)-1073741811;
  }
  return 0;
}
