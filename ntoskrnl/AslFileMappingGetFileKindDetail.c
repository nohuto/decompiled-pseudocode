/*
 * XREFs of AslFileMappingGetFileKindDetail @ 0x140A51B1C
 * Callers:
 *     AslpFileGetFileKindDetailAttribute @ 0x140A559AC (AslpFileGetFileKindDetailAttribute.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     AslFileMappingEnsure @ 0x1407A12F0 (AslFileMappingEnsure.c)
 *     AslFileMappingGetImageTypeEx @ 0x140A51CE0 (AslFileMappingGetImageTypeEx.c)
 */

__int64 __fastcall AslFileMappingGetFileKindDetail(int *a1, __int64 a2)
{
  bool v3; // zf
  int v5; // ebx
  int ImageType; // edi
  __int16 v8; // [rsp+70h] [rbp+38h] BYREF
  unsigned __int16 v9; // [rsp+78h] [rbp+40h] BYREF
  int v10; // [rsp+80h] [rbp+48h] BYREF
  int v11; // [rsp+88h] [rbp+50h] BYREF

  v3 = *(_DWORD *)(a2 + 64) == 1;
  v5 = 0;
  v9 = 0;
  v8 = 0;
  v11 = 0;
  v10 = 0;
  if ( !v3 )
  {
    ImageType = AslFileMappingEnsure(a2);
    if ( ImageType >= 0 )
    {
      switch ( *(_DWORD *)(a2 + 64) )
      {
        case 3:
          v5 = 2;
          goto LABEL_34;
        case 4:
          v5 = 3;
          goto LABEL_34;
        case 5:
          v5 = 4;
          goto LABEL_34;
        case 6:
          ImageType = AslFileMappingGetImageTypeEx(
                        (unsigned int)&v9,
                        (unsigned int)&v8,
                        (unsigned int)&v10,
                        (unsigned int)&v11,
                        a2);
          if ( ImageType >= 0 )
          {
            if ( v10 )
            {
              if ( v8 == 523 )
              {
                v5 = 15;
              }
              else if ( (v11 & 0x20002) == 0x20002 )
              {
                v5 = 14;
              }
              else
              {
                v5 = 13 - ((v11 & 0x20003) != 1);
              }
            }
            else if ( v8 == 523 )
            {
              if ( v9 == 512 )
              {
                v5 = 11;
              }
              else if ( v9 == 34404 )
              {
                v5 = 9;
              }
              else
              {
                v5 = 10;
                if ( v9 != 43620 )
                  v5 = 8;
              }
            }
            else if ( v9 == 332 )
            {
              v5 = 6;
            }
            else if ( v9 == 448 || v9 == 452 )
            {
              v5 = 7;
            }
            else
            {
              v5 = 5;
            }
            goto LABEL_34;
          }
          break;
        default:
          ImageType = -1073741823;
          break;
      }
    }
    AslLogCallPrintf(1LL);
    goto LABEL_35;
  }
  v5 = 1;
LABEL_34:
  ImageType = 0;
LABEL_35:
  if ( a1 )
    *a1 = v5;
  return (unsigned int)ImageType;
}
