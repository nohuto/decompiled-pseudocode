/*
 * XREFs of RealInternalRemoveProp @ 0x1C002C720
 * Callers:
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C00D7F60 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 * Callees:
 *     IS_USERCRIT_OWNED_SHARED @ 0x1C002C87C (IS_USERCRIT_OWNED_SHARED.c)
 *     UserGlobalAtomTableCallout @ 0x1C0089494 (UserGlobalAtomTableCallout.c)
 *     UserDeleteAtomFromAtomTable @ 0x1C009A8B0 (UserDeleteAtomFromAtomTable.c)
 */

__int64 __fastcall RealInternalRemoveProp(__int64 a1, int a2, int a3)
{
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 *v8; // rbx
  bool v9; // zf
  __int64 result; // rax
  __int16 v11; // ax
  __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // rax

  if ( !gbInDestroyHandleTableObjects )
  {
    if ( ExIsResourceAcquiredExclusiveLite(gpresUser) != 1
      && (!(unsigned int)IS_USERCRIT_OWNED_SHARED() || KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 8)) )
    {
      __int2c();
    }
    if ( !gbInDestroyHandleTableObjects
      && ExIsResourceAcquiredExclusiveLite(gpresUser) != 1
      && (!(unsigned int)IS_USERCRIT_OWNED_SHARED() || KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 8)) )
    {
      __int2c();
    }
  }
  v6 = *(_QWORD *)(a1 + 24);
  if ( !v6 )
    return 0LL;
  if ( !(_WORD)a2 )
    return 0LL;
  v7 = *(unsigned int *)(v6 + 4);
  v8 = (__int64 *)(v6 + 8);
  if ( !(_DWORD)v7 )
    return 0LL;
  while ( 1 )
  {
    if ( *((_WORD *)v8 + 4) != (_WORD)a2 )
      goto LABEL_13;
    v11 = *((_WORD *)v8 + 5) & 1;
    if ( a3 )
      break;
    if ( !v11 )
      goto LABEL_17;
LABEL_13:
    v8 += 2;
    v9 = (_DWORD)v7 == 1;
    v7 = (unsigned int)(v7 - 1);
    if ( v9 )
      return 0LL;
  }
  if ( !v11 )
    goto LABEL_13;
LABEL_17:
  if ( !v8 )
    return 0LL;
  v12 = *v8;
  if ( !a3 && ((*((_BYTE *)v8 + 10) & 2) != 0 || HIWORD(a2) == 1) )
  {
    v14 = UserGlobalAtomTableCallout(v7);
    if ( v14 )
      UserDeleteAtomFromAtomTable(v14, *((unsigned __int16 *)v8 + 4));
  }
  --*(_DWORD *)(v6 + 4);
  result = v12;
  v13 = 2LL * *(unsigned int *)(v6 + 4);
  *(_OWORD *)v8 = *(_OWORD *)(v6 + 16LL * *(unsigned int *)(v6 + 4) + 8);
  *(_OWORD *)(v6 + 8 * v13 + 8) = 0LL;
  return result;
}
