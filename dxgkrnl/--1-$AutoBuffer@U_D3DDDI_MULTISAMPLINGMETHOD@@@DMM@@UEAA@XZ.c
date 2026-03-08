/*
 * XREFs of ??1?$AutoBuffer@U_D3DDDI_MULTISAMPLINGMETHOD@@@DMM@@UEAA@XZ @ 0x1C0069F04
 * Callers:
 *     ??_G?$AutoBuffer@U_D3DDDI_MULTISAMPLINGMETHOD@@@DMM@@UEAAPEAXI@Z @ 0x1C0069F70 (--_G-$AutoBuffer@U_D3DDDI_MULTISAMPLINGMETHOD@@@DMM@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void **__fastcall DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::~AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>(_QWORD *a1)
{
  void *v2; // rcx
  void **result; // rax

  *a1 = &DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`vftable'{for `SetElement'};
  a1[3] = &DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`vftable'{for `NonReferenceCounted'};
  v2 = (void *)a1[4];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  a1[3] = &SetElement::`vftable';
  result = &SetElement::`vftable';
  *a1 = &SetElement::`vftable';
  return result;
}
