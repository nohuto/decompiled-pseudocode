void __fastcall EtwpCovSampCaptureFreeLookasides(union _SLIST_HEADER *a1)
{
  union _SLIST_HEADER *v1; // rdi
  union _SLIST_HEADER *i; // rbx
  union _SLIST_HEADER *v4; // rdi
  union _SLIST_HEADER *j; // rbx
  PSLIST_ENTRY v6; // rsi
  _QWORD *p_Next; // rcx
  __int64 v8; // r8
  _QWORD *v9; // rdx

  v1 = a1 + 59;
  for ( i = (union _SLIST_HEADER *)a1[59].Alignment; i != v1; i = (union _SLIST_HEADER *)i->Alignment )
    EtwpCovSampLookasideFlushFreeListToCleanupList(i - 1);
  v4 = a1 + 60;
  for ( j = (union _SLIST_HEADER *)a1[60].Alignment; j != v4; j = (union _SLIST_HEADER *)j->Alignment )
  {
    v6 = RtlpInterlockedFlushSList(j - 1);
    while ( v6 )
    {
      p_Next = &v6->Next;
      v6 = v6->Next;
      v8 = p_Next[3];
      if ( *(_QWORD **)(v8 + 8) != p_Next + 3 || (v9 = (_QWORD *)p_Next[4], (_QWORD *)*v9 != p_Next + 3) )
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      ExFreePoolWithTag(p_Next, 0x56777445u);
    }
    *((_DWORD *)&j[3].HeaderX64 + 2) = 0;
  }
}
