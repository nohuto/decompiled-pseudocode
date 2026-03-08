/*
 * XREFs of NotifyObjectDestruction @ 0x1C004C42C
 * Callers:
 *     ParseUnload @ 0x1C005CB20 (ParseUnload.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     MarkNativeObjectsDefunct @ 0x1C004A094 (MarkNativeObjectsDefunct.c)
 *     MigrateDefunctObjectsToNewOwner @ 0x1C004C0DC (MigrateDefunctObjectsToNewOwner.c)
 *     NewObjOwner @ 0x1C004C324 (NewObjOwner.c)
 */

__int64 __fastcall NotifyObjectDestruction(__int64 a1)
{
  __int64 result; // rax
  KIRQL v3; // al
  __int64 v4; // rbx
  KIRQL v5; // dl
  __int16 v6; // ax
  __int64 v7; // rdi
  KIRQL v8; // al
  __int64 v9; // rcx
  KIRQL v10; // r12
  __int64 *v11; // rbx
  __int16 v12; // ax
  __int64 *v13; // rbp
  __int64 v14; // rax
  __int64 *v15; // rcx
  __int64 **v16; // rax
  __int64 *i; // rdi
  char v18; // [rsp+58h] [rbp+10h] BYREF
  struct _EX_RUNDOWN_REF *v19; // [rsp+60h] [rbp+18h] BYREF

  v19 = 0LL;
  v18 = 0;
  result = NewObjOwner(gpheapGlobal, &v19);
  if ( (int)result >= 0 )
  {
    v3 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
    v4 = *(_QWORD *)(a1 + 24);
    v5 = v3;
    if ( v4 )
    {
      do
      {
        v6 = *(_WORD *)(v4 + 66);
        v7 = *(_QWORD *)(v4 + 56);
        if ( v6 == 6 || (unsigned __int16)(v6 - 11) <= 2u )
        {
          ExReleaseSpinLockExclusive(&ACPINamespaceLock, v5);
          ((void (__fastcall *)(__int64, __int64, _QWORD))ghDestroyObj)(6LL, v4 + 120, *(unsigned __int16 *)(v4 + 66));
          v5 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
        }
        v4 = v7;
      }
      while ( v7 );
    }
    ExReleaseSpinLockExclusive(&ACPINamespaceLock, v5);
    ((void (__fastcall *)(__int64, char *))ghDestroyObj)(1LL, &v18);
    v8 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
    v9 = *(_QWORD *)(a1 + 24);
    v10 = v8;
    while ( v9 )
    {
      *(_WORD *)(v9 + 64) |= 4u;
      v9 = *(_QWORD *)(v9 + 56);
    }
    MarkNativeObjectsDefunct(0LL, a1);
    MigrateDefunctObjectsToNewOwner(gpNativeNameSpaceOwner, v19);
    MigrateDefunctObjectsToNewOwner((__int64)v19, (struct _EX_RUNDOWN_REF *)a1);
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 40));
    *(_DWORD *)(a1 + 48) = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 40));
    v11 = *(__int64 **)(a1 + 24);
    if ( v11 )
    {
      do
      {
        v12 = *((_WORD *)v11 + 33);
        v13 = (__int64 *)v11[7];
        if ( v12 == 6 || (unsigned __int16)(v12 - 11) <= 2u )
        {
          if ( v11[2] )
          {
            v15 = (__int64 *)*v11;
            if ( *(__int64 **)(*v11 + 8) != v11 || (v16 = (__int64 **)v11[1], *v16 != v11) )
              __fastfail(3u);
            *v16 = v15;
            v15[1] = (__int64)v16;
            v11[2] = 0LL;
          }
          for ( i = (__int64 *)v11[3]; v11 + 3 != i; i = (__int64 *)*i )
          {
            if ( (i[8] & 4) == 0 )
              ((void (__fastcall *)(__int64, __int64 *))ghDestroyObj)(4LL, i);
          }
          KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 40));
          _InterlockedIncrement((volatile signed __int32 *)(a1 + 48));
          KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 40));
          ExReleaseSpinLockExclusive(&ACPINamespaceLock, v10);
          ((void (__fastcall *)(__int64, __int64 *, _QWORD))ghDestroyObj)(
            2LL,
            v11 + 15,
            *((unsigned __int16 *)v11 + 33));
          v10 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
        }
        else
        {
          v14 = v11[2];
          if ( !v14 || (*(_BYTE *)(v14 + 64) & 4) == 0 && !_bittest16((const signed __int16 *)v11 + 32, 0xBu) )
            ((void (__fastcall *)(__int64, __int64 *))ghDestroyObj)(5LL, v11);
        }
        v11 = v13;
      }
      while ( v13 );
    }
    ExReleaseSpinLockExclusive(&ACPINamespaceLock, v10);
    return ((__int64 (__fastcall *)(__int64, char *))ghDestroyObj)(3LL, &v18);
  }
  return result;
}
