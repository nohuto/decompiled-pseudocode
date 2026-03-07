char __fastcall MinAsn1ParseAndDecodeRDNComponent(unsigned int *a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v6; // rcx
  int v8; // ebx
  __int64 v9; // rdi
  int v10; // ecx
  _BYTE *v12; // rbx
  int v13; // [rsp+30h] [rbp-39h] BYREF
  __int64 v14; // [rsp+38h] [rbp-31h] BYREF
  int v15; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v16[16]; // [rsp+50h] [rbp-19h] BYREF
  unsigned int v17; // [rsp+60h] [rbp-9h]
  int v18; // [rsp+70h] [rbp+7h]
  unsigned __int16 *v19; // [rsp+78h] [rbp+Fh]
  unsigned int v20; // [rsp+80h] [rbp+17h]
  _BYTE *v21; // [rsp+88h] [rbp+1Fh]

  v4 = *a1;
  v6 = *((_QWORD *)a1 + 1);
  v14 = 0LL;
  v13 = 0;
  v15 = 4;
  if ( (int)MinAsn1ExtractContent(v6, v4, &v13, &v14) > 0 )
  {
    v8 = v13;
    if ( v13 )
    {
      v9 = v14;
      while ( (int)MinAsn1ExtractValues(v9, v8, (unsigned int)&v15, (unsigned int)&qword_14000B520, 4, (__int64)v16) > 0 )
      {
        if ( v18 == 3 )
        {
          v10 = *v19 - 1109;
          if ( *v19 == 1109 )
            v10 = *((unsigned __int8 *)v19 + 2) - BYTE2(qword_140A74E98);
          if ( !v10 )
          {
            v12 = v21;
            if ( (int)MinAsn1ExtractContent(v21, v20, &v13, &v14) <= 0 )
              return 0;
            *a3 = *v12;
            *(_QWORD *)(a4 + 8) = v14;
            *(_DWORD *)a4 = v13;
            return 1;
          }
        }
        v9 += v17;
        v8 -= v17;
        v13 = v8;
        v14 = v9;
        if ( !v8 )
          return 0;
      }
    }
  }
  return 0;
}
