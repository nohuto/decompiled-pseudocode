/*
 * XREFs of DifPoFxSetDeviceIdleTimeoutWrapper @ 0x1405E7AD0
 * Callers:
 *     <none>
 * Callees:
 *     PoFxSetDeviceIdleTimeout @ 0x1402FFB70 (PoFxSetDeviceIdleTimeout.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x14045DE6E (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1405F64A4 (DifGetReturnAddressForWrappers.c)
 */

__int64 __fastcall DifPoFxSetDeviceIdleTimeoutWrapper(__int64 a1, unsigned __int64 a2)
{
  __int64 *APIThunkContextById; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // rdi
  int v10; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  __int64 result; // rax
  _QWORD **v14; // rdi
  _QWORD *j; // rbx
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v16 = 0LL;
  v17 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(390);
  v9 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0
    || (v6 = HIDWORD(VfRuleClasses), (VfRuleClasses & 0x800000000LL) == 0) )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) == 0 )
      goto LABEL_8;
  }
  else
  {
    v10 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v10 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
LABEL_9:
      *(_QWORD *)&v16 = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v10 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v6, v5, v7, v8);
      goto LABEL_9;
    }
  }
  *(_QWORD *)&v16 = 0LL;
LABEL_10:
  v17 = a1;
  *((_QWORD *)&v16 + 1) = a2;
  for ( i = (__int64 *)v9[4]; i != v9 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v16);
  }
LABEL_17:
  result = PoFxSetDeviceIdleTimeout(a1, a2);
  if ( v9 )
  {
    v14 = (_QWORD **)(v9 + 6);
    for ( j = *v14; j != v14; j = (_QWORD *)*j )
    {
      result = (__int64)(j - 2);
      if ( j != (_QWORD *)16 )
        result = (*(__int64 (__fastcall **)(__int128 *))(result + 8))(&v16);
    }
  }
  return result;
}
