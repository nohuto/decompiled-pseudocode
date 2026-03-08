/*
 * XREFs of ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z @ 0x18004772C
 * Callers:
 *     ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180046BB8 (-Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18004705C (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FastRegion::Internal::CStripe::Copy(
        FastRegion::Internal::CStripe *this,
        const struct FastRegion::Internal::CStripe *a2)
{
  char *v3; // rax
  __int64 v4; // r9
  char *v5; // r8
  char *v6; // rdx
  __int64 v7; // r9
  __int64 v8; // r10
  _DWORD *v9; // rcx
  __int64 v10; // r8

  *(_DWORD *)this = *(_DWORD *)a2;
  v3 = (char *)a2 + 8;
  v4 = *((int *)a2 + 3);
  v5 = (char *)a2 + *((int *)a2 + 1);
  v6 = (char *)this + *((int *)this + 1);
  v7 = (__int64)&v3[v4 - (_QWORD)v5] >> 2;
  v8 = (int)v7;
  if ( (int)v7 > 0 )
  {
    v9 = (_DWORD *)((char *)this + *((int *)this + 1));
    v10 = v5 - v6;
    do
    {
      *v9 = *(_DWORD *)((char *)v9 + v10);
      ++v9;
      --v8;
    }
    while ( v8 );
  }
  *((_DWORD *)this + 3) = (_DWORD)v6 + 4 * v7 - ((_DWORD)this + 8);
}
