/*
 * XREFs of MiDeleteInsertedCloneVads @ 0x1408D9404
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x1408D90B0 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     MiDeleteVad @ 0x14021BFB0 (MiDeleteVad.c)
 *     MiReferenceVad @ 0x14025ABF0 (MiReferenceVad.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     MiLockVad @ 0x140296DD8 (MiLockVad.c)
 *     MiDeleteCloneZombies @ 0x14032267C (MiDeleteCloneZombies.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     MiDeleteCloneDescriptor @ 0x140559F34 (MiDeleteCloneDescriptor.c)
 */

__int64 __fastcall MiDeleteInsertedCloneVads(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD *v6; // rax
  _QWORD *i; // rbx
  _QWORD **v8; // rax
  _DWORD *v9; // rsi
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  _QWORD *j; // rax
  _QWORD **v13; // rax
  _QWORD *v14; // rcx
  _QWORD *v15; // rcx
  _OWORD v17[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v17, 0, sizeof(v17));
  CurrentThread = KeGetCurrentThread();
  KiStackAttachProcess((_KPROCESS *)a1, 0LL, (__int64)v17, a4);
  *(_BYTE *)(*(_QWORD *)(a1 + 1680) + 353LL) |= 1u;
  v6 = *(_QWORD **)(a1 + 2008);
  i = 0LL;
  while ( v6 )
  {
    i = v6;
    v6 = (_QWORD *)*v6;
  }
  while ( i )
  {
    v8 = (_QWORD **)i[1];
    v9 = i;
    v10 = i;
    if ( v8 )
    {
      v11 = *v8;
      for ( i = (_QWORD *)i[1]; v11; v11 = (_QWORD *)*v11 )
        i = v11;
    }
    else
    {
      while ( 1 )
      {
        i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || (_QWORD *)*i == v10 )
          break;
        v10 = i;
      }
    }
    MiLockVad((__int64)CurrentThread, (__int64)v9);
    MiReferenceVad((__int64)v9);
    MiDeleteVad(v9, 0LL, 0);
  }
  for ( j = *(_QWORD **)(a1 + 1264); j; j = (_QWORD *)*j )
    i = j;
  while ( i )
  {
    i[6] = 0LL;
    MiDeleteCloneDescriptor((struct _KPROCESS *)a1, (__int64)i);
    v13 = (_QWORD **)i[1];
    v14 = i;
    if ( v13 )
    {
      v15 = *v13;
      for ( i = (_QWORD *)i[1]; v15; v15 = (_QWORD *)*v15 )
        i = v15;
    }
    else
    {
      while ( 1 )
      {
        i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || (_QWORD *)*i == v14 )
          break;
        v14 = i;
      }
    }
  }
  MiDeleteCloneZombies(a1, 0);
  return KiUnstackDetachProcess((__int64)v17, 0);
}
