/*
 * XREFs of _SetClassWord @ 0x1C01E8E44
 * Callers:
 *     NtUserSetClassWord @ 0x1C02014C0 (NtUserSetClassWord.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C0078D28 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00FF480 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 */

__int64 __fastcall SetClassWord(__int64 a1, int a2, __int16 a3)
{
  __int64 v3; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rax
  unsigned __int16 v13; // di
  __int64 i; // rbx
  __int64 ThreadWin32Thread; // rbx
  _QWORD *v16; // rcx
  __int64 v18[2]; // [rsp+20h] [rbp-10h] BYREF

  v3 = a2;
  SmartObjStackRefBase<tagCLS>::Init(v18, 0LL);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) != PsGetCurrentProcessWin32Process(v6) )
  {
    v9 = 5LL;
LABEL_26:
    UserSetLastError(v9, v7, v8);
    v13 = 0;
    goto LABEL_27;
  }
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 56LL);
  if ( v10 != *(_QWORD *)v18[0] )
  {
    if ( v18[0] != gSmartObjNullRef && !--*(_DWORD *)(v18[0] + 8) )
    {
      if ( *(_BYTE *)(v18[0] + 12) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v18[0]);
    }
    if ( v10 )
    {
      v18[0] = *(_QWORD *)(v10 + 128);
      ++*(_DWORD *)(v18[0] + 8);
    }
    else
    {
      v18[0] = gSmartObjNullRef;
    }
  }
  if ( (int)v3 < 0
    || (v7 = (unsigned int)(v3 + 2), (unsigned int)v7 < (unsigned int)v3)
    || (unsigned int)v7 > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v18[0] + 8LL) + 12LL) )
  {
    v9 = 1413LL;
    goto LABEL_26;
  }
  v11 = v3;
  v12 = *(_QWORD *)(*(_QWORD *)v18[0] + 8LL);
  v13 = *(_WORD *)(v12 + v3 + 88);
  *(_WORD *)(v12 + v3 + 88) = a3;
  for ( i = *(_QWORD *)(*(_QWORD *)v18[0] + 64LL); ; i = **(_QWORD **)v18[0] )
  {
    if ( i != *(_QWORD *)v18[0] )
    {
      if ( v18[0] != gSmartObjNullRef && !--*(_DWORD *)(v18[0] + 8) )
      {
        if ( *(_BYTE *)(v18[0] + 12) )
          Win32FreeToPagedLookasideList(gpStackRefLookAside, v18[0]);
      }
      if ( i )
      {
        v18[0] = *(_QWORD *)(i + 128);
        ++*(_DWORD *)(v18[0] + 8);
      }
      else
      {
        v18[0] = gSmartObjNullRef;
      }
    }
    if ( !*(_QWORD *)v18[0] )
      break;
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)v18[0] + 8LL) + v11 + 88) = a3;
  }
LABEL_27:
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(v18);
  v16 = *(_QWORD **)(ThreadWin32Thread + 1472);
  if ( v16 )
    *(_QWORD *)(ThreadWin32Thread + 1472) = *v16;
  return v13;
}
