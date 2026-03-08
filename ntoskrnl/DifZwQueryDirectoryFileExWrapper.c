/*
 * XREFs of DifZwQueryDirectoryFileExWrapper @ 0x1405F1700
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryDirectoryFileEx @ 0x140414C70 (ZwQueryDirectoryFileEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     DifGetAPIThunkContextById @ 0x14045DE6E (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1405F64A4 (DifGetReturnAddressForWrappers.c)
 */

__int64 __fastcall DifZwQueryDirectoryFileExWrapper(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        __int64 a10)
{
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *APIThunkContextById; // rdi
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  __int64 result; // rax
  _QWORD **v23; // rdi
  _QWORD *v24; // rbx
  _QWORD v25[12]; // [rsp+58h] [rbp-59h] BYREF
  __int64 retaddr; // [rsp+E0h] [rbp+2Fh]

  memset(v25, 0, 0x58uLL);
  APIThunkContextById = DifGetAPIThunkContextById(589);
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0 || (VfRuleClasses & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) == 0 )
      goto LABEL_8;
  }
  else
  {
    v19 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v19 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
LABEL_9:
      v25[0] = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v19 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v15, v14, v17, v18);
      goto LABEL_9;
    }
  }
  v25[0] = 0LL;
LABEL_10:
  v25[5] = a5;
  v25[4] = a6;
  LODWORD(v25[3]) = a7;
  v25[2] = __PAIR64__(a8, a9);
  v25[1] = a10;
  v25[9] = a1;
  v25[8] = a2;
  v25[7] = a3;
  v25[6] = a4;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(_QWORD *))*(i - 1))(v25);
  }
LABEL_17:
  result = ZwQueryDirectoryFileEx(a1, a2);
  LODWORD(v25[10]) = result;
  if ( APIThunkContextById )
  {
    v23 = (_QWORD **)(APIThunkContextById + 6);
    v24 = *v23;
    if ( *v23 != v23 )
    {
      do
      {
        if ( v24 != (_QWORD *)16 )
          ((void (__fastcall *)(_QWORD *))*(v24 - 1))(v25);
        v24 = (_QWORD *)*v24;
      }
      while ( v24 != v23 );
      return LODWORD(v25[10]);
    }
  }
  return result;
}
