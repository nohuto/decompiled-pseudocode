/*
 * XREFs of _SetClassWord @ 0x1C01E39F8
 * Callers:
 *     NtUserSetClassWord @ 0x1C01FCBE0 (NtUserSetClassWord.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1C0060A44 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00EB718 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 */

__int64 __fastcall SetClassWord(__int64 a1, int a2, __int16 a3)
{
  __int64 v3; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int16 v12; // di
  __int64 i; // rbx
  _QWORD v15[2]; // [rsp+20h] [rbp-10h] BYREF

  v3 = a2;
  SmartObjStackRefBase<tagCLS>::Init(v15, 0LL);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) != PsGetCurrentProcessWin32Process(v6) )
  {
    v8 = 5LL;
LABEL_26:
    UserSetLastError(v8, v7);
    v12 = 0;
    goto LABEL_27;
  }
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 56LL);
  if ( v9 != *(_QWORD *)v15[0] )
  {
    if ( v15[0] != gSmartObjNullRef && !--*(_DWORD *)(v15[0] + 8LL) )
    {
      if ( *(_BYTE *)(v15[0] + 12LL) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v15[0]);
    }
    if ( v9 )
    {
      v15[0] = *(_QWORD *)(v9 + 128);
      ++*(_DWORD *)(v15[0] + 8LL);
    }
    else
    {
      v15[0] = gSmartObjNullRef;
    }
  }
  if ( (int)v3 < 0
    || (v7 = (unsigned int)(v3 + 2), (unsigned int)v7 < (unsigned int)v3)
    || (unsigned int)v7 > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v15[0] + 8LL) + 12LL) )
  {
    v8 = 1413LL;
    goto LABEL_26;
  }
  v10 = v3;
  v11 = *(_QWORD *)(*(_QWORD *)v15[0] + 8LL);
  v12 = *(_WORD *)(v11 + v3 + 88);
  *(_WORD *)(v11 + v3 + 88) = a3;
  for ( i = *(_QWORD *)(*(_QWORD *)v15[0] + 64LL); ; i = **(_QWORD **)v15[0] )
  {
    if ( i != *(_QWORD *)v15[0] )
    {
      if ( v15[0] != gSmartObjNullRef && !--*(_DWORD *)(v15[0] + 8LL) )
      {
        if ( *(_BYTE *)(v15[0] + 12LL) )
          Win32FreeToPagedLookasideList(gpStackRefLookAside, v15[0]);
      }
      if ( i )
      {
        v15[0] = *(_QWORD *)(i + 128);
        ++*(_DWORD *)(v15[0] + 8LL);
      }
      else
      {
        v15[0] = gSmartObjNullRef;
      }
    }
    if ( !*(_QWORD *)v15[0] )
      break;
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)v15[0] + 8LL) + v10 + 88) = a3;
  }
LABEL_27:
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v15);
  return v12;
}
