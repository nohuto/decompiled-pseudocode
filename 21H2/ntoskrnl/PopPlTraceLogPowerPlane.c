/*
 * XREFs of PopPlTraceLogPowerPlane @ 0x14057EE14
 * Callers:
 *     PopPlRegisterPowerPlane @ 0x14057EC64 (PopPlRegisterPowerPlane.c)
 *     PopDiagTraceControlCallback @ 0x140671060 (PopDiagTraceControlCallback.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x1402514DC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

int __fastcall PopPlTraceLogPowerPlane(unsigned __int16 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  unsigned __int64 i; // rdi
  unsigned __int16 *v6; // rcx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  _QWORD *v9; // r14
  __int64 v10; // rcx
  int v11; // edx
  int v13; // [rsp+28h] [rbp-E0h]
  int v14; // [rsp+30h] [rbp-D8h]
  _WORD v15[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v16; // [rsp+4Ch] [rbp-BCh] BYREF
  int v17; // [rsp+50h] [rbp-B8h] BYREF
  int v18; // [rsp+54h] [rbp-B4h] BYREF
  int v19; // [rsp+58h] [rbp-B0h] BYREF
  int v20; // [rsp+5Ch] [rbp-ACh] BYREF
  int v21; // [rsp+60h] [rbp-A8h] BYREF
  int v22; // [rsp+64h] [rbp-A4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+68h] [rbp-A0h] BYREF
  int *v24; // [rsp+88h] [rbp-80h]
  __int64 v25; // [rsp+90h] [rbp-78h]
  _DWORD *v26; // [rsp+98h] [rbp-70h]
  __int64 v27; // [rsp+A0h] [rbp-68h]
  __int64 v28; // [rsp+A8h] [rbp-60h]
  _DWORD v29[2]; // [rsp+B0h] [rbp-58h] BYREF
  _DWORD *v30; // [rsp+B8h] [rbp-50h]
  __int64 v31; // [rsp+C0h] [rbp-48h]
  __int64 v32; // [rsp+C8h] [rbp-40h]
  _DWORD v33[2]; // [rsp+D0h] [rbp-38h] BYREF
  int *v34; // [rsp+D8h] [rbp-30h]
  __int64 v35; // [rsp+E0h] [rbp-28h]
  int *v36; // [rsp+E8h] [rbp-20h]
  __int64 v37; // [rsp+F0h] [rbp-18h]
  _WORD *v38; // [rsp+F8h] [rbp-10h]
  __int64 v39; // [rsp+100h] [rbp-8h]
  unsigned __int16 *v40; // [rsp+108h] [rbp+0h]
  __int64 v41; // [rsp+110h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+118h] [rbp+10h] BYREF
  int *v43; // [rsp+138h] [rbp+30h]
  __int64 v44; // [rsp+140h] [rbp+38h]
  __int64 v45; // [rsp+148h] [rbp+40h]
  __int64 v46; // [rsp+150h] [rbp+48h]
  _DWORD *v47; // [rsp+158h] [rbp+50h]
  __int64 v48; // [rsp+160h] [rbp+58h]
  __int64 v49; // [rsp+168h] [rbp+60h]
  _DWORD v50[2]; // [rsp+170h] [rbp+68h] BYREF
  _DWORD *v51; // [rsp+178h] [rbp+70h]
  __int64 v52; // [rsp+180h] [rbp+78h]
  __int64 v53; // [rsp+188h] [rbp+80h]
  _DWORD v54[2]; // [rsp+190h] [rbp+88h] BYREF
  _WORD *v55; // [rsp+198h] [rbp+90h]
  __int64 v56; // [rsp+1A0h] [rbp+98h]
  __int64 v57; // [rsp+1A8h] [rbp+A0h]
  int v58; // [rsp+1B0h] [rbp+A8h]
  int v59; // [rsp+1B4h] [rbp+ACh]
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+1B8h] [rbp+B0h] BYREF
  __int16 *v61; // [rsp+1D8h] [rbp+D0h]
  __int64 v62; // [rsp+1E0h] [rbp+D8h]
  _DWORD *v63; // [rsp+1E8h] [rbp+E0h]
  __int64 v64; // [rsp+1F0h] [rbp+E8h]
  __int64 v65; // [rsp+1F8h] [rbp+F0h]
  _DWORD v66[2]; // [rsp+200h] [rbp+F8h] BYREF
  int *v67; // [rsp+208h] [rbp+100h]
  __int64 v68; // [rsp+210h] [rbp+108h]
  int *v69; // [rsp+218h] [rbp+110h]
  __int64 v70; // [rsp+220h] [rbp+118h]

  v15[0] = 0;
  if ( (unsigned int)dword_140C02228 > 5 )
  {
    v16 = 1;
    v61 = &v16;
    v62 = 2LL;
    v63 = v66;
    v65 = *((_QWORD *)a1 + 1);
    v66[0] = *a1;
    v19 = *((_DWORD *)a1 + 12);
    v67 = &v19;
    v20 = *((_DWORD *)a1 + 7);
    v69 = &v20;
    v64 = 2LL;
    v66[1] = 0;
    v68 = 4LL;
    v70 = 4LL;
    tlgWriteEx_EtwWriteEx((__int64)&dword_140C02228, (unsigned __int8 *)&byte_14002A1D1, a3, 1u, v13, v14, 7u, &v60);
  }
  v4 = *((_QWORD *)a1 + 6);
  for ( i = 0LL; i < v4; ++i )
  {
    v6 = *(unsigned __int16 **)(*((_QWORD *)a1 + 7) + 8 * i);
    v15[0] = 4;
    if ( (unsigned int)dword_140C02228 > 5 )
    {
      LOWORD(v17) = 1;
      v24 = &v17;
      v25 = 2LL;
      v26 = v29;
      v28 = *((_QWORD *)v6 + 1);
      v29[0] = *v6;
      v30 = v33;
      v32 = *((_QWORD *)a1 + 1);
      v33[0] = *a1;
      v21 = *((_DWORD *)v6 + 18);
      v34 = &v21;
      v22 = *((_DWORD *)v6 + 8);
      v36 = &v22;
      v38 = v15;
      v40 = v6 + 18;
      v27 = 2LL;
      v29[1] = 0;
      v31 = 2LL;
      v33[1] = 0;
      v35 = 4LL;
      v37 = 4LL;
      v39 = 2LL;
      v41 = 32LL;
      tlgWriteEx_EtwWriteEx(
        (__int64)&dword_140C02228,
        (unsigned __int8 *)&dword_14002A2BC,
        a3,
        1u,
        v13,
        v14,
        0xBu,
        &v23);
    }
    v4 = *((_QWORD *)a1 + 6);
  }
  v7 = 0LL;
  if ( v4 )
  {
    do
    {
      v4 = *((_QWORD *)a1 + 7);
      v8 = 0LL;
      v9 = *(_QWORD **)(v4 + 8 * v7);
      if ( v9[9] )
      {
        do
        {
          v4 = v9[10];
          v10 = *(_QWORD *)(v4 + 8 * v8);
          v11 = *(unsigned __int16 *)(v10 + 24);
          v15[0] = *(_WORD *)(v10 + 24);
          if ( (unsigned int)dword_140C02228 > 5 )
          {
            v45 = v10;
            v43 = &v18;
            LOWORD(v18) = 1;
            v47 = v50;
            v49 = v9[1];
            v50[0] = *(unsigned __int16 *)v9;
            v51 = v54;
            v53 = *((_QWORD *)a1 + 1);
            v54[0] = *a1;
            v55 = v15;
            v57 = v10 + 32;
            v44 = 2LL;
            v58 = 8 * v11;
            v46 = 16LL;
            v48 = 2LL;
            v50[1] = 0;
            v52 = 2LL;
            v54[1] = 0;
            v56 = 2LL;
            v59 = 0;
            LODWORD(v4) = tlgWriteEx_EtwWriteEx(
                            (__int64)&dword_140C02228,
                            (unsigned __int8 *)&byte_14002A22F,
                            a3,
                            1u,
                            v13,
                            v14,
                            0xAu,
                            &v42);
          }
          ++v8;
        }
        while ( v8 < v9[9] );
      }
      ++v7;
    }
    while ( v7 < *((_QWORD *)a1 + 6) );
  }
  return v4;
}
