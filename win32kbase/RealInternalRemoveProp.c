/*
 * XREFs of RealInternalRemoveProp @ 0x1C008EB00
 * Callers:
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C008EA50 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 * Callees:
 *     UserGlobalAtomTableCallout @ 0x1C0072268 (UserGlobalAtomTableCallout.c)
 *     UserDeleteAtomFromAtomTable @ 0x1C008ECA0 (UserDeleteAtomFromAtomTable.c)
 */

__int64 __fastcall RealInternalRemoveProp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  int v5; // esi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rdi
  int v20; // ecx
  __int64 *v21; // rbx
  __int16 v22; // ax
  __int64 result; // rax
  __int64 v24; // rbp
  __int64 v25; // rcx
  __int64 v26; // rax

  v4 = a3;
  v5 = a2;
  if ( !gbInDestroyHandleTableObjects )
  {
    v7 = SGDGetUserSessionState(a1, a2, a3, a4);
    if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v7 + 8)) != 1 )
    {
      v12 = SGDGetUserSessionState(v9, v8, v10, v11);
      if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v12 + 8))
        || KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 8) )
      {
        __int2c();
      }
    }
    if ( !gbInDestroyHandleTableObjects )
    {
      v13 = SGDGetUserSessionState(v9, v8, v10, v11);
      if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v13 + 8)) != 1 )
      {
        v18 = SGDGetUserSessionState(v15, v14, v16, v17);
        if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v18 + 8))
          || KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 8) )
        {
          __int2c();
        }
      }
    }
  }
  v19 = *(_QWORD *)(a1 + 24);
  if ( !v19 )
    return 0LL;
  if ( !(_WORD)v5 )
    return 0LL;
  v20 = *(_DWORD *)(v19 + 4);
  v21 = (__int64 *)(v19 + 8);
  if ( !v20 )
    return 0LL;
  while ( 1 )
  {
    if ( *((_WORD *)v21 + 4) != (_WORD)v5 )
      goto LABEL_13;
    v22 = *((_WORD *)v21 + 5) & 1;
    if ( v4 )
      break;
    if ( !v22 )
      goto LABEL_17;
LABEL_13:
    v21 += 2;
    if ( !--v20 )
      return 0LL;
  }
  if ( !v22 )
    goto LABEL_13;
LABEL_17:
  if ( !v21 )
    return 0LL;
  v24 = *v21;
  if ( !v4 && ((*((_BYTE *)v21 + 10) & 2) != 0 || HIWORD(v5) == 1) )
  {
    v26 = UserGlobalAtomTableCallout();
    if ( v26 )
      UserDeleteAtomFromAtomTable(v26, *((unsigned __int16 *)v21 + 4));
  }
  --*(_DWORD *)(v19 + 4);
  result = v24;
  v25 = 2LL * *(unsigned int *)(v19 + 4);
  *(_OWORD *)v21 = *(_OWORD *)(v19 + 16LL * *(unsigned int *)(v19 + 4) + 8);
  *(_OWORD *)(v19 + 8 * v25 + 8) = 0LL;
  return result;
}
