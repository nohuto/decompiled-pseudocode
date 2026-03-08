/*
 * XREFs of CleanupInputDelegation @ 0x1C00A91F0
 * Callers:
 *     DestroyBaseWindow @ 0x1C017BDE0 (DestroyBaseWindow.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C003A33C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C003A360 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C004E3E0 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C004F968 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagWND___ @ 0x1C00A9270 (_anonymous_namespace_--ScrubDelegatedWindow_tagWND___.c)
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagBWND___ @ 0x1C015D4A0 (_anonymous_namespace_--ScrubDelegatedWindow_tagBWND___.c)
 */

struct _HANDLEENTRY *__fastcall CleanupInputDelegation(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _HANDLEENTRY *result; // rax
  char v9; // cl

  if ( !gbInDestroyHandleTableObjects
    && !IS_USERCRIT_OWNED_EXCLUSIVE((__int64)a1, a2, a3, a4)
    && (!IS_USERCRIT_OWNED_AT_ALL(v5, a2, v6, v7)
     || !tagDomLock::IsLockedExclusive(&gDomainHandleManagerLock)
     && !tagDomLock::IsLockedShared(&gDomainHandleManagerLock)) )
  {
    __int2c();
  }
  result = qword_1C02D0E08;
  v9 = *((_BYTE *)qword_1C02D0E08 + dword_1C02D0E10 * (unsigned int)(unsigned __int16)*a1 + 24);
  if ( v9 == 1 )
    return (struct _HANDLEENTRY *)anonymous_namespace_::ScrubDelegatedWindow_tagWND___(a1, a2);
  if ( v9 == 23 )
    return (struct _HANDLEENTRY *)anonymous_namespace_::ScrubDelegatedWindow_tagBWND___(a1, a2);
  return result;
}
