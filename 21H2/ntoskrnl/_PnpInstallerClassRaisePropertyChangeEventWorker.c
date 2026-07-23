/*
 * XREFs of _PnpInstallerClassRaisePropertyChangeEventWorker @ 0x140734A5C
 * Callers:
 *     _PnpObjectRaisePropertyChangeEvent @ 0x140746274 (_PnpObjectRaisePropertyChangeEvent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PnpInstallerClassRaisePropertyChangeEventWorker(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall *a6)(__int64, __int64, __int64))
{
  __int64 result; // rax
  __int64 *v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  _QWORD v14[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]

  v14[1] = a4;
  v14[0] = a3;
  v15 = a5;
  result = a6(a1, a2, 2LL);
  v9 = &qword_140004D88;
  v10 = 3LL;
  do
  {
    v11 = 0LL;
    if ( *(_DWORD *)v9 )
    {
      while ( 1 )
      {
        v12 = *(_QWORD *)(*(v9 - 1) + 8 * v11);
        if ( *(_DWORD *)(a5 + 16) == *(_DWORD *)(v12 + 16) )
        {
          v13 = *(_QWORD *)a5 - *(_QWORD *)v12;
          if ( *(_QWORD *)a5 == *(_QWORD *)v12 )
            v13 = *(_QWORD *)(a5 + 8) - *(_QWORD *)(v12 + 8);
          if ( !v13 )
            break;
        }
        v11 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v11 >= *(_DWORD *)v9 )
          goto LABEL_5;
      }
      v15 = v9[1];
      result = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, _QWORD *))a6)(a1, a2, 2LL, 4LL, v14);
    }
LABEL_5:
    v9 += 3;
    --v10;
  }
  while ( v10 );
  return result;
}
