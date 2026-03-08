/*
 * XREFs of ??0OUTPUTDUPL_SESSION_MGR@@QEAA@XZ @ 0x1C01DE294
 * Callers:
 *     ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1C01DDCF0 (--0DXGSESSIONDATA@@QEAA@K@Z.c)
 * Callees:
 *     ?InitializeMaxActiveOutputDuplApps@OUTPUTDUPL_SESSION_MGR@@AEAAXXZ @ 0x1C01DE394 (-InitializeMaxActiveOutputDuplApps@OUTPUTDUPL_SESSION_MGR@@AEAAXXZ.c)
 */

OUTPUTDUPL_SESSION_MGR *__fastcall OUTPUTDUPL_SESSION_MGR::OUTPUTDUPL_SESSION_MGR(OUTPUTDUPL_SESSION_MGR *this)
{
  OUTPUTDUPL_SESSION_MGR *result; // rax

  *((_DWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 43;
  *((_DWORD *)this + 12) = 66;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 27) = 43;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 28) = 66;
  *((_QWORD *)this + 15) = 0LL;
  OUTPUTDUPL_SESSION_MGR::InitializeMaxActiveOutputDuplApps(this);
  result = this;
  *((_DWORD *)this + 32) = 0;
  return result;
}
