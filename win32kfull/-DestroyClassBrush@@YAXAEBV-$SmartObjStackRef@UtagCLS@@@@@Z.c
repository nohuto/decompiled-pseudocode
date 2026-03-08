/*
 * XREFs of ?DestroyClassBrush@@YAXAEBV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x1C0033A6C
 * Callers:
 *     DestroyClass @ 0x1C0033D18 (DestroyClass.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1C0031BF4 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C003409C (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 */

_QWORD *__fastcall DestroyClassBrush(__int64 a1)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 *ThreadWin32Thread; // rax
  _QWORD *result; // rax
  __int64 v7; // rbx
  __int64 *v8; // rax
  unsigned int v9; // edx
  __int64 v10; // r8
  __int64 *v11; // rdi
  __int64 **v12; // rax
  __int64 i; // rbx
  __int64 **v14; // [rsp+20h] [rbp-10h] BYREF
  __int64 v15; // [rsp+28h] [rbp-8h] BYREF

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v3 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v3 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  v4 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v4 = *ThreadWin32Thread;
  v14 = (__int64 **)gSmartObjNullRef;
  v15 = *(_QWORD *)(v4 + 1512);
  *(_QWORD *)(v4 + 1512) = &v15;
  if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 8LL) + 72LL) > 0x1FuLL )
  {
    v9 = 0;
    v10 = 4696LL;
    while ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 8LL) + 72LL) != *(_QWORD *)(v10 + gpsi) )
    {
      ++v9;
      v10 += 8LL;
      if ( v9 >= 0x1F )
      {
        v11 = *(__int64 **)(v3 + 352);
        if ( v11 == *v14 )
          goto LABEL_21;
        if ( v14 != (__int64 **)gSmartObjNullRef && !--*((_DWORD *)v14 + 2) )
        {
          if ( *((_BYTE *)v14 + 12) )
            Win32FreeToPagedLookasideList(gpStackRefLookAside, v14);
        }
LABEL_26:
        if ( v11 )
        {
          v14 = (__int64 **)v11[16];
          ++*((_DWORD *)v14 + 2);
        }
        else
        {
          v14 = (__int64 **)gSmartObjNullRef;
        }
LABEL_21:
        while ( 1 )
        {
          v12 = v14;
          if ( !*v14 )
            break;
          if ( *v14 != **(__int64 ***)a1
            && *(_QWORD *)((*v14)[1] + 72) == *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 8LL) + 72LL) )
          {
            return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>((__int64)&v14);
          }
          v11 = (__int64 *)**v14;
          if ( v11 != *v14 )
          {
            SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(&v14);
            goto LABEL_26;
          }
        }
        for ( i = *(_QWORD *)(v3 + 344); ; i = **v14 )
        {
          if ( (__int64 *)i != *v12 )
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
          if ( *v14 != **(__int64 ***)a1
            && *(_QWORD *)((*v14)[1] + 72) == *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 8LL) + 72LL) )
          {
            return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>((__int64)&v14);
          }
          v12 = v14;
        }
        GreDeleteObject(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 8LL) + 72LL));
        v7 = 0LL;
        v8 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( v8 )
          v7 = *v8;
        SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(&v14);
        result = *(_QWORD **)(v7 + 1512);
        if ( result )
        {
          result = (_QWORD *)*result;
          *(_QWORD *)(v7 + 1512) = result;
        }
        return result;
      }
    }
  }
  return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>((__int64)&v14);
}
