__int64 __fastcall InverseXformMPORect3(unsigned int *a1, unsigned int *a2, int *a3)
{
  __int64 result; // rax
  unsigned int v5; // r11d
  int v6; // r9d
  unsigned int v7; // ecx
  int v8; // ebp
  int v9; // r10d
  int v10; // ebx
  int v11; // r9d
  int v12; // r11d
  unsigned int v13; // r12d
  unsigned int v14; // r14d
  unsigned int v15; // r13d
  unsigned int v16; // r15d
  int v17; // ebp
  int v18; // esi
  unsigned int v19; // r8d
  int v20; // eax
  unsigned int v21; // ecx
  int v22; // eax
  int v23; // eax

  result = *a2;
  v5 = a2[7];
  v6 = a3[2];
  v7 = a2[5];
  v8 = *a3;
  if ( (result & 2) != 0 )
    v9 = v5 - v6;
  else
    v9 = v8 - v7;
  if ( (result & 1) != 0 )
    v10 = a2[8] - a3[3];
  else
    v10 = a3[1] - a2[6];
  v11 = v6 - v8;
  v12 = v5 - v7;
  v13 = a2[1];
  v14 = a2[3] - v13;
  v15 = a2[2];
  v16 = a2[4] - v15;
  v17 = a3[3] - a3[1];
  v18 = a2[8] - a2[6];
  if ( v12 > 0 && v18 > 0 )
  {
    switch ( a2[13] )
    {
      case 1u:
        v19 = v13 + (int)(v9 * v14) / v12;
        v23 = v10 * v16;
        break;
      case 2u:
        v19 = v13 + (int)(v10 * v14) / v18;
        v20 = v16 * (v12 - v11 - v9);
LABEL_14:
        v21 = v20 / v12 + v15;
        a1[2] = v19 + (int)(v14 * v17) / v18;
        v22 = (int)(v16 * v11) / v12;
LABEL_19:
        result = v21 + v22;
        *a1 = v19;
        a1[3] = result;
        a1[1] = v21;
        return result;
      case 3u:
        v19 = v13 + (int)(v14 * (v12 - v11 - v9)) / v12;
        v23 = v16 * (v18 - v17 - v10);
        break;
      case 4u:
        v19 = v13 + (int)(v14 * (v18 - v17 - v10)) / v18;
        v20 = v9 * v16;
        goto LABEL_14;
      default:
        return result;
    }
    v21 = v23 / v18 + v15;
    a1[2] = v19 + (int)(v14 * v11) / v12;
    v22 = (int)(v16 * v17) / v18;
    goto LABEL_19;
  }
  *(_OWORD *)a1 = *(_OWORD *)(a2 + 1);
  return result;
}
