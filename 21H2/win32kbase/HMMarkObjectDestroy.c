/*
 * XREFs of HMMarkObjectDestroy @ 0x1C008F060
 * Callers:
 *     <none>
 * Callees:
 *     IS_USERCRIT_OWNED_SHARED @ 0x1C002C87C (IS_USERCRIT_OWNED_SHARED.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C006D270 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 */

__int64 __fastcall HMMarkObjectDestroy(_DWORD *a1)
{
  unsigned int v1; // ebx
  char *v3; // rdx
  char v4; // al

  v1 = 0;
  if ( !gbInDestroyHandleTableObjects
    && ExIsResourceAcquiredExclusiveLite(gpresUser) != 1
    && (!IS_USERCRIT_OWNED_SHARED() || !tagDomLock::IsLockedExclusive(&gDomainHandleManagerLock)) )
  {
    __int2c();
  }
  v3 = (char *)qword_1C0294B68 + dword_1C0294B70 * (unsigned int)(unsigned __int16)*a1;
  v4 = v3[25] | 1;
  v3[25] = v4;
  if ( a1[2] )
    v3[25] = v4 & 0xFD;
  else
    return 1;
  return v1;
}
