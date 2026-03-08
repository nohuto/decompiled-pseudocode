/*
 * XREFs of ?InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ @ 0x1C020D8B0
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01EDF54 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     Feature_EnableIddCx110__private_IsEnabledDeviceUsage @ 0x1C0024584 (Feature_EnableIddCx110__private_IsEnabledDeviceUsage.c)
 *     ?xwtol@@YAKPEBG@Z @ 0x1C01FF51C (-xwtol@@YAKPEBG@Z.c)
 *     DxgkInitializeBlockList @ 0x1C020DD10 (DxgkInitializeBlockList.c)
 */

void __fastcall DXGADAPTER::InitializeDriverWorkarounds(DXGADAPTER *this)
{
  _DWORD **v1; // rdi
  int v3; // eax
  int v4; // eax
  __int64 v5; // rsi
  int v6; // eax
  const wchar_t *v7; // rcx
  wchar_t *v8; // rax
  __int64 v9; // rcx
  BOOL v10; // ecx
  const wchar_t *v11; // rcx
  wchar_t *v12; // rax
  struct _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-49h] BYREF
  __int64 v14; // [rsp+40h] [rbp-39h] BYREF
  int v15; // [rsp+48h] [rbp-31h]
  const wchar_t *v16; // [rsp+50h] [rbp-29h]
  struct _UNICODE_STRING *p_UnicodeString; // [rsp+58h] [rbp-21h]
  int v18; // [rsp+60h] [rbp-19h]
  __int64 v19; // [rsp+68h] [rbp-11h]
  int v20; // [rsp+70h] [rbp-9h]
  __int64 v21; // [rsp+78h] [rbp-1h]
  int v22; // [rsp+80h] [rbp+7h]
  __int128 v23; // [rsp+88h] [rbp+Fh]
  __int128 v24; // [rsp+98h] [rbp+1Fh]
  __int64 v25; // [rsp+A8h] [rbp+2Fh]
  int Key; // [rsp+E0h] [rbp+67h] BYREF

  v1 = (_DWORD **)((char *)this + 2824);
  DxgkInitializeBlockList(*((_QWORD *)this + 27), *((unsigned int *)this + 638), (char *)this + 2824);
  if ( (**v1 & 0x80u) != 0 )
    WdDiagNotifyUser(32LL, 9LL, 0LL, 0LL);
  v3 = *((_DWORD *)this + 638);
  if ( v3 == 8704 )
  {
    if ( (*((_DWORD *)this + 109) & 0x200) != 0 )
      *((_BYTE *)this + 2869) = 1;
  }
  else if ( (unsigned int)(v3 - 0x2000) > 0x3FF )
  {
    goto LABEL_10;
  }
  v4 = *((_DWORD *)this + 103);
  if ( v4 == 32902 || v4 == 4098 )
    **v1 |= 0x40u;
LABEL_10:
  v5 = -1LL;
  if ( *((int *)this + 638) >= 0x2000 )
  {
    v6 = *((_DWORD *)this + 103);
    if ( v6 == 4098 || v6 == 4318 )
    {
      *((_DWORD *)this + 569) |= 0x40u;
    }
    else if ( v6 == 32902 && (*((_DWORD *)this + 569) & 0x40) != 0 )
    {
      Key = *((_DWORD *)this + 104);
      if ( bsearch(&Key, &unk_1C0096720, 0x18uLL, 4uLL, UintCompareFunc) )
      {
        v7 = (const wchar_t *)*((_QWORD *)this + 227);
        if ( v7 )
        {
          v8 = wcsrchr(v7, 0x2Eu);
          if ( v8 )
          {
            v9 = -1LL;
            do
              ++v9;
            while ( v8[v9] );
            if ( v9 == 5 && (unsigned int)xwtol(v8 + 1) - 1 <= 0x116D )
              *((_DWORD *)this + 569) &= ~0x40u;
          }
        }
      }
    }
  }
  v10 = Feature_EnableIddCx110__private_IsEnabledDeviceUsage() != 0;
  if ( *((int *)this + 638) >= 9216 && (!v10 || (*((_DWORD *)this + 109) & 0x100) == 0) )
    *((_DWORD *)this + 569) |= 8u;
  if ( *((_DWORD *)this + 103) != 4318 || *((_DWORD *)this + 524) > 0x10004u )
    **v1 |= 0x10000000u;
  if ( *((_DWORD *)this + 103) == 1297040209 )
  {
    if ( *((int *)this + 705) <= 2000 )
    {
      **v1 |= 0x10u;
      v16 = L"PhoneSOCVersion";
      p_UnicodeString = &UnicodeString;
      v25 = 0LL;
      *(_QWORD *)&UnicodeString.Length = 0LL;
      UnicodeString.Buffer = 0LL;
      v14 = 0LL;
      v15 = 292;
      v18 = 16777217;
      v19 = 0LL;
      v20 = 0;
      v21 = 0LL;
      v22 = 0;
      v23 = 0LL;
      v24 = 0LL;
      if ( (int)RtlQueryRegistryValuesEx(
                  0LL,
                  L"\\Registry\\Machine\\System\\Platform\\DeviceTargetingInfo",
                  &v14,
                  0LL,
                  0LL) >= 0
        && UnicodeString.Length >= 4u
        && (!RtlCompareUnicodeStrings(UnicodeString.Buffer, 4uLL, L"8992", 4uLL, 0)
         || !RtlCompareUnicodeStrings(UnicodeString.Buffer, 4uLL, L"8994", 4uLL, 0)) )
      {
        **v1 |= 0x20u;
      }
      RtlFreeUnicodeString(&UnicodeString);
    }
    if ( *((int *)this + 705) <= 1300 )
    {
      **v1 |= 1u;
      **v1 |= 2u;
      **v1 |= 8u;
    }
    if ( *((_DWORD *)this + 638) == 4608 )
      **v1 |= 4u;
    if ( *((_DWORD *)this + 104) == 1161245232 )
    {
      if ( *((_DWORD *)this + 105) == 810570829
        && *((_DWORD *)this + 106) == 808794160
        && *((_DWORD *)this + 107) == 124 )
      {
        **v1 |= 0x1000u;
        **v1 |= 0x2000u;
      }
      if ( *((_DWORD *)this + 104) == 1161245232
        && *((_DWORD *)this + 105) == 810434888
        && *((_DWORD *)this + 106) == 808794160
        && *((_DWORD *)this + 107) == 124 )
      {
        **v1 |= 0x4000u;
      }
    }
  }
  if ( (**v1 & 0x400) != 0 )
  {
    *((_BYTE *)this + 2756) = 0;
    *((_DWORD *)this + 690) = 1;
    *((_BYTE *)this + 2861) = 0;
    *((_BYTE *)this + 2865) = 0;
    *((_BYTE *)this + 2863) = 0;
  }
  if ( *((int *)this + 638) <= 9216 && *((_DWORD *)this + 103) == 32902 )
  {
    v11 = (const wchar_t *)*((_QWORD *)this + 227);
    if ( v11 )
    {
      v12 = wcsrchr(v11, 0x2Eu);
      if ( v12 )
      {
        do
          ++v5;
        while ( v12[v5] );
        if ( v5 == 5 && (unsigned int)xwtol(v12 + 1) - 1 <= 0x17F6 )
          **v1 |= 0x200000u;
      }
    }
  }
  if ( *((_DWORD *)this + 638) == 8960 && *((_DWORD *)this + 103) == 4098 )
    **v1 |= 0x400000u;
  if ( *((int *)this + 638) <= 9728 && *((_DWORD *)this + 103) == 4098 )
    **v1 |= 0x800000u;
}
