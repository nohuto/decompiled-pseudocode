/*
 * XREFs of ??0OUTPUTDUPL_CONTEXT@@QEAA@PEAVOUTPUTDUPL_MGR@@IHHH@Z @ 0x1C02A0808
 * Callers:
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C02995EC (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 * Callees:
 *     memset @ 0x1C0028FC0 (memset.c)
 */

OUTPUTDUPL_CONTEXT *__fastcall OUTPUTDUPL_CONTEXT::OUTPUTDUPL_CONTEXT(
        OUTPUTDUPL_CONTEXT *this,
        struct OUTPUTDUPL_MGR *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6)
{
  int v6; // esi
  int v7; // ebx
  HANDLE CurrentProcessId; // rax
  OUTPUTDUPL_CONTEXT *result; // rax

  *((_DWORD *)this + 4) = -1;
  v6 = a4;
  v7 = a3;
  *((_QWORD *)this + 3) = PsGetCurrentProcess(this, a2, a3, a4);
  CurrentProcessId = PsGetCurrentProcessId();
  *((_QWORD *)this + 35) = 1LL;
  *((_QWORD *)this + 4) = CurrentProcessId;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 34) = (char *)this + 168;
  *((_DWORD *)this + 80) = a5;
  *((_DWORD *)this + 82) = a6;
  *((_QWORD *)this + 33) = (char *)this + 72;
  *((_DWORD *)this + 72) = 0;
  *((_DWORD *)this + 73) = v7;
  *((_QWORD *)this + 37) = a2;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_DWORD *)this + 81) = v6;
  memset((char *)this + 72, 0, 0xC0uLL);
  *((_OWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  result = this;
  *((_QWORD *)this + 1) = this;
  *(_QWORD *)this = this;
  return result;
}
