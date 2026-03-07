void __fastcall PiDevCfgFreeResolveContext(__int64 a1)
{
  void *v2; // rcx
  unsigned int i; // edi
  void **v4; // rcx
  void *v5; // rbx
  void **v6; // rax
  void *v7; // rcx
  int v8; // edx
  __int64 v9; // r8
  __int64 v10; // r8

  if ( *(_QWORD *)(a1 + 24) )
  {
    for ( i = 0; i < 0x7F; ++i )
    {
      while ( 1 )
      {
        v4 = (void **)(*(_QWORD *)(a1 + 24) + 16LL * i);
        v5 = *v4;
        if ( *v4 == v4 )
          break;
        if ( *((void ***)v5 + 1) != v4 || (v6 = *(void ***)v5, *(void **)(*(_QWORD *)v5 + 8LL) != v5) )
          __fastfail(3u);
        *v4 = v6;
        v6[1] = v4;
        RtlFreeUnicodeString((PUNICODE_STRING)v5 + 1);
        v7 = (void *)*((_QWORD *)v5 + 5);
        if ( v7 )
        {
          v8 = *((_DWORD *)v5 + 8);
          if ( (_WORD)v8 == 0x8000 )
          {
            if ( (v8 & 0x100000) != 0 )
            {
              if ( *(_QWORD *)&PiPnpRtlCtx && (v9 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
                v10 = *(_QWORD *)(v9 + 8);
              else
                v10 = 0LL;
              RegRtlDeleteTreeInternal(v7, 0LL, v10, 0);
            }
            ZwClose(*((HANDLE *)v5 + 5));
          }
          else
          {
            ExFreePoolWithTag(v7, 0);
          }
        }
        ExFreePoolWithTag(v5, 0);
      }
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 24), 0);
  }
  v2 = *(void **)(a1 + 16);
  if ( v2 )
    ZwClose(v2);
}
