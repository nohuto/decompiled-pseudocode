__int64 __fastcall SmStoreCreate(__int64 a1, int a2, __int128 *a3, _DWORD *a4)
{
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 result; // rax
  int v11; // ecx
  __int64 v12; // [rsp+30h] [rbp-59h] BYREF
  _DWORD v13[2]; // [rsp+38h] [rbp-51h] BYREF
  _QWORD *v14; // [rsp+40h] [rbp-49h]
  int v15; // [rsp+48h] [rbp-41h]
  int v16; // [rsp+4Ch] [rbp-3Dh]
  _QWORD v17[12]; // [rsp+50h] [rbp-39h] BYREF

  v12 = 0LL;
  v16 = 0;
  v13[0] = 1;
  v13[1] = 3;
  v14 = v17;
  v15 = 88;
  memset((char *)v17 + 4, 0, 0x54uLL);
  v8 = *a3;
  v9 = a3[1];
  LODWORD(v17[0]) = 6;
  *(_OWORD *)&v17[1] = v8;
  *(_OWORD *)&v17[5] = a3[2];
  v17[9] = *((_QWORD *)a3 + 8);
  *(_OWORD *)&v17[3] = v9;
  *(_OWORD *)&v17[7] = a3[3];
  if ( a2 )
  {
    if ( a2 != 1 )
      return 3221225485LL;
    result = ZwSetSystemInformation(109LL, (__int64)v13);
    v11 = v17[10];
  }
  else
  {
    result = SmStorePhysicalRequestIssue(*(PDEVICE_OBJECT *)(a1 + 1904), 0, (__int64)&v12);
    v11 = v12;
  }
  if ( (int)result >= 0 )
  {
    *a4 = v11;
    return 0LL;
  }
  return result;
}
