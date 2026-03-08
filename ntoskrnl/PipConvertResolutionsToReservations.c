/*
 * XREFs of PipConvertResolutionsToReservations @ 0x1409513EC
 * Callers:
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14087E214 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PipDeleteAllDependencyRelations @ 0x1409514A0 (PipDeleteAllDependencyRelations.c)
 * Callees:
 *     PipSetDependency @ 0x1408387E4 (PipSetDependency.c)
 *     PipDeleteBindingIds @ 0x140951624 (PipDeleteBindingIds.c)
 */

__int64 __fastcall PipConvertResolutionsToReservations(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebp
  _QWORD *v4; // r14
  _QWORD *v5; // rbx
  _QWORD *v6; // rsi
  _QWORD *v7; // rdi
  _QWORD *v8; // rdx
  _DWORD *v9; // rdx
  __int64 v10; // rax
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]

  v12 = 0LL;
  LODWORD(v13) = 0;
  if ( a1 )
  {
    v3 = 0;
    PipDeleteBindingIds(a1, a2);
    v4 = (_QWORD *)(a1 + 32);
    v5 = *(_QWORD **)(a1 + 32);
    while ( v5 != v4 )
    {
      v6 = v5;
      v5 = (_QWORD *)*v5;
      if ( !*((_BYTE *)v6 + 56) )
      {
        v7 = (_QWORD *)v6[5];
        while ( v7 != v6 + 5 )
        {
          v8 = v7;
          v7 = (_QWORD *)*v7;
          v9 = v8 + 2;
          if ( *v9 == 1 )
          {
            v10 = v6[3];
            LODWORD(v12) = 0;
            v13 = *(_QWORD *)(v10 + 48);
            v3 = PipSetDependency((__int64)&v12, (__int64)v9);
          }
        }
        *((_BYTE *)v6 + 56) = 1;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
