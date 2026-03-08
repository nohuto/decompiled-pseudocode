/*
 * XREFs of McGenControlCallbackV2 @ 0x1C00BE5A0
 * Callers:
 *     <none>
 * Callees:
 *     W32kEtwEnableCallback @ 0x1C00BE69C (W32kEtwEnableCallback.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

void __stdcall McGenControlCallbackV2(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        PVOID CallbackContext)
{
  unsigned int v8; // r8d
  unsigned __int8 v9; // cl
  __int64 v10; // rdx
  bool v11; // r9
  int v12; // edx
  int *v13; // rcx
  int v14; // edx
  int v15; // eax

  if ( CallbackContext )
  {
    if ( ControlCode )
    {
      if ( ControlCode == 1 )
      {
        *((_BYTE *)CallbackContext + 40) = Level;
        v8 = 0;
        *((_QWORD *)CallbackContext + 3) = MatchAllKeyword;
        *((_QWORD *)CallbackContext + 2) = MatchAnyKeyword;
        for ( *((_DWORD *)CallbackContext + 9) = 1; v8 < *((unsigned __int16 *)CallbackContext + 21); ++v8 )
        {
          v9 = *((_BYTE *)CallbackContext + 40);
          v10 = *(_QWORD *)(*((_QWORD *)CallbackContext + 7) + 8LL * v8);
          v11 = (*(_BYTE *)(v8 + *((_QWORD *)CallbackContext + 8)) <= v9 || !v9)
             && (!v10
              || (v10 & *((_QWORD *)CallbackContext + 2)) != 0
              && (v10 & *((_QWORD *)CallbackContext + 3)) == *((_QWORD *)CallbackContext + 3));
          v12 = 1 << (v8 & 0x1F);
          v13 = (int *)(*((_QWORD *)CallbackContext + 6) + 4 * ((unsigned __int64)v8 >> 5));
          if ( v11 )
            v14 = *v13 | v12;
          else
            v14 = *v13 & ~v12;
          *v13 = v14;
        }
      }
    }
    else
    {
      v15 = *((unsigned __int16 *)CallbackContext + 21);
      *((_DWORD *)CallbackContext + 9) = 0;
      *((_BYTE *)CallbackContext + 40) = 0;
      *((_QWORD *)CallbackContext + 2) = 0LL;
      *((_QWORD *)CallbackContext + 3) = 0LL;
      if ( (_WORD)v15 )
        memset(*((void **)CallbackContext + 6), 0, 4LL * ((v15 - 1) / 32 + 1));
    }
    W32kEtwEnableCallback((struct _GUID *)SourceId);
  }
}
