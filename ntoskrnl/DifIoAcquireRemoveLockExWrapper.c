/*
 * XREFs of DifIoAcquireRemoveLockExWrapper @ 0x1405DA910
 * Callers:
 *     <none>
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x140305F80 (IoAcquireRemoveLockEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x14045DE6E (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1405F64A4 (DifGetReturnAddressForWrappers.c)
 */

NTSTATUS __fastcall DifIoAcquireRemoveLockExWrapper(
        PIO_REMOVE_LOCK RemoveLock,
        PVOID Tag,
        PCSTR File,
        ULONG Line,
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
  NTSTATUS result; // eax
  _QWORD **v19; // rdi
  _QWORD *v20; // rbx
  __int128 v21; // [rsp+30h] [rbp-30h] BYREF
  __int128 v22; // [rsp+40h] [rbp-20h]
  __int128 v23; // [rsp+50h] [rbp-10h]
  __int64 retaddr; // [rsp+88h] [rbp+28h]

  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(132);
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
      *(_QWORD *)&v21 = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v15 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v11, v10, v12, v13);
      goto LABEL_9;
    }
  }
  *(_QWORD *)&v21 = 0LL;
LABEL_10:
  *((_QWORD *)&v21 + 1) = __PAIR64__(Line, RemlockSize);
  *(_QWORD *)&v23 = RemoveLock;
  *((_QWORD *)&v22 + 1) = Tag;
  *(_QWORD *)&v22 = File;
  for ( i = (__int64 *)v14[4]; i != v14 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v21);
  }
LABEL_17:
  result = IoAcquireRemoveLockEx(RemoveLock, Tag, File, Line, RemlockSize);
  DWORD2(v23) = result;
  if ( v14 )
  {
    v19 = (_QWORD **)(v14 + 6);
    v20 = *v19;
    if ( *v19 != v19 )
    {
      do
      {
        if ( v20 != (_QWORD *)16 )
          ((void (__fastcall *)(__int128 *))*(v20 - 1))(&v21);
        v20 = (_QWORD *)*v20;
      }
      while ( v20 != v19 );
      return DWORD2(v23);
    }
  }
  return result;
}
