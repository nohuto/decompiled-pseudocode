/*
 * XREFs of GetCPD @ 0x1C00E3DB8
 * Callers:
 *     xxxSetWindowData @ 0x1C004F920 (xxxSetWindowData.c)
 *     _GetClassInfoEx @ 0x1C007F338 (_GetClassInfoEx.c)
 *     NtUserGetCPD @ 0x1C00E3D30 (NtUserGetCPD.c)
 *     xxxSetClassData @ 0x1C0115230 (xxxSetClassData.c)
 * Callees:
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C00E3FF8 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 */

__int64 __fastcall GetCPD(__int64 a1, __int16 a2, __int64 a3)
{
  __int64 v6; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // r8
  __int64 *i; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 *v14; // rax
  _QWORD *v15; // rcx
  __int64 v17; // rax
  __int64 *v18; // rbx
  __int64 v19; // rcx
  __int64 *v20; // [rsp+20h] [rbp-30h] BYREF
  __int64 v21; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v22[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v23[2]; // [rsp+40h] [rbp-10h] BYREF

  v6 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v6 = *ThreadWin32Thread;
  v20 = (__int64 *)gSmartObjNullRef;
  v21 = *(_QWORD *)(v6 + 1472);
  *(_QWORD *)(v6 + 1472) = &v21;
  if ( (a2 & 0x60) != 0 )
  {
    a1 = *(_QWORD *)(a1 + 136);
  }
  else if ( (a2 & 0x80u) != 0 )
  {
    a1 = *(_QWORD *)(a1 + 136);
    if ( a1 != *v20 )
    {
      SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(&v20);
LABEL_7:
      if ( a1 )
      {
        v20 = *(__int64 **)(a1 + 128);
        ++*((_DWORD *)v20 + 2);
      }
      else
      {
        v20 = (__int64 *)gSmartObjNullRef;
      }
      goto LABEL_9;
    }
    goto LABEL_9;
  }
  if ( a1 != *v20 )
  {
    if ( v20 != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)v20 + 2) )
    {
      if ( *((_BYTE *)v20 + 12) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v20);
    }
    goto LABEL_7;
  }
LABEL_9:
  for ( i = *(__int64 **)(*v20 + 48); i; i = (__int64 *)i[7] )
  {
    v10 = i[5];
    if ( *(_QWORD *)(v10 + 16) == a3 && *(_WORD *)(v10 + 24) == a2 )
    {
      v11 = *i;
LABEL_14:
      v12 = (unsigned int)v11 | 0xFFFF0000LL;
      goto LABEL_15;
    }
  }
  LOBYTE(v8) = 7;
  v17 = HMAllocObject(gptiCurrent, *(_QWORD *)(gptiCurrent + 456LL), v8);
  v18 = (__int64 *)v17;
  if ( v17 )
  {
    v19 = *v20;
    v22[0] = v17 + 56;
    v22[1] = *(_QWORD *)(v19 + 48);
    HMAssignmentLock(v22, 0LL);
    v23[1] = v18;
    v23[0] = *v20 + 48;
    HMAssignmentLock(v23, 0LL);
    *(_QWORD *)(v18[5] + 16) = a3;
    *(_WORD *)(v18[5] + 24) = a2;
    v11 = *v18;
    goto LABEL_14;
  }
  v12 = 0LL;
LABEL_15:
  v13 = 0LL;
  v14 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v14 )
    v13 = *v14;
  SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(&v20);
  v15 = *(_QWORD **)(v13 + 1472);
  if ( v15 )
    *(_QWORD *)(v13 + 1472) = *v15;
  return v12;
}
