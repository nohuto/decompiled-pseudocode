/*
 * XREFs of ?CopyRmResourceSetInfoToResourceSetInfo@ExecutionModel@@YAXPEBURmResourceSetInfo@@PEAU_ResourceSetInfo@1@@Z @ 0x180078B64
 * Callers:
 *     ?Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGPEAEKKK_KKPEAH4PEA_K@Z @ 0x180063D80 (-Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGP.c)
 * Callees:
 *     memset_0 @ 0x180047B3A (memset_0.c)
 */

void __fastcall ExecutionModel::CopyRmResourceSetInfoToResourceSetInfo(
        ExecutionModel *this,
        const struct RmResourceSetInfo *a2,
        struct ExecutionModel::_ResourceSetInfo *a3)
{
  memset_0(a2, 0, 0x178uLL);
  *((_QWORD *)a2 + 45) = *((_QWORD *)this + 185);
  *((_QWORD *)a2 + 7) = *((_QWORD *)this + 157);
  *((_QWORD *)a2 + 8) = *((_QWORD *)this + 158);
  *((_DWORD *)a2 + 2) = *(_DWORD *)this;
  *((_DWORD *)a2 + 4) = *((_DWORD *)this + 305);
  *((_DWORD *)a2 + 3) = *((_DWORD *)this + 304);
  *(_OWORD *)((char *)a2 + 24) = *(_OWORD *)((char *)this + 1224);
  *((_WORD *)a2 + 20) = *((_WORD *)this + 620);
  *((_BYTE *)a2 + 42) = *((_BYTE *)this + 1242);
  *((_DWORD *)a2 + 11) = *((_DWORD *)this + 311);
  *((_DWORD *)a2 + 12) = *((_DWORD *)this + 312);
  *((_DWORD *)a2 + 18) = *((_DWORD *)this + 318);
  *((_DWORD *)a2 + 92) = *((_DWORD *)this + 372);
  *(_DWORD *)a2 = *((_DWORD *)this + 302);
  *((_DWORD *)a2 + 88) = *((_DWORD *)this + 369);
  *((_DWORD *)a2 + 93) = *((_DWORD *)this + 373);
  memcpy_s((char *)a2 + 152, 0xC8uLL, (char *)this + 1276, 0xC8uLL);
  memcpy_s((char *)a2 + 80, 0x48uLL, (char *)this + 8, 0x48uLL);
}
