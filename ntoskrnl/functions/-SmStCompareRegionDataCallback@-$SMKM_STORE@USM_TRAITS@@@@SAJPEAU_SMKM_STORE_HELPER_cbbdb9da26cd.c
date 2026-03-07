__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStCompareRegionDataCallback(
        __int64 a1,
        unsigned __int16 *a2,
        int a3,
        struct _MDL *a4)
{
  unsigned int v5; // edi
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  unsigned int v8; // r15d
  volatile signed __int32 *v10; // r13
  _BYTE *v11; // r8
  __int64 v12; // rcx
  unsigned __int64 v13; // r12
  unsigned int *v14; // r13
  unsigned int *v15; // rax
  unsigned __int64 v16; // rax
  _DWORD *v17; // r10
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  _BYTE *v20; // rcx
  __int64 v21; // rcx
  struct _MDL *v22; // r9
  unsigned __int64 v23; // r8
  int v24; // [rsp+20h] [rbp-98h]
  void *Buf2; // [rsp+48h] [rbp-70h]
  void *Buf1; // [rsp+50h] [rbp-68h]
  unsigned __int64 v27; // [rsp+60h] [rbp-58h]
  unsigned int *i; // [rsp+68h] [rbp-50h]
  _DWORD *v29; // [rsp+C0h] [rbp+8h]

  v5 = 0;
  v6 = 0LL;
  v7 = a1 - 6232;
  v8 = 0;
  if ( a3 )
  {
    ExFreePoolWithTag(a2, 0);
    return 0LL;
  }
  v10 = (volatile signed __int32 *)(v7 + 6596);
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 6596));
  v11 = (_BYTE *)(v7 + 6021);
  v12 = *(unsigned int *)a2;
  if ( (*(_BYTE *)(v7 + 6021) & 4) == 0 )
  {
    v13 = *(_QWORD *)((*(_QWORD *)(*(_QWORD *)(v7 + 6216) + 8 * v12) & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    goto LABEL_8;
  }
  v13 = SMKM_STORE<SM_TRAITS>::SmStMapRegion(v7, v12, 0, (_DWORD)a4, 64);
  if ( v13 > 3 )
  {
    v11 = (_BYTE *)(v7 + 6021);
LABEL_8:
    v14 = (unsigned int *)(a2 + 4);
    v15 = (unsigned int *)((char *)a2 + a2[3]);
    for ( i = v15; ; v15 = i )
    {
      if ( v14 >= v15 )
      {
LABEL_24:
        v10 = (volatile signed __int32 *)(v7 + 6596);
        goto LABEL_25;
      }
      Buf1 = (void *)(v13 + *v14);
      *((_BYTE *)v14 + 7) = 16;
      v16 = (unsigned __int64)&v14[2 * *((unsigned __int8 *)v14 + 6) + 2];
      v27 = v16;
      v17 = v14 + 2;
      while ( 1 )
      {
        v29 = v17;
        if ( (unsigned __int64)v17 >= v16 )
          break;
        if ( v6 )
        {
          if ( v8 == *v17 )
            goto LABEL_33;
          if ( v6 != v13 )
          {
            if ( (*v11 & 4) != 0 )
            {
              SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v7, v8, (_DWORD)v11, (_DWORD)a4, v24, 8);
            }
            else
            {
              v18 = *(_QWORD *)(v7 + 6216);
              a4 = (struct _MDL *)(*(_QWORD *)(v18 + 8LL * v8) & 0xFFFFFFFFFFFFFFF8uLL);
              v19 = *(_QWORD *)(v18 + 8LL * v8) & 0xFFFFFFFFFFFFFFFEuLL;
              *(_QWORD *)(v18 + 8LL * v8) = v19;
              if ( (v19 & 3) != 0 )
                goto LABEL_20;
              SmFpFree(v7 + 6608, 5, (__int64)KeGetCurrentThread(), a4);
            }
            v17 = v29;
          }
        }
LABEL_20:
        v8 = *v17;
        if ( *v17 == *(_DWORD *)a2 )
        {
          v6 = v13;
        }
        else
        {
          v6 = SMKM_STORE<SM_TRAITS>::SmStMapRegion(v7, v8, 0, (_DWORD)a4, 64);
          if ( v6 <= 3 )
          {
            v5 = -1073741670;
            goto LABEL_24;
          }
          v17 = v29;
        }
LABEL_33:
        Buf2 = (void *)(v6 + (unsigned int)v17[1]);
        if ( (unsigned int)SMKM_STORE<SM_TRAITS>::SmStCheckResident((__int64)Buf2, *((unsigned __int16 *)v14 + 2)) == 1 )
        {
          if ( !memcmp(Buf1, Buf2, *((unsigned __int16 *)v14 + 2)) )
            *((_BYTE *)v14 + 7) = ((char *)v29 - (char *)(v14 + 2)) >> 3;
          if ( *((_BYTE *)v14 + 7) != 16 )
            break;
        }
        v17 = v29 + 2;
        v11 = (_BYTE *)(v7 + 6021);
        v16 = v27;
      }
      v14 += 2 * *((unsigned __int8 *)v14 + 6) + 2;
      v11 = (_BYTE *)(v7 + 6021);
    }
  }
  v5 = -1073741670;
LABEL_25:
  v20 = (_BYTE *)(v7 + 6021);
  if ( (*(_BYTE *)(v7 + 6021) & 4) != 0 && v13 > 3 )
  {
    SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v7, *(_DWORD *)a2, (_DWORD)v11, (_DWORD)a4, v24, 8);
    v20 = (_BYTE *)(v7 + 6021);
  }
  if ( v6 > 3 && v6 != v13 )
  {
    if ( (*v20 & 4) != 0 )
    {
      SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v7, v8, (_DWORD)v11, (_DWORD)a4, v24, 8);
    }
    else
    {
      v21 = *(_QWORD *)(v7 + 6216);
      v22 = (struct _MDL *)(*(_QWORD *)(v21 + 8LL * v8) & 0xFFFFFFFFFFFFFFF8uLL);
      v23 = *(_QWORD *)(v21 + 8LL * v8) & 0xFFFFFFFFFFFFFFFEuLL;
      *(_QWORD *)(v21 + 8LL * v8) = v23;
      if ( (v23 & 3) == 0 )
        SmFpFree(v7 + 6608, 5, (__int64)KeGetCurrentThread(), v22);
    }
  }
  _InterlockedDecrement(v10);
  return v5;
}
