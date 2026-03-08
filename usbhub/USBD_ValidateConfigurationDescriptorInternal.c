/*
 * XREFs of USBD_ValidateConfigurationDescriptorInternal @ 0x1C003223C
 * Callers:
 *     UsbhValidateConfigurationDescriptor @ 0x1C00525F0 (UsbhValidateConfigurationDescriptor.c)
 * Callees:
 *     memset @ 0x1C0023880 (memset.c)
 */

__int64 __fastcall USBD_ValidateConfigurationDescriptorInternal(
        unsigned __int16 *a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int8 **a4)
{
  unsigned __int8 *v4; // r14
  unsigned __int8 *v5; // rbp
  int v6; // ebx
  __int16 v7; // r13
  unsigned __int8 *v8; // rdi
  unsigned __int8 *v9; // r12
  unsigned int v10; // ecx
  int v11; // edx
  char *Pool2; // r15
  _BYTE *v14; // r10
  unsigned __int8 *v15; // rsi
  unsigned __int8 *v16; // r8
  __int64 v17; // rdx
  int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r12
  __int64 v22; // r13
  __int64 v23; // rax
  unsigned __int64 v24; // [rsp+20h] [rbp-48h]
  _BYTE *P; // [rsp+70h] [rbp+8h]
  char v26; // [rsp+80h] [rbp+18h]
  unsigned __int8 **v27; // [rsp+88h] [rbp+20h]
  __int16 v29; // [rsp+90h] [rbp+28h]

  v27 = a4;
  v4 = 0LL;
  v5 = (unsigned __int8 *)a1;
  v29 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0LL;
  v26 = 1;
  if ( a1 && a2 >= 9 && a4 )
  {
    if ( *(_BYTE *)a1 >= 9u )
    {
      if ( *((_BYTE *)a1 + 1) == 2 )
      {
        v9 = (unsigned __int8 *)(a1 + 1);
        v10 = a1[1];
        if ( v10 > a2 || (v11 = v5[4], v10 < 9 * (v11 + 1)) )
        {
          v6 = -1072693242;
          v5 = v9;
        }
        else
        {
          if ( !(_BYTE)v11 )
          {
LABEL_15:
            *a4 = v4;
            return (unsigned int)v6;
          }
          Pool2 = (char *)ExAllocatePool2(64LL, 516LL, 1112885333LL);
          if ( Pool2 )
          {
            P = (_BYTE *)ExAllocatePool2(64LL, 256LL, 1112885333LL);
            v14 = P;
            if ( P )
            {
              v15 = v5 + 9;
              v16 = &v5[*(unsigned __int16 *)v9];
              v24 = (unsigned __int64)v16;
              while ( v15 < v16 )
              {
                if ( (unsigned __int64)(v16 - v15) < 2 )
                {
                  v6 = -1072693248;
                  goto LABEL_63;
                }
                v17 = *v15;
                if ( &v15[v17] > v16 )
                  goto LABEL_61;
                switch ( v15[1] )
                {
                  case 4u:
                    if ( (_BYTE)v17 != 9 )
                    {
LABEL_61:
                      v6 = -1072693247;
                      goto LABEL_63;
                    }
                    v20 = v15[2];
                    v21 = v15[3];
                    if ( v26 )
                    {
                      if ( (_BYTE)v21 )
                        goto LABEL_40;
                      *Pool2 = v20;
                      *(_WORD *)(Pool2 + 1) = 256;
                      ++v7;
                      Pool2[514] = v15[4];
                      Pool2[515] = 0;
                      v14[v20] = 1;
                      v29 = v7;
                      v26 = 0;
                    }
                    else
                    {
                      if ( (_BYTE)v20 == *Pool2 )
                      {
                        v22 = v15[3];
                        if ( Pool2[v21 + 2] == 1 || (unsigned __int8)Pool2[1] >= (unsigned __int8)v21 )
                        {
LABEL_40:
                          v6 = -1072693245;
                          v8 = v15 + 3;
                          goto LABEL_53;
                        }
                      }
                      else
                      {
                        if ( v14[v20] == 1 || (unsigned __int8)*Pool2 > (unsigned __int8)v20 )
                        {
                          v6 = -1072693245;
                          v8 = v15 + 2;
                          goto LABEL_53;
                        }
                        if ( (_BYTE)v21 )
                          goto LABEL_40;
                        v14[v20] = 1;
                        *Pool2 = v20;
                        v29 = v7 + 1;
                        memset(Pool2 + 2, 0, 0x100uLL);
                        v22 = 0LL;
                      }
                      if ( Pool2[515] != Pool2[514] )
                      {
                        v6 = -1072693240;
                        goto LABEL_63;
                      }
                      memset(Pool2 + 258, 0, 0x100uLL);
                      v16 = (unsigned __int8 *)v24;
                      v14 = P;
                      Pool2[515] = 0;
                      Pool2[514] = v15[4];
                      Pool2[v22 + 2] = 1;
                      v7 = v29;
                      Pool2[1] = v21;
                    }
                    break;
                  case 5u:
                    if ( (_BYTE)v17 != 7 )
                      goto LABEL_61;
                    if ( v26 )
                    {
                      v6 = -1072693244;
                      goto LABEL_63;
                    }
                    v19 = v15[2];
                    if ( Pool2[v19 + 258] )
                    {
                      v6 = -1072693239;
                      v8 = v15 + 2;
                      goto LABEL_53;
                    }
                    Pool2[v19 + 258] = 1;
                    ++Pool2[515];
                    break;
                  case 0xBu:
                    if ( (_BYTE)v17 != 8
                      || (v18 = v15[3], v18 + (unsigned int)v15[2] > 0x100)
                      || (unsigned __int8)v18 > v5[4]
                      || !(_BYTE)v18 )
                    {
                      v6 = -1072693243;
LABEL_63:
                      v8 = v15;
                      goto LABEL_53;
                    }
                    break;
                }
                v23 = *v15;
                if ( !(_BYTE)v23 )
                  break;
                v15 += v23;
              }
              if ( v7 == v5[4] )
                goto LABEL_53;
              v6 = -1072693241;
            }
            else
            {
              v6 = -1073737728;
            }
            v8 = v5;
LABEL_53:
            v5 = v8;
            ExFreePoolWithTag(Pool2, 0);
            if ( P )
              ExFreePoolWithTag(P, 0);
            if ( v6 >= 0 )
            {
              a4 = v27;
              goto LABEL_15;
            }
          }
          else
          {
            v6 = -1073737728;
          }
          a4 = v27;
        }
      }
      else
      {
        v6 = -1072693246;
        v5 = (unsigned __int8 *)a1 + 1;
      }
    }
    else
    {
      v6 = -1072693247;
    }
    v4 = v5;
    goto LABEL_15;
  }
  return 3221237760LL;
}
