__int64 __fastcall xxxSetClassLongPtr(struct tagWND *a1, int a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rbx
  __int64 v9; // r10
  int v11; // ecx
  __int64 v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 i; // rdi
  _QWORD v17[2]; // [rsp+20h] [rbp-10h] BYREF

  v3 = a2;
  SmartObjStackRefBase<tagCLS>::Init(v17, 0LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
  v8 = 0LL;
  v9 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v9 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) != v9 )
  {
    v11 = 5;
LABEL_31:
    UserSetLastError(v11);
    goto LABEL_6;
  }
  if ( (int)v3 < 0 )
  {
    v8 = xxxSetClassData(a1);
    goto LABEL_6;
  }
  v12 = *(_QWORD *)(*((_QWORD *)a1 + 17) + 56LL);
  if ( v12 != *(_QWORD *)v17[0] )
  {
    if ( v17[0] != gSmartObjNullRef && !--*(_DWORD *)(v17[0] + 8LL) )
    {
      if ( *(_BYTE *)(v17[0] + 12LL) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v17[0]);
    }
    if ( v12 )
    {
      v17[0] = *(_QWORD *)(v12 + 128);
      ++*(_DWORD *)(v17[0] + 8LL);
    }
    else
    {
      v17[0] = gSmartObjNullRef;
    }
  }
  if ( (int)v3 + 8 < (unsigned int)v3
    || (unsigned int)(v3 + 8) > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v17[0] + 8LL) + 12LL) )
  {
    v11 = 1413;
    goto LABEL_31;
  }
  v13 = v3;
  v14 = *(_QWORD *)(*(_QWORD *)v17[0] + 8LL);
  v15 = *(_QWORD *)(v14 + v3 + 88);
  *(_QWORD *)(v14 + v3 + 88) = a3;
  for ( i = *(_QWORD *)(*(_QWORD *)v17[0] + 64LL); ; i = **(_QWORD **)v17[0] )
  {
    if ( i != *(_QWORD *)v17[0] )
    {
      if ( v17[0] != gSmartObjNullRef && !--*(_DWORD *)(v17[0] + 8LL) )
      {
        if ( *(_BYTE *)(v17[0] + 12LL) )
          Win32FreeToPagedLookasideList(gpStackRefLookAside, v17[0]);
      }
      if ( i )
      {
        v17[0] = *(_QWORD *)(i + 128);
        ++*(_DWORD *)(v17[0] + 8LL);
      }
      else
      {
        v17[0] = gSmartObjNullRef;
      }
    }
    if ( !*(_QWORD *)v17[0] )
      break;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v17[0] + 8LL) + v13 + 88) = a3;
  }
  v8 = v15;
LABEL_6:
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>((__int64)v17);
  return v8;
}
