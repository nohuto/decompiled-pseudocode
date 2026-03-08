/*
 * XREFs of ??_GCCustomKernelEffect@@EEAAPEAXI@Z @ 0x1800D1410
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CCustomKernelEffect *__fastcall CCustomKernelEffect::`scalar deleting destructor'(CCustomKernelEffect *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  CCustomKernelEffect *v6; // rcx

  v4 = *((_QWORD *)this + 5);
  v5 = (v4 - *((_QWORD *)this + 4)) >> 4;
  if ( v5 )
    *((_QWORD *)this + 5) = v4 - 16 * v5;
  v6 = (CCustomKernelEffect *)*((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = 0LL;
  if ( v6 == (CCustomKernelEffect *)((char *)this + 56) )
    v6 = 0LL;
  operator delete(v6);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x108uLL);
  return this;
}
