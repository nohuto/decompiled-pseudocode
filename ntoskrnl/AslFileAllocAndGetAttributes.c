/*
 * XREFs of AslFileAllocAndGetAttributes @ 0x1407A11E8
 * Callers:
 *     SdbpCheckAllAttributes @ 0x1407A24E8 (SdbpCheckAllAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     AslpFileGetVersionAttributes @ 0x1407A0DEC (AslpFileGetVersionAttributes.c)
 *     AslFileMappingEnsure @ 0x1407A12F0 (AslFileMappingEnsure.c)
 *     AslpFileGetChecksumAttributes @ 0x140A55198 (AslpFileGetChecksumAttributes.c)
 *     AslpFileGetClrVersionAttribute @ 0x140A55514 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetFileKindDetailAttribute @ 0x140A559AC (AslpFileGetFileKindDetailAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x140A55A30 (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetHeaderAttributesPE @ 0x140A55BD4 (AslpFileGetHeaderAttributesPE.c)
 *     AslpFileGetPeExportNameExeWrapper @ 0x140A5609C (AslpFileGetPeExportNameExeWrapper.c)
 *     AslpFileLargeEnsureLargeFileMapping @ 0x140A56884 (AslpFileLargeEnsureLargeFileMapping.c)
 */

__int64 __fastcall AslFileAllocAndGetAttributes(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  __int64 v4; // rbp
  int v6; // eax
  int HeaderAttributesNE; // ebx
  int v8; // esi
  __int64 j; // r13
  int VersionAttributes; // eax
  int v12; // edx
  int *i; // rax
  int v14; // ecx
  int v15; // ecx
  bool v16; // zf
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // [rsp+70h] [rbp+18h]

  v23 = (unsigned __int64)a3;
  v4 = a2;
  if ( !a3 )
    return 0;
  if ( *(_DWORD *)(a2 + 64) == 1 )
  {
    v12 = 0;
    for ( i = (int *)(a1 + 24); ; i += 8 )
    {
      v14 = *i;
      if ( !v12 || v12 == 17 )
        break;
      if ( v12 == 28 )
      {
        *((_QWORD *)i - 1) = 1LL;
LABEL_27:
        *(i - 6) = 2;
        v15 = v14 | 1;
        *((_QWORD *)i - 2) = 4LL;
        goto LABEL_28;
      }
      v15 = v14 | 2;
LABEL_28:
      *i = v15;
      if ( ++v12 >= 34 )
        return 0;
    }
    *((_QWORD *)i - 1) = 0LL;
    goto LABEL_27;
  }
  if ( *(_DWORD *)(a2 + 80) )
  {
    LODWORD(a2) = 0;
    a3 = (_DWORD *)(a1 + 24);
    do
    {
      if ( (unsigned int)a2 > 0x1C )
      {
        if ( (_DWORD)a2 != 29 && (_DWORD)a2 != 30 && (_DWORD)a2 != 31 )
        {
          v16 = (_DWORD)a2 == 33;
LABEL_42:
          if ( !v16 )
            *a3 |= 2u;
        }
      }
      else if ( (_DWORD)a2 != 28 && (_DWORD)a2 != 1 && (_DWORD)a2 != 17 && (_DWORD)a2 != 18 && (_DWORD)a2 != 19 )
      {
        v16 = (_DWORD)a2 == 22;
        goto LABEL_42;
      }
      a2 = (unsigned int)(a2 + 1);
      a3 += 8;
    }
    while ( (int)a2 < 34 );
  }
  v6 = AslFileMappingEnsure(v4, a2, a3, a4);
  HeaderAttributesNE = v6;
  if ( v6 == -1073741801 )
  {
    if ( !*(_DWORD *)(v4 + 80) )
    {
      HeaderAttributesNE = AslpFileLargeEnsureLargeFileMapping(a1, v4);
      if ( HeaderAttributesNE >= 0 )
        goto LABEL_6;
    }
  }
  else if ( v6 >= 0 )
  {
LABEL_6:
    v8 = 0;
    for ( j = 0LL; ; j += 32LL )
    {
      if ( ((v23 >> v8) & 1) != 0 && (*(_DWORD *)(a1 + j + 24) & 3) == 0 )
      {
        if ( v8 > 17 )
        {
          if ( v8 <= 26 )
          {
            switch ( v8 )
            {
              case 26:
                goto LABEL_81;
              case 18:
              case 19:
                goto LABEL_86;
              case 20:
              case 21:
                HeaderAttributesNE = AslpFileGetHeaderAttributesNE(a1, v4);
                if ( HeaderAttributesNE < 0 )
                  goto LABEL_48;
                goto LABEL_8;
              case 22:
                goto LABEL_86;
            }
            if ( v8 != 24 )
            {
              HeaderAttributesNE = AslpFileGetPeExportNameExeWrapper(a1, v4);
              if ( HeaderAttributesNE < 0 )
                break;
              goto LABEL_8;
            }
            goto LABEL_17;
          }
          if ( v8 == 27 )
          {
            HeaderAttributesNE = AslpFileGetClrVersionAttribute(a1, v4);
            if ( HeaderAttributesNE < 0 )
              break;
            goto LABEL_8;
          }
          if ( v8 == 28 )
          {
            HeaderAttributesNE = AslpFileGetFileKindDetailAttribute(a1, v4);
            if ( HeaderAttributesNE < 0 )
              break;
            goto LABEL_8;
          }
          if ( v8 != 32 )
          {
LABEL_86:
            HeaderAttributesNE = AslpFileGetHeaderAttributesPE(a1, v4);
            if ( HeaderAttributesNE < 0 )
              break;
            goto LABEL_8;
          }
        }
        else
        {
          if ( v8 == 17 )
          {
            switch ( *(_DWORD *)(v4 + 64) )
            {
              case 4:
                v21 = 1LL;
                break;
              case 5:
                v21 = 2LL;
                break;
              case 6:
                v21 = 3LL;
                break;
              default:
                v21 = 0LL;
                break;
            }
            *(_DWORD *)(a1 + 568) |= 1u;
            *(_DWORD *)(a1 + 544) = 2;
            *(_QWORD *)(a1 + 552) = 4LL;
            *(_QWORD *)(a1 + 560) = v21;
            goto LABEL_8;
          }
          if ( v8 > 8 )
          {
            if ( v8 != 9 && v8 != 10 )
            {
              v17 = v8 - 11;
              if ( v8 != 11 )
                goto LABEL_53;
            }
            goto LABEL_17;
          }
          if ( v8 == 8 )
            goto LABEL_17;
          if ( v8 )
          {
            if ( v8 == 1 )
              goto LABEL_86;
            v17 = v8 - 2;
            if ( v8 == 2 )
            {
LABEL_81:
              HeaderAttributesNE = AslpFileGetChecksumAttributes(a1, v4);
              if ( HeaderAttributesNE < 0 )
                break;
              goto LABEL_8;
            }
LABEL_53:
            v18 = v17 - 1;
            if ( v18 )
            {
              v19 = v18 - 1;
              if ( v19 )
              {
                v20 = v19 - 1;
                if ( v20 )
                {
                  if ( (unsigned int)(v20 - 1) >= 2 )
                    return (unsigned int)-1073741595;
                }
              }
            }
LABEL_17:
            VersionAttributes = AslpFileGetVersionAttributes(a1, v4);
            if ( VersionAttributes <= -1073741688 || (unsigned int)(VersionAttributes + 1073741684) <= 0x3FFFFF73 )
              AslLogCallPrintf(1LL);
            goto LABEL_8;
          }
        }
        v22 = *(_QWORD *)(v4 + 24);
        *(_DWORD *)(a1 + 1048) |= 1u;
        *(_DWORD *)(a1 + 24) |= 1u;
        *(_QWORD *)(a1 + 16) = (unsigned int)v22;
        *(_DWORD *)(a1 + 1024) = 3;
        *(_QWORD *)(a1 + 1032) = 8LL;
        *(_QWORD *)(a1 + 1040) = v22;
        *(_DWORD *)a1 = 2;
        *(_QWORD *)(a1 + 8) = 4LL;
      }
LABEL_8:
      if ( ++v8 >= 34 )
        return 0;
    }
  }
LABEL_48:
  AslLogCallPrintf(1LL);
  return (unsigned int)HeaderAttributesNE;
}
