/*
 * XREFs of RtlGetPersistedStateLocation @ 0x18004A370
 * Callers:
 *     GetOverlayRootFolder @ 0x180038344 (GetOverlayRootFolder.c)
 *     RtlpGetTimeZoneInfoHandle @ 0x180047DE4 (RtlpGetTimeZoneInfoHandle.c)
 *     LdrpAppxGetRemediationRegistryKey @ 0x1800CBA04 (LdrpAppxGetRemediationRegistryKey.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180119A78 (OpenGlobalizationUserSettingsKey_ForMua.c)
 * Callees:
 *     RtlExpandEnvironmentStrings @ 0x180015630 (RtlExpandEnvironmentStrings.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 *     NtOpenKey @ 0x18009D720 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18009D7C0 (NtQueryValueKey.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 */

__int64 __fastcall RtlGetPersistedStateLocation(
        PCWSTR SourceString,
        const WCHAR *a2,
        _WORD *a3,
        unsigned int a4,
        _WORD *a5,
        unsigned int a6,
        unsigned int *a7)
{
  __int64 Heap; // rdi
  signed int v11; // ebx
  __int64 v12; // r8
  unsigned int v13; // r8d
  unsigned int v14; // eax
  size_t v15; // r8
  _WORD *v16; // rdx
  int v18; // eax
  int v19; // eax
  unsigned __int64 v20; // r14
  unsigned int v21; // ebx
  unsigned int v22; // ecx
  unsigned __int64 v23; // rax
  __int64 v24; // r8
  HANDLE Handle; // [rsp+30h] [rbp-41h] BYREF
  HANDLE v26; // [rsp+38h] [rbp-39h] BYREF
  __int64 v27; // [rsp+40h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-29h] BYREF
  int v29; // [rsp+58h] [rbp-19h] BYREF
  HANDLE v30; // [rsp+60h] [rbp-11h]
  UNICODE_STRING *p_DestinationString; // [rsp+68h] [rbp-9h]
  int v32; // [rsp+70h] [rbp-1h]
  __int128 v33; // [rsp+78h] [rbp+7h]
  int v34; // [rsp+D8h] [rbp+67h] BYREF

  Handle = 0LL;
  v26 = 0LL;
  Heap = 0LL;
  if ( a4 > 1 )
    return 3221225713LL;
  if ( byte_18016D1E0 )
  {
    v11 = -1073741772;
  }
  else
  {
    v29 = 48;
    p_DestinationString = (UNICODE_STRING *)((char *)&unk_18011D3E0 + 16 * (int)a4);
    v30 = 0LL;
    v32 = 64;
    v33 = 0LL;
    v18 = NtOpenKey(&Handle, 131097LL, &v29);
    v11 = v18;
    if ( v18 == -1073741772 )
    {
      byte_18016D1E0 = 1;
    }
    else
    {
      if ( v18 < 0 )
        goto LABEL_13;
      RtlInitUnicodeString(&DestinationString, SourceString);
      v30 = Handle;
      v29 = 48;
      p_DestinationString = &DestinationString;
      v32 = 64;
      v33 = 0LL;
      v19 = NtOpenKey(&v26, 131097LL, &v29);
      v11 = v19;
      if ( v19 != -1073741772 )
      {
        if ( v19 < 0 )
          goto LABEL_13;
        if ( !a2 )
          a2 = L"TargetPath";
        RtlInitUnicodeString(&DestinationString, a2);
        v20 = a6;
        v21 = a6 + 16;
        if ( a6 + 16 >= a6 )
        {
          Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v21);
          if ( !Heap )
          {
            v11 = -1073741801;
            goto LABEL_13;
          }
          v11 = NtQueryValueKey(v26, &DestinationString, 2LL, Heap, v21, &v34);
          if ( v11 < 0 )
          {
            if ( v11 != -2147483643 )
              goto LABEL_13;
          }
          else if ( (unsigned int)(*(_DWORD *)(Heap + 4) - 1) > 1 )
          {
            v11 = -1073741788;
            goto LABEL_13;
          }
          v22 = *(_DWORD *)(Heap + 8);
          v16 = (_WORD *)(Heap + 12);
          v34 = v22;
          if ( v11 >= 0 )
          {
            if ( v16[((unsigned __int64)v22 >> 1) - 1] )
            {
              v23 = v22 + 2;
              v34 = v23;
              v22 += 2;
              if ( (unsigned int)v20 < (unsigned int)v23 )
              {
                v11 = -2147483643;
              }
              else
              {
                v16[(v23 >> 1) - 1] = 0;
                v22 = v34;
              }
            }
            if ( v11 >= 0 && *(_DWORD *)(Heap + 4) == 2 )
            {
              v24 = -1LL;
              do
                ++v24;
              while ( v16[v24] );
              v11 = RtlExpandEnvironmentStrings(0LL, v16, v24, a5, v20 >> 1, &v27);
              if ( (int)(v11 + 0x80000000) < 0 || v11 == -1073741789 )
              {
                if ( a7 )
                  *a7 = 2 * v27;
                if ( v11 == -1073741789 )
                  v11 = -2147483643;
              }
              goto LABEL_13;
            }
          }
          if ( a7 )
            *a7 = v22;
          if ( v11 < 0 )
            goto LABEL_13;
          v15 = v22;
          goto LABEL_12;
        }
LABEL_31:
        v11 = -1073741675;
        goto LABEL_13;
      }
    }
  }
  if ( a3 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a3[v12] );
    v13 = v12 + 1;
    v14 = 2 * v13;
    v34 = 2 * v13;
    if ( 2 * v13 >= v13 )
    {
      v11 = a6 < v14 ? 0x80000005 : 0;
      if ( a7 )
        *a7 = v14;
      if ( v14 > a6 )
        goto LABEL_13;
      v15 = v14;
      v16 = a3;
LABEL_12:
      memmove(a5, v16, v15);
      goto LABEL_13;
    }
    goto LABEL_31;
  }
LABEL_13:
  if ( Handle )
    NtClose(Handle);
  if ( v26 )
    NtClose(v26);
  if ( Heap )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  return (unsigned int)v11;
}
