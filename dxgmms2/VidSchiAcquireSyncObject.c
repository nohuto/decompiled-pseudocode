/*
 * XREFs of VidSchiAcquireSyncObject @ 0x1C00139E0
 * Callers:
 *     VidSchWaitForSingleSyncObject @ 0x1C0013810 (VidSchWaitForSingleSyncObject.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VidSchiAcquireSyncObject(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // r9
  char v5; // r11
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  unsigned __int64 v11; // rcx
  unsigned __int64 *v12; // rax
  __int64 v13; // rax
  __int64 *v14; // r8
  __int64 v15; // rcx
  __int64 **v16; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  __int64 **v21; // rcx
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // ecx
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rax

  v4 = 0;
  v5 = 0;
  if ( *(_DWORD *)(a2 + 36) == 0x7FFFFFFF )
  {
    WdLogSingleEntry0(1LL);
    ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Synchronization object already has MAX_LONG reference pending, can't reference more.\n",
      25104LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225473LL;
  }
  v6 = *(_DWORD *)(a2 + 48);
  if ( !v6 )
  {
    if ( *(_QWORD *)(a2 + 64) )
    {
      WdLogSingleEntry0(1LL);
      ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Trying to acquire mutex without corresponding signal having been submitted.\n",
        25122LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225473LL;
    }
    if ( !*(_QWORD *)(a2 + 56) )
    {
      v27 = *(_QWORD *)(a3 + 88);
      if ( !v27 )
        v27 = *(_QWORD *)(a3 + 96);
      *(_QWORD *)(a2 + 56) = v27;
      v4 = 1;
    }
    v28 = *(_QWORD *)(a3 + 88);
    if ( !v28 )
      v28 = *(_QWORD *)(a3 + 96);
    *(_QWORD *)(a2 + 64) = v28;
LABEL_65:
    if ( v4 )
      goto LABEL_18;
    goto LABEL_13;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v25 = *(_DWORD *)(a2 + 64);
    if ( !v25 )
    {
      WdLogSingleEntry0(1LL);
      ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Trying to acquire semaphore without corresponding signal having been submitted.\n",
        25154LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225473LL;
    }
    v26 = *(_DWORD *)(a2 + 56);
    if ( v26 )
    {
      v4 = 1;
      *(_DWORD *)(a2 + 56) = v26 - 1;
    }
    *(_DWORD *)(a2 + 64) = v25 - 1;
    goto LABEL_65;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( !v10 || v10 == 1 )
      {
        v11 = *(_QWORD *)(a3 + 304);
        if ( !*(_BYTE *)(a2 + 28) )
        {
          v12 = *(unsigned __int64 **)(a2 + 64);
          if ( *(_BYTE *)(a2 + 29) )
          {
            if ( *v12 < v11 )
              goto LABEL_10;
          }
          else if ( *(_DWORD *)v12 - (int)v11 < 0 )
          {
LABEL_10:
            if ( *(_QWORD *)(a2 + 80) )
            {
              v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 88) + 104LL) + 32LL);
              ++*(_DWORD *)(v13 + 820);
              *(_DWORD *)(a3 + 272) |= 8u;
            }
            else if ( !*(_BYTE *)(a2 + 30)
                   || (!*(_BYTE *)(a2 + 27)
                     ? (*(_DWORD *)(a2 + 48) != 2
                      ? (v22 = *(_QWORD *)(a2 + 88))
                      : (v22 = *(_QWORD *)(a2 + 64)))
                     : (v22 = *(_QWORD *)(*(_QWORD *)(a2 + 208) + 40LL)),
                       *(_QWORD *)(a3 + 304) > v22) )
            {
              ++*(_DWORD *)(a2 + 40);
              v5 = 1;
              ++*(_DWORD *)(*(_QWORD *)(a3 + 88) + 796LL);
              ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 88) + 104LL) + 1588LL);
              v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 88) + 104LL) + 32LL);
              ++*(_DWORD *)(v23 + 816);
              *(_DWORD *)(a3 + 272) |= 4u;
            }
            goto LABEL_12;
          }
        }
LABEL_18:
        *(_DWORD *)(a3 + 272) |= 1u;
        return 0LL;
      }
LABEL_13:
      v14 = (__int64 *)(a3 + 288);
      if ( (unsigned int)(*(_DWORD *)(a2 + 48) - 4) > 1 )
      {
        if ( v5 )
          v20 = a2 + 112;
        else
          v20 = a2 + 96;
        v21 = *(__int64 ***)(v20 + 8);
        if ( *v21 == (__int64 *)v20 )
        {
          *v14 = v20;
          v14[1] = (__int64)v21;
          *v21 = v14;
          *(_QWORD *)(v20 + 8) = v14;
          goto LABEL_16;
        }
      }
      else
      {
        v15 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL) + 824LL;
        v16 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL) + 832LL);
        if ( *v16 == (__int64 *)v15 )
        {
          *v14 = v15;
          v14[1] = (__int64)v16;
          *v16 = v14;
          *(_QWORD *)(v15 + 8) = v14;
LABEL_16:
          _InterlockedIncrement((volatile signed __int32 *)(a2 + 36));
          return 0LL;
        }
      }
      __fastfail(3u);
    }
    WdLogSingleEntry0(1LL);
    ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Trying to wait on CpuNotification.\n",
      25270LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    if ( *(_BYTE *)(a2 + 27) )
      v18 = *(_QWORD *)(*(_QWORD *)(a2 + 208) + 40LL);
    else
      v18 = *(_QWORD *)(a2 + 64);
    if ( v18 >= *(_QWORD *)(a3 + 304) )
    {
      if ( *(_BYTE *)(a2 + 27) )
        v19 = *(_QWORD *)(*(_QWORD *)(a2 + 208) + 32LL);
      else
        v19 = *(_QWORD *)(a2 + 72);
      if ( v19 < *(_QWORD *)(a3 + 304) )
      {
LABEL_12:
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 800));
        goto LABEL_13;
      }
      goto LABEL_18;
    }
    if ( *(_BYTE *)(a2 + 25) )
    {
      ++*(_DWORD *)(a2 + 40);
      ++*(_DWORD *)(*(_QWORD *)(a3 + 88) + 796LL);
      ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 88) + 104LL) + 1588LL);
      v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 88) + 104LL) + 32LL);
      ++*(_DWORD *)(v24 + 816);
      *(_DWORD *)(a3 + 272) |= 4u;
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 800));
      v5 = 1;
      goto LABEL_13;
    }
    WdLogSingleEntry0(1LL);
    ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Trying to wait the fence without signal having been submitted.\n",
      25190LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return 3221225473LL;
}
