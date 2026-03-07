void __fastcall CCompositionFrameCollection::DiscardAllCompositionFrames(CCompositionFrameCollection *this)
{
  CPushLockCriticalSection *v1; // rsi
  char *v2; // rdi
  char **v3; // rax
  char **v4; // rcx
  char **v5; // rbx
  char **v6; // rdx

  v1 = (CCompositionFrameCollection *)((char *)this + 32);
  v2 = (char *)this + 16;
  ExAcquirePushLockExclusiveEx((char *)this + 32, 0LL);
  *((_BYTE *)v1 + 8) = 1;
  v3 = (char **)*((_QWORD *)v2 + 1);
  if ( *v3 != v2 || (v4 = (char **)v3[1], *v4 != (char *)v3) )
LABEL_6:
    __fastfail(3u);
  *((_QWORD *)v2 + 1) = v4;
  *v4 = v2;
  while ( v3 != (char **)v2 )
  {
    v5 = v3 - 2;
    (*((void (__fastcall **)(char **))*(v3 - 2) + 4))(v3 - 2);
    (*((void (__fastcall **)(char **))*v5 + 1))(v5);
    v3 = (char **)*((_QWORD *)v2 + 1);
    if ( *v3 != v2 )
      goto LABEL_6;
    v6 = (char **)v3[1];
    if ( *v6 != (char *)v3 )
      goto LABEL_6;
    *((_QWORD *)v2 + 1) = v6;
    *v6 = v2;
  }
  CPushLockCriticalSection::Release(v1);
}
