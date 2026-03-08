/*
 * XREFs of ?Release@CChannel@@UEAAKXZ @ 0x1801CD3F0
 * Callers:
 *     ??1?$com_ptr_t@VCChannel@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801B25C8 (--1-$com_ptr_t@VCChannel@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??1CChannel@@AEAA@XZ @ 0x1801CB2C4 (--1CChannel@@AEAA@XZ.c)
 */

__int64 __fastcall CChannel::Release(CChannel *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 && this )
  {
    CChannel::~CChannel(this);
    operator delete(this);
  }
  return v2;
}
