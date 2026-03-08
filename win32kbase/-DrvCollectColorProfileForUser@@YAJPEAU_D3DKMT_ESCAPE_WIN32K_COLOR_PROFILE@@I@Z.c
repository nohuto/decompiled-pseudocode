/*
 * XREFs of ?DrvCollectColorProfileForUser@@YAJPEAU_D3DKMT_ESCAPE_WIN32K_COLOR_PROFILE@@I@Z @ 0x1C00BCC68
 * Callers:
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00BCAC8 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 */

NTSTATUS __fastcall DrvCollectColorProfileForUser(char *Sid, int a2)
{
  __int16 v4; // ax
  _WORD *v5; // rcx
  NTSTATUS result; // eax
  NTSTATUS v7; // edi
  int v8; // eax
  NTSTATUS v9; // esi
  int v10; // ecx
  char *v11; // rdi
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-D0h] BYREF
  void *Src[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING v17; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING Source; // [rsp+80h] [rbp-80h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+90h] [rbp-70h] BYREF
  __int64 v22; // [rsp+C8h] [rbp-38h]
  int v23; // [rsp+D0h] [rbp-30h]
  __int128 v24; // [rsp+D8h] [rbp-28h]
  __int128 v25; // [rsp+E8h] [rbp-18h]
  __int64 v26; // [rsp+F8h] [rbp-8h]
  struct _RTL_QUERY_REGISTRY_TABLE v27; // [rsp+100h] [rbp+0h] BYREF
  __int64 v28; // [rsp+138h] [rbp+38h]
  int v29; // [rsp+140h] [rbp+40h]
  __int128 v30; // [rsp+148h] [rbp+48h]
  __int128 v31; // [rsp+158h] [rbp+58h]
  __int64 v32; // [rsp+168h] [rbp+68h]
  struct _RTL_QUERY_REGISTRY_TABLE v33; // [rsp+170h] [rbp+70h] BYREF
  __int64 v34; // [rsp+1A8h] [rbp+A8h]
  int v35; // [rsp+1B0h] [rbp+B0h]
  __int128 v36; // [rsp+1B8h] [rbp+B8h]
  __int128 v37; // [rsp+1C8h] [rbp+C8h]
  __int64 v38; // [rsp+1D8h] [rbp+D8h]
  int v39; // [rsp+210h] [rbp+110h] BYREF
  int v40; // [rsp+218h] [rbp+118h] BYREF

  if ( (!qword_1C02D5738 || !(unsigned int)qword_1C02D5738(Sid)) && !gbOSTestSigningEnabled )
    return -1073741790;
  if ( *((_DWORD *)Sid + 23) + *((_DWORD *)Sid + 22) > (unsigned int)(a2 - 96) || *((_WORD *)Sid + 41) )
    return -1073741811;
  v4 = *((_WORD *)Sid + 34);
  v5 = Sid + 68;
  while ( v4 )
  {
    if ( (unsigned __int16)(v4 - 48) > 9u )
      return -1073741811;
    v4 = *++v5;
  }
  UnicodeString = 0LL;
  result = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 1u);
  if ( result >= 0 )
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\USER\\");
    Source = 0LL;
    RtlInitUnicodeString(
      &Source,
      L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\ICM\\ProfileAssociations\\Display\\{4d36e96e-e325-11ce-bfc1-08002be10318}\\");
    *(_QWORD *)&Destination.Length = 0LL;
    *(_DWORD *)&Destination.MaximumLength = (unsigned __int16)(DestinationString.Length
                                                             + Source.Length
                                                             + UnicodeString.Length
                                                             + 16);
    Destination.Buffer = (PWSTR)ExAllocatePool2(
                                  258LL,
                                  (unsigned __int16)(DestinationString.Length + Source.Length
                                                                              + UnicodeString.Length
                                                                              + 16),
                                  1936876615LL);
    if ( !Destination.Buffer )
    {
      RtlFreeUnicodeString(&UnicodeString);
      return -1073741801;
    }
    RtlAppendUnicodeStringToString(&Destination, &DestinationString);
    RtlAppendUnicodeStringToString(&Destination, &UnicodeString);
    RtlAppendUnicodeStringToString(&Destination, &Source);
    RtlAppendUnicodeToString(&Destination, (PCWSTR)Sid + 34);
    RtlFreeUnicodeString(&UnicodeString);
    QueryTable.Name = L"UsePerUserProfiles";
    v39 = 0;
    v40 = 0;
    QueryTable.EntryContext = &v39;
    QueryTable.QueryRoutine = 0LL;
    QueryTable.DefaultData = &v40;
    QueryTable.Flags = 288;
    v26 = 0LL;
    *(_OWORD *)Src = 0LL;
    QueryTable.DefaultType = 67108868;
    v17 = 0LL;
    QueryTable.DefaultLength = 4;
    v22 = 0LL;
    v23 = 0;
    v24 = 0LL;
    v25 = 0LL;
    v7 = RtlQueryRegistryValues(0, Destination.Buffer, &QueryTable, 0LL, 0LL);
    if ( v7 < 0 )
    {
      ExFreePoolWithTag(Destination.Buffer, 0);
      return v7;
    }
    v8 = v39;
    *((_DWORD *)Sid + 21) = v39;
    if ( !v8 )
    {
      ExFreePoolWithTag(Destination.Buffer, 0);
      if ( !*((_DWORD *)Sid + 22) )
        return *((_DWORD *)Sid + 23) != 0 ? 0xC000000D : 0;
      return -1073741811;
    }
    v27.Name = L"ICMProfile";
    v27.QueryRoutine = 0LL;
    v27.Flags = 304;
    v27.EntryContext = Src;
    v27.DefaultType = 117440519;
    v32 = 0LL;
    v27.DefaultData = 0LL;
    v27.DefaultLength = 0;
    v28 = 0LL;
    v29 = 0;
    v30 = 0LL;
    v31 = 0LL;
    v7 = RtlQueryRegistryValues(0, Destination.Buffer, &v27, 0LL, 0LL);
    v33.QueryRoutine = 0LL;
    v33.Flags = 304;
    v33.DefaultType = 117440519;
    v33.Name = L"ICMProfileAC";
    v33.DefaultData = 0LL;
    v33.EntryContext = &v17;
    v33.DefaultLength = 0;
    v38 = 0LL;
    v34 = 0LL;
    v35 = 0;
    v36 = 0LL;
    v37 = 0LL;
    v9 = RtlQueryRegistryValues(0, Destination.Buffer, &v33, 0LL, 0LL);
    ExFreePoolWithTag(Destination.Buffer, 0);
    if ( v7 < 0 && v9 < 0 )
    {
      *((_DWORD *)Sid + 21) = 0;
      return v7;
    }
    v10 = *((_DWORD *)Sid + 22);
    v11 = Sid + 96;
    if ( v10 )
    {
      if ( v10 != (LOWORD(Src[0]) >> 1) + 1 )
      {
LABEL_32:
        if ( Src[1] )
          RtlFreeUnicodeString((PUNICODE_STRING)Src);
        if ( v17.Buffer )
          RtlFreeUnicodeString(&v17);
        return -1073741811;
      }
      memmove(Sid + 96, Src[1], LOWORD(Src[0]));
      v11 += 2 * *((unsigned int *)Sid + 22);
      *((_WORD *)v11 - 1) = 0;
    }
    else
    {
      if ( LOWORD(Src[0]) )
        v12 = (LOWORD(Src[0]) >> 1) + 1;
      else
        v12 = 0;
      *((_DWORD *)Sid + 22) = v12;
    }
    v13 = *((_DWORD *)Sid + 23);
    if ( !v13 )
    {
      if ( v17.Length )
        v14 = (v17.Length >> 1) + 1;
      else
        v14 = 0;
      *((_DWORD *)Sid + 23) = v14;
      goto LABEL_41;
    }
    if ( v13 == (v17.Length >> 1) + 1 )
    {
      memmove(v11, v17.Buffer, v17.Length);
      *(_WORD *)&v11[2 * *((unsigned int *)Sid + 23) - 2] = 0;
LABEL_41:
      if ( Src[1] )
        RtlFreeUnicodeString((PUNICODE_STRING)Src);
      if ( v17.Buffer )
        RtlFreeUnicodeString(&v17);
      return 0;
    }
    goto LABEL_32;
  }
  return result;
}
