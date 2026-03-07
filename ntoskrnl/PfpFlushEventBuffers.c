__int64 PfpFlushEventBuffers()
{
  struct _SLIST_ENTRY *v0; // rbx
  int v1; // ebp
  PSLIST_ENTRY v2; // rcx
  struct _SLIST_ENTRY *v3; // rax
  struct _SLIST_ENTRY *v4; // rdi
  struct _SLIST_ENTRY *v5; // rsi
  struct _SLIST_ENTRY *v8; // rcx

  v0 = 0LL;
  v1 = 0;
  PfFbBufferListFlushStandby((_SLIST_ENTRY *)&stru_140C64F20);
  v2 = RtlpInterlockedFlushSList(&stru_140C64FA0);
  if ( v2 )
  {
    do
    {
      v3 = v2;
      v2 = v2->Next;
      v3->Next = v0;
      v0 = v3;
    }
    while ( v2 );
    while ( 1 )
    {
      v4 = v0;
      v0 = v0->Next;
      v5 = v4 + 3;
      if ( *((_DWORD *)&v4[2].Next + 2) )
        break;
LABEL_6:
      PfFbBufferListInsertInFree(
        (_SLIST_ENTRY *)&stru_140C64F20,
        v4,
        LODWORD(v4[2].Next) - (_DWORD)v4,
        *((_DWORD *)&v4[2].Next + 3),
        1);
      if ( !v0 )
        return (unsigned int)v1;
    }
    while ( 1 )
    {
      v1 = PfpCopyEvent(v5);
      if ( v1 < 0 )
        break;
      v5 += (LODWORD(v5->Next) >> 2) & 0x3FF;
      if ( (*((_DWORD *)&v4[2].Next + 2))-- == 1 )
        goto LABEL_6;
    }
    memmove(&v4[3], v5, (unsigned int)(LODWORD(v4[2].Next) - (_DWORD)v5));
    v8 = v4;
    while ( 1 )
    {
      PfTFullEventListAdd(v8);
      if ( !v0 )
        break;
      v8 = v0;
      v0 = v0->Next;
    }
  }
  return (unsigned int)v1;
}
