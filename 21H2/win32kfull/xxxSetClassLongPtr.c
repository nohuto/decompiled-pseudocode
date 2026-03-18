/*
 * XREFs of xxxSetClassLongPtr @ 0x1C0115194
 * Callers:
 *     NtUserSetClassLongPtr @ 0x1C0115080 (NtUserSetClassLongPtr.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1C0060A44 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00EB718 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     xxxSetClassData @ 0x1C0115230 (xxxSetClassData.c)
 */

__int64 __fastcall xxxSetClassLongPtr(struct tagWND *a1, int a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 i; // rdi
  _QWORD v16[2]; // [rsp+20h] [rbp-10h] BYREF

  v3 = a2;
  SmartObjStackRefBase<tagCLS>::Init(v16, 0LL);
  if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) != PsGetCurrentProcessWin32Process(v6) )
  {
    UserSetLastError(5LL, v7);
    v8 = 0LL;
    goto LABEL_4;
  }
  v8 = 0LL;
  if ( (int)v3 < 0 )
  {
    v8 = xxxSetClassData(a1);
LABEL_4:
    v9 = v8;
    goto LABEL_5;
  }
  v11 = *(_QWORD *)(*((_QWORD *)a1 + 17) + 56LL);
  if ( v11 != *(_QWORD *)v16[0] )
  {
    if ( v16[0] != gSmartObjNullRef && !--*(_DWORD *)(v16[0] + 8LL) )
    {
      if ( *(_BYTE *)(v16[0] + 12LL) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v16[0]);
    }
    if ( v11 )
    {
      v16[0] = *(_QWORD *)(v11 + 128);
      ++*(_DWORD *)(v16[0] + 8LL);
    }
    else
    {
      v16[0] = gSmartObjNullRef;
    }
  }
  v12 = (unsigned int)(v3 + 8);
  if ( (unsigned int)v12 < (unsigned int)v3
    || (unsigned int)v12 > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v16[0] + 8LL) + 12LL) )
  {
    UserSetLastError(1413LL, v12);
    goto LABEL_4;
  }
  v13 = v3;
  v14 = *(_QWORD *)(*(_QWORD *)v16[0] + 8LL);
  v9 = *(_QWORD *)(v14 + v3 + 88);
  *(_QWORD *)(v14 + v3 + 88) = a3;
  for ( i = *(_QWORD *)(*(_QWORD *)v16[0] + 64LL); ; i = **(_QWORD **)v16[0] )
  {
    if ( i != *(_QWORD *)v16[0] )
    {
      if ( v16[0] != gSmartObjNullRef && !--*(_DWORD *)(v16[0] + 8LL) )
      {
        if ( *(_BYTE *)(v16[0] + 12LL) )
          Win32FreeToPagedLookasideList(gpStackRefLookAside, v16[0]);
      }
      if ( i )
      {
        v16[0] = *(_QWORD *)(i + 128);
        ++*(_DWORD *)(v16[0] + 8LL);
      }
      else
      {
        v16[0] = gSmartObjNullRef;
      }
    }
    if ( !*(_QWORD *)v16[0] )
      break;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v16[0] + 8LL) + v13 + 88) = a3;
  }
LABEL_5:
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v16);
  return v9;
}
