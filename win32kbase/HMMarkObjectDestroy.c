/*
 * XREFs of HMMarkObjectDestroy @ 0x1C00A5550
 * Callers:
 *     <none>
 * Callees:
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C003A360 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C004E3E0 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 */

__int64 __fastcall HMMarkObjectDestroy(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  char *v11; // rdx
  char v12; // al

  v4 = 0;
  if ( !gbInDestroyHandleTableObjects )
  {
    v6 = SGDGetUserSessionState(a1, a2, a3, a4);
    if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v6 + 8)) != 1
      && (!IS_USERCRIT_OWNED_AT_ALL(v8, v7, v9, v10) || !tagDomLock::IsLockedExclusive(&gDomainHandleManagerLock)) )
    {
      __int2c();
    }
  }
  v11 = (char *)qword_1C02D0E08 + dword_1C02D0E10 * (unsigned int)(unsigned __int16)*a1;
  v12 = v11[25] | 1;
  v11[25] = v12;
  if ( a1[2] )
    v11[25] = v12 & 0xFD;
  else
    return 1;
  return v4;
}
