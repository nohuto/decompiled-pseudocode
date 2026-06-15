/*
 * XREFs of sub_180126CE0 @ 0x180126CE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_18005B54C @ 0x18005B54C (sub_18005B54C.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 */

__int64 __fastcall sub_180126CE0(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int128 *v5; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // edi
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  __int128 *v12; // rax
  __int64 v13; // rcx
  int v14; // r15d
  __int64 v16; // [rsp+40h] [rbp-59h] BYREF
  __int64 v17; // [rsp+48h] [rbp-51h] BYREF
  __int16 v18[2]; // [rsp+50h] [rbp-49h] BYREF
  unsigned int v19; // [rsp+54h] [rbp-45h] BYREF
  __int128 v20; // [rsp+58h] [rbp-41h] BYREF
  __int128 *v21; // [rsp+68h] [rbp-31h]
  __int128 v22; // [rsp+70h] [rbp-29h] BYREF
  int v23; // [rsp+80h] [rbp-19h]
  __int128 v24; // [rsp+90h] [rbp-9h] BYREF
  __int16 v25; // [rsp+A0h] [rbp+7h]
  __int128 v26; // [rsp+A8h] [rbp+Fh] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 48);
  v18[0] = 0;
  v19 = 0;
  v26 = xmmword_18015B730;
  v5 = 0LL;
  v24 = xmmword_18015B730;
  v25 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( !a2 )
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      v16 = 0x10180070057LL;
      v17 = (__int64)"SpatialAudioDevicePropertyWriter::AddMetadataFormat";
      sub_180109778(
        (__int64)&dword_18019C480,
        byte_18016C12C,
        v6,
        v7,
        (const CHAR **)&v17,
        (__int64)&v16 + 4,
        (__int64)&v16);
    }
    v8 = -2147024809;
    goto LABEL_40;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a2 + 24LL))(a2, &v26);
  v8 = v9;
  if ( v9 < 0 )
  {
    if ( (unsigned int)dword_18019C480 <= 2 )
      goto LABEL_40;
    LODWORD(v16) = 261;
    goto LABEL_38;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, __int16 *))(*(_QWORD *)a2 + 32LL))(a2, v18);
  v8 = v9;
  if ( v9 < 0 )
  {
    if ( (unsigned int)dword_18019C480 <= 2 )
      goto LABEL_40;
    LODWORD(v16) = 264;
    goto LABEL_38;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 40LL))(a2, &v19);
  v8 = v9;
  if ( v9 < 0 )
  {
    if ( (unsigned int)dword_18019C480 <= 2 )
      goto LABEL_40;
    LODWORD(v16) = 267;
    goto LABEL_38;
  }
  v12 = (__int128 *)sub_18006A1B0(v19);
  v5 = v12;
  if ( !v12 )
  {
    v8 = -2147024882;
    if ( (unsigned int)dword_18019C480 <= 2 )
      goto LABEL_40;
    v16 = 0x8007000E0000010FuLL;
LABEL_39:
    v17 = (__int64)"SpatialAudioDevicePropertyWriter::AddMetadataFormat";
    sub_180109778(
      (__int64)&dword_18019C480,
      byte_18016C0FA,
      v10,
      v11,
      (const CHAR **)&v17,
      (__int64)&v16,
      (__int64)&v16 + 4);
    goto LABEL_40;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, v12, v19);
  v8 = v9;
  if ( v9 < 0 )
  {
    if ( (unsigned int)dword_18019C480 <= 2 )
      goto LABEL_40;
    LODWORD(v16) = 274;
    goto LABEL_38;
  }
  v13 = *(_QWORD *)(a1 + 88);
  v21 = 0LL;
  v20 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int128 *))(*(_QWORD *)v13 + 40LL))(
         v13,
         &xmmword_180160C60,
         &v20);
  v8 = v9;
  if ( v9 < 0 )
  {
    if ( (unsigned int)dword_18019C480 <= 2 )
      goto LABEL_40;
    LODWORD(v16) = 280;
LABEL_38:
    HIDWORD(v16) = v9;
    goto LABEL_39;
  }
  if ( (_WORD)v20 == 2 )
  {
    v14 = SWORD4(v20);
    v25 = v18[0];
    v24 = v26;
    v21 = &v24;
    v22 = xmmword_180173A38;
    v20 = 0LL;
    LOWORD(v20) = 65;
    DWORD2(v20) = 18;
    v23 = v14 + 2;
    v9 = sub_18005B54C(a1, (__int64)&v22, (__int64)&v20);
    v8 = v9;
    if ( v9 >= 0 )
    {
      v21 = v5;
      v23 = v14 + 2;
      v20 = 0LL;
      LOWORD(v20) = 65;
      DWORD2(v20) = v19;
      v22 = xmmword_180173A20;
      v9 = sub_18005B54C(a1, (__int64)&v22, (__int64)&v20);
      v8 = v9;
      if ( v9 >= 0 )
      {
        v20 = 0LL;
        v21 = 0LL;
        v22 = xmmword_180160C60;
        LOWORD(v20) = 2;
        WORD4(v20) = v14 + 1;
        v23 = 2;
        v9 = sub_18005B54C(a1, (__int64)&v22, (__int64)&v20);
        v8 = v9;
        if ( v9 >= 0 || (unsigned int)dword_18019C480 <= 2 )
          goto LABEL_40;
        LODWORD(v16) = 311;
      }
      else
      {
        if ( (unsigned int)dword_18019C480 <= 2 )
          goto LABEL_40;
        LODWORD(v16) = 304;
      }
    }
    else
    {
      if ( (unsigned int)dword_18019C480 <= 2 )
        goto LABEL_40;
      LODWORD(v16) = 294;
    }
    goto LABEL_38;
  }
  if ( (unsigned int)dword_18019C480 > 2 )
  {
    v17 = (__int64)"SpatialAudioDevicePropertyWriter::AddMetadataFormat";
    v16 = 0x8000FFFF00000119uLL;
    sub_180109778(
      (__int64)&dword_18019C480,
      byte_18016C12C,
      v10,
      v11,
      (const CHAR **)&v17,
      (__int64)&v16,
      (__int64)&v16 + 4);
  }
  v8 = -2147418113;
LABEL_40:
  sub_180033A70(v5);
  return v8;
}
