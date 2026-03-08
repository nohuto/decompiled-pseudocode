/*
 * XREFs of DifKfRaiseIrqlWrapper @ 0x1405E4180
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x14045DE6E (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1405F64A4 (DifGetReturnAddressForWrappers.c)
 */

unsigned __int8 __fastcall DifKfRaiseIrqlWrapper(unsigned __int8 a1)
{
  unsigned __int64 v1; // rsi
  __int64 *APIThunkContextById; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 *v7; // rdi
  int v8; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  unsigned __int8 CurrentIrql; // r9
  _DWORD *SchedulerAssist; // r11
  int v13; // edx
  _QWORD **v14; // rdi
  _QWORD *v15; // rbx
  __int128 v17; // [rsp+20h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v1 = a1;
  v17 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(321);
  v7 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0
    || (v4 = HIDWORD(VfRuleClasses), (VfRuleClasses & 0x800000000LL) == 0) )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) != 0 )
      goto LABEL_12;
    goto LABEL_10;
  }
  v8 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v8 & 0x18) == 0 )
  {
    if ( (v8 & 4) == 0 )
      goto LABEL_12;
LABEL_10:
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v4, v3, v5, v6);
    goto LABEL_11;
  }
  ReturnAddressForWrappers = retaddr;
LABEL_11:
  *(_QWORD *)&v17 = ReturnAddressForWrappers;
LABEL_12:
  BYTE8(v17) = v1;
  for ( i = (__int64 *)v7[4]; i != v7 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v17);
  }
LABEL_17:
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(v1);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)(v1 - 2) <= 0xDu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == (_BYTE)v1 )
      v13 = 1 << v1;
    else
      v13 = ((1LL << ((unsigned __int8)v1 + 1)) - 1) & (-1LL << (CurrentIrql + 1)) & 0xFFFFFFFC;
    SchedulerAssist[5] |= v13;
  }
  BYTE9(v17) = CurrentIrql;
  if ( v7 )
  {
    v14 = (_QWORD **)(v7 + 6);
    v15 = *v14;
    if ( *v14 != v14 )
    {
      do
      {
        if ( v15 != (_QWORD *)16 )
          ((void (__fastcall *)(__int128 *))*(v15 - 1))(&v17);
        v15 = (_QWORD *)*v15;
      }
      while ( v15 != v14 );
      return BYTE9(v17);
    }
  }
  return CurrentIrql;
}
