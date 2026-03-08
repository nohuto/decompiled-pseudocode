/*
 * XREFs of ?ValidateIFIMETRICS@@YA_NPEAU_IFIMETRICS@@@Z @ 0x1C00C434C
 * Callers:
 *     ?CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z @ 0x1C00C3E60 (-CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z.c)
 * Callees:
 *     _lambda_070e29bc377876d11c9c205fcaeb93d1_::operator() @ 0x1C00C4554 (_lambda_070e29bc377876d11c9c205fcaeb93d1_--operator().c)
 *     _lambda_6205c396a1390c774bd95fcbb0cc7414_::operator() @ 0x1C00C45A4 (_lambda_6205c396a1390c774bd95fcbb0cc7414_--operator().c)
 *     _lambda_3eb24279fbdd178c4d8527d8e8f1e39f_::operator() @ 0x1C00C45D4 (_lambda_3eb24279fbdd178c4d8527d8e8f1e39f_--operator().c)
 */

char __fastcall ValidateIFIMETRICS(struct _IFIMETRICS *a1)
{
  __int64 dpwszFamilyName; // rdx
  __int64 v2; // r11
  __int64 v3; // r11
  __int64 v4; // r11
  __int64 v5; // r8
  _DWORD *v6; // r11
  unsigned int v7; // r9d
  unsigned int v8; // eax
  int v9; // r10d
  unsigned __int64 v10; // rdx
  unsigned int v11; // r10d
  __int64 v12; // r8
  unsigned __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  unsigned int v18; // eax
  __int64 v20; // rdx
  __int64 v21; // rdx
  int v22; // r10d
  struct _IFIMETRICS *v23; // [rsp+30h] [rbp+10h] BYREF
  struct _IFIMETRICS **v24; // [rsp+38h] [rbp+18h] BYREF

  v23 = a1;
  dpwszFamilyName = (unsigned int)a1->dpwszFamilyName;
  v24 = &v23;
  if ( !(unsigned __int8)lambda_070e29bc377876d11c9c205fcaeb93d1_::operator()(&v24, dpwszFamilyName)
    || !(unsigned __int8)lambda_070e29bc377876d11c9c205fcaeb93d1_::operator()(&v24, *(unsigned int *)(v2 + 12))
    || !(unsigned __int8)lambda_070e29bc377876d11c9c205fcaeb93d1_::operator()(&v24, *(unsigned int *)(v3 + 16))
    || !(unsigned __int8)lambda_070e29bc377876d11c9c205fcaeb93d1_::operator()(&v24, *(unsigned int *)(v4 + 20)) )
  {
    return 0;
  }
  v7 = v6[1];
  v24 = &v23;
  if ( v7 )
  {
    if ( v7 < 8 )
      return 0;
    v8 = v6[49];
    if ( v8 )
    {
      if ( v8 < 0xC0 || v8 + 24 < v8 || v8 + 24 > *v6 )
        return 0;
    }
    v9 = 0;
    if ( v7 >= 0x10 )
    {
      v10 = (int)v6[51];
      if ( (_DWORD)v10 )
      {
        if ( v10 < 0xC0 )
          return 0;
        if ( (int)v10 + 8 < (unsigned int)v10 )
          return 0;
        if ( (unsigned int)(v10 + 8) > *v6 )
          return 0;
        v11 = *(_DWORD *)((char *)v6 + v10 + 4);
        if ( v11 > 0x10 )
          return 0;
        v12 = 140LL;
        if ( *(_DWORD *)((char *)v6 + v10) != 134248052 )
          v12 = 4 * v11 + 8;
        if ( !(unsigned __int8)lambda_3eb24279fbdd178c4d8527d8e8f1e39f_::operator()(&v24, v10, v12) )
          return 0;
      }
    }
    if ( v7 >= 0x14 )
    {
      v20 = (int)v6[52];
      if ( (_DWORD)v20 )
      {
        if ( !(unsigned __int8)lambda_3eb24279fbdd178c4d8527d8e8f1e39f_::operator()(
                                 &v24,
                                 v20,
                                 (unsigned int)(40 * v9 + 8))
          || *(_DWORD *)((char *)v6 + v21 + 4) != v22 )
        {
          return 0;
        }
      }
    }
  }
  if ( ((v13 = (int)v6[6], !(_DWORD)v13)
     || (v14 = (int)v6[6], v13 >= 0xC0)
     && (int)v13 + 12 >= (unsigned int)v13
     && (unsigned int)(v13 + 12) <= *v6
     && ((v15 = *(unsigned int *)((char *)v6 + v13), v24 = &v23, !(_DWORD)v15)
      || (unsigned __int8)lambda_6205c396a1390c774bd95fcbb0cc7414_::operator()(&v24, v15, v5, v14))
     && ((v16 = *(unsigned int *)((char *)v6 + v14 + 4), !(_DWORD)v16)
      || (unsigned __int8)lambda_6205c396a1390c774bd95fcbb0cc7414_::operator()(&v24, v16, v5, v14))
     && ((v17 = *(unsigned int *)((char *)v6 + v14 + 8), !(_DWORD)v17)
      || (unsigned __int8)lambda_6205c396a1390c774bd95fcbb0cc7414_::operator()(&v24, v17, v5, v14)))
    && ((v18 = v6[10]) == 0 || v18 >= 0xC0 && v18 + 16 >= v18 && v18 + 16 <= *v6) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
