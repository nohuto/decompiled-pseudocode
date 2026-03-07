__int64 __fastcall CD3DDevice::CreateDeviceTextureTarget(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        char a7,
        __int64 *a8)
{
  int v11; // ebx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  void *v18; // [rsp+20h] [rbp-89h]
  unsigned int v19; // [rsp+20h] [rbp-89h]
  _DWORD v20[5]; // [rsp+50h] [rbp-59h] BYREF
  __int64 v21; // [rsp+64h] [rbp-45h]
  int v22; // [rsp+6Ch] [rbp-3Dh]
  __int128 v23; // [rsp+70h] [rbp-39h] BYREF
  __int128 v24; // [rsp+80h] [rbp-29h]
  __int64 v25; // [rsp+90h] [rbp-19h]
  int v26; // [rsp+98h] [rbp-11h]

  v21 = 0LL;
  v22 = 0;
  v25 = 0LL;
  *a8 = 0LL;
  v11 = *(_DWORD *)(a1 + 1088);
  v26 = 0;
  v23 = 0LL;
  v24 = 0LL;
  if ( v11 < 0 )
  {
    v19 = 1244;
    goto LABEL_10;
  }
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a2 + 80LL))(a2, &v23);
  if ( (v25 & 0x20) == 0 )
  {
    v11 = -2147024809;
    v19 = 1249;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(a1, &dword_1802EB290, 2u, v11, v19, 0LL);
    return (unsigned int)v11;
  }
  v20[0] = v24;
  v13 = 1;
  v20[1] = a3;
  v20[2] = 1119879168;
  v20[3] = 1119879168;
  if ( (v25 & 8) == 0 )
    v13 = 3;
  v14 = *(_QWORD *)(a1 + 184);
  v20[4] = v13;
  LODWORD(v18) = a4;
  v15 = CDeviceTextureTarget::Create(v14, a2, (__int64)&v23, (__int64)v20, v18, a5, a6, a7, a8);
  v11 = v15;
  if ( v15 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v16, &dword_1802EB290, 2u, v15, 0x4F7u, 0LL);
  return (unsigned int)v11;
}
