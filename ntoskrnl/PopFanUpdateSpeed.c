/*
 * XREFs of PopFanUpdateSpeed @ 0x140846AC0
 * Callers:
 *     PopFanWorker @ 0x140846840 (PopFanWorker.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PopSendFanNoiseChangeWnf @ 0x14086012C (PopSendFanNoiseChangeWnf.c)
 *     PopFanFindBucketIndex @ 0x14099426C (PopFanFindBucketIndex.c)
 *     PopFanUpdateStatistics @ 0x140994754 (PopFanUpdateStatistics.c)
 */

unsigned __int8 __fastcall PopFanUpdateSpeed(__int64 a1, unsigned int a2)
{
  unsigned __int8 v4; // r14
  unsigned int v5; // esi
  __int64 v7; // rax
  unsigned int *v8; // rcx
  int v9; // eax
  int v10; // ecx
  char v11; // [rsp+30h] [rbp-D0h] BYREF
  char v12; // [rsp+31h] [rbp-CFh] BYREF
  int v13; // [rsp+34h] [rbp-CCh] BYREF
  int v14; // [rsp+38h] [rbp-C8h] BYREF
  int v15; // [rsp+3Ch] [rbp-C4h] BYREF
  int v16; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  int v18; // [rsp+50h] [rbp-B0h]
  int v19; // [rsp+54h] [rbp-ACh]
  struct _EVENT_DATA_DESCRIPTOR v20[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v21; // [rsp+80h] [rbp-80h]
  __int64 v22; // [rsp+88h] [rbp-78h]
  int *v23; // [rsp+90h] [rbp-70h]
  __int64 v24; // [rsp+98h] [rbp-68h]
  int *v25; // [rsp+A0h] [rbp-60h]
  __int64 v26; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v28; // [rsp+D0h] [rbp-30h]
  __int64 v29; // [rsp+D8h] [rbp-28h]
  int *v30; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  char *v32; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]
  char *v34; // [rsp+100h] [rbp+0h]
  __int64 v35; // [rsp+108h] [rbp+8h]
  int *v36; // [rsp+110h] [rbp+10h]
  __int64 v37; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+120h] [rbp+20h] BYREF
  __int64 *v39; // [rsp+140h] [rbp+40h]
  __int64 v40; // [rsp+148h] [rbp+48h]
  int *v41; // [rsp+150h] [rbp+50h]
  __int64 v42; // [rsp+158h] [rbp+58h]
  int *v43; // [rsp+160h] [rbp+60h]
  __int64 v44; // [rsp+168h] [rbp+68h]

  v17 = 0x200000001LL;
  v4 = 0;
  v15 = 0;
  v16 = 0;
  v5 = 3;
  v19 = 3;
  v18 = 2;
  if ( !*(_BYTE *)(a1 + 88) )
  {
    if ( *(_DWORD *)(a1 + 84) != a2 )
      *(_DWORD *)(a1 + 84) = a2;
    goto LABEL_4;
  }
  PopFanUpdateStatistics(a1);
  if ( *(_DWORD *)(a1 + 84) == a2 )
  {
LABEL_4:
    if ( (unsigned int)dword_140C03928 > 5 )
    {
      v17 = a1;
      v28 = &v17;
      v13 = *(_DWORD *)(a1 + 84);
      v29 = 8LL;
      v30 = &v13;
      v11 = *(_BYTE *)(a1 + 88);
      v32 = &v11;
      v12 = *(_BYTE *)(a1 + 200);
      v34 = &v12;
      v14 = v4;
      v36 = &v14;
      v31 = 4LL;
      v33 = 1LL;
      v35 = 1LL;
      v37 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C03928,
        (unsigned __int8 *)word_140031332,
        0LL,
        0LL,
        7u,
        &v27);
    }
    return v4;
  }
  *(_DWORD *)(a1 + 84) = a2;
  if ( dword_140C3C5C8 == 1 )
  {
    if ( a2 )
    {
      v7 = 0LL;
      v8 = (unsigned int *)(a1 + 112);
      while ( a2 > *v8 )
      {
        v7 = (unsigned int)(v7 + 1);
        ++v8;
        if ( (unsigned int)v7 >= 4 )
          goto LABEL_16;
      }
      v5 = *((_DWORD *)&v17 + v7);
    }
    else
    {
      v5 = 0;
    }
LABEL_16:
    if ( dword_140C3C5CC != v5 )
    {
      if ( (unsigned int)dword_140C03928 > 5 )
      {
        v14 = dword_140C3C5CC;
        v21 = &v17;
        v23 = &v14;
        v17 = a1;
        v25 = &v13;
        v22 = 8LL;
        v24 = 4LL;
        v13 = v5;
        v26 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C03928,
          (unsigned __int8 *)byte_140031131,
          0LL,
          0LL,
          5u,
          v20);
      }
      PopSendFanNoiseChangeWnf(v5);
      dword_140C3C5CC = v5;
    }
  }
  else if ( (unsigned int)dword_140C03928 > 2 )
  {
    v17 = a1;
    v21 = &v17;
    v13 = dword_140C3C5C8;
    v22 = 8LL;
    v23 = &v13;
    v24 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C03928, (unsigned __int8 *)byte_1400310D7, 0LL, 0LL, 4u, v20);
  }
  PopFanFindBucketIndex(a1, a2, &v16, &v15);
  v9 = v16;
  v10 = v15;
  if ( v16 != *(_DWORD *)(a1 + 100) || v15 != *(_DWORD *)(a1 + 104) )
  {
    *(_DWORD *)(a1 + 92) = v16;
    v4 = 1;
    *(_DWORD *)(a1 + 96) = v10;
  }
  if ( (unsigned int)dword_140C03928 > 5 )
  {
    v13 = v9;
    v39 = &v17;
    v41 = &v13;
    v14 = v10;
    v43 = &v14;
    v17 = a1;
    v40 = 8LL;
    v42 = 4LL;
    v44 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C03928,
      (unsigned __int8 *)&dword_1400312E4,
      0LL,
      0LL,
      5u,
      &v38);
    goto LABEL_4;
  }
  return v4;
}
