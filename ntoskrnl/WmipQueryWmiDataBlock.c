/*
 * XREFs of WmipQueryWmiDataBlock @ 0x140725910
 * Callers:
 *     IoWMISystemControl @ 0x1407939D4 (IoWMISystemControl.c)
 * Callees:
 *     IoGetDeviceInstanceName @ 0x1402020C0 (IoGetDeviceInstanceName.c)
 *     WmipUnreferenceRegEntry @ 0x140208DE4 (WmipUnreferenceRegEntry.c)
 *     WmipFindRegEntryByDevice @ 0x1403BC634 (WmipFindRegEntryByDevice.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlpQueryRegistryValues @ 0x14069B3C0 (RtlpQueryRegistryValues.c)
 *     IoWMICompleteRequest @ 0x140725A08 (IoWMICompleteRequest.c)
 *     WmipGetSMBiosTableData @ 0x140725AEC (WmipGetSMBiosTableData.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     WmipGetSMBiosEventlog @ 0x1409DCB58 (WmipGetSMBiosEventlog.c)
 *     WmipGetSysIds @ 0x1409DCDD8 (WmipGetSysIds.c)
 */

__int64 __fastcall WmipQueryWmiDataBlock(
        __int64 a1,
        void *a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int a7,
        unsigned __int64 a8)
{
  unsigned __int64 v8; // rsi
  int DeviceInstanceName; // edi
  int *v11; // r15
  unsigned int v12; // r14d
  unsigned int *v13; // r12
  unsigned int v14; // ebx
  char *v15; // rcx
  int SMBiosEventlog; // eax
  int v18; // eax
  int v19; // r14d
  __int64 v20; // rax
  __int64 v21; // r13
  ULONG_PTR v22; // rcx
  unsigned int v23; // ecx
  wchar_t *v24; // rdx
  __int64 v25; // rbx
  _QWORD *RegEntryByDevice; // rax
  ULONG_PTR v27; // rcx
  int v28; // r12d
  size_t Length; // r13
  __int64 v30; // r14
  wchar_t *Buffer; // rdx
  _WORD *v32; // rsi
  unsigned int v33; // [rsp+30h] [rbp-D0h] BYREF
  int v34; // [rsp+34h] [rbp-CCh] BYREF
  void *v35; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-C0h] BYREF
  void *Src; // [rsp+50h] [rbp-B0h] BYREF
  void *v38; // [rsp+58h] [rbp-A8h]
  __int64 v39; // [rsp+60h] [rbp-A0h] BYREF
  int v40; // [rsp+68h] [rbp-98h]
  const wchar_t *v41; // [rsp+70h] [rbp-90h]
  unsigned int *v42; // [rsp+78h] [rbp-88h]
  int v43; // [rsp+80h] [rbp-80h]
  __int64 v44; // [rsp+98h] [rbp-68h]
  int v45; // [rsp+A0h] [rbp-60h]
  const wchar_t *v46; // [rsp+A8h] [rbp-58h]
  int *v47; // [rsp+B0h] [rbp-50h]
  int v48; // [rsp+B8h] [rbp-48h]
  __int64 v49; // [rsp+D0h] [rbp-30h]
  int v50; // [rsp+D8h] [rbp-28h]
  const wchar_t *v51; // [rsp+E0h] [rbp-20h]
  void **v52; // [rsp+E8h] [rbp-18h]
  int v53; // [rsp+F0h] [rbp-10h]
  __int64 v54; // [rsp+108h] [rbp+8h]
  int v55; // [rsp+110h] [rbp+10h]

  v8 = a8;
  DeviceInstanceName = 0;
  v11 = (int *)a6;
  v12 = 0;
  v38 = a2;
  v13 = 0LL;
  switch ( a3 )
  {
    case 0:
      UnicodeString = 0LL;
      RegEntryByDevice = (_QWORD *)WmipFindRegEntryByDevice(a1);
      Src = RegEntryByDevice;
      v21 = (__int64)RegEntryByDevice;
      if ( !RegEntryByDevice )
        goto LABEL_45;
      v27 = RegEntryByDevice[3];
      if ( v27 )
      {
        DeviceInstanceName = IoGetDeviceInstanceName(v27, &UnicodeString);
        if ( DeviceInstanceName >= 0 )
        {
          v28 = UnicodeString.Length + 2;
          v12 = v28 + (a5 - 1) * ((UnicodeString.Length + 9) & 0xFFFFFFF8);
          v33 = v12;
          if ( v12 <= a7 )
          {
            memset((void *)a8, 0, v12);
            if ( a5 )
            {
              Length = UnicodeString.Length;
              v30 = a5;
              do
              {
                Buffer = UnicodeString.Buffer;
                *v11 = v28;
                v32 = (_WORD *)((v8 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
                ++v11;
                *v32++ = Length;
                memmove(v32, Buffer, Length);
                v8 = (unsigned __int64)v32 + Length;
                --v30;
              }
              while ( v30 );
              v12 = v33;
              v21 = (__int64)Src;
            }
            goto LABEL_41;
          }
          goto LABEL_40;
        }
LABEL_42:
        DeviceInstanceName = -1073741163;
        goto LABEL_44;
      }
LABEL_43:
      DeviceInstanceName = -1073741823;
      goto LABEL_44;
    case 1:
      UnicodeString = 0LL;
      v20 = WmipFindRegEntryByDevice(a1);
      v21 = v20;
      if ( !v20 )
        goto LABEL_45;
      v22 = *(_QWORD *)(v20 + 24);
      if ( v22 )
      {
        DeviceInstanceName = IoGetDeviceInstanceName(v22, &UnicodeString);
        if ( DeviceInstanceName >= 0 )
        {
          v23 = UnicodeString.Length;
          v12 = UnicodeString.Length + 10;
          if ( v12 <= a7 )
          {
            v24 = UnicodeString.Buffer;
            *(_DWORD *)a8 = 1;
            *a6 = v12;
            v25 = v23;
            *(_WORD *)(a8 + 4) = v23 + 4;
            memmove((void *)(a8 + 6), v24, v23);
            *(_DWORD *)(a8 + 4 + v25 + 2) = 3145823;
LABEL_41:
            RtlFreeUnicodeString(&UnicodeString);
LABEL_44:
            WmipUnreferenceRegEntry(v21);
            return IoWMICompleteRequest(a1, a2, v38, (unsigned int)DeviceInstanceName, v12);
          }
LABEL_40:
          DeviceInstanceName = -1073741789;
          goto LABEL_41;
        }
        goto LABEL_42;
      }
      goto LABEL_43;
    case 2:
      v33 = 0;
      v43 = 0x4000000;
      v40 = 292;
      v41 = L"BootArchitecture";
      v45 = 292;
      v42 = &v33;
      v48 = 0x4000000;
      v46 = L"PreferredProfile";
      v47 = &v34;
      v51 = L"Capabilities";
      v50 = 292;
      v53 = 0x4000000;
      v52 = &v35;
      v34 = 0;
      LODWORD(v35) = 0;
      v39 = 0LL;
      v44 = 0LL;
      v49 = 0LL;
      v54 = 0LL;
      v55 = 0;
      if ( (int)RtlpQueryRegistryValues(0LL, L"\\Registry\\Machine\\Hardware\\Description\\System", &v39, 0LL) < 0 )
        goto LABEL_45;
      v12 = 12;
      if ( a7 >= 0xC )
      {
        *(_DWORD *)a8 = v33;
        *(_DWORD *)(a8 + 4) = v34;
        *(_DWORD *)(a8 + 8) = (_DWORD)v35;
        goto LABEL_9;
      }
      goto LABEL_26;
  }
  if ( a3 != 3 )
  {
    if ( a3 != 4 && a3 != 5 )
    {
      if ( a3 == 6 )
      {
        v34 = a7 != 0 ? a7 : 0;
        SMBiosEventlog = WmipGetSMBiosEventlog(a8 & -(__int64)(a7 != 0), &v34);
        v12 = v34;
        DeviceInstanceName = SMBiosEventlog;
        if ( SMBiosEventlog < 0 )
          return IoWMICompleteRequest(a1, a2, v38, (unsigned int)DeviceInstanceName, v12);
        goto LABEL_9;
      }
LABEL_45:
      DeviceInstanceName = -1073741163;
      return IoWMICompleteRequest(a1, a2, v38, (unsigned int)DeviceInstanceName, v12);
    }
    Src = 0LL;
    v33 = 0;
    v35 = 0LL;
    v34 = 0;
    DeviceInstanceName = WmipGetSysIds(&Src, &v33, &v35, &v34);
    if ( DeviceInstanceName < 0 )
      return IoWMICompleteRequest(a1, a2, v38, (unsigned int)DeviceInstanceName, v12);
    if ( a3 == 5 )
    {
      v18 = v34;
      a2 = v35;
      v19 = 8 * v34;
    }
    else
    {
      v18 = v33;
      a2 = Src;
      v19 = 16 * v33;
    }
    v12 = v19 + 4;
    if ( a7 >= v12 )
    {
      *a6 = v12;
      *(_DWORD *)a8 = v18;
      memmove((void *)(a8 + 4), a2, v12 - 4LL);
      DeviceInstanceName = 0;
      return IoWMICompleteRequest(a1, a2, v38, (unsigned int)DeviceInstanceName, v12);
    }
LABEL_26:
    DeviceInstanceName = -1073741789;
    return IoWMICompleteRequest(a1, a2, v38, (unsigned int)DeviceInstanceName, v12);
  }
  if ( a7 < 8 )
  {
    v15 = 0LL;
    v14 = 0;
  }
  else
  {
    v13 = (unsigned int *)(a8 + 4);
    v14 = a7 - 8;
    v15 = (char *)(a8 + 8);
  }
  v33 = v14;
  DeviceInstanceName = WmipGetSMBiosTableData(v15);
  v12 = v14 + 8;
  if ( DeviceInstanceName >= 0 )
  {
    *v13 = v14;
LABEL_9:
    *a6 = v12;
  }
  return IoWMICompleteRequest(a1, a2, v38, (unsigned int)DeviceInstanceName, v12);
}
