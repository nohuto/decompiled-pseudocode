/*
 * XREFs of RtlpGetRegistryHandle @ 0x14069BBB0
 * Callers:
 *     RtlpQueryRegistryValues @ 0x14069B3C0 (RtlpQueryRegistryValues.c)
 *     RtlWriteRegistryValue @ 0x14069EDB0 (RtlWriteRegistryValue.c)
 *     RtlpGetTimeZoneInfoHandle @ 0x1407736C4 (RtlpGetTimeZoneInfoHandle.c)
 *     RtlCheckRegistryKey @ 0x1407964F0 (RtlCheckRegistryKey.c)
 *     ExpRefreshTimeZoneInformation @ 0x140811500 (ExpRefreshTimeZoneInformation.c)
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x140811DC4 (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1408122E8 (RtlpUpdateDynamicTimeZones.c)
 *     RtlCreateRegistryKey @ 0x140860170 (RtlCreateRegistryKey.c)
 *     RtlDeleteRegistryValue @ 0x140871310 (RtlDeleteRegistryValue.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140208B50 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1402447D0 (RtlAppendUnicodeStringToString.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1404126B0 (ZwCreateKey.c)
 *     RtlpInterlockedPopEntrySList @ 0x140420460 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     RtlFormatCurrentUserKeyPath @ 0x140747770 (RtlFormatCurrentUserKeyPath.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 */

__int64 __fastcall RtlpGetRegistryHandle(int a1, const WCHAR *a2, char a3, HANDLE *a4)
{
  __int64 result; // rax
  __int64 v8; // rbx
  struct _KPRCB *CurrentPrcb; // rsi
  _GENERAL_LOOKASIDE *P; // rdi
  wchar_t *v11; // rcx
  NTSTATUS appended; // ebx
  NTSTATUS v13; // eax
  struct _KPRCB *v14; // r8
  wchar_t *Buffer; // rdx
  _GENERAL_LOOKASIDE *v16; // rcx
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  UNICODE_STRING Destination; // [rsp+48h] [rbp-19h] BYREF
  UNICODE_STRING Source; // [rsp+58h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+7h] BYREF

  result = 0LL;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  memset(&ObjectAttributes, 0, 44);
  Source = 0LL;
  if ( (a1 & 0x40000000) != 0 )
  {
    *a4 = (HANDLE)a2;
  }
  else
  {
    v8 = (unsigned int)a1;
    LODWORD(v8) = a1 & 0x7FFFFFFF;
    if ( a1 >= 0 )
      v8 = (unsigned int)a1;
    if ( (unsigned int)v8 >= 6 )
    {
      return 3221225485LL;
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      P = CurrentPrcb->PPLookasideList[8].P;
      ++P->TotalAllocates;
      v11 = (wchar_t *)RtlpInterlockedPopEntrySList(&P->ListHead);
      if ( v11 )
        goto LABEL_6;
      ++P->AllocateMisses;
      L = CurrentPrcb->PPLookasideList[8].L;
      ++L->TotalAllocates;
      v11 = (wchar_t *)RtlpInterlockedPopEntrySList(&L->ListHead);
      if ( v11
        || (Size = L->Size,
            AllocateEx = L->AllocateEx,
            Tag = L->Tag,
            Type = (unsigned int)L->Type,
            ++L->AllocateMisses,
            (v11 = (wchar_t *)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag)) != 0LL) )
      {
LABEL_6:
        *(_DWORD *)v11 = CurrentPrcb->Number;
      }
      Destination.Buffer = v11;
      if ( v11 )
      {
        *(_DWORD *)&Destination.Length = 34340864;
        if ( !(_DWORD)v8 )
          goto LABEL_13;
        if ( (_DWORD)v8 == 5 && (int)RtlFormatCurrentUserKeyPath(&Source) >= 0 )
        {
          appended = RtlAppendUnicodeStringToString(&Destination, &Source);
          RtlFreeUnicodeString(&Source);
        }
        else
        {
          appended = RtlAppendUnicodeToString(&Destination, (PCWSTR)RtlpRegistryPaths[v8]);
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
                v13 = ZwCreateKey(a4, 0x40000000u, &ObjectAttributes, 0, 0LL, 0, 0LL);
              else
                v13 = ZwOpenKey(a4, 0x82000000, &ObjectAttributes);
              appended = v13;
            }
          }
        }
        v14 = KeGetCurrentPrcb();
        Buffer = Destination.Buffer;
        v16 = v14->PPLookasideList[8].P;
        ++v16->TotalFrees;
        if ( LOWORD(v16->ListHead.Alignment) < v16->Depth
          || (++v16->FreeMisses,
              v16 = v14->PPLookasideList[8].L,
              ++v16->TotalFrees,
              LOWORD(v16->ListHead.Alignment) < v16->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v16->ListHead, (PSLIST_ENTRY)Buffer);
        }
        else
        {
          ++v16->FreeMisses;
          ((void (__fastcall *)(wchar_t *))v16->FreeEx)(Buffer);
        }
        return (unsigned int)appended;
      }
      else
      {
        return 3221225495LL;
      }
    }
  }
  return result;
}
