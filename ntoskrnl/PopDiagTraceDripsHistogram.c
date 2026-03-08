/*
 * XREFs of PopDiagTraceDripsHistogram @ 0x1405907C8
 * Callers:
 *     PpmSnapDripsAccountingSnapshot @ 0x140583970 (PpmSnapDripsAccountingSnapshot.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceDripsHistogram(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  unsigned __int128 v6; // rax
  char v8; // si
  _QWORD *v10; // rdx
  unsigned int v11; // r8d
  __int64 v12; // rbx
  _BYTE *v13; // rcx
  __int64 v14; // r11
  __int16 v15; // r10
  char v17; // [rsp+38h] [rbp-D0h] BYREF
  char v18; // [rsp+39h] [rbp-CFh] BYREF
  char v19; // [rsp+3Ah] [rbp-CEh] BYREF
  char v20; // [rsp+3Bh] [rbp-CDh] BYREF
  char v21; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v22; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+58h] [rbp-B0h]
  __int64 v25; // [rsp+60h] [rbp-A8h]
  _QWORD v26[3]; // [rsp+68h] [rbp-A0h] BYREF
  char v27; // [rsp+80h] [rbp-88h]
  __int64 v28; // [rsp+88h] [rbp-80h]
  __int64 v29; // [rsp+90h] [rbp-78h]
  char v30; // [rsp+98h] [rbp-70h]
  __int64 v31; // [rsp+A0h] [rbp-68h]
  __int64 v32; // [rsp+A8h] [rbp-60h]
  char v33; // [rsp+B0h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+B8h] [rbp-50h] BYREF
  __int64 *v35; // [rsp+D8h] [rbp-30h]
  __int64 v36; // [rsp+E0h] [rbp-28h]
  __int64 *v37; // [rsp+E8h] [rbp-20h]
  __int64 v38; // [rsp+F0h] [rbp-18h]
  char *v39; // [rsp+F8h] [rbp-10h]
  __int64 v40; // [rsp+100h] [rbp-8h]
  char *v41; // [rsp+108h] [rbp+0h]
  __int64 v42; // [rsp+110h] [rbp+8h]
  char *v43; // [rsp+118h] [rbp+10h]
  __int64 v44; // [rsp+120h] [rbp+18h]
  char *v45; // [rsp+128h] [rbp+20h]
  __int64 v46; // [rsp+130h] [rbp+28h]
  char *v47; // [rsp+138h] [rbp+30h]
  __int64 v48; // [rsp+140h] [rbp+38h]

  v31 = -1LL;
  v24 = 20000000LL;
  v25 = 0LL;
  v6 = a2 * (unsigned __int128)0xE5109EC205D7BEA7uLL;
  LOBYTE(v26[0]) = 0;
  v26[1] = 160000000LL;
  v26[2] = 0LL;
  v27 = 0;
  v28 = 600000000LL;
  v29 = 0LL;
  v30 = 0;
  v32 = 0LL;
  v33 = 0;
  if ( (unsigned __int16)(*((_QWORD *)&v6 + 1) >> 29) )
  {
    *(_QWORD *)&v6 = 100 * a3 / a2;
    v8 = v6;
    if ( (_BYTE)v6 )
    {
      v10 = &unk_140D1D6D8;
      v11 = 0;
      v12 = 26LL;
      do
      {
        for ( ; v11 < 3; ++v11 )
        {
          if ( *v10 <= (unsigned __int64)*(&v24 + 3 * v11) )
            break;
        }
        v10 += 3;
        v26[3 * v11 - 1] += *a5++;
        --v12;
      }
      while ( v12 );
      v13 = v26;
      v14 = 4LL;
      do
      {
        *(_QWORD *)&v6 = ((a2 >> 1) + 100LL * *((_QWORD *)v13 - 1)) / a2;
        *v13 = v6;
        v13 += 24;
        --v14;
      }
      while ( v14 );
      if ( (unsigned int)dword_140C03928 > 5 )
      {
        LOBYTE(v6) = tlgKeywordOn((__int64)&dword_140C03928, 0x400000000000LL);
        if ( (_BYTE)v6 )
        {
          v23 = a1;
          v35 = &v23;
          v36 = 8LL;
          v37 = &v22;
          LOWORD(v22) = v15;
          v39 = &v17;
          v18 = v26[0];
          v41 = &v18;
          v19 = v27;
          v43 = &v19;
          v20 = v30;
          v45 = &v20;
          v21 = v33;
          v47 = &v21;
          v38 = 2LL;
          v17 = v8;
          v40 = 1LL;
          v42 = 1LL;
          v44 = 1LL;
          v46 = 1LL;
          v48 = 1LL;
          LOBYTE(v6) = tlgWriteTransfer_EtwWriteTransfer(
                         (__int64)&dword_140C03928,
                         (unsigned __int8 *)byte_14002F250,
                         0LL,
                         0LL,
                         9u,
                         &v34);
        }
      }
    }
  }
  return v6;
}
