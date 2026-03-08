/*
 * XREFs of ??1AUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@QEAA@XZ @ 0x1C03B629C
 * Callers:
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C01DBC1C (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     ?ClearReservedFields@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C01BD640 (-ClearReservedFields@CCD_TOPOLOGY@@QEAAXXZ.c)
 */

void __fastcall AUTO_CCD_TOPOLOGY_CLEAR_RESERVED::~AUTO_CCD_TOPOLOGY_CLEAR_RESERVED(CCD_TOPOLOGY **this)
{
  CCD_TOPOLOGY *v1; // rcx

  v1 = *this;
  if ( v1 )
    CCD_TOPOLOGY::ClearReservedFields(v1);
}
