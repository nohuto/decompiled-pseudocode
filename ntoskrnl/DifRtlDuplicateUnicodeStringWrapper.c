/*
 * XREFs of DifRtlDuplicateUnicodeStringWrapper @ 0x1405E90E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x14045DE6E (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1405F64A4 (DifGetReturnAddressForWrappers.c)
 *     RtlDuplicateUnicodeString @ 0x140761970 (RtlDuplicateUnicodeString.c)
 */

NTSTATUS __fastcall DifRtlDuplicateUnicodeStringWrapper(
        ULONG Flags,
        PCUNICODE_STRING StringIn,
        PUNICODE_STRING StringOut)
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
  NTSTATUS result; // eax
  _QWORD **v16; // rdi
  _QWORD *v17; // rbx
  __int128 v18; // [rsp+20h] [rbp-20h] BYREF
  __int128 v19; // [rsp+30h] [rbp-10h]
  __int64 retaddr; // [rsp+58h] [rbp+18h]

  v18 = 0LL;
  v19 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(422);
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
      *(_QWORD *)&v18 = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v12 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v8, v7, v9, v10);
      goto LABEL_9;
    }
  }
  *(_QWORD *)&v18 = 0LL;
LABEL_10:
  DWORD2(v19) = Flags;
  *(_QWORD *)&v19 = StringIn;
  *((_QWORD *)&v18 + 1) = StringOut;
  for ( i = (__int64 *)v11[4]; i != v11 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v18);
  }
LABEL_17:
  result = RtlDuplicateUnicodeString(Flags, StringIn, StringOut);
  HIDWORD(v19) = result;
  if ( v11 )
  {
    v16 = (_QWORD **)(v11 + 6);
    v17 = *v16;
    if ( *v16 != v16 )
    {
      do
      {
        if ( v17 != (_QWORD *)16 )
          ((void (__fastcall *)(__int128 *))*(v17 - 1))(&v18);
        v17 = (_QWORD *)*v17;
      }
      while ( v17 != v16 );
      return HIDWORD(v19);
    }
  }
  return result;
}
