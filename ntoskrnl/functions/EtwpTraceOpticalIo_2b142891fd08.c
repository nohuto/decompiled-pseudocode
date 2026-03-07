void __fastcall EtwpTraceOpticalIo(int a1, int a2, __int64 a3, __int64 a4)
{
  char *v5; // r10
  char v8; // r8
  __int64 v9; // rax
  int v10; // eax
  unsigned __int16 v11; // r9
  int *v12; // rax
  IO_STATUS_BLOCK *ScsiPassThroughCdb; // rax
  char Status; // r9
  unsigned __int64 v15; // rax
  __int16 v16; // dx
  int v17; // ecx
  __int64 v18; // rax
  int v19; // ecx
  int v20; // eax
  unsigned __int16 v21; // r11
  int v22; // edx
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  int v25; // eax
  int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // rcx
  int v29; // edx
  int v30; // r9d
  __int64 *v31; // r8
  int v32; // [rsp+30h] [rbp-29h] BYREF
  int v33; // [rsp+34h] [rbp-25h]
  int v34; // [rsp+38h] [rbp-21h]
  int v35; // [rsp+3Ch] [rbp-1Dh]
  unsigned __int64 v36; // [rsp+40h] [rbp-19h]
  __int64 v37; // [rsp+48h] [rbp-11h]
  __int64 v38; // [rsp+50h] [rbp-9h]
  __int64 v39; // [rsp+58h] [rbp-1h]
  int v40; // [rsp+60h] [rbp+7h]
  int v41; // [rsp+64h] [rbp+Bh]
  _DWORD v42[2]; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v43; // [rsp+70h] [rbp+17h]
  __int64 v44; // [rsp+78h] [rbp+1Fh]
  int v45; // [rsp+80h] [rbp+27h]
  int v46; // [rsp+84h] [rbp+2Bh]
  int *v47; // [rsp+88h] [rbp+2Fh] BYREF
  int v48; // [rsp+90h] [rbp+37h]
  int v49; // [rsp+94h] [rbp+3Bh]

  v46 = 0;
  v41 = 0;
  v5 = *(char **)(a3 + 184);
  v8 = *v5;
  if ( (unsigned __int8)(*v5 - 3) <= 1u )
  {
    v34 = *(_DWORD *)(a3 + 56);
    v32 = a2;
    v38 = a3;
    v21 = (v8 != 3) + 311;
    v22 = *(_DWORD *)(a3 + 16);
    v33 = v22;
    v23 = *((_QWORD *)v5 + 3);
    v35 = 0;
    v36 = v23;
    v24 = *(_QWORD *)(a3 + 152);
    v39 = a4;
    if ( v24 )
      v25 = *(_DWORD *)(v24 + 1232);
    else
      v25 = -1;
    v40 = v25;
    if ( (a1 & 0xFFFF0000) == 0x56530000 )
    {
      v35 = 1;
    }
    else
    {
      v26 = a1 & 0xFFFFFF;
      if ( v26 == 5467492 || v26 == 5460546 )
        v35 = 2;
    }
    if ( (v22 & 8) != 0 )
    {
      v27 = *(_QWORD *)(a3 + 24);
      if ( v27 )
      {
        v28 = *(_QWORD *)(v27 + 192);
        if ( v28 )
          goto LABEL_37;
        v28 = *(_QWORD *)(*(_QWORD *)(v27 + 184) + 48LL);
LABEL_36:
        if ( v28 )
          goto LABEL_37;
      }
    }
    else
    {
      v28 = *(_QWORD *)(a3 + 192);
      if ( v28 )
      {
LABEL_37:
        v37 = *(_QWORD *)(v28 + 24);
LABEL_39:
        v48 = 52;
        v11 = v21;
        goto LABEL_40;
      }
      v29 = *(unsigned __int8 *)(a3 + 67);
      v30 = *(char *)(a3 + 66);
      if ( v29 <= v30 )
      {
        v31 = (__int64 *)(v5 + 48);
        while ( 1 )
        {
          v28 = *v31;
          if ( *v31 )
            goto LABEL_37;
          LOBYTE(v29) = v29 + 1;
          v31 += 9;
          if ( (unsigned __int8)v29 > v30 )
            goto LABEL_36;
        }
      }
    }
    v37 = 0LL;
    goto LABEL_39;
  }
  if ( v8 == 9 )
  {
LABEL_3:
    v42[1] = *(_DWORD *)(a3 + 16);
    v9 = *(_QWORD *)(a3 + 152);
    v42[0] = a2;
    v43 = a4;
    v44 = a3;
    if ( v9 )
      v10 = *(_DWORD *)(v9 + 1232);
    else
      v10 = -1;
    v45 = v10;
    v11 = 313;
    v12 = v42;
    v48 = 28;
    goto LABEL_41;
  }
  if ( v8 == 14 )
  {
    ScsiPassThroughCdb = EtwpGetScsiPassThroughCdb((IRP *)a3);
    if ( ScsiPassThroughCdb )
    {
      Status = ScsiPassThroughCdb->Status;
      v15 = (BYTE5(ScsiPassThroughCdb->Pointer) | (unsigned __int64)((BYTE4(ScsiPassThroughCdb->Pointer) | ((BYTE3(ScsiPassThroughCdb->Pointer) | (BYTE2(ScsiPassThroughCdb->Pointer) << 8)) << 8)) << 8)) << 11;
      if ( ((Status - 40) & 0x7F) != 0 )
      {
        if ( ((Status - 42) & 0x7F) != 0 )
        {
          if ( Status != 53 )
            return;
          goto LABEL_3;
        }
        v16 = 312;
      }
      else
      {
        v16 = 311;
      }
      v17 = *(_DWORD *)(a3 + 16);
      v35 = 0;
      v37 = 0LL;
      v36 = v15;
      v18 = *(_QWORD *)(a3 + 152);
      v33 = v17;
      v19 = *(_DWORD *)(a3 + 56);
      v32 = a2;
      v38 = a3;
      v34 = v19;
      v39 = a4;
      if ( v18 )
        v20 = *(_DWORD *)(v18 + 1232);
      else
        v20 = -1;
      v40 = v20;
      v11 = v16;
      v48 = 28;
LABEL_40:
      v12 = &v32;
LABEL_41:
      v49 = 0;
      v47 = v12;
      EtwTraceKernelEvent((__int64)&v47, 1u, 0x80000001, v11, 0x401803u);
    }
  }
}
