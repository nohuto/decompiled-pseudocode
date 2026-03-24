/*
 * XREFs of SetNewForegroundPti @ 0x1C0137570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SetNewForegroundPti(__int64 a1)
{
  unsigned int DLT; // eax
  __int64 result; // rax

  DLT = DLT_FOREGROUND::getDLT();
  GetDomainLockRef(DLT);
  gptiForeground = a1;
  if ( a1 && *(_DWORD *)(*(_QWORD *)(a1 + 424) + 56LL) == gpidLogonUI )
  {
    result = gfEnableHexNumpad;
    gfEnableHexNumpad |= 2u;
  }
  else
  {
    result = gfEnableHexNumpad;
    gfEnableHexNumpad &= ~2u;
  }
  return result;
}
