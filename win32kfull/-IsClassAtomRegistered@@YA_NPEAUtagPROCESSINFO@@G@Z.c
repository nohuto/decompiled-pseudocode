char __fastcall IsClassAtomRegistered(struct tagPROCESSINFO *a1, __int16 a2)
{
  __int64 v2; // rdi
  __int64 v5; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 **v7; // rax
  __int64 *v8; // rbx
  __int64 i; // rbx
  __int64 v10; // rbx
  __int64 *v11; // rax
  _QWORD *v12; // rax
  __int64 **v14; // [rsp+20h] [rbp-10h] BYREF
  __int64 v15; // [rsp+28h] [rbp-8h] BYREF

  v2 = *((_QWORD *)a1 + 43);
  v5 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v5 = *ThreadWin32Thread;
  v14 = (__int64 **)gSmartObjNullRef;
  if ( v2 )
  {
    v14 = *(__int64 ***)(v2 + 128);
    ++*(_DWORD *)(*(_QWORD *)(v2 + 128) + 8LL);
  }
  v15 = *(_QWORD *)(v5 + 1512);
  *(_QWORD *)(v5 + 1512) = &v15;
  while ( 1 )
  {
    v7 = v14;
    if ( !*v14 )
      break;
    if ( *(_WORD *)(*v14)[1] == a2 || *(_WORD *)((*v14)[1] + 2) == a2 )
    {
LABEL_35:
      SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>((__int64)&v14);
      return 1;
    }
    v8 = (__int64 *)**v14;
    if ( v8 != *v14 )
    {
      if ( v14 != (__int64 **)gSmartObjNullRef && !--*((_DWORD *)v14 + 2) )
      {
        if ( *((_BYTE *)v14 + 12) )
          Win32FreeToPagedLookasideList(gpStackRefLookAside, v14);
      }
      if ( v8 )
      {
        v14 = (__int64 **)v8[16];
        ++*((_DWORD *)v14 + 2);
      }
      else
      {
        v14 = (__int64 **)gSmartObjNullRef;
      }
    }
  }
  for ( i = *((_QWORD *)a1 + 44); ; i = **v14 )
  {
    if ( (__int64 *)i != *v7 )
    {
      if ( v14 != (__int64 **)gSmartObjNullRef && !--*((_DWORD *)v14 + 2) )
      {
        if ( *((_BYTE *)v14 + 12) )
          Win32FreeToPagedLookasideList(gpStackRefLookAside, v14);
      }
      if ( i )
      {
        v14 = *(__int64 ***)(i + 128);
        ++*((_DWORD *)v14 + 2);
      }
      else
      {
        v14 = (__int64 **)gSmartObjNullRef;
      }
    }
    if ( !*v14 )
      break;
    if ( *(_WORD *)(*v14)[1] == a2 || *(_WORD *)((*v14)[1] + 2) == a2 )
      goto LABEL_35;
    v7 = v14;
  }
  v10 = 0LL;
  v11 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v11 )
    v10 = *v11;
  SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(&v14);
  v12 = *(_QWORD **)(v10 + 1512);
  if ( v12 )
    *(_QWORD *)(v10 + 1512) = *v12;
  return 0;
}
