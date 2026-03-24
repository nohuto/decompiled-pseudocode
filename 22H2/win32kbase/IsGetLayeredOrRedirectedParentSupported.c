/*
 * XREFs of IsGetLayeredOrRedirectedParentSupported @ 0x1C0096AAC
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0037720 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IsGetLayeredOrRedirectedParentSupported(__int64 a1, __int64 a2, __int64 a3)
{
  if ( qword_1C0256678 )
    return qword_1C0256678(a1, a2, a3);
  else
    return 3221225659LL;
}
