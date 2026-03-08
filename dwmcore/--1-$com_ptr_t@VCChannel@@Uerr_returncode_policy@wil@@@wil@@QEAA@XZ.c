/*
 * XREFs of ??1?$com_ptr_t@VCChannel@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801B25C8
 * Callers:
 *     ?CreateChannel@CInternalMilCmdConnection@@QEAAJPEAUIDwmChannelProvider@@PEAPEAVCChannel@@@Z @ 0x1800CCD3C (-CreateChannel@CInternalMilCmdConnection@@QEAAJPEAUIDwmChannelProvider@@PEAPEAVCChannel@@@Z.c)
 * Callees:
 *     ?Release@CChannel@@UEAAKXZ @ 0x1801CD3F0 (-Release@CChannel@@UEAAKXZ.c)
 */

unsigned int __fastcall wil::com_ptr_t<CChannel,wil::err_returncode_policy>::~com_ptr_t<CChannel,wil::err_returncode_policy>(
        CChannel **a1)
{
  CChannel *v1; // rcx
  unsigned int result; // eax

  v1 = *a1;
  if ( v1 )
    return CChannel::Release(v1);
  return result;
}
