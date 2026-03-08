/*
 * XREFs of ??0CCD_TOPOLOGY@@QEAA@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01BE5A8
 * Callers:
 *     DxgkEnumerateModesForPathsModality @ 0x1C02FD6F0 (DxgkEnumerateModesForPathsModality.c)
 * Callees:
 *     <none>
 */

CCD_TOPOLOGY *__fastcall CCD_TOPOLOGY::CCD_TOPOLOGY(CCD_TOPOLOGY *this, struct D3DKMT_GETPATHSMODALITY *a2)
{
  CCD_TOPOLOGY *result; // rax

  *(_DWORD *)this = 0;
  *(_OWORD *)((char *)this + 8) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_WORD *)this + 16) = 0;
  *(_OWORD *)((char *)this + 40) = 0LL;
  *((_BYTE *)this + 72) = a2 == 0LL;
  result = this;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = a2;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 1;
  *(_QWORD *)((char *)this + 84) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  return result;
}
