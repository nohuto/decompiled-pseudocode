void __fastcall xxxProcessSetWindowPosEvent(__int64 a1)
{
  void **v2; // rsi
  int v3; // eax
  _QWORD *v4; // rbx
  int i; // ebp
  __int64 v6; // rax
  __int64 v7; // rcx

  v2 = (void **)InternalBeginDeferWindowPos(*(_DWORD *)(a1 + 28));
  if ( v2 )
  {
    memmove(v2[5], *(const void **)(a1 + 40), 168LL * *(int *)(a1 + 28));
    v3 = *(_DWORD *)(a1 + 28);
    v4 = v2[5];
    *((_DWORD *)v2 + 7) = v3;
    for ( i = v3 - 1; i >= 0; --i )
    {
      if ( (*((_DWORD *)v4 + 39) & 0x20) != 0 )
      {
        if ( *v4 )
        {
          v6 = HMValidateHandleNoSecure(*v4, 1);
          if ( v6 )
          {
            v7 = *(_QWORD *)(*(_QWORD *)(v6 + 40) + 256LL);
            if ( v7 != v4[16] )
              v4[16] = v7;
          }
        }
      }
      v4 += 21;
    }
    xxxEndDeferWindowPosEx((struct tagSMWP *)v2, 0);
  }
  Win32FreePool((void *)a1);
}
