/*
 * XREFs of ??0CLightStack@@QEAA@XZ @ 0x18003E994
 * Callers:
 *     ??0CDrawingContext@@AEAA@XZ @ 0x18003E3C8 (--0CDrawingContext@@AEAA@XZ.c)
 *     ??0COcclusionContext@@QEAA@XZ @ 0x18003E7C0 (--0COcclusionContext@@QEAA@XZ.c)
 *     ??0CPreComputeContext@@IEAA@PEAVCVisualTree@@@Z @ 0x1800444CC (--0CPreComputeContext@@IEAA@PEAVCVisualTree@@@Z.c)
 * Callees:
 *     <none>
 */

CLightStack *__fastcall CLightStack::CLightStack(CLightStack *this)
{
  *(_QWORD *)this = (char *)this + 32;
  *((_QWORD *)this + 1) = (char *)this + 32;
  *((_DWORD *)this + 4) = 4;
  *(_QWORD *)((char *)this + 20) = 4LL;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 44) = 0;
  *((_QWORD *)this + 23) = (char *)this + 216;
  *((_QWORD *)this + 24) = (char *)this + 216;
  *((_DWORD *)this + 50) = 3;
  *(_QWORD *)((char *)this + 204) = 3LL;
  return this;
}
