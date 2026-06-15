/*
 * XREFs of ?getZName@UnDecorator@@CA?AVDName@@_N0@Z_1 @ 0x1800C5790
 * Callers:
 *     sub_1800C5050 @ 0x1800C5050 (sub_1800C5050.c)
 *     sub_1800C5260 @ 0x1800C5260 (sub_1800C5260.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BC750 @ 0x1800BC750 (sub_1800BC750.c)
 *     sub_1800BC778 @ 0x1800BC778 (sub_1800BC778.c)
 *     sub_1800C5AF8 @ 0x1800C5AF8 (sub_1800C5AF8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UnDecorator::getZName(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned int v3; // r14d
  _DWORD *v4; // rsi
  _QWORD *v5; // r15
  unsigned int v6; // eax
  void *v7; // r9
  SIZE_T v8; // rsi
  LPVOID v9; // rax
  unsigned __int64 v10; // rax
  char *v11; // r15
  unsigned int v12; // r14d
  _DWORD *v13; // rsi
  LPVOID *v14; // rdi
  SIZE_T cb; // [rsp+30h] [rbp-29h] BYREF
  __int128 v17; // [rsp+38h] [rbp-21h]
  __int128 v18; // [rsp+48h] [rbp-11h] BYREF
  _OWORD v19[3]; // [rsp+58h] [rbp-1h] BYREF

  memset(v19, 0, sizeof(v19));
  v17 = *(_OWORD *)(a1 + 8);
  v18 = v17;
  EtwEventActivityIdControl(4LL, &v18);
  v2 = 0;
  do
  {
    ResetEvent(*(HANDLE *)(a1 + 200));
    sub_1800C5AF8(a1);
    *(_DWORD *)(a1 + 224) = 0;
    v3 = 0;
    v4 = (_DWORD *)v19 + 2;
    v5 = (_QWORD *)(a1 + 128);
    do
    {
      CoTaskMemFree(*((LPVOID *)v4 - 1));
      *((_QWORD *)v4 - 1) = 0LL;
      *v4 = 0;
      if ( *v5
        && (*(int (__fastcall **)(_QWORD, _OWORD *, char *, _QWORD))(*(_QWORD *)*v5 + 24LL))(
             *v5,
             &v19[v3],
             (char *)&v19[v3] + 8,
             *(_QWORD *)(a1 + 200)) < 0 )
      {
        *v4 = 0;
      }
      *(_DWORD *)(a1 + 224) += *v4;
      ++v3;
      v5 += 4;
      v4 += 4;
    }
    while ( v3 < 3 );
  }
  while ( !WaitForSingleObject(*(HANDLE *)(a1 + 200), 0) );
  v6 = *(_DWORD *)(a1 + 224);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 216) = 0LL;
    if ( (int)sub_1800BC750(v6, 0x10uLL, &cb) < 0 )
      goto LABEL_18;
    v8 = cb;
    v9 = CoTaskMemRealloc(v7, cb);
    *(_QWORD *)(a1 + 216) = v9;
    if ( !v9 )
      goto LABEL_18;
    v10 = sub_1800BC778((__int64)v9);
    if ( v10 > v8 )
      memset((void *)(v8 + *(_QWORD *)(a1 + 216)), 0, v10 - v8);
  }
  v11 = *(char **)(a1 + 216);
  v12 = 0;
  v13 = (_DWORD *)v19 + 2;
  do
  {
    if ( *v13 )
    {
      memcpy(v11, *((const void **)v13 - 1), 16LL * (unsigned int)*v13);
      v11 += 16 * (unsigned int)*v13;
    }
    ++v12;
    v13 += 4;
  }
  while ( v12 < 3 );
  RtlPublishWnfStateData(
    *(_QWORD *)(a1 + 92),
    0LL,
    *(_QWORD *)(a1 + 216),
    (unsigned int)(16 * *(_DWORD *)(a1 + 224)),
    0LL);
LABEL_18:
  v14 = (LPVOID *)v19;
  do
  {
    CoTaskMemFree(*v14);
    ++v2;
    v14 += 2;
  }
  while ( v2 < 3 );
  return EtwEventActivityIdControl(4LL, &v18);
}
