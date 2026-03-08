/*
 * XREFs of ?EmitUpdateCommands@CEllipseGeometryMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00C9D40
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CGeometryMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C005E420 (-EmitUpdateCommands@CGeometryMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_53685143d0904b5d5cdfb69f66573813___ @ 0x1C00C9DB4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_53685143d0904b5d5cdfb69f6657381.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5bea786e8876dcb1119559967ea518ff___ @ 0x1C025466C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_5bea786e8876dcb1119559967ea518f.c)
 */

char __fastcall DirectComposition::CEllipseGeometryMarshaler::EmitUpdateCommands(
        DirectComposition::CEllipseGeometryMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CEllipseGeometryMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CGeometryMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x800) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5bea786e8876dcb1119559967ea518ff___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x800u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x1000) == 0 )
      return 1;
    if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_53685143d0904b5d5cdfb69f66573813___(
                            this,
                            a2,
                            &v7) )
    {
      *((_DWORD *)this + 4) &= ~0x1000u;
      return 1;
    }
  }
  return v4;
}
