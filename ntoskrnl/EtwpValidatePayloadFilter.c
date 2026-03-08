/*
 * XREFs of EtwpValidatePayloadFilter @ 0x1409F29F0
 * Callers:
 *     EtwpAllocatePayloadFilterData @ 0x1409F1BEC (EtwpAllocatePayloadFilterData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpValidatePayloadFilter(_QWORD *a1, __int16 *a2, unsigned int a3)
{
  __int16 v5; // dx
  int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // r10
  int v9; // eax
  int v10; // r14d
  unsigned __int64 v11; // rdi
  __int64 v12; // r11
  int v13; // eax
  unsigned int v14; // esi
  __int64 v15; // rbx
  int v16; // eax
  int v17; // r15d
  unsigned int v18; // ebp
  int v19; // eax
  int v20; // r12d
  int v21; // eax
  unsigned int v22; // esi
  unsigned int v23; // kr00_4
  __int64 v24; // rdi
  int v25; // ecx
  __int64 v26; // r12
  _WORD *v27; // r11
  int v28; // edx
  unsigned int v29; // ebp
  int v30; // r15d
  int v31; // r8d
  unsigned __int16 *v32; // r13
  __int64 v33; // r10
  unsigned int v34; // edx
  unsigned int v35; // ecx
  unsigned int v36; // ebx
  unsigned int v37; // r15d
  unsigned int v38; // r10d
  unsigned int v39; // r11d
  unsigned int v40; // ecx
  _WORD *v41; // rcx
  unsigned __int64 v42; // rdx
  _WORD *v43; // rcx
  _BYTE *v44; // rax
  unsigned __int64 i; // rdx
  int v47; // [rsp+0h] [rbp-98h]
  int v48; // [rsp+4h] [rbp-94h]
  int v49; // [rsp+Ch] [rbp-8Ch]
  int v50; // [rsp+14h] [rbp-84h]
  int v51; // [rsp+1Ch] [rbp-7Ch]
  int v52; // [rsp+24h] [rbp-74h]
  _WORD *v53; // [rsp+30h] [rbp-68h]
  _BYTE *v54; // [rsp+38h] [rbp-60h]
  __int64 v55; // [rsp+40h] [rbp-58h]
  __int64 v56; // [rsp+48h] [rbp-50h]
  __int64 v57; // [rsp+50h] [rbp-48h]
  int v58; // [rsp+B0h] [rbp+18h]
  int v59; // [rsp+B8h] [rbp+20h]

  if ( a3 >= 0x50 && (unsigned __int16)a2[1] == a3 && a3 <= 0x1000 )
  {
    v5 = *a2;
    if ( (v5 & 0xFFF) == 0xA66 && (v5 & 0xF000) == 0x1000 )
    {
      v6 = (unsigned __int16)a2[2];
      if ( (unsigned __int16)v6 <= 0xAAu && !a2[3] )
      {
        v7 = *a1 - *((_QWORD *)a2 + 2);
        if ( *a1 == *((_QWORD *)a2 + 2) )
          v7 = a1[1] - *((_QWORD *)a2 + 3);
        if ( !v7 )
        {
          v8 = (unsigned __int16)a2[16];
          v9 = 24 * v6 + 56;
          v10 = (unsigned __int16)a2[2];
          if ( (_DWORD)v8 == v9 )
          {
            v11 = (unsigned __int16)a2[17];
            v12 = (unsigned __int16)a2[18];
            v13 = v11 + v9;
            if ( (_DWORD)v12 == v13 )
            {
              v14 = (unsigned __int16)a2[19];
              v15 = (unsigned __int16)a2[20];
              v16 = v14 + v13;
              if ( (_DWORD)v15 == v16 )
              {
                v17 = (unsigned __int16)a2[22];
                v18 = (unsigned __int16)a2[21];
                v19 = v18 + v16;
                v48 = v17;
                if ( v17 == v19 )
                {
                  v20 = (unsigned __int16)a2[23];
                  v21 = v20 + v19;
                  v49 = (unsigned __int16)a2[24];
                  if ( v49 == v21 )
                  {
                    v51 = (unsigned __int16)a2[25];
                    if ( a3 == v51 + v21
                      && v11 == 12 * (v11 / 0xC)
                      && (v14 & 3) == 0
                      && (v18 & 3) == 0
                      && (v20 & 1) == 0
                      && (v8 & 3) == 0
                      && (v12 & 3) == 0
                      && (v15 & 3) == 0
                      && (v17 & 3) == 0 )
                    {
                      v22 = v14 >> 2;
                      v23 = (unsigned __int16)a2[17];
                      v24 = (__int64)a2 + v8;
                      v25 = 0;
                      v53 = (__int16 *)((char *)a2 + (unsigned __int16)v17);
                      v26 = (__int64)a2 + v12;
                      v27 = (__int16 *)((char *)a2 + v15);
                      v28 = (unsigned __int16)a2[23] >> 1;
                      v29 = v18 >> 2;
                      v47 = 0;
                      v30 = 0;
                      v58 = 0;
                      v31 = 0;
                      v59 = 0;
                      v32 = (unsigned __int16 *)(a2 + 28);
                      v33 = 0LL;
                      v55 = (__int64)a2 + v15;
                      v54 = (char *)a2 + (unsigned __int16)v49;
                      v50 = 0;
                      if ( v23 / 0xC )
                      {
                        while ( 1 )
                        {
                          v33 |= 1LL << (*(_WORD *)v24 % 0x3Fu);
                          v57 = v33;
                          if ( *(unsigned __int16 *)(v24 + 4) != v47 )
                            break;
                          v34 = *(unsigned __int16 *)(v24 + 6);
                          if ( v34 > v22 - v47 )
                            break;
                          v56 = v26;
                          v47 += v34;
                          v35 = 0;
                          if ( *(_WORD *)(v24 + 6) )
                          {
                            while ( *(_WORD *)(v26 + 2) < 0x40u
                                 && *(_BYTE *)(v26 + 1) < 0x40u
                                 && *(_BYTE *)v26 < 0x40u
                                 && (*(_BYTE *)v26 & 0xFu) < 9 )
                            {
                              ++v35;
                              v26 += 4LL;
                              if ( v35 >= v34 )
                                goto LABEL_34;
                            }
                            return 3221225485LL;
                          }
LABEL_34:
                          if ( *(unsigned __int16 *)(v24 + 8) != v30 )
                            break;
                          v36 = *(unsigned __int16 *)(v24 + 10);
                          if ( v36 > v29 - v30 )
                            break;
                          v52 = v36 + v30;
                          v37 = 0;
                          if ( *(_WORD *)(v24 + 10) )
                          {
                            while ( (*v27 & 0xFCu) <= 0x20 )
                            {
                              if ( (unsigned __int16)v27[1] != v59 )
                                break;
                              v38 = (unsigned __int8)*v27 >> 2;
                              if ( v38 > v10 - v59 )
                                break;
                              v59 += v38;
                              v39 = 0;
                              if ( v38 )
                              {
                                while ( 1 )
                                {
                                  v40 = *v32;
                                  if ( v40 >= v22
                                    || (unsigned __int16)v40 >= (unsigned __int16)v34
                                    || (unsigned __int16)v40 > *(unsigned __int8 *)(v24 + 3) )
                                  {
                                    return 3221225485LL;
                                  }
                                  if ( (*(_BYTE *)(v56 + 4LL * *v32) & 0xF) == 3 )
                                    break;
                                  if ( (*(_BYTE *)(v56 + 4LL * *v32) & 0xF) == 4 )
                                  {
                                    if ( *((_QWORD *)v32 + 1) != v58 || *((_QWORD *)v32 + 2) )
                                      return 3221225485LL;
                                    v41 = v53;
                                    v42 = (unsigned __int64)a2 + (unsigned int)(unsigned __int16)a2[23] + v48;
                                    v10 = (unsigned __int16)a2[2];
                                    if ( *v53 )
                                    {
                                      do
                                      {
                                        if ( (unsigned __int64)v41 >= v42 - 2 )
                                          break;
                                        ++v41;
                                      }
                                      while ( *v41 );
                                      v10 = (unsigned __int16)a2[2];
                                    }
                                    v43 = v41 + 1;
                                    if ( (unsigned __int64)v43 > v42 )
                                      return 3221225485LL;
                                    v58 += v43 - v53;
                                    v53 = v43;
LABEL_61:
                                    LOWORD(v34) = *(_WORD *)(v24 + 6);
                                  }
                                  ++v39;
                                  v32 += 12;
                                  if ( v39 >= v38 )
                                    goto LABEL_63;
                                }
                                if ( *((_QWORD *)v32 + 1) != v31 || *((_QWORD *)v32 + 2) )
                                  return 3221225485LL;
                                v44 = v54;
                                for ( i = (unsigned __int64)a2 + (unsigned int)(v49 + v51); *v44; ++v44 )
                                {
                                  if ( (unsigned __int64)v44 >= i - 1 )
                                    break;
                                }
                                if ( (unsigned __int64)(v44 + 1) > i )
                                  return 3221225485LL;
                                v31 += (_DWORD)v44 + 1 - (_DWORD)v54;
                                v54 = v44 + 1;
                                goto LABEL_61;
                              }
LABEL_63:
                              ++v37;
                              v27 = (_WORD *)(v55 + 4);
                              v55 += 4LL;
                              if ( v37 >= v36 )
                              {
                                v33 = v57;
                                goto LABEL_65;
                              }
                            }
                            return 3221225485LL;
                          }
LABEL_65:
                          v24 += 12LL;
                          v30 = v52;
                          if ( ++v50 >= v23 / 0xC )
                          {
                            v25 = v59;
                            v28 = (unsigned __int16)a2[23] >> 1;
                            goto LABEL_67;
                          }
                        }
                      }
                      else
                      {
LABEL_67:
                        if ( v33 == *((_QWORD *)a2 + 1) && v25 == v10 && v47 == v22 && v30 == v29 && v58 == v28 )
                          return v51 != v31 ? 0xC000000D : 0;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 3221225485LL;
}
