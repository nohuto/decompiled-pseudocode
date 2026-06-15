/*
 * XREFs of ??4CSecurityDesc@ATL@@QEAAAEAV01@AEBU_SECURITY_DESCRIPTOR@@@Z @ 0x180034970
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180035970 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x180035110 (-Clear@CSecurityDesc@ATL@@MEAAXXZ.c)
 *     ?memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z @ 0x180036244 (-memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x1800362DC (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 */

void **__fastcall ATL::CSecurityDesc::operator=(void **a1, void *a2)
{
  void *v4; // rax
  int v6; // ebx
  int Error; // ebx
  unsigned __int64 v8; // [rsp+20h] [rbp-8h]
  WORD pControl; // [rsp+30h] [rbp+8h] BYREF
  DWORD dwBufferLength; // [rsp+38h] [rbp+10h] BYREF
  DWORD dwRevision; // [rsp+40h] [rbp+18h] BYREF

  ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)a1);
  dwBufferLength = GetSecurityDescriptorLength(a2);
  v4 = malloc(dwBufferLength);
  a1[1] = v4;
  if ( !v4 )
    ATL::AtlThrowImpl(-2147024882);
  if ( !GetSecurityDescriptorControl(a2, &pControl, &dwRevision) )
  {
    Error = ATL::AtlHresultFromLastError();
    free(a1[1]);
    a1[1] = 0LL;
    ATL::AtlThrowImpl(Error);
  }
  if ( (pControl & 0x8000u) == 0 )
  {
    if ( !MakeSelfRelativeSD(a2, a1[1], &dwBufferLength) )
    {
      v6 = ATL::AtlHresultFromLastError();
      free(a1[1]);
      a1[1] = 0LL;
      ATL::AtlThrowImpl(v6);
    }
  }
  else
  {
    ATL::Checked::memcpy_s(
      (ATL::Checked *)a1[1],
      (void *)dwBufferLength,
      (unsigned __int64)a2,
      (const void *)dwBufferLength,
      v8);
  }
  return a1;
}
