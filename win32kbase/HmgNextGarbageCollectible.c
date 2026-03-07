__int64 __fastcall HmgNextGarbageCollectible(__int64 a1, struct HOBJ__ **a2, _BYTE *a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rbp
  GdiHandleManager *v8; // rsi
  unsigned int NextEntryIndex; // eax
  __int64 v10; // rcx
  struct _ENTRY *v11; // rdi
  unsigned int v12; // eax
  __int64 v13; // r9
  unsigned __int64 v14; // rdx
  unsigned int v15; // r8d
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rcx
  struct HOBJ__ *v19; // rax
  struct _ENTRY *v21; // [rsp+58h] [rbp+20h] BYREF

  v5 = a1;
  GreAcquireHmgrSemaphore(a1);
  v21 = 0LL;
  v7 = *(_QWORD *)(SGDGetSessionState(v6) + 24);
  while ( 1 )
  {
    v8 = *(GdiHandleManager **)(v7 + 8008);
    NextEntryIndex = GdiHandleManager::GetNextEntryIndex(v8, v5, &v21);
    v5 = NextEntryIndex;
    if ( !NextEntryIndex )
      break;
    v11 = v21;
    if ( *((_DWORD *)v21 + 2) == -2147483630 )
    {
      v12 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v8, NextEntryIndex);
      v13 = *((_QWORD *)v8 + 2);
      v14 = v12;
      v15 = *(_DWORD *)(v13 + 2056);
      if ( v12 >= v15 + ((*(unsigned __int16 *)(v13 + 2) + 0xFFFF) << 16) )
        goto LABEL_12;
      v16 = v12 >= v15 ? ((v12 - v15) >> 16) + 1 : 0LL;
      v17 = *(_QWORD *)(v13 + 8 * v16 + 8);
      if ( (_DWORD)v16 )
        v14 = ((1 - (_DWORD)v16) << 16) - v15 + v12;
      if ( (unsigned int)v14 >= *(_DWORD *)(v17 + 20) )
LABEL_12:
        v18 = 0LL;
      else
        v18 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v17 + 24) + 8 * (v14 >> 8)) + 16LL * (unsigned __int8)v14 + 8);
      if ( _bittest16((const signed __int16 *)(v18 + 14), 0xEu) )
      {
        v19 = HmgpComputeHandleValue((const struct OBJECT *)v18, v5, v11);
        *a2 = v19;
        if ( v19 )
        {
          *a3 = *((_BYTE *)v11 + 14);
          goto LABEL_17;
        }
      }
    }
  }
  v5 = 0;
LABEL_17:
  GreReleaseHmgrSemaphore(v10);
  return v5;
}
