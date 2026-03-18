/*
 * XREFs of xxxSetClassIcon @ 0x1C0239060
 * Callers:
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01E3498 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 * Callees:
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagCLS@@PEAX@Z @ 0x1C0061130 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagC.c)
 *     DestroyClassSmIcon @ 0x1C00634EC (DestroyClassSmIcon.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     xxxCreateClassSmIcon @ 0x1C00A2E38 (xxxCreateClassSmIcon.c)
 *     HMValidateHandleNoRip @ 0x1C00A3A40 (HMValidateHandleNoRip.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C016DFC0 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxInternalEnumWindow @ 0x1C01CE524 (xxxInternalEnumWindow.c)
 */

__int64 *__fastcall xxxSetClassIcon(struct tagWND *a1, __int64 **a2, __int64 *a3, int a4)
{
  __int64 *v7; // rax
  __int64 *result; // rax
  BOOL v9; // esi
  __int64 v10; // rdi
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int128 v16; // [rsp+20h] [rbp-58h] BYREF
  __int64 v17; // [rsp+30h] [rbp-48h] BYREF
  __int128 v18; // [rsp+40h] [rbp-38h] BYREF
  __int64 v19; // [rsp+50h] [rbp-28h]

  v18 = 0LL;
  v19 = 0LL;
  v7 = *a2;
  if ( a4 == -14 )
    result = *(__int64 **)(*v7 + 80);
  else
    result = *(__int64 **)(*v7 + 112);
  if ( result != a3 )
  {
    v9 = 1;
    v10 = 0LL;
    if ( result )
      v10 = *result;
    if ( a4 == -14 )
    {
      if ( *(_QWORD *)(**a2 + 112) )
        v9 = DestroyClassSmIcon(a2) != 0;
      v11 = *a2;
      *((_QWORD *)&v16 + 1) = a3;
      *(_QWORD *)&v16 = *v11 + 80;
    }
    else
    {
      if ( (unsigned int)DestroyClassSmIcon(a2) )
        v10 = 0LL;
      v16 = *(_OWORD *)LockPointer(&v17, **a2 + 112, a3);
    }
    HMAssignmentLock(&v16, 0LL);
    if ( *(_QWORD *)(**a2 + 80) && !*(_QWORD *)(**a2 + 112) )
      xxxCreateClassSmIcon((__int64)a2, v12);
    if ( v9 )
    {
      if ( *(int *)(**a2 + 72) <= 1 )
      {
        xxxSetClassIconEnum(a1, **a2);
      }
      else
      {
        ThreadLock(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL) + 112LL),
          (__int64 *)&v18);
        xxxInternalEnumWindow(
          *(ShellWindowManagement **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL) + 112LL),
          (__int64 (__fastcall *)(__int64, __int64))xxxSetClassIconEnum,
          **a2,
          2u);
        ThreadUnlock1(v14, v13, v15);
      }
    }
    if ( v10 )
      return (__int64 *)HMValidateHandleNoRip(v10, 3);
    else
      return 0LL;
  }
  return result;
}
