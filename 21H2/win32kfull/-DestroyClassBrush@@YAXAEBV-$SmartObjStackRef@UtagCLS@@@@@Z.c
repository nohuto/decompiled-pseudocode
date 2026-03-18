/*
 * XREFs of ?DestroyClassBrush@@YAXAEBV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x1C00631C8
 * Callers:
 *     DestroyClass @ 0x1C0060880 (DestroyClass.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1C0060A44 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 */

_QWORD *__fastcall DestroyClassBrush(__int64 a1)
{
  __int64 CurrentProcessWin32Process; // rsi
  __int64 ThreadWin32Thread; // rax
  unsigned int v5; // edx
  __int64 v6; // r8
  __int64 *i; // rbx
  __int64 **v8; // rax
  __int64 j; // rbx
  __int64 **v10; // [rsp+20h] [rbp-10h] BYREF
  __int64 v11; // [rsp+28h] [rbp-8h] BYREF

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v10 = (__int64 **)gSmartObjNullRef;
  v11 = *(_QWORD *)(ThreadWin32Thread + 1472);
  *(_QWORD *)(ThreadWin32Thread + 1472) = &v11;
  if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 8LL) + 72LL) > 0x1FuLL )
  {
    v5 = 0;
    v6 = 4696LL;
    while ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 8LL) + 72LL) != *(_QWORD *)(v6 + gpsi) )
    {
      ++v5;
      v6 += 8LL;
      if ( v5 >= 0x1F )
      {
        for ( i = *(__int64 **)(CurrentProcessWin32Process + 352); ; i = (__int64 *)**v10 )
        {
          if ( i != *v10 )
          {
            if ( v10 != (__int64 **)gSmartObjNullRef && !--*((_DWORD *)v10 + 2) )
            {
              if ( *((_BYTE *)v10 + 12) )
                Win32FreeToPagedLookasideList(gpStackRefLookAside, v10);
            }
            if ( i )
            {
              v10 = (__int64 **)i[16];
              ++*((_DWORD *)v10 + 2);
            }
            else
            {
              v10 = (__int64 **)gSmartObjNullRef;
            }
          }
          v8 = v10;
          if ( !*v10 )
            break;
          if ( *v10 != **(__int64 ***)a1
            && *(_QWORD *)((*v10)[1] + 72) == *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 8LL) + 72LL) )
          {
            return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v10);
          }
        }
        for ( j = *(_QWORD *)(CurrentProcessWin32Process + 344); ; j = **v10 )
        {
          if ( (__int64 *)j != *v8 )
          {
            if ( v10 != (__int64 **)gSmartObjNullRef && !--*((_DWORD *)v10 + 2) )
            {
              if ( *((_BYTE *)v10 + 12) )
                Win32FreeToPagedLookasideList(gpStackRefLookAside, v10);
            }
            if ( j )
            {
              v10 = *(__int64 ***)(j + 128);
              ++*((_DWORD *)v10 + 2);
            }
            else
            {
              v10 = (__int64 **)gSmartObjNullRef;
            }
          }
          if ( !*v10 )
            break;
          if ( *v10 != **(__int64 ***)a1
            && *(_QWORD *)((*v10)[1] + 72) == *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 8LL) + 72LL) )
          {
            return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v10);
          }
          v8 = v10;
        }
        GreDeleteObject(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 8LL) + 72LL));
        return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v10);
      }
    }
  }
  return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v10);
}
