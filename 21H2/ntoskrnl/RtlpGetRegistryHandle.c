/*
 * XREFs of RtlpGetRegistryHandle @ 0x140637270
 * Callers:
 *     RtlWriteRegistryValue @ 0x140613DB0 (RtlWriteRegistryValue.c)
 *     RtlCheckRegistryKey @ 0x14061AFF0 (RtlCheckRegistryKey.c)
 *     RtlpQueryRegistryValues @ 0x140635878 (RtlpQueryRegistryValues.c)
 *     RtlpGetTimeZoneInfoHandle @ 0x1406B7EB4 (RtlpGetTimeZoneInfoHandle.c)
 *     RtlDeleteRegistryValue @ 0x1407819E0 (RtlDeleteRegistryValue.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407A9754 (ExpRefreshTimeZoneInformation.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1407AA35C (RtlpUpdateDynamicTimeZones.c)
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x1407AA7E0 (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     RtlCreateRegistryKey @ 0x1407D0E70 (RtlCreateRegistryKey.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1402539E0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14026D4E0 (RtlAppendUnicodeStringToString.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1403FA920 (ZwCreateKey.c)
 *     RtlpInterlockedPopEntrySList @ 0x140407B10 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407B50 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x14066A3A0 (RtlFormatCurrentUserKeyPath.c)
 */

__int64 __fastcall RtlpGetRegistryHandle(int a1, const WCHAR *a2, char a3, HANDLE *a4)
{
  __int64 v7; // rbx
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rdi
  wchar_t *v10; // rcx
  NTSTATUS appended; // ebx
  NTSTATUS v12; // eax
  struct _KPRCB *v13; // r8
  wchar_t *Buffer; // rdx
  _GENERAL_LOOKASIDE *v15; // rcx
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  UNICODE_STRING Destination; // [rsp+48h] [rbp-19h] BYREF
  UNICODE_STRING CurrentUserKeyPath; // [rsp+58h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+7h] BYREF

  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  CurrentUserKeyPath = 0LL;
  if ( (a1 & 0x40000000) != 0 )
  {
    *a4 = (HANDLE)a2;
    return 0LL;
  }
  else
  {
    v7 = (unsigned int)a1;
    LODWORD(v7) = a1 & 0x7FFFFFFF;
    if ( a1 >= 0 )
      v7 = (unsigned int)a1;
    if ( (unsigned int)v7 >= 6 )
    {
      return 3221225485LL;
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      P = CurrentPrcb->PPLookasideList[8].P;
      ++P->TotalAllocates;
      v10 = (wchar_t *)RtlpInterlockedPopEntrySList(&P->ListHead);
      if ( v10 )
        goto LABEL_6;
      ++P->AllocateMisses;
      L = CurrentPrcb->PPLookasideList[8].L;
      ++L->TotalAllocates;
      v10 = (wchar_t *)RtlpInterlockedPopEntrySList(&L->ListHead);
      if ( v10
        || (Size = L->Size,
            AllocateEx = L->AllocateEx,
            Tag = L->Tag,
            Type = (unsigned int)L->Type,
            ++L->AllocateMisses,
            (v10 = (wchar_t *)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag)) != 0LL) )
      {
LABEL_6:
        *(_DWORD *)v10 = CurrentPrcb->Number;
      }
      Destination.Buffer = v10;
      if ( v10 )
      {
        *(_DWORD *)&Destination.Length = 34340864;
        if ( !(_DWORD)v7 )
          goto LABEL_13;
        if ( (_DWORD)v7 == 5 && RtlFormatCurrentUserKeyPath(&CurrentUserKeyPath) >= 0 )
        {
          appended = RtlAppendUnicodeStringToString(&Destination, &CurrentUserKeyPath);
          RtlFreeAnsiString(&CurrentUserKeyPath);
        }
        else
        {
          appended = RtlAppendUnicodeToString(&Destination, (PCWSTR)RtlpRegistryPaths[v7]);
        }
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeToString(&Destination, L"\\");
          if ( appended >= 0 )
          {
LABEL_13:
            appended = RtlAppendUnicodeToString(&Destination, a2);
            if ( appended >= 0 )
            {
              ObjectAttributes.Length = 48;
              ObjectAttributes.ObjectName = &Destination;
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.Attributes = 576;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              if ( a3 )
                v12 = ZwCreateKey(a4, 0x40000000u, &ObjectAttributes, 0, 0LL, 0, 0LL);
              else
                v12 = ZwOpenKey(a4, 0x82000000, &ObjectAttributes);
              appended = v12;
            }
          }
        }
        v13 = KeGetCurrentPrcb();
        Buffer = Destination.Buffer;
        v15 = v13->PPLookasideList[8].P;
        ++v15->TotalFrees;
        if ( LOWORD(v15->ListHead.Alignment) < v15->Depth
          || (++v15->FreeMisses,
              v15 = v13->PPLookasideList[8].L,
              ++v15->TotalFrees,
              LOWORD(v15->ListHead.Alignment) < v15->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v15->ListHead, (PSLIST_ENTRY)Buffer);
        }
        else
        {
          ++v15->FreeMisses;
          ((void (__fastcall *)(wchar_t *))v15->FreeEx)(Buffer);
        }
        return (unsigned int)appended;
      }
      else
      {
        return 3221225495LL;
      }
    }
  }
}
