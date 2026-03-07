__int64 __fastcall UsbDevice_SetAddress(__int64 a1, char a2)
{
  __int64 v2; // rax
  char v4; // r8
  __int64 v5; // r14
  __int64 v6; // r13
  unsigned int v7; // ebx
  __int64 v8; // rax
  unsigned int v9; // r9d
  _QWORD *v10; // r15
  __int64 *v11; // rcx
  __int64 v12; // rcx
  void *v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rsi
  int v16; // edx
  int v17; // r12d
  int v18; // eax
  __int64 v19; // r14
  unsigned int v20; // eax
  int v21; // ecx
  unsigned int *v22; // r8
  __int64 v23; // r9
  unsigned int v24; // eax
  unsigned int v25; // eax
  int v26; // edx
  int v27; // r8d
  unsigned int v28; // edx
  __int64 v29; // rdx
  __int64 v30; // rax
  char v31; // cl
  __int64 v32; // rdx
  __int64 v33; // rcx
  char v34; // al
  int v35; // ecx
  int v36; // r8d
  _QWORD *v37; // rax
  __int64 v38; // rdx
  unsigned int v39; // ecx
  char v40; // al
  __int64 *v41; // rax
  char v42; // cl
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  int v48; // eax
  __int64 v50; // rax
  __int64 v51; // rax

  v2 = *(_QWORD *)(a1 + 8);
  v4 = *(_BYTE *)(a1 + 657);
  v5 = *(_QWORD *)(v2 + 88);
  v6 = *(_QWORD *)(v2 + 144);
  v7 = 0;
  v8 = *(_QWORD *)((v4 != 0 ? 648LL : 640LL) + a1);
  if ( v8 )
    v9 = *(_DWORD *)(v8 + 44);
  else
    v9 = 0;
  v10 = (_QWORD *)(a1 + 640);
  v11 = (__int64 *)(a1 + 648);
  if ( !v4 )
    v11 = (__int64 *)(a1 + 640);
  v12 = *v11;
  if ( v12 )
    v13 = *(void **)(v12 + 16);
  else
    v13 = 0LL;
  memset(v13, 0, v9);
  v14 = v10;
  if ( *(_BYTE *)(a1 + 657) )
    v14 = (_QWORD *)(a1 + 648);
  if ( *v14 )
    v15 = *(_QWORD *)(*v14 + 16LL);
  else
    v15 = 0LL;
  v16 = 0;
  v17 = *(_DWORD *)(v5 + 104) & 4;
  v18 = *(_DWORD *)(v15 + 4) | 3;
  *(_DWORD *)(v15 + 4) = v18;
  v19 = v17 != 0 ? 0x20 : 0;
  *(_DWORD *)(a1 + 152) = v18;
  v20 = *(_DWORD *)(a1 + 36);
  if ( v20 > 1 )
  {
    v21 = 0;
    v22 = (unsigned int *)(a1 + 48);
    v23 = v20 - 1;
    do
    {
      v24 = *v22++;
      if ( v24 > 0xF )
        v24 = 15;
      v25 = v24 << v21;
      v21 += 4;
      v16 |= v25;
      --v23;
    }
    while ( v23 );
  }
  v26 = *(_DWORD *)(v19 + v15 + 32) ^ (*(_DWORD *)(v19 + v15 + 32) ^ v16) & 0xFFFFF;
  *(_DWORD *)(v19 + v15 + 32) = v26;
  v27 = *(_DWORD *)(a1 + 20);
  switch ( v27 )
  {
    case 0:
      v28 = v26 & 0xFF0FFFFF | 0x200000;
      goto LABEL_20;
    case 1:
      v28 = v26 & 0xFF0FFFFF | 0x100000;
      goto LABEL_20;
    case 2:
      v28 = v26 & 0xFF0FFFFF | 0x300000;
LABEL_20:
      *(_DWORD *)(v19 + v15 + 32) = v28 & 0x7FFFFFF | 0x8000000;
      *(_BYTE *)(v19 + v15 + 38) = *(_BYTE *)(a1 + 44);
      v29 = *(_QWORD *)(a1 + 24);
      if ( v29 )
      {
        v50 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                WdfDriverGlobals,
                v29,
                off_1C00632C0);
        if ( *(_DWORD *)(v50 + 144) > 1u )
          *(_DWORD *)(v19 + v15 + 32) |= 0x2000000u;
        *(_BYTE *)(v19 + v15 + 40) = *(_BYTE *)(v50 + 135);
        if ( !*(_BYTE *)(a1 + 136) && *(int *)(a1 + 20) < 2 && *(_DWORD *)(v50 + 144) )
          *(_BYTE *)(a1 + 137) = 1;
      }
      v30 = *(unsigned int *)(a1 + 40);
      if ( (_DWORD)v30 )
        v31 = *(_BYTE *)(a1 + 4 * v30 + 44);
      else
        v31 = 0;
      *(_BYTE *)(v19 + v15 + 41) = v31;
      v32 = v17 != 0 ? 0x40 : 0;
      *(_DWORD *)(v32 + v15 + 68) ^= (*(_DWORD *)(v32 + v15 + 68) ^ (8 * *(_DWORD *)(*(_QWORD *)(a1 + 176) + 120LL))) & 0x38;
      *(_WORD *)(v32 + v15 + 70) = *(_WORD *)(*(_QWORD *)(a1 + 176) + 100LL) & 0x7FF;
      v33 = *(_QWORD *)(a1 + 176);
      v34 = *(_BYTE *)(v33 + 99) & 3;
      if ( v34 == 1 )
      {
        v35 = 0;
      }
      else if ( (*(_QWORD *)(*(_QWORD *)v33 + 336LL) & 0x10000000000000LL) == 0
             || v34 != 3
             || *(char *)(v33 + 98) >= 0
             || (v51 = *(_QWORD *)(v33 + 16), *(_WORD *)(v51 + 124) != 1529)
             || *(_WORD *)(v51 + 126) != 4353
             || (v35 = 0, *(_DWORD *)(v51 + 36) <= 1u) )
      {
        v35 = 6;
      }
      *(_DWORD *)(v32 + v15 + 68) = v35 | *(_DWORD *)(v32 + v15 + 68) & 0xFFFFFFF9;
      *(_DWORD *)(*(_QWORD *)(a1 + 176) + 152LL) = *(unsigned __int16 *)(v32 + v15 + 70);
      *(_QWORD *)((v17 != 0 ? 0x40 : 0) + v15 + 72) = Endpoint_GetDequeuePointer(*(_QWORD *)(a1 + 176), 0);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v37 = v10;
        if ( *(_BYTE *)(a1 + 657) )
          v37 = (_QWORD *)(a1 + 648);
        if ( *v37 )
          v38 = *(_QWORD *)(*v37 + 16LL);
        else
          LODWORD(v38) = 0;
        WPP_RECORDER_SF_dqq(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL), v38, v36, 21);
      }
      memset((void *)(a1 + 456), 0, 0x60uLL);
      *(_QWORD *)(a1 + 496) = UsbDevice_SetAddressCompletion;
      v39 = *(_DWORD *)(a1 + 492) & 0xFFFF2DFF | ((a2 & 1 | 0x16) << 9);
      *(_QWORD *)(a1 + 504) = a1;
      v40 = *(_BYTE *)(a1 + 135);
      *(_DWORD *)(a1 + 492) = v39;
      *(_BYTE *)(a1 + 495) = v40;
      v41 = v10;
      v42 = *(_BYTE *)(a1 + 657);
      if ( v42 )
        v41 = (__int64 *)(a1 + 648);
      v43 = *v41;
      if ( v43 )
        v44 = *(_QWORD *)(v43 + 24);
      else
        v44 = 0LL;
      *(_QWORD *)(a1 + 480) = v44;
      v45 = v10;
      if ( v42 )
        v45 = (__int64 *)(a1 + 648);
      v46 = *v45;
      if ( v46 )
        v47 = *(_QWORD *)(v46 + 16);
      else
        v47 = 0LL;
      *(_QWORD *)(a1 + 528) = v47;
      if ( v42 )
        v10 = (_QWORD *)(a1 + 648);
      if ( *v10 )
        v48 = *(_DWORD *)(*v10 + 44LL);
      else
        v48 = 0;
      *(_DWORD *)(a1 + 536) = v48;
      *(_DWORD *)(a1 + 540) = 1;
      *(_QWORD *)(a1 + 544) = a1;
      Command_SendCommand(v6, a1 + 456);
      return v7;
    case 3:
      v28 = v26 & 0xFF0FFFFF | 0x400000;
      goto LABEL_20;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v26) = 2;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v26,
      12,
      20,
      (__int64)&WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids,
      *(_BYTE *)(a1 + 135),
      v27);
  }
  return (unsigned int)-1073741811;
}
