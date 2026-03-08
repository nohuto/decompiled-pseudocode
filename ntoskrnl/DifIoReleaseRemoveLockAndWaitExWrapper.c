/*
 * XREFs of DifIoReleaseRemoveLockAndWaitExWrapper @ 0x1405DE950
 * Callers:
 *     <none>
 * Callees:
 *     IoReleaseRemoveLockAndWaitEx @ 0x1403D0F90 (IoReleaseRemoveLockAndWaitEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x14045DE6E (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1405F64A4 (DifGetReturnAddressForWrappers.c)
 */

void __fastcall DifIoReleaseRemoveLockAndWaitExWrapper(PIO_REMOVE_LOCK RemoveLock, PVOID Tag, ULONG RemlockSize)
{
  __int64 *APIThunkContextById; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rdi
  int v12; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  _QWORD **v15; // rdi
  _QWORD *j; // rbx
  __int128 v17; // [rsp+20h] [rbp-20h] BYREF
  __int128 v18; // [rsp+30h] [rbp-10h]
  __int64 retaddr; // [rsp+58h] [rbp+18h]

  v17 = 0LL;
  v18 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(208);
  v11 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0
    || (v8 = HIDWORD(VfRuleClasses), (VfRuleClasses & 0x800000000LL) == 0) )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) == 0 )
      goto LABEL_8;
  }
  else
  {
    v12 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v12 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
LABEL_9:
      *(_QWORD *)&v17 = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v12 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v8, v7, v9, v10);
      goto LABEL_9;
    }
  }
  *(_QWORD *)&v17 = 0LL;
LABEL_10:
  *((_QWORD *)&v18 + 1) = RemoveLock;
  *(_QWORD *)&v18 = Tag;
  DWORD2(v17) = RemlockSize;
  for ( i = (__int64 *)v11[4]; i != v11 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v17);
  }
LABEL_17:
  IoReleaseRemoveLockAndWaitEx(RemoveLock, Tag, RemlockSize);
  if ( v11 )
  {
    v15 = (_QWORD **)(v11 + 6);
    for ( j = *v15; j != v15; j = (_QWORD *)*j )
    {
      if ( j != (_QWORD *)16 )
        ((void (__fastcall *)(__int128 *))*(j - 1))(&v17);
    }
  }
}
