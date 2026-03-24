/*
 * XREFs of InverseXformMPORect3 @ 0x1C02A441C
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C02A4B6C (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InverseXformMPORect3(_DWORD *a1, _DWORD *a2, int *a3)
{
  int v4; // ebx
  int v5; // r11d
  int v6; // ebp
  int v7; // r15d
  int v8; // edi
  int v9; // r9d
  __int64 result; // rax
  int v11; // r10d
  int v12; // ecx
  int v13; // esi
  int v14; // ebx
  int v15; // r9d
  int v16; // r12d
  int v17; // r11d
  int v18; // r10d
  int v19; // r13d
  int v20; // r8d
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  int v24; // eax
  int v25; // [rsp+40h] [rbp+10h]
  int v26; // [rsp+48h] [rbp+18h]

  v4 = a2[7];
  v5 = a3[2];
  v6 = a2[5];
  v7 = *a3;
  if ( (*a2 & 2) != 0 )
    v8 = v4 - v5;
  else
    v8 = v7 - v6;
  v9 = a2[8];
  result = (unsigned int)a2[6];
  v11 = a3[3];
  v12 = a3[1];
  if ( (*a2 & 1) != 0 )
    v13 = v9 - v11;
  else
    v13 = v12 - result;
  v14 = v4 - v6;
  v15 = v9 - result;
  v16 = a2[3] - a2[1];
  v25 = a2[1];
  v17 = v5 - v7;
  v18 = v11 - v12;
  v19 = a2[4] - a2[2];
  v26 = a2[2];
  if ( v14 > 0 && v15 > 0 )
  {
    switch ( a2[13] )
    {
      case 1:
        v20 = v25 + v8 * v16 / v14;
        v24 = v13 * v19;
        break;
      case 2:
        v20 = v25 + v13 * v16 / v15;
        v21 = v19 * (v14 - v17 - v8);
LABEL_14:
        v22 = v26 + v21 / v14;
        a1[2] = v20 + v16 * v18 / v15;
        v23 = v19 * v17 / v14;
LABEL_19:
        result = (unsigned int)(v22 + v23);
        *a1 = v20;
        a1[3] = result;
        a1[1] = v22;
        return result;
      case 3:
        v20 = v25 + v16 * (v14 - v17 - v8) / v14;
        v24 = v19 * (v15 - v18 - v13);
        break;
      case 4:
        v20 = v25 + v16 * (v15 - v18 - v13) / v15;
        v21 = v8 * v19;
        goto LABEL_14;
      default:
        return result;
    }
    v22 = v26 + v24 / v15;
    a1[2] = v20 + v16 * v17 / v14;
    v23 = v19 * v18 / v15;
    goto LABEL_19;
  }
  *(_OWORD *)a1 = *(_OWORD *)(a2 + 1);
  return result;
}
