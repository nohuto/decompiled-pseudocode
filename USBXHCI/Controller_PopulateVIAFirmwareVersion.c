/*
 * XREFs of Controller_PopulateVIAFirmwareVersion @ 0x1C00783C8
 * Callers:
 *     Controller_PopulatePciDeviceInformation @ 0x1C0074CAC (Controller_PopulatePciDeviceInformation.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00180C4 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C001E054 (WPP_RECORDER_SF_DDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Controller_PopulateVIAFirmwareVersion(int a1, __int64 a2, __int64 a3, unsigned __int64 *a4)
{
  __int64 (__fastcall *v7)(__int64, _QWORD, _DWORD *, __int64, int); // rax
  __int64 v8; // rcx
  int v9; // eax
  int v10; // edx
  int v11; // r9d
  __int64 (__fastcall *v12)(__int64, _QWORD, char *, __int64, int); // rax
  __int64 v13; // rcx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // edx
  char v18; // [rsp+28h] [rbp-28h]
  unsigned __int8 v19; // [rsp+40h] [rbp-10h] BYREF
  char v20[3]; // [rsp+41h] [rbp-Fh] BYREF
  _DWORD v21[3]; // [rsp+44h] [rbp-Ch] BYREF
  unsigned __int8 v22; // [rsp+80h] [rbp+30h] BYREF

  if ( *(_WORD *)(a3 + 2) == 13362 )
  {
    v12 = *(__int64 (__fastcall **)(__int64, _QWORD, char *, __int64, int))(a2 + 56);
    v13 = *(_QWORD *)(a2 + 8);
    v20[0] = 0;
    v19 = 0;
    v22 = 0;
    v14 = v12(v13, 0LL, v20, 609LL, 1);
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int8 *, __int64, int))(a2 + 56))(
            *(_QWORD *)(a2 + 8),
            0LL,
            &v19,
            610LL,
            1)
        + v14;
    v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int8 *, __int64, int))(a2 + 56))(
            *(_QWORD *)(a2 + 8),
            0LL,
            &v22,
            611LL,
            1)
        + v15;
    if ( v16 != 3 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return;
      v11 = 244;
      v18 = v16;
      goto LABEL_13;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = v22;
      LOBYTE(v17) = 4;
      WPP_RECORDER_SF_DDD(a1, v17, 4, 245, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, v22, v19, v20[0]);
    }
    *a4 = (unsigned __int8)v20[0] | ((v19 | ((unsigned __int64)v22 << 8)) << 8);
  }
  else if ( *(_WORD *)(a3 + 2) == 13443 || *(unsigned __int16 *)(a3 + 2) == 37377 )
  {
    v7 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64, int))(a2 + 56);
    v8 = *(_QWORD *)(a2 + 8);
    v21[0] = 0;
    v9 = v7(v8, 0LL, v21, 80LL, 4);
    if ( v9 != 4 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return;
      v11 = 246;
      v18 = v9;
LABEL_13:
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_d(a1, v10, 4, v11, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, v18);
      return;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_D(a1, v10, 4, 247, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, v21[0]);
    }
    *a4 = v21[0];
  }
}
