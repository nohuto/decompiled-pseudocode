void __fastcall xxxCleanupDdeConv(struct tagWND *a1)
{
  __int64 i; // rbx
  int v3; // edi
  struct tagFREELIST *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

LABEL_1:
  for ( i = GetProp((__int64)a1, (unsigned __int16)atomDDETrack, 1u); i; i = *(_QWORD *)(i + 24) )
  {
    if ( (*(_BYTE *)(i + 80) & 7) == 7 && (*(_DWORD *)(*(_QWORD *)(i + 32) + 80LL) & 2) != 0 )
    {
      v8 = 0LL;
      v9 = 0LL;
      if ( *(_QWORD *)(i + 72) )
      {
        v3 = 1;
        ThreadLockAlways(i, &v8);
        v4 = *(struct tagFREELIST **)(i + 72);
        *(_QWORD *)(i + 72) = 0LL;
        xxxFreeListFree(v4);
      }
      else
      {
        v3 = 0;
      }
      if ( (*(_BYTE *)(_HMPheFromObject(i) + 25) & 1) == 0 )
      {
        *(_QWORD *)(i + 32) = xxxFreeDdeConv(*(struct tagDDECONV **)(i + 32));
        xxxFreeDdeConv((struct tagDDECONV *)i);
      }
      if ( v3 )
        ThreadUnlock1(v6, v5, v7);
      goto LABEL_1;
    }
  }
}
