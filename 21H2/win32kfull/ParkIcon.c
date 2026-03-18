/*
 * XREFs of ParkIcon @ 0x1C00CBAB0
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00CA7B4 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C010DBA0 (NtUserGetWindowMinimizeRect.c)
 * Callees:
 *     IntersectRect @ 0x1C004CD28 (IntersectRect.c)
 *     GetRect @ 0x1C00688B4 (GetRect.c)
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C006B9F0 (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     InternalGetRealClientRect @ 0x1C00B0758 (InternalGetRealClientRect.c)
 */

__int64 __fastcall ParkIcon(__int64 a1, unsigned int *a2)
{
  int v4; // r14d
  int v5; // r13d
  int v6; // edx
  int v7; // esi
  unsigned int v8; // ebx
  int v9; // r12d
  int v10; // edi
  int v11; // eax
  int v12; // r13d
  __int64 result; // rax
  __int64 v14; // r14
  int v15; // r15d
  int v16; // esi
  int v17; // r12d
  char v18; // cl
  unsigned int v19; // ecx
  unsigned int v20; // eax
  int v21; // [rsp+30h] [rbp-39h]
  int v22; // [rsp+34h] [rbp-35h]
  __int128 v23; // [rsp+38h] [rbp-31h] BYREF
  unsigned __int64 v24; // [rsp+48h] [rbp-21h] BYREF
  unsigned int v25; // [rsp+50h] [rbp-19h]
  int v26; // [rsp+54h] [rbp-15h]
  int v27; // [rsp+58h] [rbp-11h]
  int v28; // [rsp+5Ch] [rbp-Dh]
  int v29; // [rsp+60h] [rbp-9h]
  int v30; // [rsp+64h] [rbp-5h]
  int v31; // [rsp+68h] [rbp-1h]
  __int64 v32; // [rsp+70h] [rbp+7h]
  __int64 v33; // [rsp+78h] [rbp+Fh]
  int v36; // [rsp+E0h] [rbp+77h]
  int v37; // [rsp+E8h] [rbp+7Fh]

  v24 = 0LL;
  v23 = 0LL;
  v4 = *(_DWORD *)(gpsi + 2084LL);
  v5 = *(_DWORD *)(gpsi + 2088LL);
  v31 = v4;
  v27 = v5;
  if ( !IsTrayWindow(a1, 1) )
  {
    v33 = *(_QWORD *)(a1 + 104);
    InternalGetRealClientRect(v33, (__int64)&v23, 1LL, 0LL, 1);
    v6 = *(_DWORD *)(gpsi + 2120LL);
    if ( (v6 & 1) != 0 )
    {
      v7 = DWORD2(v23) - v4;
      v37 = -v4;
    }
    else
    {
      v7 = v23 + *(_DWORD *)(gpsi + 2084LL) - *(_DWORD *)(gpsi + 2124LL);
      v37 = v4;
    }
    v28 = v7;
    v8 = v7;
    LODWORD(v24) = v7;
    if ( (v6 & 2) != 0 )
    {
      v9 = DWORD1(v23) + *(_DWORD *)(gpsi + 2088LL) - *(_DWORD *)(gpsi + 2128LL);
      v21 = v5;
    }
    else
    {
      v9 = HIDWORD(v23) - v5;
      v21 = -v5;
    }
    HIDWORD(v24) = v9;
    v10 = v9;
    v29 = v9;
    if ( (v6 & 4) != 0 )
    {
      v32 = 0LL;
      v11 = SHIDWORD(v23) / v5;
    }
    else
    {
      v32 = 1LL;
      v11 = SDWORD2(v23) / v4;
    }
    v12 = v11;
    if ( v11 < 1 )
      v12 = 1;
    v22 = 0;
    v30 = v12;
    v36 = v12;
    while ( 1 )
    {
      v25 = v8 + v4;
      v26 = v10 + v27;
      result = v33;
      v14 = *(_QWORD *)(v33 + 112);
      if ( !v14 )
        goto LABEL_16;
      v15 = v31;
      v16 = v27;
      v17 = v22;
      do
      {
        result = *(_QWORD *)(v14 + 40);
        v18 = *(_BYTE *)(result + 31);
        if ( (v18 & 0x10) == 0 || v14 == a1 )
          goto LABEL_14;
        if ( (v18 & 0x20) != 0 )
        {
          GetRect(v14, (__int64)&v23, 66);
        }
        else
        {
          result = GetProp(v14, LOWORD(WPP_MAIN_CB.Dpc.TargetInfoAsUlong), 1u);
          if ( !result || (*(_BYTE *)(result + 48) & 0x21) != 0x21 )
            goto LABEL_14;
          v19 = *(_DWORD *)(result + 32);
          v20 = *(_DWORD *)(result + 36);
          *(_QWORD *)&v23 = __PAIR64__(v20, v19);
          HIDWORD(v23) = v16 + v20;
          DWORD2(v23) = v15 + v19;
        }
        ++v17;
        result = IntersectRect(&v23, (int *)&v23, (int *)&v24);
        if ( (_DWORD)result )
          break;
LABEL_14:
        v14 = *(_QWORD *)(v14 + 88);
      }
      while ( v14 );
      v22 = v17;
      if ( !v14 )
        goto LABEL_16;
      if ( --v36 )
      {
        if ( v32 )
        {
          v8 += v37;
          LODWORD(v24) = v8;
        }
        else
        {
LABEL_33:
          v10 += v21;
          HIDWORD(v24) = v10;
        }
      }
      else
      {
        v36 = v30;
        if ( v32 )
        {
          v8 = v28;
          LODWORD(v24) = v28;
          goto LABEL_33;
        }
        v8 += v37;
        v24 = __PAIR64__(v29, v8);
        v10 = v29;
      }
      v4 = v31;
      if ( v17 >= 5000 )
      {
LABEL_16:
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
