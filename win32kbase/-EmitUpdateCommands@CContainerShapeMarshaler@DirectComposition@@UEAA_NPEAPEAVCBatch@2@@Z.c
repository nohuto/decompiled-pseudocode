/*
 * XREFs of ?EmitUpdateCommands@CContainerShapeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A5D20
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_504b2e656b0331c347eaff34b8484def___ @ 0x1C00A5F40 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_504b2e656b0331c347eaff34b8484de.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_74734bdf69b91fcc75a9bbf9d319e20e___lambda_c8e4717179366f347b5fcb735f2cbba9___ @ 0x1C00A60CC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_74734bdf69b91fcc75a9bbf9d319e20.c)
 */

char __fastcall DirectComposition::CContainerShapeMarshaler::EmitUpdateCommands(
        DirectComposition::CContainerShapeMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char v3; // di
  __int64 v6; // r9
  DirectComposition::CContainerShapeMarshaler *v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v8 = this;
  if ( (v2 & 0x20) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_504b2e656b0331c347eaff34b8484def___(
                             this,
                             a2,
                             &v8) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x20u;
    v2 = *((_DWORD *)this + 4);
  }
  v6 = *((unsigned int *)this + 18);
  v8 = this;
  if ( (v2 & 0x40) == 0 )
    return 1;
  if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_74734bdf69b91fcc75a9bbf9d319e20e___lambda_c8e4717179366f347b5fcb735f2cbba9___(
                          this,
                          a2,
                          (char *)this + 76,
                          v6) )
  {
    *((_DWORD *)this + 4) &= ~0x40u;
    return 1;
  }
  return v3;
}
