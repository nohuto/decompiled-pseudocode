/*
 * XREFs of DifIoInitializeRemoveLockExWrapper @ 0x1405DD9E0
 * Callers:
 *     <none>
 * Callees:
 *     IoInitializeRemoveLockEx @ 0x1403BF180 (IoInitializeRemoveLockEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x14045DE6E (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1405F64A4 (DifGetReturnAddressForWrappers.c)
 */

void __fastcall DifIoInitializeRemoveLockExWrapper(
        PIO_REMOVE_LOCK Lock,
        ULONG AllocateTag,
        ULONG MaxLockedMinutes,
        ULONG HighWatermark,
        ULONG RemlockSize)
{
  __int64 *APIThunkContextById; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // rdi
  int v15; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  _QWORD **v18; // rdi
  _QWORD *j; // rbx
  __int128 v20; // [rsp+30h] [rbp-20h] BYREF
  __int128 v21; // [rsp+40h] [rbp-10h]
  __int64 retaddr; // [rsp+78h] [rbp+28h]

  v20 = 0LL;
  v21 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(187);
  v14 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0
    || (v11 = HIDWORD(VfRuleClasses), (VfRuleClasses & 0x800000000LL) == 0) )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) == 0 )
      goto LABEL_8;
  }
  else
  {
    v15 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v15 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
LABEL_9:
      *(_QWORD *)&v20 = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v15 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v11, v10, v12, v13);
      goto LABEL_9;
    }
  }
  *(_QWORD *)&v20 = 0LL;
LABEL_10:
  *((_QWORD *)&v20 + 1) = __PAIR64__(HighWatermark, RemlockSize);
  *((_QWORD *)&v21 + 1) = Lock;
  *(_QWORD *)&v21 = __PAIR64__(AllocateTag, MaxLockedMinutes);
  for ( i = (__int64 *)v14[4]; i != v14 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v20);
  }
LABEL_17:
  IoInitializeRemoveLockEx(Lock, AllocateTag, MaxLockedMinutes, HighWatermark, RemlockSize);
  if ( v14 )
  {
    v18 = (_QWORD **)(v14 + 6);
    for ( j = *v18; j != v18; j = (_QWORD *)*j )
    {
      if ( j != (_QWORD *)16 )
        ((void (__fastcall *)(__int128 *))*(j - 1))(&v20);
    }
  }
}
