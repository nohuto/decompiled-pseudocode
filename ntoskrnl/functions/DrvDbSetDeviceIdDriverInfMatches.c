__int64 __fastcall DrvDbSetDeviceIdDriverInfMatches(__int64 a1, void *a2, const wchar_t *a3)
{
  const wchar_t *v3; // rsi
  int inited; // ebx
  unsigned int v6; // r12d
  const wchar_t *v7; // rdi
  wchar_t *v8; // rax
  __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rax
  void *Pool2; // r14
  ULONG v13; // r13d
  int v14; // eax
  const wchar_t *v15; // rdi
  size_t v16; // r12
  wchar_t v17; // ax
  __int64 v18; // rax
  ULONG v19; // r8d
  int *v20; // r9
  ULONG v21; // eax
  __int64 v22; // rax
  ULONG v23; // edi
  ULONG v24; // esi
  int v25; // eax
  int v27; // [rsp+40h] [rbp-28h] BYREF
  int v28; // [rsp+44h] [rbp-24h] BYREF
  unsigned int v29; // [rsp+48h] [rbp-20h]
  int InfoKey; // [rsp+4Ch] [rbp-1Ch]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-18h] BYREF
  unsigned int MaxCount; // [rsp+B0h] [rbp+48h] BYREF
  int MaxCount_4; // [rsp+B4h] [rbp+4Ch]
  HANDLE KeyHandle; // [rsp+B8h] [rbp+50h]
  const wchar_t *v35; // [rsp+C0h] [rbp+58h]
  ULONG v36; // [rsp+C8h] [rbp+60h] BYREF

  v35 = a3;
  KeyHandle = a2;
  MaxCount_4 = HIDWORD(a1);
  v3 = a3;
  v36 = 0;
  MaxCount = 0;
  v28 = 0;
  v27 = 0;
  InfoKey = PnpCtxRegQueryInfoKey(a1, (int)a2, 0, 0, (__int64)&v36, (__int64)&MaxCount, 0LL);
  inited = InfoKey;
  if ( InfoKey >= 0 )
  {
    v6 = MaxCount + 1;
    v29 = MaxCount + 1;
    if ( v3 )
    {
      v7 = v3;
      if ( *v3 )
      {
        do
        {
          v8 = wcschr(v7, 0x5Cu);
          if ( v8 )
          {
            v9 = v8 - v7;
          }
          else
          {
            v9 = -1LL;
            do
              ++v9;
            while ( v7[v9] );
          }
          v10 = v9 + 1;
          if ( v10 > v6 )
            v6 = v10;
          v11 = -1LL;
          do
            ++v11;
          while ( v7[v11] );
          v7 += v11 + 1;
        }
        while ( *v7 );
        inited = InfoKey;
        v29 = v6;
      }
      Pool2 = (void *)ExAllocatePool2(256LL, 2LL * v6, 1111770192LL);
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      v13 = 0;
      if ( v36 )
      {
        while ( 1 )
        {
          MaxCount = v6;
          v14 = PnpCtxRegEnumValue(0LL, KeyHandle, v13, Pool2, (__int64)&MaxCount, (__int64)&v28, 0LL, 0LL);
          inited = v14;
          if ( v14 < 0 )
            break;
          if ( v28 == 3 || !v28 )
          {
            v15 = v3;
            if ( *v3 )
            {
              v16 = MaxCount;
              do
              {
                if ( !wcsncmp(v15, (const wchar_t *)Pool2, v16) )
                {
                  v17 = v15[v16];
                  if ( v17 == 92 || !v17 )
                    break;
                }
                v18 = -1LL;
                do
                  ++v18;
                while ( v15[v18] );
                v15 += v18 + 1;
              }
              while ( *v15 );
              v3 = v35;
              v6 = v29;
            }
            if ( !*v15 )
            {
              DestinationString = 0LL;
              inited = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)Pool2);
              if ( inited >= 0 )
                inited = ZwDeleteValueKey(KeyHandle, &DestinationString);
              if ( inited == -1073741772 )
              {
                inited = 0;
              }
              else if ( inited < 0 )
              {
                goto LABEL_65;
              }
            }
          }
          if ( ++v13 >= v36 )
          {
            if ( inited < 0 )
              goto LABEL_65;
            goto LABEL_48;
          }
        }
        if ( v14 != -2147483622 )
          goto LABEL_65;
        inited = 0;
      }
LABEL_48:
      while ( *v3 )
      {
        inited = DrvDbSplitDeviceIdDriverInfMatch(v3, (wchar_t *)Pool2, v6, (__int64)&v27);
        if ( inited < 0 )
          break;
        if ( (_BYTE)v27 )
        {
          v19 = 3;
          v20 = &v27;
          v21 = 4;
        }
        else
        {
          v19 = 0;
          v20 = 0LL;
          v21 = 0;
        }
        inited = RegRtlSetValue(KeyHandle, (const WCHAR *)Pool2, v19, v20, v21);
        if ( inited < 0 )
          break;
        v22 = -1LL;
        do
          ++v22;
        while ( v3[v22] );
        v3 += v22 + 1;
      }
    }
    else
    {
      v23 = v36;
      if ( !v36 )
        return 0;
      Pool2 = (void *)ExAllocatePool2(256LL, 2LL * v6, 1111770192LL);
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      v24 = 0;
      if ( v23 )
      {
        while ( 1 )
        {
          MaxCount = v6;
          inited = PnpCtxRegEnumValue(0LL, a2, v24, Pool2, (__int64)&MaxCount, 0LL, 0LL, 0LL);
          if ( inited < 0 )
            break;
          DestinationString = 0LL;
          inited = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)Pool2);
          if ( inited >= 0 )
            inited = ZwDeleteValueKey(a2, &DestinationString);
          if ( (int)(inited + 0x80000000) < 0 || inited == -1073741772 )
          {
            v25 = 0;
            if ( inited != -1073741772 )
              v25 = inited;
            ++v24;
            inited = v25;
            if ( v24 < v23 )
              continue;
          }
          goto LABEL_65;
        }
        if ( inited == -2147483622 )
          inited = 0;
      }
    }
LABEL_65:
    ExFreePoolWithTag(Pool2, 0);
  }
  return (unsigned int)inited;
}
