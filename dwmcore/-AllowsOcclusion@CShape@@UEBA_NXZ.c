/*
 * XREFs of ?AllowsOcclusion@CShape@@UEBA_NXZ @ 0x1800DDFA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CShape::AllowsOcclusion(CShape *this)
{
  char v1; // bl
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(CShape *, int *))(*(_QWORD *)this + 64LL))(this, &v3) )
    return v3 == 1;
  return v1;
}
