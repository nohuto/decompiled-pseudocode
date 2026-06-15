/*
 * XREFs of sub_18012CF58 @ 0x18012CF58
 * Callers:
 *     sub_18012D2B8 @ 0x18012D2B8 (sub_18012D2B8.c)
 * Callees:
 *     sub_180029DDC @ 0x180029DDC (sub_180029DDC.c)
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18012CF58(__int64 a1, int a2, __int64 a3, __int16 a4, __int64 a5)
{
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  unsigned __int64 v16; // rcx
  LPVOID v17; // rdx
  __int64 v19; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20; // [rsp+48h] [rbp-18h] BYREF
  __int64 v21[2]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v22; // [rsp+90h] [rbp+30h] BYREF
  __int64 v23; // [rsp+98h] [rbp+38h] BYREF
  unsigned int v24; // [rsp+A8h] [rbp+48h] BYREF

  LOWORD(v24) = a4;
  v21[1] = -2LL;
  v19 = 0LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  if ( v8 )
    LeaveCriticalSection(v8);
  v20 = 0LL;
  if ( a2 )
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v23) = -2147418113;
      LODWORD(v22) = 202;
      v21[0] = (__int64)"SpatialAudioMetadataDictionary::LoadDictionary";
      sub_180109778(
        (__int64)&dword_18019C480,
        byte_18016C12C,
        v9,
        v10,
        (const CHAR **)v21,
        (__int64)&v22,
        (__int64)&v23);
    }
    v11 = -2147418113;
    goto LABEL_25;
  }
  sub_1800461B8(&v20);
  v12 = sub_180029DDC(a5, 0LL, &v20);
  v11 = v12;
  if ( v12 < 0 )
  {
    if ( (unsigned int)dword_18019C480 <= 2 )
      goto LABEL_25;
    LODWORD(v22) = 205;
LABEL_24:
    LODWORD(v23) = v12;
    v21[0] = (__int64)"SpatialAudioMetadataDictionary::LoadDictionary";
    sub_180109778((__int64)&dword_18019C480, byte_18016C0FA, v13, v14, (const CHAR **)v21, (__int64)&v22, (__int64)&v23);
    goto LABEL_25;
  }
  v15 = v20;
  sub_1800461B8(&v19);
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v15 + 40LL))(v15, a3, &v19);
  v11 = v12;
  if ( v12 < 0 )
  {
    if ( (unsigned int)dword_18019C480 <= 2 )
      goto LABEL_25;
    LODWORD(v22) = 208;
    goto LABEL_24;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 32LL))(v19, a1 + 120);
  v11 = v12;
  if ( v12 < 0 )
  {
    if ( (unsigned int)dword_18019C480 <= 2 )
      goto LABEL_25;
    LODWORD(v22) = 213;
    goto LABEL_24;
  }
  v24 = 0;
  v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v19 + 40LL))(v19, &v24);
  v11 = v12;
  if ( v12 < 0 )
  {
    if ( (unsigned int)dword_18019C480 <= 2 )
      goto LABEL_25;
    LODWORD(v22) = 217;
    goto LABEL_24;
  }
  v16 = v24 >> 1;
  *(_DWORD *)(a1 + 124) = v16;
  v17 = sub_18006A1B0(saturated_mul(v16, 2uLL));
  *(_QWORD *)(a1 + 128) = v17;
  if ( !v17 )
  {
    v11 = -2147024882;
    goto LABEL_25;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, LPVOID, _QWORD))(*(_QWORD *)v19 + 48LL))(v19, v17, v24);
  v11 = v12;
  if ( v12 < 0 && (unsigned int)dword_18019C480 > 2 )
  {
    LODWORD(v22) = 224;
    goto LABEL_24;
  }
LABEL_25:
  sub_1800461B8(&v20);
  sub_1800461B8(&v19);
  return v11;
}
