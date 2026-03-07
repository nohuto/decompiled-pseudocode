__int64 __fastcall NtGdiGetDIBitsInternal(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        unsigned int *Address,
        unsigned int a7,
        unsigned int a8)
{
  unsigned int DIBitsInternalImpl; // r15d
  __int64 v9; // r12
  unsigned int v10; // esi
  unsigned int v11; // edx
  unsigned int v12; // r11d
  int v13; // edi
  unsigned __int16 v14; // ax
  unsigned int v15; // ecx
  unsigned int v16; // r8d
  unsigned int v17; // r8d
  unsigned int v18; // r14d
  unsigned int *v19; // rdi
  unsigned int v20; // edx
  unsigned int v21; // r13d
  int v22; // r11d
  unsigned __int16 v23; // ax
  unsigned int v24; // ecx
  unsigned int v25; // r9d
  unsigned int v26; // r8d
  unsigned int v27; // eax
  int v28; // r13d
  unsigned int v29; // edx
  unsigned int v30; // ecx
  unsigned int v31; // edx
  int v32; // eax
  __int64 inited; // rax
  unsigned int v34; // eax
  unsigned int v35; // ecx
  unsigned int v36; // eax
  unsigned int BitmapBitsSize; // [rsp+78h] [rbp-100h]
  int v41; // [rsp+80h] [rbp-F8h]
  __int64 v42; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v43; // [rsp+A8h] [rbp-D0h]
  __int64 v44; // [rsp+B0h] [rbp-C8h]
  __int16 v45; // [rsp+B8h] [rbp-C0h]
  __int64 v46; // [rsp+C0h] [rbp-B8h]
  __int64 v47; // [rsp+C8h] [rbp-B0h]
  int v48[2]; // [rsp+D0h] [rbp-A8h]
  int v49[2]; // [rsp+D8h] [rbp-A0h]
  unsigned int *v50; // [rsp+E0h] [rbp-98h]
  _BYTE v51[24]; // [rsp+E8h] [rbp-90h] BYREF
  __int16 v52; // [rsp+100h] [rbp-78h]
  _DWORD v53[8]; // [rsp+108h] [rbp-70h] BYREF
  __int64 v54; // [rsp+128h] [rbp-50h]

  v46 = a2;
  v47 = a1;
  *(_QWORD *)v48 = a1;
  *(_QWORD *)v49 = a2;
  v50 = Address;
  BitmapBitsSize = a8;
  DIBitsInternalImpl = 0;
  v41 = 1;
  memset(v51, 0, sizeof(v51));
  v52 = 0;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0;
  memset(v53, 0, sizeof(v53));
  v54 = 0LL;
  if ( a7 <= 2 && Address && a2 )
  {
    v9 = 0LL;
    if ( a4 )
      v9 = a5;
    v10 = *Address;
    ProbeForWrite(Address, *Address, 1u);
    if ( !v9 )
    {
      if ( v10 == 12 && !*((_WORD *)Address + 5) )
      {
        v18 = 12;
        goto LABEL_72;
      }
      if ( v10 < 0x28 )
      {
LABEL_12:
        v11 = a7;
        if ( v10 == 12 )
        {
          v12 = 12;
          v13 = 3;
          v14 = *((_WORD *)Address + 5);
          v15 = 0;
          v16 = 0;
        }
        else
        {
          if ( v10 < 0x28 )
            goto LABEL_97;
          v12 = v10;
          v13 = 4;
          v14 = *((_WORD *)Address + 7);
          v15 = Address[8];
          v16 = Address[4];
        }
        switch ( v16 )
        {
          case 3u:
            if ( a7 == 1 )
              v11 = 0;
            if ( v14 != 32 && v14 != 16 )
              goto LABEL_97;
            if ( v10 <= 0x28 )
            {
              v17 = 3;
              v15 = 3;
              goto LABEL_21;
            }
            v17 = 0;
            goto LABEL_81;
          case 0u:
            if ( v14 > 8u )
              goto LABEL_77;
            if ( v14 == 1 )
            {
LABEL_90:
              v17 = 2;
              break;
            }
            if ( v14 != 4 )
            {
              if ( v14 != 8 )
              {
LABEL_77:
                if ( a7 == 1 )
                  v11 = 0;
                v17 = 0;
                if ( v14 != 32 && v14 != 16 && v14 != 24 )
                  goto LABEL_97;
                break;
              }
LABEL_101:
              v17 = 256;
              break;
            }
LABEL_120:
            v17 = 16;
            break;
          case 0xAu:
            switch ( v14 )
            {
              case 1u:
                goto LABEL_90;
              case 4u:
                goto LABEL_120;
              case 8u:
                goto LABEL_101;
            }
            if ( v14 != 32 )
              goto LABEL_97;
            v17 = 0;
            break;
          case 2u:
          case 0xCu:
            if ( v14 != 4 )
              goto LABEL_97;
            goto LABEL_120;
          case 1u:
          case 0xBu:
            if ( v14 != 8 )
              goto LABEL_97;
            v17 = 256;
            break;
          default:
            if ( v16 - 4 > 1 )
              goto LABEL_97;
            v17 = 0;
            break;
        }
        if ( v15 )
        {
LABEL_21:
          if ( v15 <= v17 )
            goto LABEL_22;
        }
LABEL_81:
        v15 = v17;
LABEL_22:
        if ( v11 == 1 )
        {
          v13 = 2;
        }
        else if ( v11 == 2 )
        {
          v13 = 0;
        }
        v18 = (v13 * v15 + v12 + 3) & 0xFFFFFFFC;
        if ( v18 >= v12 )
        {
LABEL_26:
          if ( !v18 )
          {
LABEL_73:
            v19 = v53;
            goto LABEL_74;
          }
          v19 = (unsigned int *)Win32AllocPoolZInit(v18, 1886221383LL);
          if ( !v19 )
          {
LABEL_74:
            v28 = a4;
            goto LABEL_60;
          }
          if ( (unsigned int *)((char *)Address + v18) < Address || (unsigned __int64)Address + v18 > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v19, Address, v18);
          *v19 = v10;
          v20 = a7;
          if ( v10 == 12 )
          {
            v26 = 3;
            v22 = 3;
            v23 = *((_WORD *)v19 + 5);
            v24 = 0;
            v25 = 0;
            v21 = 12;
          }
          else
          {
            if ( v10 < 0x28 )
              goto LABEL_125;
            v21 = v10;
            v22 = 4;
            v23 = *((_WORD *)v19 + 7);
            v24 = v19[8];
            v25 = v19[4];
            v26 = 3;
          }
          switch ( v25 )
          {
            case 3u:
              if ( a7 == 1 )
                v20 = 0;
              if ( v23 != 32 && v23 != 16 )
                goto LABEL_125;
              if ( v10 <= 0x28 )
              {
                v24 = 3;
                goto LABEL_39;
              }
              v26 = 0;
              goto LABEL_88;
            case 0u:
              if ( v23 > 8u )
                goto LABEL_84;
              if ( v23 == 1 )
              {
LABEL_92:
                v26 = 2;
                break;
              }
              if ( v23 != 4 )
              {
                if ( v23 != 8 )
                {
LABEL_84:
                  if ( a7 == 1 )
                    v20 = 0;
                  v26 = 0;
                  if ( v23 != 32 && v23 != 16 && v23 != 24 )
                    goto LABEL_125;
                  break;
                }
LABEL_129:
                v26 = 256;
                break;
              }
LABEL_148:
              v26 = 16;
              break;
            case 0xAu:
              switch ( v23 )
              {
                case 1u:
                  goto LABEL_92;
                case 4u:
                  goto LABEL_148;
                case 8u:
                  goto LABEL_129;
              }
              if ( v23 != 32 )
                goto LABEL_125;
              v26 = 0;
              break;
            case 2u:
            case 0xCu:
              if ( v23 != 4 )
                goto LABEL_125;
              goto LABEL_148;
            case 1u:
            case 0xBu:
              if ( v23 != 8 )
                goto LABEL_125;
              v26 = 256;
              break;
            default:
              if ( v25 - 4 > 1 )
                goto LABEL_125;
              v26 = 0;
              break;
          }
          if ( v24 )
          {
LABEL_39:
            if ( v24 <= v26 )
              goto LABEL_40;
          }
LABEL_88:
          v24 = v26;
LABEL_40:
          if ( v20 == 1 )
          {
            v22 = 2;
          }
          else if ( v20 == 2 )
          {
            v22 = 0;
          }
          v27 = (v22 * v24 + v21 + 3) & 0xFFFFFFFC;
          if ( v27 >= v21 )
          {
LABEL_44:
            if ( v27 != v18 )
            {
              v28 = a4;
              goto LABEL_70;
            }
            if ( v10 >= 0x28 )
              v19[8] = 0;
            v28 = a4;
            if ( !a4 )
            {
LABEL_60:
              if ( !v18 || !v9 || !v19 )
                goto LABEL_161;
              if ( *v19 < 0x28 || v19[4] - 1 > 1 || v19[5] )
              {
                if ( !a8 )
                  BitmapBitsSize = GreGetBitmapBitsSize(v19);
                if ( BitmapBitsSize )
                {
                  inited = umptr_w<unsigned char>::init_probe(v51, v9, BitmapBitsSize, 4LL);
                  v42 = *(_QWORD *)inited;
                  v43 = *(_QWORD *)(inited + 8);
                  v44 = *(_QWORD *)(inited + 16);
                  v45 = *(_WORD *)(inited + 24);
                }
                if ( v42 )
                {
LABEL_161:
                  if ( (!v42 || !v41) && v18 )
                  {
                    if ( !v19 )
                      return DIBitsInternalImpl;
                    DIBitsInternalImpl = GreGetDIBitsInternalImpl(
                                           v47,
                                           v46,
                                           a3,
                                           v28,
                                           (__int64)&v42,
                                           v19,
                                           a7,
                                           BitmapBitsSize,
                                           v18);
                    if ( DIBitsInternalImpl )
                      memmove(Address, v19, v18);
                  }
                  if ( v19 )
                  {
                    if ( v19 != v53 )
                      Win32FreePool(v19);
                  }
                  return DIBitsInternalImpl;
                }
              }
LABEL_70:
              v18 = 0;
              goto LABEL_161;
            }
            if ( v10 < 0x28 )
            {
              v34 = *((unsigned __int16 *)v19 + 3);
              v35 = a3;
              if ( v34 < a3 )
                v35 = *((unsigned __int16 *)v19 + 3);
              a3 = v35;
              v36 = v34 - v35;
              if ( v36 < a4 )
                v28 = v36;
              if ( *((_WORD *)v19 + 2) )
              {
                if ( *((_WORD *)v19 + 4) )
                {
                  v32 = 0;
                  if ( *((_WORD *)v19 + 5) )
                    goto LABEL_59;
                }
              }
            }
            else
            {
              v29 = -v19[2];
              if ( (v19[2] & 0x80000000) == 0 )
                v29 = v19[2];
              v30 = a3;
              if ( v29 < a3 )
                v30 = v29;
              a3 = v30;
              v31 = v29 - v30;
              if ( v31 < a4 )
                v28 = v31;
              if ( v19[1] && *((_WORD *)v19 + 6) && *((_WORD *)v19 + 7) )
              {
                v32 = 0;
LABEL_59:
                v41 = v32;
                goto LABEL_60;
              }
            }
            v32 = 1;
            goto LABEL_59;
          }
LABEL_125:
          v27 = 0;
          goto LABEL_44;
        }
LABEL_97:
        v18 = 0;
        goto LABEL_26;
      }
      if ( !*((_WORD *)Address + 7) )
      {
        v18 = 40;
LABEL_72:
        memmove(v53, Address, v18);
        v53[0] = v18;
        goto LABEL_73;
      }
    }
    if ( v10 == 40 )
      Address[8] = 0;
    goto LABEL_12;
  }
  return 0LL;
}
