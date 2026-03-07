void __fastcall CCompositionFrameCollection::AddCompositionFrame(
        CCompositionFrameCollection *this,
        struct ICompositionFrame *a2)
{
  char *v2; // rsi
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // rdi

  v2 = (char *)this + 32;
  ExAcquirePushLockExclusiveEx((char *)this + 32, 0LL);
  v2[8] = 1;
  (**(void (__fastcall ***)(struct ICompositionFrame *))a2)(a2);
  v5 = *((_QWORD *)this + 2);
  v6 = (_QWORD *)((char *)a2 + 16);
  v7 = (_QWORD *)((char *)this + 16);
  if ( *(_QWORD **)(v5 + 8) != v7 )
    __fastfail(3u);
  *v6 = v5;
  *((_QWORD *)a2 + 3) = v7;
  *(_QWORD *)(v5 + 8) = v6;
  *v7 = v6;
  if ( v2[8] )
    ExReleasePushLockExclusiveEx(v2, 0LL);
  else
    ExReleasePushLockSharedEx(v2, 0LL);
}
