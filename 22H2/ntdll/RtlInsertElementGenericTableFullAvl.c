/*
 * XREFs of RtlInsertElementGenericTableFullAvl @ 0x18005CF90
 * Callers:
 *     RtlInsertElementGenericTableAvl @ 0x18005CF20 (RtlInsertElementGenericTableAvl.c)
 * Callees:
 *     RebalanceNode @ 0x18005D1C8 (RebalanceNode.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1000 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 */

_OWORD *__fastcall RtlInsertElementGenericTableFullAvl(
        __int64 a1,
        const void *a2,
        unsigned int a3,
        bool *a4,
        __int64 *a5,
        int a6)
{
  size_t v6; // r14
  _OWORD *v10; // rax
  _OWORD *v11; // rdi
  _OWORD *v12; // r8
  __int64 *v13; // rcx
  __int64 *i; // rdx
  char v15; // al
  _OWORD *result; // rax

  v6 = a3;
  if ( a6 == 1 )
  {
    v11 = a5;
LABEL_15:
    if ( a4 )
      *a4 = a6 != 1;
    *(_DWORD *)(a1 + 40) = 0;
    result = v11 + 2;
    *(_QWORD *)(a1 + 32) = 0LL;
    return result;
  }
  if ( a3 + 32 >= a3 )
  {
    v10 = (_OWORD *)(*(__int64 (**)(void))(a1 + 80))();
    v11 = v10;
    if ( v10 )
    {
      *v10 = 0LL;
      v10[1] = 0LL;
      ++*(_DWORD *)(a1 + 44);
      if ( a6 )
      {
        v12 = v10;
        v13 = a5;
        if ( a6 == 2 )
          a5[1] = (__int64)v10;
        else
          a5[2] = (__int64)v10;
        *(_QWORD *)v10 = a5;
        *(_BYTE *)(a1 + 24) = -1;
        for ( i = *(__int64 **)v10; ; v13 = i )
        {
          v15 = -1;
          if ( (_OWORD *)i[1] != v12 )
            v15 = 1;
          if ( *((_BYTE *)v13 + 24) )
            break;
          i = (__int64 *)*v13;
          v12 = v13;
          *((_BYTE *)v13 + 24) = v15;
        }
        if ( *((_BYTE *)v13 + 24) == v15 )
        {
          RebalanceNode(v13);
        }
        else
        {
          *((_BYTE *)v13 + 24) = 0;
          if ( !*(_BYTE *)(a1 + 24) )
            ++*(_DWORD *)(a1 + 48);
        }
      }
      else
      {
        *(_QWORD *)(a1 + 16) = v10;
        *(_QWORD *)v10 = a1;
        *(_DWORD *)(a1 + 48) = 1;
      }
      memmove(v11 + 2, a2, v6);
      goto LABEL_15;
    }
  }
  if ( a4 )
    *a4 = 0;
  return 0LL;
}
