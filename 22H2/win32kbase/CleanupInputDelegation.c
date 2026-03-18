/*
 * XREFs of CleanupInputDelegation @ 0x1C009AF40
 * Callers:
 *     DestroyBaseWindow @ 0x1C014F060 (DestroyBaseWindow.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0045E80 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C00462E4 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C005CCDC (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C005CD00 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagWND___ @ 0x1C009AFC0 (_anonymous_namespace_--ScrubDelegatedWindow_tagWND___.c)
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagBWND___ @ 0x1C0135690 (_anonymous_namespace_--ScrubDelegatedWindow_tagBWND___.c)
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
  result = qword_1C028FE68;
  v9 = *((_BYTE *)qword_1C028FE68 + dword_1C028FE70 * (unsigned int)(unsigned __int16)*a1 + 24);
  if ( v9 == 1 )
    return (struct _HANDLEENTRY *)anonymous_namespace_::ScrubDelegatedWindow_tagWND___(a1, a2);
  if ( v9 == 23 )
    return (struct _HANDLEENTRY *)anonymous_namespace_::ScrubDelegatedWindow_tagBWND___(a1, a2);
  return result;
}
