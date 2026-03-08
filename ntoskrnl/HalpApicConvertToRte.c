/*
 * XREFs of HalpApicConvertToRte @ 0x14039EE14
 * Callers:
 *     HalpApicSetLineState @ 0x14039ED20 (HalpApicSetLineState.c)
 * Callees:
 *     HalpApicConvertId @ 0x1403AD430 (HalpApicConvertId.c)
 */

__int64 __fastcall HalpApicConvertToRte(_DWORD *a1, int *a2, int *a3)
{
  int v3; // r9d
  int v4; // r10d
  int v5; // ebx
  unsigned int v9; // r11d
  int v10; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // edx
  __int64 result; // rax
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // [rsp+30h] [rbp+8h] BYREF

  v19 = 0;
  v3 = 0;
  v4 = a1[3];
  v5 = 0;
  v9 = -1073741637;
  if ( (v4 & 1) == 0 )
  {
    v5 = 65791;
    v9 = 0;
    goto LABEL_11;
  }
  v10 = a1[12];
  if ( (v10 & 0xFFFFFF00) == 0 )
  {
    v5 = (unsigned __int8)v10;
    if ( a1[4] == -1 )
    {
      v11 = a1[6];
      if ( v11 == 7 )
      {
        v12 = a1[8];
        if ( KeGetCurrentPrcb()->CpuVendor == 1 )
        {
          v5 = a1[8] & 0x1FF;
        }
        else
        {
          v3 = (v12 << 17) | 0x10000;
          if ( (v12 & 0x8000) == 0 )
            goto LABEL_7;
        }
LABEL_46:
        v5 |= 0x800u;
        goto LABEL_7;
      }
      if ( v11 == 8 )
      {
        v5 = a1[8];
        v3 = a1[9];
        goto LABEL_7;
      }
      switch ( a1[5] )
      {
        case 1:
          if ( v11 != 4 && (v4 & 2) != 0 )
            v5 = (unsigned __int8)v10 | 0x100;
          break;
        case 2:
          v5 = 1024;
          break;
        case 3:
          v5 = (unsigned __int8)v10 | 0x200;
          break;
        case 4:
          v5 = (unsigned __int8)v10 | 0x700;
          break;
        case 7:
          v5 = (unsigned __int8)v10 | 0x500;
          break;
        default:
          goto LABEL_11;
      }
      if ( HalpApicGuestX2Mode )
      {
        v5 &= ~0x100u;
        goto LABEL_7;
      }
      v15 = v11 - 1;
      if ( !v15 )
      {
        v3 = HalpApicX2Mode != 0 ? -1 : -16777216;
        goto LABEL_7;
      }
      v16 = v15 - 2;
      if ( !v16 )
      {
LABEL_7:
        v13 = v5 | 0x8000;
        if ( a1[2] )
          v13 = v5;
        v9 = 0;
        v5 = v13 | 0x2000;
        if ( *a1 != 2 )
          v5 = v13;
        goto LABEL_11;
      }
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          if ( v18 != 1 )
          {
            v5 |= 0x800u;
            goto LABEL_11;
          }
          if ( !HalpApicX2Mode )
          {
            v3 = (*((unsigned __int16 *)a1 + 18) | (unsigned __int16)(16 * *((_WORD *)a1 + 16))) << 24;
            goto LABEL_46;
          }
          if ( KeGetCurrentPrcb()->CpuVendor != 1 )
          {
            v3 = a1[9] | (a1[8] << 16);
            goto LABEL_46;
          }
          HalpApicConvertId(0LL, &v19);
          v3 = v19;
LABEL_43:
          v3 <<= 24;
          goto LABEL_7;
        }
        v5 |= 0x800u;
      }
      else if ( HalpApicX2Mode )
      {
        v3 = a1[8];
        if ( KeGetCurrentPrcb()->CpuVendor != 1 )
          goto LABEL_7;
        goto LABEL_43;
      }
      v3 = a1[8];
      goto LABEL_43;
    }
  }
LABEL_11:
  result = v9;
  *a2 = v5;
  *a3 = v3;
  return result;
}
