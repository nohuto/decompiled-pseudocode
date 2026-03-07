__int64 __fastcall sub_140A4B34C(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // esi
  unsigned int v4; // r8d
  unsigned int v5; // edx
  void *v7; // rsi
  int v8; // edi
  __int64 v9; // rax
  char *v10; // r14
  unsigned int v11; // r9d
  unsigned int v12; // ecx
  unsigned int v14; // [rsp+28h] [rbp-50h]
  __int64 v15; // [rsp+38h] [rbp-40h]
  unsigned __int8 v16; // [rsp+80h] [rbp+8h] BYREF
  char *v17; // [rsp+88h] [rbp+10h] BYREF
  PMDL Mdl; // [rsp+90h] [rbp+18h] BYREF

  v2 = a2[1];
  v4 = *a2;
  v5 = a2[2];
  v17 = 0LL;
  v7 = (void *)(*(_QWORD *)(a1 + 32) + (v2 & 0xFFFFFFF));
  Mdl = 0LL;
  v8 = sub_14075424C(v7, v5 & 0xFFFFFFF, (v4 & 2) == 0);
  if ( v8 >= 0 )
  {
    v8 = sub_1406B6FF4(v7, a2[2] & 0xFFFFFFF, (*a2 & 2) == 0, &Mdl, &v17);
    if ( v8 >= 0 )
    {
      v9 = *(_QWORD *)(a1 + 56);
      v10 = v17;
      v11 = a2[2] & 0xFFFFFFF;
      v14 = a2[1] & 0xFFFFFFF;
      v16 = 0;
      v8 = sub_14075435C(1, (char *)v7, v17, v11, (__int64 *)(v9 + 72), v14, (__int128 *)(v9 + 80), v15, &v16);
      if ( v8 >= 0 )
      {
        v12 = *a2 & 0xFFFFFC03 | (4 * v16);
        *a2 = v12;
        if ( (v12 & 2) == 0 )
        {
          if ( (a2[2] & 0xFFFFFFF) >= 4 )
            *(_DWORD *)v10 = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 244LL);
          else
            v8 = -1073741811;
        }
      }
    }
  }
  sub_140754E6C(Mdl);
  return (unsigned int)v8;
}
