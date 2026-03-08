/*
 * XREFs of McGenControlCallbackV2 @ 0x1C0020E20
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C0020F18 (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 *     memset @ 0x1C0027640 (memset.c)
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
  unsigned int v7; // esi
  unsigned int v10; // r8d
  unsigned __int8 v11; // cl
  __int64 v12; // rdx
  bool v13; // r9
  int v14; // edx
  int *v15; // rcx
  int v16; // edx
  int v17; // eax

  v7 = Level;
  if ( CallbackContext )
  {
    if ( ControlCode )
    {
      if ( ControlCode == 1 )
      {
        v10 = 0;
        *((_QWORD *)CallbackContext + 3) = MatchAllKeyword;
        *((_BYTE *)CallbackContext + 40) = v7;
        *((_QWORD *)CallbackContext + 2) = MatchAnyKeyword;
        for ( *((_DWORD *)CallbackContext + 9) = 1; v10 < *((unsigned __int16 *)CallbackContext + 21); ++v10 )
        {
          v11 = *((_BYTE *)CallbackContext + 40);
          v12 = *(_QWORD *)(*((_QWORD *)CallbackContext + 7) + 8LL * v10);
          v13 = (*(_BYTE *)(v10 + *((_QWORD *)CallbackContext + 8)) <= v11 || !v11)
             && (!v12
              || (v12 & *((_QWORD *)CallbackContext + 2)) != 0
              && (v12 & *((_QWORD *)CallbackContext + 3)) == *((_QWORD *)CallbackContext + 3));
          v14 = 1 << (v10 & 0x1F);
          v15 = (int *)(*((_QWORD *)CallbackContext + 6) + 4 * ((unsigned __int64)v10 >> 5));
          if ( v13 )
            v16 = *v15 | v14;
          else
            v16 = *v15 & ~v14;
          *v15 = v16;
        }
      }
    }
    else
    {
      v17 = *((unsigned __int16 *)CallbackContext + 21);
      *((_DWORD *)CallbackContext + 9) = 0;
      *((_BYTE *)CallbackContext + 40) = 0;
      *((_QWORD *)CallbackContext + 2) = 0LL;
      *((_QWORD *)CallbackContext + 3) = 0LL;
      if ( (_WORD)v17 )
        memset(*((void **)CallbackContext + 6), 0, 4LL * ((v17 - 1) / 32 + 1));
    }
    DxgkEtwEnableCallback(ControlCode, v7, MatchAnyKeyword);
  }
}
