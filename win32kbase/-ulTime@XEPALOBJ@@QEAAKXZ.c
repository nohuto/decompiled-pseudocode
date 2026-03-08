/*
 * XREFs of ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C017E42C
 * Callers:
 *     vMatchAPal @ 0x1C0184D50 (vMatchAPal.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C0199BBC (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XEPALOBJ::ulTime(XEPALOBJ *this)
{
  __int64 v1; // rax
  __int64 v2; // rcx

  v1 = *(_QWORD *)this;
  v2 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  if ( v2 == v1 )
    return *(unsigned int *)(v1 + 32);
  else
    return *(unsigned int *)(v2 + 32);
}
