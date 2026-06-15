/*
 * XREFs of sub_180044130 @ 0x180044130
 * Callers:
 *     <none>
 * Callees:
 *     sub_180044248 @ 0x180044248 (sub_180044248.c)
 *     sub_180044290 @ 0x180044290 (sub_180044290.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 */

__int64 __fastcall sub_180044130(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // edi
  _QWORD *v5; // rsi
  struct _RTL_CRITICAL_SECTION *v6; // rbp
  int v7; // r8d
  __int64 v8; // rbx

  v2 = 0;
  if ( *(_DWORD *)(a1 + 184) )
  {
    v5 = (_QWORD *)(a1 + 160);
    if ( !*(_QWORD *)(a1 + 160) )
    {
      v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 224);
      EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
      if ( !*v5 )
      {
        LOBYTE(v7) = 1;
        v2 = sub_180044290(*(_QWORD *)(a1 + 152), *(_DWORD *)(a1 + 64), v7, *(_QWORD *)(a1 + 168), (__int64)v5);
      }
      if ( v6 )
        LeaveCriticalSection(v6);
      if ( v2 )
      {
        if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
          && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
          && *((_BYTE *)off_18019C348 + 25) >= 4u )
        {
          sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 24LL, &unk_18015E3E8, v2);
        }
        goto LABEL_12;
      }
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 23LL, &unk_18015E3E8, *v5);
      }
    }
    if ( (unsigned __int8)sub_180044248((*v5 + 8LL) & -(__int64)(*v5 != 0LL)) )
    {
      v2 = -2147024882;
      goto LABEL_26;
    }
    *a2 = *v5;
    v8 = *v5;
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 8LL))(*v5);
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 24));
LABEL_12:
    if ( (v2 & 0x80000000) == 0 )
      return v2;
LABEL_26:
    sub_18005E8F8("CVADServer::get_AudioSession", 1367LL, v2);
    return v2;
  }
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 3u )
  {
    sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 22LL, &unk_18015E3E8);
  }
  return 2290679809LL;
}
