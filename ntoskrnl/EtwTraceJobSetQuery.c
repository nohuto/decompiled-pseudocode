/*
 * XREFs of EtwTraceJobSetQuery @ 0x1409E28AC
 * Callers:
 *     NtQueryInformationJobObject @ 0x1406F9480 (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x1406FC3C0 (NtSetInformationJobObject.c)
 *     PspSetNetRateControl @ 0x1409B0054 (PspSetNetRateControl.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     EtwpCopyJobGuidSafe @ 0x1408A21A4 (EtwpCopyJobGuidSafe.c)
 */

void __fastcall EtwTraceJobSetQuery(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, unsigned __int16 a6)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // r10d
  _DWORD *v9; // r11
  unsigned __int16 v10; // r9
  unsigned int v11; // edx
  __int64 v12; // r10
  __int64 v13; // r11
  char **v14; // rbx
  _QWORD *v15; // rax
  __int64 *v16; // rdi
  __int64 *v17; // rsi
  _QWORD *v18; // r14
  unsigned __int64 **v19; // r15
  unsigned __int64 **v20; // r12
  _QWORD *v21; // r13
  _QWORD *v22; // r9
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  _QWORD *v25; // r9
  _QWORD *v26; // r9
  _QWORD *v27; // r9
  __int64 v28; // rax
  _QWORD *v29; // r8
  __int64 v30; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v31; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v32; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD *v33; // [rsp+50h] [rbp-B8h]
  _QWORD *v34; // [rsp+58h] [rbp-B0h]
  _QWORD *v35; // [rsp+60h] [rbp-A8h]
  _QWORD *v36; // [rsp+68h] [rbp-A0h]
  _QWORD v37[3]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v38; // [rsp+88h] [rbp-80h]
  _QWORD v39[2]; // [rsp+98h] [rbp-70h] BYREF
  char *v40; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v41; // [rsp+B0h] [rbp-58h]
  __int64 v42; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v43; // [rsp+C0h] [rbp-48h]
  __int64 v44; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v45; // [rsp+D0h] [rbp-38h]
  _QWORD v46[2]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v47[2]; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v48[2]; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v49[2]; // [rsp+108h] [rbp+0h] BYREF
  _QWORD v50[2]; // [rsp+118h] [rbp+10h] BYREF
  _QWORD v51[2]; // [rsp+128h] [rbp+20h] BYREF
  _QWORD v52[2]; // [rsp+138h] [rbp+30h] BYREF
  _QWORD v53[2]; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v54[2]; // [rsp+158h] [rbp+50h] BYREF
  _QWORD v55[2]; // [rsp+168h] [rbp+60h] BYREF
  _QWORD v56[2]; // [rsp+178h] [rbp+70h] BYREF
  _QWORD v57[8]; // [rsp+188h] [rbp+80h] BYREF

  LODWORD(v30) = 0;
  v32 = 0LL;
  v31 = 0LL;
  v38 = 0LL;
  *(_OWORD *)&v37[1] = 0LL;
  EtwpCopyJobGuidSafe(&v37[1], a1);
  if ( v6 )
    LODWORD(v38) = *(_DWORD *)(v6 + 1452);
  else
    LODWORD(v38) = 0;
  v10 = a6;
  HIDWORD(v38) = v8;
  v39[0] = &v37[1];
  v39[1] = 24LL;
  if ( a6 != 1829 )
  {
    if ( a6 == 1830 )
    {
      if ( v8 != 13 )
        return;
      v40 = (char *)v7;
      v42 = v7 + 4;
      v11 = 19;
      v41 = 4LL;
      v44 = v7 + 8;
      v10 = 1835;
      v43 = 4LL;
      v46[0] = v7 + 16;
      v47[0] = v7 + 24;
      v48[0] = v7 + 32;
      v49[0] = v7 + 40;
      v50[0] = v7 + 48;
      v51[0] = v7 + 56;
      v52[0] = v7 + 80;
      v53[0] = v7 + 64;
      v54[0] = v7 + 72;
      v55[0] = v7 + 76;
      v56[0] = v7 + 88;
      v57[0] = v7 + 92;
      v57[2] = v7 + 96;
      v57[4] = v7 + 100;
      LODWORD(v30) = *v9;
      v57[6] = &v30;
      v45 = 8LL;
      v46[1] = 8LL;
      v47[1] = 8LL;
      v48[1] = 8LL;
      v49[1] = 8LL;
      v50[1] = 8LL;
      v51[1] = 8LL;
      v52[1] = 8LL;
      v53[1] = 8LL;
      v54[1] = 4LL;
      v55[1] = 4LL;
      v56[1] = 4LL;
      v57[1] = 4LL;
      v57[3] = 4LL;
      v57[5] = 4LL;
      v57[7] = 4LL;
    }
    else
    {
      if ( (unsigned int)a6 - 1831 > 1 )
        return;
      v41 = 4LL;
      v40 = &a5;
      v11 = 2;
    }
    goto LABEL_17;
  }
  if ( v8 == 12 )
  {
    v11 = 13;
    v33 = v50;
    v14 = &v40;
    v34 = v51;
    v16 = &v42;
    v35 = v52;
    v17 = &v44;
    v36 = v53;
    v18 = v46;
    v15 = v54;
    v19 = (unsigned __int64 **)v47;
    v20 = (unsigned __int64 **)v48;
    v21 = v49;
    v12 = v7 + 8;
    v13 = v7 + 16;
LABEL_16:
    *((_DWORD *)v14 + 3) = 0;
    v22 = v33;
    *((_DWORD *)v14 + 2) = 4;
    v37[0] = v15;
    *v14 = (char *)(v7 + 40);
    v23 = *(_QWORD *)(v7 + 48);
    *v16 = v7;
    v16[1] = 8LL;
    *v17 = v12;
    v17[1] = 8LL;
    *v18 = v13;
    v18[1] = 8LL;
    v19[1] = (unsigned __int64 *)8;
    v31 = v23 >> 12;
    *v19 = &v31;
    v24 = *(_QWORD *)(v7 + 24);
    v20[1] = (unsigned __int64 *)8;
    v32 = v24 >> 12;
    *v20 = &v32;
    *v21 = v7 + 32;
    v21[1] = 4LL;
    *v22 = v7 + 36;
    v22[1] = 4LL;
    v25 = v34;
    *v34 = v7 + 44;
    v25[1] = 4LL;
    v26 = v35;
    *v35 = v7 + 56;
    v26[1] = 4LL;
    v27 = v36;
    *v36 = v7 + 60;
    v28 = v7 + 64;
    v29 = (_QWORD *)v37[0];
    v27[1] = 4LL;
    v10 = 1833;
    *v29 = v28;
    v29[1] = 4LL;
    goto LABEL_17;
  }
  if ( v8 != 15 )
  {
    if ( v8 != 32 )
      return;
    v40 = (char *)v7;
    v33 = v53;
    v12 = v7 + 8;
    v41 = 4LL;
    v34 = v54;
    v13 = v7 + 16;
    v42 = v7 + 8;
    v35 = v55;
    v11 = 16;
    v43 = 8LL;
    v36 = v56;
    v14 = (char **)v46;
    v15 = v57;
    v44 = v7 + 16;
    v45 = 1LL;
    v16 = v47;
    v17 = v48;
    v18 = v49;
    v19 = (unsigned __int64 **)v50;
    v20 = (unsigned __int64 **)v51;
    v21 = v52;
    goto LABEL_16;
  }
  v40 = (char *)v7;
  v42 = v7 + 4;
  v11 = 3;
  v41 = 4LL;
  v10 = 1836;
  v43 = 4LL;
LABEL_17:
  EtwTraceKernelEvent((__int64)v39, v11, 0x80000u, v10, 0x501904u);
}
