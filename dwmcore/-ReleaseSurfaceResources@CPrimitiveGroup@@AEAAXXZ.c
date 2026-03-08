/*
 * XREFs of ?ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ @ 0x1800E08F0
 * Callers:
 *     ??1CPrimitiveGroup@@MEAA@XZ @ 0x1800134E4 (--1CPrimitiveGroup@@MEAA@XZ.c)
 *     ?ProcessClearSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_CLEARSURFACERESOURCES@@@Z @ 0x1800E08C8 (-ProcessClearSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEG.c)
 *     ?ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADDSURFACERESOURCES@@PEBXI@Z @ 0x1800E0964 (-ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGRO.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CPrimitiveGroup::ReleaseSurfaceResources(CPrimitiveGroup *this)
{
  __int64 v1; // rsi
  char *i; // rbx

  v1 = 0LL;
  for ( i = (char *)this + 136; (unsigned int)v1 < *((_DWORD *)this + 40); v1 = (unsigned int)(v1 + 1) )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)i + 8 * v1) + 16LL))(*(_QWORD *)(*(_QWORD *)i + 8 * v1));
  *((_DWORD *)i + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)i, 8u);
}
