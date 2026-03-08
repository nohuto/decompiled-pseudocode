/*
 * XREFs of _pLoadAdditinalMode @ 0x1C01CE9D4
 * Callers:
 *     ?GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C01CE5A0 (-GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C00105E0 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _pPopulateProgressiveTimingList @ 0x1C03C4344 (_pPopulateProgressiveTimingList.c)
 *     _pReadDetailTimingFromReg @ 0x1C03C4434 (_pReadDetailTimingFromReg.c)
 */

__int64 __fastcall pLoadAdditinalMode(int a1)
{
  __int64 v1; // rbx
  const WCHAR *v2; // rdx
  NTSTATUS appended; // eax
  __int64 v4; // rdi
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  HANDLE v8; // rcx
  NTSTATUS v9; // eax
  int v10; // r13d
  _QWORD *v11; // rsi
  void *v12; // rax
  ULONG v13; // r12d
  NTSTATUS v14; // eax
  NTSTATUS v15; // eax
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  _QWORD *v19; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-39h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-31h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+40h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-19h] BYREF
  void *v24; // [rsp+58h] [rbp-11h]
  __int128 KeyInformation; // [rsp+60h] [rbp-9h] BYREF
  __int128 v26; // [rsp+70h] [rbp+7h]
  __int128 v27; // [rsp+80h] [rbp+17h]

  v1 = a1;
  WdLogSingleEntry1(7LL, a1);
  if ( (_DWORD)v1 == -2 )
    WdLogSingleEntry0(1LL);
  *(_QWORD *)&Destination.Length = 15859712LL;
  Destination.Buffer = (wchar_t *)&unk_1C013C080;
  if ( RtlAppendUnicodeToString(
         &Destination,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\AdditionalModeLists\\") < 0 )
    WdLogSingleEntry0(1LL);
  if ( (unsigned int)v1 <= 9 )
  {
    if ( (_DWORD)v1 == 9 )
    {
      v2 = L"SDI";
    }
    else if ( (_DWORD)v1 )
    {
      switch ( (_DWORD)v1 )
      {
        case 1:
          v2 = L"SVIDEO";
          break;
        case 2:
          v2 = L"COMPOSITE";
          break;
        case 3:
          v2 = L"COMPONENT";
          break;
        case 4:
          v2 = L"DVI";
          break;
        case 5:
          v2 = L"HDTV";
          break;
        case 6:
          v2 = L"LVDS";
          break;
        case 8:
          v2 = L"D_JPN";
          break;
        default:
          goto LABEL_39;
      }
    }
    else
    {
      v2 = L"HD15";
    }
  }
  else
  {
    if ( (_DWORD)v1 != 10 && (_DWORD)v1 != 11 )
    {
      if ( (_DWORD)v1 == 12 || (_DWORD)v1 == 13 )
      {
        v2 = L"UDI";
        goto LABEL_8;
      }
      if ( (_DWORD)v1 == 14 )
      {
        v2 = L"SDTVDONGLE";
        goto LABEL_8;
      }
      if ( (_DWORD)v1 != 18 )
      {
        if ( (_DWORD)v1 == 0x80000000 )
        {
          v2 = L"INTERNAL";
          goto LABEL_8;
        }
        if ( (_DWORD)v1 == -1 )
        {
          v2 = L"OTHER";
          goto LABEL_8;
        }
LABEL_39:
        WdLogSingleEntry1(7LL, v1);
        return 3221226021LL;
      }
    }
    v2 = L"DISPLAYPORT";
  }
LABEL_8:
  appended = RtlAppendUnicodeToString(&Destination, v2);
  v4 = appended;
  if ( appended < 0 )
  {
    if ( appended != -1073741789 )
      WdLogSingleEntry0(1LL);
    v6 = 2LL;
    goto LABEL_11;
  }
  KeyHandle = 0LL;
  v5 = DxgkOpenRegistrySubkey(&KeyHandle, 0x20019u, 0LL, &Destination);
  v4 = v5;
  if ( v5 < 0 )
  {
    v6 = 7LL;
LABEL_11:
    WdLogSingleEntry2(v6, v1, v4);
    return (unsigned int)v4;
  }
  v8 = KeyHandle;
  if ( !KeyHandle )
  {
    WdLogSingleEntry0(1LL);
    v8 = KeyHandle;
  }
  ResultLength = 0;
  KeyInformation = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v9 = ZwQueryKey(v8, KeyFullInformation, &KeyInformation, 0x30u, &ResultLength);
  LODWORD(v4) = v9;
  if ( v9 < 0 )
  {
    WdLogSingleEntry2(3LL, v1, v9);
    goto LABEL_81;
  }
  if ( !DWORD1(v26) )
  {
    WdLogSingleEntry1(7LL, v1);
    LODWORD(v4) = -1073741275;
    goto LABEL_81;
  }
  v10 = 0;
  v11 = (_QWORD *)operator new[]((unsigned int)(28 * (DWORD1(v26) - 1) + 48), 0x4D677844u, 256LL);
  if ( !v11 )
  {
    WdLogSingleEntry0(6LL);
    ZwClose(KeyHandle);
    return 3221225495LL;
  }
  v12 = (void *)operator new[](0x96uLL, 0x4D677844u, 256LL);
  v24 = v12;
  if ( !v12 )
  {
    WdLogSingleEntry0(6LL);
    operator delete(v11);
    LODWORD(v4) = -1073741801;
    goto LABEL_81;
  }
  v13 = 0;
  if ( !DWORD1(v26) )
    goto LABEL_77;
  while ( 1 )
  {
    v14 = ZwEnumerateKey(KeyHandle, v13, KeyBasicInformation, v12, 0x96u, &ResultLength);
    v4 = v14;
    if ( v14 == -2147483643 || v14 == -1073741789 )
    {
      WdLogSingleEntry2(3LL, v1, v13);
      goto LABEL_65;
    }
    if ( v14 == -2147483622 )
      break;
    if ( v14 < 0
      || (Handle = 0LL,
          Destination.MaximumLength = *((_WORD *)v24 + 6),
          Destination.Length = Destination.MaximumLength,
          Destination.Buffer = (wchar_t *)((char *)v24 + 16),
          v15 = DxgkOpenRegistrySubkey(&Handle, 0x20019u, KeyHandle, &Destination),
          v4 = v15,
          v15 < 0) )
    {
      WdLogSingleEntry3(3LL, v1, v13, v4);
    }
    else
    {
      LODWORD(v4) = pReadDetailTimingFromReg(Handle);
      if ( (int)v4 >= 0 )
        ++v10;
      ZwClose(Handle);
    }
LABEL_65:
    if ( ++v13 >= DWORD1(v26) )
      goto LABEL_68;
    v12 = v24;
  }
  WdLogSingleEntry1(3LL, v1);
LABEL_68:
  if ( !v10 )
  {
LABEL_77:
    operator delete(v11);
    goto LABEL_78;
  }
  *v11 = qword_1C013D108;
  *((_DWORD *)v11 + 2) = v1;
  *((_DWORD *)v11 + 4) = v10;
  *((_BYTE *)v11 + 12) = 0;
  qword_1C013D108 = v11;
  if ( (_DWORD)v1 )
  {
    v16 = v1 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          if ( v18 != 11 )
          {
            v19 = (_QWORD *)pPopulateProgressiveTimingList(v11);
            if ( v19 )
            {
              *v19 = qword_1C013D108;
              qword_1C013D108 = v19;
            }
          }
        }
      }
    }
  }
  LODWORD(v4) = 0;
LABEL_78:
  operator delete(v24);
LABEL_81:
  ZwClose(KeyHandle);
  return (unsigned int)v4;
}
