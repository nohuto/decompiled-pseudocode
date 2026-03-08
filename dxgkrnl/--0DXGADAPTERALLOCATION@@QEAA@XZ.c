/*
 * XREFs of ??0DXGADAPTERALLOCATION@@QEAA@XZ @ 0x1C02D2354
 * Callers:
 *     ??0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ @ 0x1C00468E0 (--0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

DXGADAPTERALLOCATION *__fastcall DXGADAPTERALLOCATION::DXGADAPTERALLOCATION(DXGADAPTERALLOCATION *this)
{
  *((_DWORD *)this + 1) = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  return this;
}
