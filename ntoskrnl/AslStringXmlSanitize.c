/*
 * XREFs of AslStringXmlSanitize @ 0x1407A0D70
 * Callers:
 *     AslpFileMakeStringVersionAttributes @ 0x1407A0A68 (AslpFileMakeStringVersionAttributes.c)
 *     AslpFileGetClrVersionAttribute @ 0x140A55514 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x140A55A30 (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetPeExportNameExeWrapper @ 0x140A5609C (AslpFileGetPeExportNameExeWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AslStringXmlSanitize(_WORD *a1)
{
  unsigned __int64 v2; // r8
  unsigned __int64 i; // rax
  unsigned __int16 v4; // dx
  unsigned __int64 v5; // rcx

  if ( !a1 )
    return 3221225485LL;
  if ( *a1 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( a1[v2] );
    for ( i = 0LL; i < v2; ++i )
    {
      v4 = a1[i];
      v5 = 0LL;
      while ( v4 < *(_WORD *)((char *)qword_140016E78 + v5) || v4 > *(_WORD *)((char *)qword_140016E78 + v5 + 2) )
      {
        v5 += 4LL;
        if ( v5 >= 0x14 )
        {
          a1[i] = 64;
          break;
        }
      }
    }
  }
  return 0LL;
}
