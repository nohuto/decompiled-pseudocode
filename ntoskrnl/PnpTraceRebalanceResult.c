/*
 * XREFs of PnpTraceRebalanceResult @ 0x140968FDC
 * Callers:
 *     PnpRebalance @ 0x14096B948 (PnpRebalance.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     McTemplateK0zzqqzttquqqzxt_EtwWriteTransfer @ 0x140562268 (McTemplateK0zzqqzttquqqzxt_EtwWriteTransfer.c)
 *     McTemplateK0zzqqzttquxt_EtwWriteTransfer @ 0x140562480 (McTemplateK0zzqqzttquxt_EtwWriteTransfer.c)
 */

char __fastcall PnpTraceRebalanceResult(unsigned int a1, int a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v5; // rsi
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // rax
  unsigned __int64 v9; // r15
  __int16 *v10; // r8
  int v11; // eax
  int v12; // r10d
  char v13; // r11
  char v14; // al
  char v15; // al
  char v17; // [rsp+90h] [rbp-80h] BYREF
  char v18; // [rsp+91h] [rbp-7Fh] BYREF
  char v19; // [rsp+92h] [rbp-7Eh] BYREF
  char v20; // [rsp+93h] [rbp-7Dh] BYREF
  int v21; // [rsp+94h] [rbp-7Ch] BYREF
  int v22; // [rsp+98h] [rbp-78h] BYREF
  int v23; // [rsp+9Ch] [rbp-74h] BYREF
  __int64 v24; // [rsp+A0h] [rbp-70h] BYREF
  unsigned __int64 v25; // [rsp+A8h] [rbp-68h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+C0h] [rbp-50h] BYREF
  __int64 *v28; // [rsp+E0h] [rbp-30h]
  __int64 v29; // [rsp+E8h] [rbp-28h]
  _DWORD *v30; // [rsp+F0h] [rbp-20h]
  __int64 v31; // [rsp+F8h] [rbp-18h]
  __int64 v32; // [rsp+100h] [rbp-10h]
  _DWORD v33[2]; // [rsp+108h] [rbp-8h] BYREF
  _DWORD *v34; // [rsp+110h] [rbp+0h]
  __int64 v35; // [rsp+118h] [rbp+8h]
  __int64 v36; // [rsp+120h] [rbp+10h]
  _DWORD v37[2]; // [rsp+128h] [rbp+18h] BYREF
  int *v38; // [rsp+130h] [rbp+20h]
  __int64 v39; // [rsp+138h] [rbp+28h]
  _DWORD *v40; // [rsp+140h] [rbp+30h]
  __int64 v41; // [rsp+148h] [rbp+38h]
  __int64 v42; // [rsp+150h] [rbp+40h]
  _DWORD v43[2]; // [rsp+158h] [rbp+48h] BYREF
  char *v44; // [rsp+160h] [rbp+50h]
  __int64 v45; // [rsp+168h] [rbp+58h]
  char *v46; // [rsp+170h] [rbp+60h]
  __int64 v47; // [rsp+178h] [rbp+68h]
  int *v48; // [rsp+180h] [rbp+70h]
  __int64 v49; // [rsp+188h] [rbp+78h]
  int *v50; // [rsp+190h] [rbp+80h]
  __int64 v51; // [rsp+198h] [rbp+88h]
  unsigned __int64 *v52; // [rsp+1A0h] [rbp+90h]
  __int64 v53; // [rsp+1A8h] [rbp+98h]
  __int64 *v54; // [rsp+1B0h] [rbp+A0h]
  __int64 v55; // [rsp+1B8h] [rbp+A8h]
  char *v56; // [rsp+1C0h] [rbp+B0h]
  __int64 v57; // [rsp+1C8h] [rbp+B8h]
  char *v58; // [rsp+1D0h] [rbp+C0h]
  __int64 v59; // [rsp+1D8h] [rbp+C8h]

  v3 = a1;
  if ( !a3 || a1 >= 2 || (v5 = *(_QWORD *)(a3 + 48)) == 0 || (v6 = *(_QWORD *)(a3 + 8LL * a1 + 24)) == 0 )
    __fastfail(5u);
  v7 = MEMORY[0xFFFFF78000000008];
  v8 = *(_QWORD *)(a3 + 8LL * a1 + 80);
  v9 = (MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a3 + 8LL * a1 + 64)) / 0x2710uLL;
  v10 = (__int16 *)(v8 + 40);
  if ( !v8 )
    v10 = &PnpEmptyUnicodeString;
  if ( a2 < 0 )
  {
    if ( (byte_140C0E10C & 1) != 0 )
    {
      v11 = *(_DWORD *)(a3 + 56);
      LOBYTE(v8) = McTemplateK0zzqqzttquqqzxt_EtwWriteTransfer(
                     *(unsigned __int8 *)(a1 + a3 + 40),
                     v11 & 1,
                     (__int64)v10,
                     *(const wchar_t **)(v5 + 48),
                     *(const wchar_t **)(v5 + 64),
                     *(_DWORD *)(a3 + 4LL * a1),
                     a1,
                     *(const wchar_t **)(v6 + 48),
                     *(_BYTE *)(a1 + a3 + 40),
                     v11 & 1,
                     *(_DWORD *)(a3 + 12),
                     *(_BYTE *)(a3 + 104),
                     *(_DWORD *)(a3 + 4LL * a1 + 16),
                     *(_DWORD *)(a3 + 4LL * a1 + 96),
                     *((const wchar_t **)v10 + 1),
                     v9,
                     (v11 & 2) != 0);
    }
  }
  else if ( (byte_140C0E10C & 2) != 0 )
  {
    LOBYTE(v8) = McTemplateK0zzqqzttquxt_EtwWriteTransfer(
                   *(unsigned __int8 *)(a1 + a3 + 40),
                   *(_DWORD *)(a3 + 56) & 1,
                   (__int64)v10,
                   *(const wchar_t **)(v5 + 48),
                   *(const wchar_t **)(v5 + 64),
                   *(_DWORD *)(a3 + 4LL * a1),
                   a1,
                   *(const wchar_t **)(v6 + 48),
                   *(_BYTE *)(a1 + a3 + 40),
                   *(_DWORD *)(a3 + 56) & 1,
                   *(_DWORD *)(a3 + 12),
                   *(_BYTE *)(a3 + 104),
                   v9,
                   (*(_DWORD *)(a3 + 56) & 2) != 0);
  }
  if ( (unsigned int)dword_140C038F0 > 5 )
  {
    LOBYTE(v8) = tlgKeywordOn((__int64)&dword_140C038F0, 0x400000000000LL);
    if ( (_BYTE)v8 )
    {
      v24 = 0x1000000LL;
      v28 = &v24;
      v29 = 8LL;
      v30 = v33;
      v32 = *(_QWORD *)(v5 + 48);
      v33[0] = *(unsigned __int16 *)(v5 + 40);
      v34 = v37;
      v36 = *(_QWORD *)(v5 + 64);
      v37[0] = *(unsigned __int16 *)(v5 + 56);
      v21 = *(_DWORD *)(a3 + 4 * v3);
      v38 = &v21;
      v40 = v43;
      v42 = *(_QWORD *)(v6 + 48);
      v43[0] = *(unsigned __int16 *)(v6 + 40);
      v17 = *(_BYTE *)(v3 + a3 + 40);
      v44 = &v17;
      v14 = v13 & *(_BYTE *)(a3 + 56);
      v31 = 2LL;
      v18 = v14;
      v46 = &v18;
      v22 = *(_DWORD *)(a3 + 12);
      v48 = &v22;
      v23 = *(_DWORD *)(a3 + 4 * v3 + 16);
      v50 = &v23;
      v52 = &v25;
      v54 = &v26;
      v56 = &v19;
      v15 = v13 & (*(_DWORD *)(a3 + 56) >> 1);
      v33[1] = v12;
      v20 = v15;
      v58 = &v20;
      v35 = 2LL;
      v37[1] = v12;
      v39 = 4LL;
      v41 = 2LL;
      v43[1] = v12;
      v45 = 1LL;
      v47 = 1LL;
      v49 = 4LL;
      v51 = 4LL;
      v25 = v9;
      v53 = 8LL;
      v26 = v7;
      v55 = 8LL;
      v19 = v3;
      v57 = 1LL;
      v59 = 1LL;
      LOBYTE(v8) = tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)&dword_140C038F0,
                     (unsigned __int8 *)word_14002CA5A,
                     0LL,
                     0LL,
                     0x12u,
                     &v27);
    }
  }
  return v8;
}
