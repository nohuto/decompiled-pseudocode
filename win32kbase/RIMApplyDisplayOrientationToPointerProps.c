/*
 * XREFs of RIMApplyDisplayOrientationToPointerProps @ 0x1C01BCF7C
 * Callers:
 *     RIMApplyTransforms @ 0x1C01BD0C8 (RIMApplyTransforms.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMApplyDisplayOrientationToPointerProps(int a1, unsigned int *a2)
{
  __int64 result; // rax
  unsigned int v5; // edx
  bool v6; // cf
  unsigned int v7; // ecx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // r10d
  unsigned int v11; // edx
  bool v12; // cf
  unsigned int v13; // ecx
  unsigned int v14; // edx
  unsigned int v15; // edx
  int v16; // r9d
  int v17; // r9d
  unsigned int v18; // ecx
  unsigned int v19; // ecx

  result = a2[2];
  if ( (_DWORD)result != 2 )
  {
    if ( (_DWORD)result != 3 )
      return result;
    v10 = a2[27];
    if ( (v10 & 2) == 0 )
      goto LABEL_23;
    if ( a1 == 2 )
    {
      v15 = a2[29];
      v12 = v15 < 0x5A;
      result = v15 - 90;
      v13 = v15 + 270;
    }
    else
    {
      result = (unsigned int)(a1 - 3);
      if ( a1 == 3 )
      {
        v14 = a2[29];
        v12 = v14 < 0xB4;
        result = v14 - 180;
        v13 = v14 + 180;
      }
      else
      {
        if ( a1 != 4 )
        {
LABEL_23:
          if ( (v10 & 4) != 0 && (v10 & 8) != 0 )
          {
            v16 = a1 - 2;
            if ( v16 )
            {
              v17 = v16 - 1;
              if ( v17 )
              {
                if ( v17 == 1 )
                {
                  v18 = a2[31];
                  result = -a2[30];
                  a2[31] = result;
                  a2[30] = v18;
                }
              }
              else
              {
                a2[30] = -a2[30];
                result = -a2[31];
                a2[31] = result;
              }
            }
            else
            {
              v19 = a2[30];
              result = -a2[31];
              a2[30] = result;
              a2[31] = v19;
            }
          }
          return result;
        }
        v11 = a2[29];
        v12 = v11 < 0x10E;
        result = v11 - 270;
        v13 = v11 + 90;
      }
    }
    if ( !v12 )
      v13 = result;
    a2[29] = v13;
    goto LABEL_23;
  }
  result = a2[27];
  if ( (result & 2) == 0 )
    return result;
  switch ( a1 )
  {
    case 2:
      v9 = a2[36];
      v6 = v9 < 0x5A;
      result = v9 - 90;
      v7 = v9 + 270;
      break;
    case 3:
      v8 = a2[36];
      v6 = v8 < 0xB4;
      result = v8 - 180;
      v7 = v8 + 180;
      break;
    case 4:
      v5 = a2[36];
      v6 = v5 < 0x10E;
      result = v5 - 270;
      v7 = v5 + 90;
      break;
    default:
      return result;
  }
  if ( !v6 )
    v7 = result;
  a2[36] = v7;
  return result;
}
