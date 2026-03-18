/*
 * XREFs of GetObjectTypeName @ 0x1C004BD70
 * Callers:
 *     CopyObjBuffer @ 0x1C00054F2 (CopyObjBuffer.c)
 *     ObjTypeSizeOf @ 0x1C00067D0 (ObjTypeSizeOf.c)
 *     AMLIEvalPackageElement @ 0x1C0047D84 (AMLIEvalPackageElement.c)
 *     AMLIEvalPkgDataElement @ 0x1C0047F58 (AMLIEvalPkgDataElement.c)
 *     FreeObjData @ 0x1C004B564 (FreeObjData.c)
 *     NewObjData @ 0x1C004C1BC (NewObjData.c)
 *     ValidateArgTypes @ 0x1C004CF0C (ValidateArgTypes.c)
 *     ValidateTarget @ 0x1C004D510 (ValidateTarget.c)
 *     PrintObject @ 0x1C004E4E8 (PrintObject.c)
 *     DumpObject @ 0x1C0051EB8 (DumpObject.c)
 *     ReadField @ 0x1C0052B00 (ReadField.c)
 *     WriteField @ 0x1C00530B0 (WriteField.c)
 *     WriteObject @ 0x1C00532C0 (WriteObject.c)
 *     Release @ 0x1C0055870 (Release.c)
 *     ResetSignal @ 0x1C00559E0 (ResetSignal.c)
 *     Acquire @ 0x1C0055CB0 (Acquire.c)
 *     Concat @ 0x1C0055F80 (Concat.c)
 *     ProcessIncDec @ 0x1C0058530 (ProcessIncDec.c)
 *     Wait @ 0x1C0059650 (Wait.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetObjectTypeName(int a1)
{
  __int64 result; // rax
  int v2; // r8d
  __int64 v3; // r9
  __int64 v4; // rdx

  result = 0LL;
  v2 = 0;
  if ( off_1C006DF68 )
  {
    v3 = 0LL;
    v4 = 0LL;
    while ( a1 != *(_DWORD *)((char *)&unk_1C006DF60 + v4) )
    {
      ++v3;
      ++v2;
      v4 = 16 * v3;
      if ( !*((_QWORD *)&unk_1C006DF60 + 2 * v3 + 1) )
        return result;
    }
    return *((_QWORD *)&unk_1C006DF60 + 2 * v2 + 1);
  }
  return result;
}
