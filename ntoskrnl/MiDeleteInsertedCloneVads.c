/*
 * XREFs of MiDeleteInsertedCloneVads @ 0x140A46058
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x140A45CF4 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     MiDeleteCloneZombies @ 0x1402FBC3C (MiDeleteCloneZombies.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     MiReferenceVad @ 0x14031F794 (MiReferenceVad.c)
 *     MiLockVad @ 0x14034CF60 (MiLockVad.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     MiDeleteCloneDescriptor @ 0x140661860 (MiDeleteCloneDescriptor.c)
 *     MiDeleteVad @ 0x1407C82E0 (MiDeleteVad.c)
 */

__int64 __fastcall MiDeleteInsertedCloneVads(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int *v5; // rax
  unsigned int *i; // rbx
  unsigned int **v7; // rax
  unsigned int *v8; // rsi
  unsigned int *v9; // rcx
  unsigned int *v10; // rcx
  unsigned int *j; // rax
  unsigned int **v12; // rax
  unsigned int *v13; // rcx
  unsigned int *v14; // rcx
  $115DCDF994C6370D29323EAB0E0C9502 v16; // [rsp+20h] [rbp-48h] BYREF

  memset(&v16, 0, sizeof(v16));
  CurrentThread = KeGetCurrentThread();
  KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)&v16);
  *(_BYTE *)(*(_QWORD *)(a1 + 1680) + 341LL) |= 1u;
  v5 = *(unsigned int **)(a1 + 2008);
  i = 0LL;
  while ( v5 )
  {
    i = v5;
    v5 = *(unsigned int **)v5;
  }
  while ( i )
  {
    v7 = (unsigned int **)*((_QWORD *)i + 1);
    v8 = i;
    v9 = i;
    if ( v7 )
    {
      v10 = *v7;
      for ( i = (unsigned int *)*((_QWORD *)i + 1); v10; v10 = *(unsigned int **)v10 )
        i = v10;
    }
    else
    {
      while ( 1 )
      {
        i = (unsigned int *)(*((_QWORD *)i + 2) & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || *(unsigned int **)i == v9 )
          break;
        v9 = i;
      }
    }
    MiLockVad((__int64)CurrentThread, (__int64)v8);
    MiReferenceVad((__int64)v8);
    MiDeleteVad(v8, 0LL, 0);
  }
  for ( j = *(unsigned int **)(a1 + 1264); j; j = *(unsigned int **)j )
    i = j;
  while ( i )
  {
    *((_QWORD *)i + 6) = 0LL;
    MiDeleteCloneDescriptor((struct _KPROCESS *)a1, (__int64)i);
    v12 = (unsigned int **)*((_QWORD *)i + 1);
    v13 = i;
    if ( v12 )
    {
      v14 = *v12;
      for ( i = (unsigned int *)*((_QWORD *)i + 1); v14; v14 = *(unsigned int **)v14 )
        i = v14;
    }
    else
    {
      while ( 1 )
      {
        i = (unsigned int *)(*((_QWORD *)i + 2) & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || *(unsigned int **)i == v13 )
          break;
        v13 = i;
      }
    }
  }
  MiDeleteCloneZombies(a1, 0LL, v3, v4);
  return KiUnstackDetachProcess(&v16);
}
