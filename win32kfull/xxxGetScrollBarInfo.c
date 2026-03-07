__int64 __fastcall xxxGetScrollBarInfo(struct tagWND *a1, int a2, __int64 a3)
{
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // rsi
  char *v9; // rsi
  __int64 v10; // rdx
  unsigned int v11; // r8d
  int v12; // r12d
  char *v13; // r10
  unsigned int v14; // r14d
  int v15; // r9d
  int v16; // edx
  int v17; // r11d
  int v18; // r8d
  char v19; // cl
  _DWORD *v20; // rax
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  int v24; // ecx
  int v25; // edx
  __int64 v27; // rdx
  int v28; // edx
  __int128 v29; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v30[16]; // [rsp+60h] [rbp-9h] BYREF
  int v31; // [rsp+70h] [rbp+7h]
  int v32; // [rsp+74h] [rbp+Bh]
  int v33; // [rsp+78h] [rbp+Fh]
  int v34; // [rsp+7Ch] [rbp+13h]
  int v35; // [rsp+84h] [rbp+1Bh]
  int v36; // [rsp+88h] [rbp+1Fh]
  int v37; // [rsp+90h] [rbp+27h]
  int v38; // [rsp+94h] [rbp+2Bh]
  unsigned int v39; // [rsp+E0h] [rbp+77h]

  memset_0(v30, 0, 0x40uLL);
  if ( *(_DWORD *)a3 == 60 )
  {
    v6 = unsafe_cast_fnid_or_class_to_PSBWND(a1);
    LOWORD(v7) = 0;
    v8 = v6;
    if ( a2 == -4 && !v6 )
    {
      _InterlockedAdd(&glSendMessage, 1u);
      return xxxSendTransformableMessageTimeout(a1, 0xEBu, 0LL, (__int128 *)a3, 0, 0, 0LL, 1, 1);
    }
    *(_OWORD *)(a3 + 36) = 0LL;
    *(_QWORD *)(a3 + 52) = 0LL;
    switch ( a2 )
    {
      case -4:
        v12 = *(_DWORD *)(v6 + 12);
        v39 = *(_DWORD *)(v6 + 8);
        v29 = 0LL;
        GetRect((__int64)a1, (__int64)&v29, 17);
        CalcSBStuff2(v30, &v29, v8 + 16, *(unsigned int *)(v8 + 8));
        v13 = (char *)a1 + 40;
        goto LABEL_11;
      case -5:
        v9 = (char *)a1 + 40;
        v39 = 1;
        v10 = *((_QWORD *)a1 + 5);
        v11 = 1;
        if ( (*(_BYTE *)(v10 + 30) & 0x20) != 0 )
        {
          if ( (*(_BYTE *)(v10 + 16) & 2) == 0 )
          {
            *(_DWORD *)(a3 + 36) = 0x10000;
            LOWORD(v7) = 0;
          }
        }
        else
        {
          *(_DWORD *)(a3 + 36) |= 0x8000u;
          v7 = *(_DWORD *)(a3 + 36);
        }
        goto LABEL_8;
      case -6:
        v9 = (char *)a1 + 40;
        v39 = 0;
        v27 = *((_QWORD *)a1 + 5);
        v11 = 0;
        if ( (*(_BYTE *)(v27 + 30) & 0x10) == 0 )
        {
          *(_DWORD *)(a3 + 36) = 0x8000;
          return 1LL;
        }
        if ( (*(_BYTE *)(v27 + 16) & 4) == 0 )
        {
          *(_DWORD *)(a3 + 36) = 0x10000;
          goto LABEL_9;
        }
LABEL_8:
        if ( (v7 & 0x8000) == 0 )
        {
LABEL_9:
          LOBYTE(v12) = GetWndSBDisableFlags(a1, v11);
          v13 = v9;
          if ( (*(_DWORD *)(a3 + 36) & 0x10000) == 0 )
          {
            CalcSBStuff(a1, v30, v39);
            v13 = v9;
            if ( (*(_BYTE *)(*(_QWORD *)v9 + 26LL) & 0x40) != 0 )
            {
              v14 = v39;
              v28 = *(_DWORD *)(*(_QWORD *)v9 + 96LL) - *(_DWORD *)(*(_QWORD *)v9 + 88LL);
              if ( !v39 )
              {
                v15 = v33;
                v18 = v28 - v32;
                v17 = v28 - v31;
                v16 = v34;
                goto LABEL_13;
              }
              v15 = v28 - v34;
              v16 = v28 - v33;
LABEL_12:
              v17 = v32;
              v18 = v31;
LABEL_13:
              if ( (v12 & 1) != 0 )
              {
                *(_DWORD *)(a3 + 40) |= 1u;
                *(_DWORD *)(a3 + 44) |= 1u;
              }
              if ( (v12 & 2) != 0 )
              {
                *(_DWORD *)(a3 + 56) |= 1u;
                *(_DWORD *)(a3 + 52) |= 1u;
              }
              if ( (v12 & 3) == 3 )
                *(_DWORD *)(a3 + 36) |= 1u;
              v19 = *(_BYTE *)(*(_QWORD *)v13 + 22LL);
              if ( (v19 & 0x10) != 0 && (a2 != -5 || (v19 & 0x20) != 0) )
              {
                if ( (v19 & 1) != 0 )
                  *(_DWORD *)(a3 + 40) |= 8u;
                if ( (*(_BYTE *)(*(_QWORD *)v13 + 22LL) & 2) != 0 )
                  *(_DWORD *)(a3 + 44) |= 8u;
                if ( (*(_BYTE *)(*(_QWORD *)v13 + 22LL) & 4) != 0 )
                  *(_DWORD *)(a3 + 52) |= 8u;
                if ( (*(_BYTE *)(*(_QWORD *)v13 + 22LL) & 8) != 0 )
                  *(_DWORD *)(a3 + 56) |= 8u;
              }
              if ( (*(_DWORD *)(a3 + 36) & 0x10000) == 0 )
              {
                if ( v14 )
                {
                  *(_DWORD *)(a3 + 4) = v15;
                  *(_DWORD *)(a3 + 8) = v18;
                  *(_DWORD *)(a3 + 12) = v16;
                  *(_DWORD *)(a3 + 16) = v17;
                }
                else
                {
                  *(_DWORD *)(a3 + 8) = v15;
                  v15 = v18;
                  *(_DWORD *)(a3 + 4) = v18;
                  *(_DWORD *)(a3 + 12) = v17;
                  *(_DWORD *)(a3 + 16) = v16;
                }
                v20 = *(_DWORD **)v13;
                if ( a2 == -4 )
                {
                  v21 = v20[27];
                  v22 = v20[26];
                }
                else
                {
                  v21 = v20[23];
                  v22 = v20[22];
                }
                *(_DWORD *)(a3 + 12) += v22;
                v23 = v22 + v15;
                *(_DWORD *)(a3 + 16) += v21;
                *(_DWORD *)(a3 + 8) += v21;
                v24 = v35;
                v25 = v37;
                *(_DWORD *)(a3 + 4) = v23;
                *(_DWORD *)(a3 + 20) = v24 - v18;
                *(_DWORD *)(a3 + 24) = v38 - v18;
                *(_DWORD *)(a3 + 28) = v25 - v18;
                if ( v38 == v24 )
                  *(_DWORD *)(a3 + 44) |= 0x8000u;
                if ( v25 == v36 )
                  *(_DWORD *)(a3 + 52) |= 0x8000u;
              }
              return 1LL;
            }
          }
LABEL_11:
          v14 = v39;
          v15 = v33;
          v16 = v34;
          goto LABEL_12;
        }
        return 1LL;
    }
  }
  UserSetLastError(87);
  return 0LL;
}
