/*
 * XREFs of AslFileMappingEnsure @ 0x140759400
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x1407592F8 (AslFileAllocAndGetAttributes.c)
 *     AslpFileGetVersionBlock @ 0x140759B0C (AslpFileGetVersionBlock.c)
 *     AslFileMappingGetFileKindDetail @ 0x140A547EC (AslFileMappingGetFileKindDetail.c)
 *     AslFileMappingGetImageTypeEx @ 0x140A549B0 (AslFileMappingGetImageTypeEx.c)
 *     AslpFileGetClrVersionAttribute @ 0x140A581C8 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x140A586E4 (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetHeaderAttributesPE @ 0x140A58888 (AslpFileGetHeaderAttributesPE.c)
 *     AslpFileGetPeExportNameExeWrapper @ 0x140A58D50 (AslpFileGetPeExportNameExeWrapper.c)
 * Callees:
 *     RtlFileMapMapView @ 0x1403B0C90 (RtlFileMapMapView.c)
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     AslpFileMappingGetFileKind @ 0x14075AC24 (AslpFileMappingGetFileKind.c)
 */

__int64 __fastcall AslFileMappingEnsure(__int64 a1)
{
  int FileKind; // edi
  _DWORD *v4; // rsi

  if ( !*(_DWORD *)(a1 + 80) )
  {
    if ( *(_QWORD *)(a1 + 32) )
      return 0;
    v4 = (_DWORD *)(a1 + 64);
    if ( *(_DWORD *)(a1 + 64) != 1 )
    {
      FileKind = RtlFileMapMapView(a1 + 8, 0);
      if ( FileKind >= 0 )
      {
        if ( *(_BYTE *)(a1 + 59) )
        {
          *v4 = 6;
        }
        else
        {
          FileKind = AslpFileMappingGetFileKind(a1 + 8, v4);
          if ( FileKind < 0 )
          {
            AslLogCallPrintf(1LL);
            *v4 = 3;
          }
        }
      }
      return (unsigned int)FileKind;
    }
    return 3221225758LL;
  }
  if ( *(_DWORD *)(a1 + 64) == 1 )
    return 3221225758LL;
  return *(_QWORD *)(a1 + 32) == 0LL ? 0xC000046D : 0;
}
