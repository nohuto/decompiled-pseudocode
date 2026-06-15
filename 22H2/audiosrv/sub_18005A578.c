/*
 * XREFs of sub_18005A578 @ 0x18005A578
 * Callers:
 *     sub_18005A4BC @ 0x18005A4BC (sub_18005A4BC.c)
 * Callees:
 *     sub_18005A750 @ 0x18005A750 (sub_18005A750.c)
 *     sub_18005A8F0 @ 0x18005A8F0 (sub_18005A8F0.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     sub_180119D08 @ 0x180119D08 (sub_180119D08.c)
 */

__int64 __fastcall sub_18005A578(unsigned int a1, _DWORD *a2, _QWORD *a3)
{
  int v3; // edi
  bool v6; // zf
  _QWORD *v8; // rax
  int v9; // r13d
  _QWORD *v10; // r15
  _QWORD *v11; // rbx
  unsigned int v12; // ebp
  unsigned int *v13; // r14
  int v14; // r12d
  __int128 v15; // xmm6
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v21; // [rsp+40h] [rbp-58h] BYREF
  _DWORD *v22; // [rsp+48h] [rbp-50h]
  unsigned int *v24; // [rsp+B8h] [rbp+20h]

  v3 = -2147023728;
  if ( a1 >= 8 )
  {
    v6 = *a2 == 10;
    v22 = a2;
    if ( v6 )
    {
      v8 = (_QWORD *)sub_18006A18C(16LL, &unk_18019F848);
      v9 = 0;
      v10 = v8;
      if ( v8 )
      {
        *v8 = 0LL;
        v8[1] = 0LL;
      }
      else
      {
        v10 = 0LL;
      }
      v11 = v10;
      if ( v10 )
      {
        v12 = a1 - 8;
        v13 = a2 + 2;
        v14 = 0;
        if ( a2[1] )
        {
          while ( 1 )
          {
            v24 = v13;
            if ( v12 < 0x14 )
            {
              v3 = -2147023728;
              goto LABEL_19;
            }
            v15 = *(_OWORD *)v13;
            v16 = sub_18006A18C(48LL, &unk_18019F848);
            v17 = v16;
            if ( v16 )
            {
              *(_OWORD *)v16 = v15;
              *(_QWORD *)(v16 + 24) = 0LL;
              *(_QWORD *)(v16 + 40) = 0LL;
              *(_QWORD *)(v16 + 16) = 0LL;
              *(_QWORD *)(v16 + 32) = 0LL;
            }
            else
            {
              v17 = 0LL;
            }
            v21 = v17;
            if ( !v17 )
              goto LABEL_22;
            v12 -= 20;
            v13 += 5;
            if ( v24[4] )
              break;
LABEL_16:
            v9 = 0;
            if ( !(unsigned int)sub_18005A8F0(v10, &v21) )
            {
              v3 = -2147024882;
              sub_180119D08(v17);
              goto LABEL_19;
            }
            if ( (unsigned int)++v14 >= v22[1] )
              goto LABEL_18;
          }
          while ( v12 >= 0x26 )
          {
            v18 = v17;
            if ( v12 < (unsigned __int64)*((unsigned __int16 *)v13 + 18) + 38 )
            {
              v3 = -2147023728;
              goto LABEL_27;
            }
            v3 = sub_18005A750(v17, v13 + 5, v13[1], *v13, v13[2], v13[3], v13[4]);
            if ( v3 < 0 )
              goto LABEL_26;
            v19 = *((unsigned __int16 *)v13 + 18);
            v12 += -38 - v19;
            v13 = (unsigned int *)((char *)v13 + v19 + 38);
            if ( ++v9 >= v24[4] )
              goto LABEL_16;
          }
          v3 = -2147023728;
LABEL_26:
          v18 = v17;
LABEL_27:
          sub_180119D08(v18);
        }
        else
        {
LABEL_18:
          v11 = 0LL;
          *a3 = v10;
        }
      }
      else
      {
LABEL_22:
        v3 = -2147024882;
      }
LABEL_19:
      if ( v11 )
      {
        if ( *v11 )
        {
          _o_free(*v11);
          *v11 = 0LL;
        }
        v11[1] = 0LL;
        sub_18006A148(v11, 16LL);
      }
    }
  }
  return (unsigned int)v3;
}
