/*
 * XREFs of ?PanDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C029E280
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PanDisableSurface(struct DHPDEV__ *a1)
{
  SURFOBJ *v2; // rcx
  HSURF hsurf; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = *((_QWORD *)a1 + 10);
  v4 = *((_QWORD *)a1 + 11);
  v6 = *((_QWORD *)a1 + 12);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v4);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v5);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v6);
  v2 = (SURFOBJ *)*((_QWORD *)a1 + 8);
  hsurf = v2->hsurf;
  EngUnlockSurface(v2);
  EngDeleteSurface(hsurf);
  EngDeleteSurface(*((HSURF *)a1 + 7));
  EngUnlockSurface(*((SURFOBJ **)a1 + 9));
  (*((void (__fastcall **)(_QWORD))a1 + 103))(*((_QWORD *)a1 + 4));
}
