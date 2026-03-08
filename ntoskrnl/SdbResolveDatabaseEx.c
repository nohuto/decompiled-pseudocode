/*
 * XREFs of SdbResolveDatabaseEx @ 0x140A4FB10
 * Callers:
 *     SdbpOpenLocalDatabaseEx @ 0x140A4F86C (SdbpOpenLocalDatabaseEx.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140208B50 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1402447D0 (RtlAppendUnicodeStringToString.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     AslAlloc @ 0x1407A32E8 (AslAlloc.c)
 *     SdbGuestTargetPlatformFlagsToRuntimePlatformFlags @ 0x140A4F724 (SdbGuestTargetPlatformFlagsToRuntimePlatformFlags.c)
 *     SdbGetPathCustomSdb @ 0x140A4FA40 (SdbGetPathCustomSdb.c)
 *     SdbpGetSystemSdbFilePath @ 0x140A50484 (SdbpGetSystemSdbFilePath.c)
 *     AslGuidToString_UStr @ 0x140A50FF8 (AslGuidToString_UStr.c)
 *     AslUnicodeStringFree @ 0x140A513A0 (AslUnicodeStringFree.c)
 *     AslRegistryGetUInt32_UStr @ 0x140A518A0 (AslRegistryGetUInt32_UStr.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SdbResolveDatabaseEx(__int64 a1, _QWORD *a2, int *a3, int *a4, _WORD *a5, int a6)
{
  __int64 v11; // rbx
  wchar_t *v12; // r12
  GUID **v13; // r8
  unsigned int v14; // edx
  GUID *v15; // r9
  __int64 v16; // rcx
  int v17; // r15d
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  __int64 v22; // rcx
  unsigned __int16 v23; // r15
  wchar_t *v24; // rax
  __int64 v25; // rdx
  int v26; // [rsp+38h] [rbp-39h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-31h] BYREF
  UNICODE_STRING Destination; // [rsp+48h] [rbp-29h] BYREF
  UNICODE_STRING Source; // [rsp+58h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-9h] BYREF
  int v32; // [rsp+E8h] [rbp+77h]

  a6 = 0;
  v26 = 0;
  KeyHandle = 0LL;
  LODWORD(v11) = 0;
  v12 = 0LL;
  Destination = 0LL;
  Source = 0LL;
  if ( !a5 )
    return 0LL;
  *a5 = 0;
  v13 = &off_140C094D0;
  v14 = 0;
  while ( 1 )
  {
    v15 = *v13;
    v16 = *(_QWORD *)&(*v13)->Data1 - *a2;
    if ( !v16 )
      v16 = *(_QWORD *)v15->Data4 - a2[1];
    if ( !v16 )
      break;
    ++v14;
    v13 += 3;
    if ( v14 >= 3 )
      goto LABEL_20;
  }
  v13 = (GUID **)*((unsigned int *)&off_140C094D0 + 6 * (int)v14 + 4);
  v17 = *((_DWORD *)&off_140C094D0 + 6 * (int)v14 + 2);
  v18 = *((_DWORD *)&off_140C094D0 + 6 * (int)v14 + 3);
  a6 = v17;
  v32 = v18;
  if ( !(_DWORD)v13 )
  {
LABEL_20:
    if ( (int)AslGuidToString_UStr(&Source, a2, v13) >= 0
      && (v23 = Source.Length + 184,
          v24 = (wchar_t *)AslAlloc(v22, (unsigned int)Source.Length + 184),
          (v12 = v24) != 0LL) )
    {
      Destination.MaximumLength = v23;
      Destination.Buffer = v24;
      Destination.Length = 0;
      RtlAppendUnicodeToString(
        &Destination,
        L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\InstalledSDB");
      RtlAppendUnicodeToString(&Destination, L"\\");
      RtlAppendUnicodeStringToString(&Destination, &Source);
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      ObjectAttributes.ObjectName = &Destination;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      ObjectAttributes.RootDirectory = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 0x80000100, &ObjectAttributes) >= 0 )
      {
        if ( a3 )
        {
          if ( (int)AslRegistryGetUInt32_UStr(&a6, KeyHandle, &g_ustrDatabaseType) < 0 )
          {
            AslLogCallPrintf(1LL);
            *a3 = 0;
            goto LABEL_37;
          }
          *a3 = a6 & 0x7FFFFFFF;
        }
        if ( a4 )
        {
          if ( (int)AslRegistryGetUInt32_UStr(&v26, KeyHandle, L".0") < 0 )
          {
            AslLogCallPrintf(1LL);
            *a4 = 0;
            goto LABEL_37;
          }
          *a4 = v26;
        }
        if ( SdbGetPathCustomSdb((int)a5, v25, (__int64)a2, a1 + 584) )
        {
          v11 = -1LL;
          do
            ++v11;
          while ( a5[v11] );
        }
        else
        {
          AslLogCallPrintf(1LL);
        }
        goto LABEL_37;
      }
      AslLogCallPrintf(1LL);
    }
    else
    {
      AslLogCallPrintf(1LL);
    }
LABEL_37:
    if ( KeyHandle )
      ZwClose(KeyHandle);
    if ( v12 )
      ExFreePoolWithTag(v12, 0x74705041u);
    if ( Source.Buffer )
      AslUnicodeStringFree(&Source);
    return (unsigned int)v11;
  }
  if ( (int)SdbpGetSystemSdbFilePath((_DWORD)a5, v14, (_DWORD)v13, (_DWORD)v15, 0LL, a1 + 584) < 0 )
  {
    AslLogCallPrintf(1LL);
  }
  else
  {
    v11 = -1LL;
    do
      ++v11;
    while ( a5[v11] );
  }
  if ( a3 )
    *a3 = v17;
  if ( a4 )
  {
    v20 = SdbGuestTargetPlatformFlagsToRuntimePlatformFlags(v19);
    *a4 = v20;
    if ( v32 )
      *a4 = v20 & 0x1B;
  }
  return (unsigned int)v11;
}
