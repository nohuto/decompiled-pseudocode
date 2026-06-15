/*
 * XREFs of sub_180013360 @ 0x180013360
 * Callers:
 *     sub_180014230 @ 0x180014230 (sub_180014230.c)
 *     sub_1800EABCC @ 0x1800EABCC (sub_1800EABCC.c)
 *     sub_1800ED858 @ 0x1800ED858 (sub_1800ED858.c)
 * Callees:
 *     sub_180021FB0 @ 0x180021FB0 (sub_180021FB0.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800C24EC @ 0x1800C24EC (sub_1800C24EC.c)
 *     sub_1800E3CDC @ 0x1800E3CDC (sub_1800E3CDC.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180013360(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int128 *a4,
        _OWORD *a5,
        unsigned __int16 *a6,
        unsigned __int16 *Src,
        __int64 a8,
        _QWORD *a9)
{
  _OWORD *v12; // rbx
  int v13; // eax
  int v14; // ebp
  _OWORD *v15; // rax
  _OWORD *v16; // rsi
  void *v17; // rdi
  __int64 v18; // rdi
  void *v19; // rax
  void *v20; // rbp
  __int64 v21; // r14
  void *v22; // rax
  __int64 v24; // [rsp+40h] [rbp-58h] BYREF
  _OWORD *v25; // [rsp+48h] [rbp-50h]
  void *v26; // [rsp+50h] [rbp-48h]
  __int128 v27; // [rsp+60h] [rbp-38h] BYREF

  v12 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  v27 = *a4;
  if ( a2 == 1 )
    v13 = sub_180021FB0(a1, a3, (unsigned int)&v27, 0, 0LL, (__int64)&a8, (__int64)&v24);
  else
    v13 = sub_180021FB0(a1, a3, (unsigned int)&v27, 0, 0LL, 0LL, (__int64)&v24);
  v14 = v13;
  if ( v13 < 0 )
    goto LABEL_16;
  v15 = (_OWORD *)sub_18006A18C(96LL, &unk_18019F848);
  v16 = v15;
  if ( v15 )
  {
    *v15 = 0LL;
    v15[1] = 0LL;
    v15[2] = 0LL;
    v15[3] = 0LL;
    v15[4] = 0LL;
    v15[5] = 0LL;
  }
  else
  {
    v16 = 0LL;
  }
  v12 = v16;
  v25 = v16;
  v14 = 0;
  if ( !v16 )
    v14 = -2147024882;
  v17 = 0LL;
  if ( v14 >= 0 )
  {
    v18 = Src[8];
    v19 = CoTaskMemAlloc(v18 + 18);
    v20 = v19;
    if ( v19 )
    {
      memcpy(v19, Src, v18 + 18);
      v17 = v20;
      v21 = a6[8];
      v22 = CoTaskMemAlloc(v21 + 18);
      v26 = v22;
      if ( v22 )
      {
        memcpy(v22, a6, v21 + 18);
        *((_DWORD *)v16 + 2) = a3;
        *(_QWORD *)&v27 = 0LL;
        CoTaskMemFree(*((LPVOID *)v16 + 2));
        *((_QWORD *)v16 + 2) = v26;
        v17 = 0LL;
        v26 = 0LL;
        CoTaskMemFree(*((LPVOID *)v16 + 3));
        *((_QWORD *)v16 + 3) = v20;
        *((_QWORD *)v16 + 4) = a8;
        *((_QWORD *)v16 + 5) = v24;
        v16[4] = *a5;
        v16[3] = *a4;
        v14 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *))(**(_QWORD **)(a1 + 16) + 40LL))(*(_QWORD *)(a1 + 16), v16);
        if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
          && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
          && *((_BYTE *)off_18019C348 + 25) >= 4u )
        {
          sub_1800C24EC(*((_QWORD *)off_18019C348 + 2), 11LL, &unk_18015E5F0, a3, a8);
        }
        CoCreateGuid((GUID *)v16 + 5);
        goto LABEL_14;
      }
    }
    else
    {
      v17 = 0LL;
    }
    v14 = -2147024882;
  }
LABEL_14:
  CoTaskMemFree(v17);
  CoTaskMemFree(0LL);
  if ( v14 >= 0 )
  {
    v12 = 0LL;
    *a9 = v16;
  }
LABEL_16:
  if ( v12 )
    sub_1800E3CDC(v12);
  return (unsigned int)v14;
}
