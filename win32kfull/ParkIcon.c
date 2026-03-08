/*
 * XREFs of ParkIcon @ 0x1C0101D68
 * Callers:
 *     NtUserGetWindowMinimizeRect @ 0x1C000D3A0 (NtUserGetWindowMinimizeRect.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00FFAF8 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 * Callees:
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C002E354 (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     GetRect @ 0x1C0067778 (GetRect.c)
 *     InternalGetRealClientRect @ 0x1C00A2710 (InternalGetRealClientRect.c)
 *     IntersectRect @ 0x1C00FEBD4 (IntersectRect.c)
 */

__int64 __fastcall ParkIcon(struct tagWND *a1, unsigned int *a2)
{
  int v4; // r14d
  int v5; // r13d
  int v6; // edx
  int v7; // esi
  unsigned int v8; // ebx
  int v9; // r15d
  int v10; // edi
  int v11; // r13d
  __int64 result; // rax
  __int64 v13; // r14
  int v14; // r12d
  int v15; // esi
  int v16; // r15d
  char v17; // cl
  unsigned int v18; // ecx
  unsigned int v19; // eax
  int v20; // [rsp+30h] [rbp-39h]
  int v21; // [rsp+34h] [rbp-35h]
  __int128 v22; // [rsp+38h] [rbp-31h] BYREF
  unsigned __int64 v23; // [rsp+48h] [rbp-21h] BYREF
  unsigned int v24; // [rsp+50h] [rbp-19h]
  int v25; // [rsp+54h] [rbp-15h]
  int v26; // [rsp+58h] [rbp-11h]
  int v27; // [rsp+5Ch] [rbp-Dh]
  int v28; // [rsp+60h] [rbp-9h]
  int v29; // [rsp+64h] [rbp-5h]
  int v30; // [rsp+68h] [rbp-1h]
  __int64 v31; // [rsp+70h] [rbp+7h]
  __int64 v32; // [rsp+78h] [rbp+Fh]
  int v35; // [rsp+E0h] [rbp+77h]
  int v36; // [rsp+E8h] [rbp+7Fh]

  v23 = 0LL;
  v22 = 0LL;
  v4 = *(_DWORD *)(gpsi + 2084LL);
  v5 = *(_DWORD *)(gpsi + 2088LL);
  v30 = v4;
  v26 = v5;
  if ( !IsTrayWindow(a1, 1) )
  {
    v32 = *((_QWORD *)a1 + 13);
    InternalGetRealClientRect(v32, (__int64)&v22, 1, 0LL, 1);
    v6 = *(_DWORD *)(gpsi + 2120LL);
    if ( (v6 & 1) != 0 )
    {
      v7 = DWORD2(v22) - v4;
      v36 = -v4;
    }
    else
    {
      v7 = v22 + *(_DWORD *)(gpsi + 2084LL) - *(_DWORD *)(gpsi + 2124LL);
      v36 = v4;
    }
    v27 = v7;
    v8 = v7;
    LODWORD(v23) = v7;
    if ( (v6 & 2) != 0 )
    {
      v9 = DWORD1(v22) + *(_DWORD *)(gpsi + 2088LL) - *(_DWORD *)(gpsi + 2128LL);
      v20 = v5;
    }
    else
    {
      v9 = HIDWORD(v22) - v5;
      v20 = -v5;
    }
    HIDWORD(v23) = v9;
    v10 = v9;
    v28 = v9;
    if ( (v6 & 4) != 0 )
    {
      v11 = SHIDWORD(v22) / v5;
      if ( v11 < 1 )
        v11 = 1;
      v31 = 0LL;
    }
    else
    {
      v31 = 1LL;
      v11 = SDWORD2(v22) / v4;
      if ( SDWORD2(v22) / v4 < 1 )
        v11 = 1;
    }
    v29 = v11;
    v21 = 0;
    v35 = v11;
    while ( 1 )
    {
      v24 = v8 + v4;
      v25 = v10 + v26;
      result = v32;
      v13 = *(_QWORD *)(v32 + 112);
      if ( !v13 )
        goto LABEL_15;
      v14 = v30;
      v15 = v26;
      v16 = v21;
      do
      {
        result = *(_QWORD *)(v13 + 40);
        v17 = *(_BYTE *)(result + 31);
        if ( (v17 & 0x10) == 0 || (struct tagWND *)v13 == a1 )
          goto LABEL_13;
        if ( (v17 & 0x20) != 0 )
        {
          GetRect(v13, (__int64)&v22, 66);
        }
        else
        {
          result = GetProp(v13, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1u);
          if ( !result || (*(_BYTE *)(result + 48) & 0x21) != 0x21 )
            goto LABEL_13;
          v18 = *(_DWORD *)(result + 32);
          v19 = *(_DWORD *)(result + 36);
          *(_QWORD *)&v22 = __PAIR64__(v19, v18);
          HIDWORD(v22) = v15 + v19;
          DWORD2(v22) = v14 + v18;
        }
        ++v16;
        result = IntersectRect(&v22, (int *)&v22, (int *)&v23);
        if ( (_DWORD)result )
          break;
LABEL_13:
        v13 = *(_QWORD *)(v13 + 88);
      }
      while ( v13 );
      v21 = v16;
      if ( !v13 )
        goto LABEL_15;
      if ( --v35 )
      {
        if ( v31 )
        {
          v8 += v36;
          LODWORD(v23) = v8;
        }
        else
        {
LABEL_33:
          v10 += v20;
          HIDWORD(v23) = v10;
        }
      }
      else
      {
        v35 = v29;
        if ( v31 )
        {
          v8 = v27;
          LODWORD(v23) = v27;
          goto LABEL_33;
        }
        v8 += v36;
        v23 = __PAIR64__(v28, v8);
        v10 = v28;
      }
      v4 = v30;
      if ( v16 >= 5000 )
      {
LABEL_15:
        *a2 = v8;
        a2[1] = v10;
        return result;
      }
    }
  }
  result = 4294935296LL;
  *a2 = -32000;
  a2[1] = -32000;
  return result;
}
