__int64 __fastcall IsHandleEntrySecureWorker(void *a1, struct _HANDLEENTRY *a2)
{
  _QWORD *v2; // rdi
  __int64 v5; // rbx
  _QWORD *CurrentProcessWin32Process; // rax
  unsigned int v7; // r8d
  __int16 v8; // cx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  void **v12; // rax
  unsigned int v13; // ecx

  v2 = gpKernelHandleTable;
  v5 = 3LL * (unsigned int)((a2 - qword_1C02D0E08) >> 5);
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
  v7 = 0;
  if ( CurrentProcessWin32Process && *CurrentProcessWin32Process )
  {
    v8 = *((_WORD *)&unk_1C028159C + 12 * *((unsigned __int8 *)a2 + 24));
    if ( (v8 & 2) != 0 )
    {
      v9 = v2[v5 + 1];
    }
    else
    {
      if ( (v8 & 1) == 0 )
        return 0LL;
      v10 = v2[v5 + 1];
      if ( !v10 )
        return 0LL;
      v9 = *(_QWORD *)(v10 + 424);
    }
    if ( !v9 )
      return 0LL;
    if ( *(PVOID *)v9 != gpepCSRSS )
    {
      v11 = CurrentProcessWin32Process[95];
      if ( *(_QWORD *)(v9 + 760) != v11 )
      {
        v12 = *(void ***)(v11 + 56);
        if ( v12 )
        {
          v13 = *(_DWORD *)(v11 + 48);
          if ( v13 )
          {
            while ( *v12 != a1 )
            {
              ++v7;
              ++v12;
              if ( v7 >= v13 )
                return 0LL;
            }
            return 1LL;
          }
        }
        return 0LL;
      }
    }
  }
  return 1LL;
}
