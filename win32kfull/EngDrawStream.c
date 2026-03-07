__int64 __fastcall EngDrawStream(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int *a6,
        unsigned int a7,
        _DWORD *a8,
        _QWORD *a9)
{
  unsigned int v10; // esi
  unsigned int v12; // r8d
  __int64 v13; // r14
  __int64 i; // rbx
  __int64 v15; // r11
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r10
  int v20; // edx
  int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 (__fastcall *v24)(int, __int64, int, int, __int64, __int64, __int64, __int64); // r10
  __int64 (__fastcall *v25)(int, __int64, int, int, __int64, __int64, __int64, __int64); // r9
  _QWORD v27[4]; // [rsp+58h] [rbp-59h] BYREF
  _QWORD *v28; // [rsp+78h] [rbp-39h]
  __int64 v29; // [rsp+80h] [rbp-31h]
  __int64 v30; // [rsp+88h] [rbp-29h]
  __int64 v31; // [rsp+90h] [rbp-21h]
  int v32; // [rsp+98h] [rbp-19h] BYREF
  int v33; // [rsp+9Ch] [rbp-15h]
  int v34; // [rsp+A0h] [rbp-11h]
  int v35; // [rsp+A4h] [rbp-Dh]

  v10 = a7;
  v28 = a9;
  v30 = a3;
  v29 = a4;
  v31 = a2;
  v12 = 1;
  v13 = (a1 - 24) & -(__int64)(a1 != 0);
  for ( i = *(_QWORD *)(v13 + 0x30); v10 >= 4; a8 += 15 )
  {
    if ( *a8 != 9 || v10 < 0x3C )
      return v12;
    v15 = *a6;
    v32 = a8[1];
    v16 = (int)a8[2];
    v33 = a8[2];
    v17 = (int)a8[3];
    v34 = a8[3];
    v18 = (int)a8[4];
    v35 = a8[4];
    if ( (unsigned __int64)(v15 + v32 + 0x80000000LL) <= 0xFFFFFFFF
      && (unsigned __int64)(v15 + v17 + 0x80000000LL) <= 0xFFFFFFFF )
    {
      v19 = a6[1];
      if ( (unsigned __int64)(v19 + v16 + 0x80000000LL) <= 0xFFFFFFFF
        && (unsigned __int64)(v19 + v18 + 0x80000000LL) <= 0xFFFFFFFF )
      {
        v20 = v15 + v32;
        v21 = v15 + v17;
        v32 = v20;
        v34 = v21;
        v33 = v19 + v16;
        v35 = v19 + v18;
        if ( v20 >= v21 )
        {
          if ( v20 - v21 >= 0 )
          {
LABEL_10:
            v22 = *(_QWORD *)(v13 + 48);
            v23 = 0LL;
            v24 = EngNineGrid;
            if ( *(_QWORD *)(v22 + 3392) )
              v24 = *(__int64 (__fastcall **)(int, __int64, int, int, __int64, __int64, __int64, __int64))(v22 + 3392);
            if ( (!*(_QWORD *)(a1 + 16) || (*(_DWORD *)(i + 2096) & 0x400) == 0)
              && !(unsigned int)SURFACE::bRedirHooked((SURFACE *)v13)
              && (*(_BYTE *)(v13 + 112) & 0x10) == 0 )
            {
              v24 = v25;
            }
            v27[3] = v28[6];
            v27[2] = v28[5];
            v27[1] = v28[4];
            v27[0] = 33488896LL;
            v12 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, int *, _DWORD *, _DWORD *, _QWORD *, __int64))v24)(
                    a1,
                    v31,
                    v30,
                    v29,
                    &v32,
                    a8 + 5,
                    a8 + 9,
                    v27,
                    v23);
            goto LABEL_17;
          }
        }
        else if ( ((v21 - v20) & 0x80000000) == 0 )
        {
          goto LABEL_10;
        }
      }
    }
    v12 = 0;
LABEL_17:
    v10 -= 60;
  }
  return v12;
}
