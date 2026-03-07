void __fastcall CInteractionContextWrapper::BoundBufferedOutput(CInteractionContextWrapper *this, __int64 a2)
{
  _DWORD *v2; // rbx
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  void *v6; // rsi
  _QWORD *v7; // rcx
  __int64 v8; // rax
  void *v9; // rsi
  _DWORD *v10; // rcx
  __int64 v11; // rax
  void *lpMem; // [rsp+40h] [rbp+8h] BYREF

  v2 = (_DWORD *)((char *)this + 536);
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 560);
  if ( *((_DWORD *)this + 138) < 0x7D0u )
    goto LABEL_14;
  do
  {
    v6 = 0LL;
    EnterCriticalSection(v3);
    v7 = *(_QWORD **)v2;
    if ( *(_DWORD **)(*(_QWORD *)v2 + 8LL) != v2 || (v8 = *v7, *(_QWORD **)(*v7 + 8LL) != v7) )
LABEL_16:
      __fastfail(3u);
    *(_QWORD *)v2 = v8;
    *(_QWORD *)(v8 + 8) = v2;
    if ( v7 != (_QWORD *)v2 )
    {
      v6 = (void *)v7[2];
      operator delete(v7);
      --v2[4];
    }
    LeaveCriticalSection(v3);
    lpMem = v6;
    operator delete(v6);
  }
  while ( *((_DWORD *)this + 138) >= 0x7D0u );
LABEL_14:
  while ( CQueue<CBufferedInteractionOutput *>::PeekFirst(v2, a2, &lpMem) )
  {
    v9 = lpMem;
    if ( (unsigned __int64)(a2 - *(_QWORD *)lpMem) <= 0x1E8480 )
      break;
    EnterCriticalSection(v3);
    v10 = *(_DWORD **)v2;
    if ( *(_DWORD **)(*(_QWORD *)v2 + 8LL) != v2 )
      goto LABEL_16;
    v11 = *(_QWORD *)v10;
    if ( *(_DWORD **)(*(_QWORD *)v10 + 8LL) != v10 )
      goto LABEL_16;
    *(_QWORD *)v2 = v11;
    *(_QWORD *)(v11 + 8) = v2;
    if ( v10 != v2 )
    {
      operator delete(v10);
      --v2[4];
    }
    LeaveCriticalSection(v3);
    operator delete(v9);
  }
}
