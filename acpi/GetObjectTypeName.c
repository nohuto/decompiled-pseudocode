/*
 * XREFs of GetObjectTypeName @ 0x1C004BD50
 * Callers:
 *     CopyObjBuffer @ 0x1C00054F2 (CopyObjBuffer.c)
 *     ObjTypeSizeOf @ 0x1C00067D0 (ObjTypeSizeOf.c)
 *     AMLIEvalPackageElement @ 0x1C0047D64 (AMLIEvalPackageElement.c)
 *     AMLIEvalPkgDataElement @ 0x1C0047F38 (AMLIEvalPkgDataElement.c)
 *     FreeObjData @ 0x1C004B544 (FreeObjData.c)
 *     NewObjData @ 0x1C004C19C (NewObjData.c)
 *     ValidateArgTypes @ 0x1C004CEEC (ValidateArgTypes.c)
 *     ValidateTarget @ 0x1C004D4F0 (ValidateTarget.c)
 *     PrintObject @ 0x1C004E4C8 (PrintObject.c)
 *     DumpObject @ 0x1C0051E98 (DumpObject.c)
 *     ReadField @ 0x1C0052AE0 (ReadField.c)
 *     WriteField @ 0x1C0053090 (WriteField.c)
 *     WriteObject @ 0x1C00532A0 (WriteObject.c)
 *     Release @ 0x1C0055850 (Release.c)
 *     ResetSignal @ 0x1C00559C0 (ResetSignal.c)
 *     Acquire @ 0x1C0055C90 (Acquire.c)
 *     Concat @ 0x1C0055F60 (Concat.c)
 *     ProcessIncDec @ 0x1C0058510 (ProcessIncDec.c)
 *     Wait @ 0x1C0059630 (Wait.c)
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
