/*
 * XREFs of ValidateHandleSecure @ 0x1C0044200
 * Callers:
 *     HMValidateHandle @ 0x1C0043940 (HMValidateHandle.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0031520 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C00442C4 (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 *     IsHandleEntrySecure @ 0x1C00943EC (IsHandleEntrySecure.c)
 */

__int64 __fastcall ValidateHandleSecure(__int64 a1, char a2)
{
  char *v4; // rbx

  if ( (unsigned __int64)(unsigned __int16)a1 >= *((_QWORD *)gpsi + 1) )
    return 0LL;
  v4 = (char *)qword_1C024FA38 + (unsigned int)(unsigned __int16)a1 * dword_1C024FA40;
  GetDomainLockRef(14);
  if ( WORD1(a1) != *((_WORD *)v4 + 13)
    && WORD1(a1) != 0xFFFF
    && (WORD1(a1) || !PsGetCurrentProcessWow64Process(0xFFFFLL)) )
  {
    return 0LL;
  }
  if ( !v4[24] || (a2 & 1) != 0 && !(unsigned int)IsHandleEntrySecure(a1, v4) || (a2 & 2) == 0 )
    return 0LL;
  if ( gbValidateHandleForIL )
    return IsHandleEntryAccessibleForIL((struct _HANDLEENTRY *)v4);
  return 1LL;
}
