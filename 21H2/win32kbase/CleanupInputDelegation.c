/*
 * XREFs of CleanupInputDelegation @ 0x1C0097BF0
 * Callers:
 *     DestroyBaseWindow @ 0x1C01662F0 (DestroyBaseWindow.c)
 * Callees:
 *     UserIsUserCritSecInExclusive @ 0x1C002A1D0 (UserIsUserCritSecInExclusive.c)
 *     IS_USERCRIT_OWNED_SHARED @ 0x1C002C87C (IS_USERCRIT_OWNED_SHARED.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C006D24C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C006D270 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagWND___ @ 0x1C0097CF8 (_anonymous_namespace_--ScrubDelegatedWindow_tagWND___.c)
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagBWND___ @ 0x1C0149910 (_anonymous_namespace_--ScrubDelegatedWindow_tagBWND___.c)
 */

struct _HANDLEENTRY *__fastcall CleanupInputDelegation(_DWORD *a1)
{
  struct _HANDLEENTRY *result; // rax
  char v3; // cl

  if ( !gbInDestroyHandleTableObjects
    && !UserIsUserCritSecInExclusive()
    && (!IS_USERCRIT_OWNED_SHARED()
     || !tagDomLock::IsLockedExclusive(&gDomainHandleManagerLock)
     && !tagDomLock::IsLockedShared(&gDomainHandleManagerLock)) )
  {
    __int2c();
  }
  result = qword_1C0294B68;
  v3 = *((_BYTE *)qword_1C0294B68 + dword_1C0294B70 * (unsigned int)(unsigned __int16)*a1 + 24);
  if ( v3 == 1 )
    return (struct _HANDLEENTRY *)anonymous_namespace_::ScrubDelegatedWindow_tagWND___(a1);
  if ( v3 == 23 )
    return (struct _HANDLEENTRY *)anonymous_namespace_::ScrubDelegatedWindow_tagBWND___(a1);
  return result;
}
