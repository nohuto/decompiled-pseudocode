/*
 * XREFs of sub_180129A0C @ 0x180129A0C
 * Callers:
 *     sub_180067640 @ 0x180067640 (sub_180067640.c)
 *     sub_180129E00 @ 0x180129E00 (sub_180129E00.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 *     sub_18012C318 @ 0x18012C318 (sub_18012C318.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180129A0C(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // r8
  int v14; // [rsp+48h] [rbp-C0h] BYREF
  int v15; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v16; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v17[2]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v18[160]; // [rsp+68h] [rbp-A0h] BYREF

  v17[1] = -2LL;
  v17[0] = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 40LL))(*(_QWORD *)(a1 + 88));
  v7 = v4;
  if ( v4 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a2 + 24LL))(a2, v18);
    v7 = v8;
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 88) + 56LL))(*(_QWORD *)(a1 + 88), v18);
      v7 = v8;
      if ( v8 >= 0 )
      {
        sub_1800461B8(v17);
        v8 = sub_18012C318(v11, &unk_180160828, v12, v17);
        v7 = v8;
        if ( v8 >= 0 )
        {
          v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 48LL))(
                 *(_QWORD *)(a1 + 88),
                 v17[0]);
          v7 = v8;
          if ( v8 >= 0 || (unsigned int)dword_18019C480 <= 2 )
            goto LABEL_17;
          v14 = 426;
        }
        else
        {
          if ( (unsigned int)dword_18019C480 <= 2 )
            goto LABEL_17;
          v14 = 423;
        }
      }
      else
      {
        if ( (unsigned int)dword_18019C480 <= 2 )
          goto LABEL_17;
        v14 = 420;
      }
    }
    else
    {
      if ( (unsigned int)dword_18019C480 <= 2 )
        goto LABEL_17;
      v14 = 417;
    }
    v15 = v8;
    v16 = (__int64)"SpatialAudioConfigureDevice::ConfigureDtsxHeadphones";
    sub_180109778((__int64)&dword_18019C480, byte_18016C0FA, v9, v10, (const CHAR **)&v16, (__int64)&v14, (__int64)&v15);
    goto LABEL_17;
  }
  if ( (unsigned int)dword_18019C480 > 2 )
  {
    v14 = v4;
    v15 = 414;
    v16 = (__int64)"SpatialAudioConfigureDevice::ConfigureDtsxHeadphones";
    sub_180109778((__int64)&dword_18019C480, byte_18016C0FA, v5, v6, (const CHAR **)&v16, (__int64)&v15, (__int64)&v14);
  }
LABEL_17:
  sub_1800461B8(v17);
  return v7;
}
