__int64 __fastcall WmipQueryAllData(PVOID Object, IRP *a2, KPROCESSOR_MODE a3, __int64 a4, unsigned int a5, _DWORD *a6)
{
  PVOID v7; // rdi
  void *v9; // rcx
  NTSTATUS v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  _BYTE *v13; // rdi
  unsigned int v14; // r15d
  char v15; // r14
  _BYTE *v16; // r12
  char v17; // r9
  __int128 v18; // xmm6
  volatile signed __int64 **v19; // rcx
  int v20; // r12d
  _BYTE *v21; // rsi
  volatile signed __int64 *v22; // r13
  int v23; // r13d
  char *v24; // rax
  __int64 v25; // rdx
  IRP *v26; // rax
  int v27; // eax
  int v28; // ecx
  bool v29; // zf
  volatile signed __int64 *v30; // r13
  unsigned int *v31; // rax
  unsigned int v32; // ecx
  _DWORD *v33; // rsi
  unsigned int v35; // eax
  int v36; // eax
  _DWORD *v37; // rax
  __int128 v38; // xmm0
  char v39; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v40; // [rsp+3Ch] [rbp-CCh] BYREF
  volatile signed __int64 *v41; // [rsp+40h] [rbp-C8h]
  _BYTE *v42; // [rsp+48h] [rbp-C0h]
  PVOID P; // [rsp+50h] [rbp-B8h] BYREF
  PVOID v44; // [rsp+58h] [rbp-B0h]
  char *v45; // [rsp+60h] [rbp-A8h]
  __int64 v46; // [rsp+68h] [rbp-A0h]
  _QWORD v47[4]; // [rsp+70h] [rbp-98h] BYREF
  PIRP Irp; // [rsp+90h] [rbp-78h]
  _DWORD *v49; // [rsp+98h] [rbp-70h]
  _BYTE v50[80]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v51[128]; // [rsp+F8h] [rbp-10h] BYREF

  Irp = a2;
  v7 = Object;
  v44 = Object;
  v47[0] = a6;
  v49 = (_DWORD *)a4;
  memset(v51, 0, sizeof(v51));
  memset(v50, 0, 0x48uLL);
  v39 = 0;
  *(_OWORD *)&v47[1] = 0LL;
  if ( v7 )
  {
    v10 = ObReferenceObjectByPointer(v7, 1u, WmipGuidObjectType, a3);
  }
  else
  {
    v9 = *(void **)(a4 + 16);
    P = 0LL;
    v10 = ObReferenceObjectByHandle(v9, 1u, WmipGuidObjectType, a3, &P, 0LL);
    v7 = P;
    v44 = P;
  }
  v11 = v10;
  if ( v10 < 0 )
    return v11;
  v40 = 16;
  P = v51;
  v11 = WmipPrepareForWnodeAD((_DWORD)v7, (unsigned int)&v47[1], (unsigned int)&v40, (unsigned int)&P, (__int64)&v39);
  if ( (v11 & 0x80000000) != 0 )
    goto LABEL_35;
  v11 = 0;
  v12 = *(_DWORD *)(a4 + 44);
  LODWORD(v41) = v12;
  if ( v39 )
  {
    v38 = *(_OWORD *)&v47[1];
    *(_DWORD *)(a4 + 12) = 0;
    *(_DWORD *)(a4 + 44) = v12 | 0x100;
    *(_OWORD *)(a4 + 24) = v38;
    *a6 = 48;
    goto LABEL_35;
  }
  v13 = (_BYTE *)a4;
  v14 = a5;
  v15 = 0;
  v16 = P;
  v17 = 0;
  v42 = (_BYTE *)a4;
  v39 = 0;
  v47[3] = 0LL;
  if ( !v40 )
  {
LABEL_60:
    v11 = -1073741163;
    goto LABEL_31;
  }
  v18 = *(_OWORD *)&v47[1];
  v19 = (volatile signed __int64 **)P;
  v46 = v40;
  v20 = (int)v41;
  v21 = 0LL;
  v45 = (char *)P;
  do
  {
    v22 = *v19;
    v41 = *v19;
    if ( v15 || v17 || v14 < 0x48 )
    {
      v14 = 72;
      v13 = v50;
      memset(v50, 0, 0x48uLL);
      v39 = 1;
    }
    *(_DWORD *)v13 = 48;
    v23 = v22[2] & 3;
    v24 = v45;
    *((_DWORD *)v13 + 11) = v20 | (v23 != 0 ? 0x80 : 0);
    *(_OWORD *)(v13 + 24) = v18;
    v25 = *(unsigned int *)(*(_QWORD *)v24 + 80LL);
    *((_DWORD *)v13 + 3) = 0;
    v26 = Irp;
    *((_DWORD *)v13 + 1) = v25;
    if ( v26 )
      v27 = WmipForwardWmiIrp(v26, 0, v25, (UNICODE_STRING *)(v13 + 24), v14, (__int64)v13);
    else
      v27 = WmipSendWmiIrp(0LL, v25, (__int64)(v13 + 24), v14, (__int64)v13, &v47[1]);
    v28 = v27;
    *((_DWORD *)v13 + 1) = 0;
    if ( v27 < 0 )
      goto LABEL_59;
    if ( (*((_DWORD *)v13 + 11) & 0x20) != 0 )
    {
      if ( *((_DWORD *)v13 + 12) <= v14 )
        v28 = -1073741823;
      if ( v28 < 0 )
      {
LABEL_59:
        v30 = v41;
        goto LABEL_46;
      }
      v35 = *((_DWORD *)v13 + 12);
LABEL_41:
      if ( v35 < 0x48 )
        v35 = 72;
      v40 = v35 + v11;
      if ( v23 )
      {
        WmipAlign(4, (int *)&v40);
        v30 = v41;
        v36 = WmipStaticInstanceNameSize(v41);
        v40 += v36;
      }
      else
      {
        v30 = v41;
      }
      WmipAlign(8, (int *)&v40);
      v11 = v40;
      v15 = 1;
      goto LABEL_46;
    }
    if ( !*((_DWORD *)v13 + 13) )
      goto LABEL_59;
    if ( v39 )
    {
      v35 = *(_DWORD *)v13;
      goto LABEL_41;
    }
    if ( v21 )
      *((_DWORD *)v21 + 3) = (_DWORD)v13 - (_DWORD)v21;
    v29 = v23 == 0;
    v21 = v13;
    v30 = v41;
    if ( v29 )
    {
      v32 = *(_DWORD *)v13;
    }
    else
    {
      WmipInsertStaticNames(v13, v14, v41);
      if ( (*((_DWORD *)v13 + 11) & 0x20) != 0 )
      {
        v15 = 1;
        v31 = (unsigned int *)(v13 + 48);
      }
      else
      {
        v31 = (unsigned int *)v13;
      }
      v32 = *v31;
    }
    v40 = v32;
    WmipAlign(8, (int *)&v40);
    v11 += v40;
    if ( !v15 && v14 >= v40 )
    {
      v14 -= v40;
      v13 = &v42[v40];
      v42 = v13;
      goto LABEL_26;
    }
    v15 = 1;
LABEL_46:
    v13 = v42;
LABEL_26:
    WmipUnreferenceEntry((__int64)&WmipISChunkInfo, v30);
    v17 = v39;
    v19 = (volatile signed __int64 **)(v45 + 8);
    v29 = v46-- == 1;
    v45 += 8;
  }
  while ( !v29 );
  v33 = v49;
  v16 = P;
  if ( !v11 )
    goto LABEL_60;
  if ( v15 )
  {
    if ( v11 <= a5 )
      v11 = a5 + 64;
    v37 = (_DWORD *)v47[0];
    *v49 = 56;
    v33[11] = 32;
    v33[12] = v11;
    *v37 = 56;
  }
  else
  {
    *(_DWORD *)v47[0] = v11;
  }
  v11 = 0;
LABEL_31:
  if ( v16 != v51 && v16 )
    ExFreePoolWithTag(v16, 0);
  v7 = v44;
LABEL_35:
  ObfDereferenceObject(v7);
  return v11;
}
