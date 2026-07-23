/*
 * XREFs of WmipQueryAllData @ 0x14062DEE4
 * Callers:
 *     WmipIoControl @ 0x1406061A0 (WmipIoControl.c)
 *     IoWMIQueryAllData @ 0x1407CEA30 (IoWMIQueryAllData.c)
 *     WmipQueryAllDataMultiple @ 0x140932C38 (WmipQueryAllDataMultiple.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     WmipAlign @ 0x140252FF0 (WmipAlign.c)
 *     ObReferenceObjectByPointer @ 0x1402A5010 (ObReferenceObjectByPointer.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     WmipInsertStaticNames @ 0x14062DC80 (WmipInsertStaticNames.c)
 *     WmipStaticInstanceNameSize @ 0x14062DE5C (WmipStaticInstanceNameSize.c)
 *     WmipUnreferenceEntry @ 0x14062E428 (WmipUnreferenceEntry.c)
 *     WmipForwardWmiIrp @ 0x14062E4FC (WmipForwardWmiIrp.c)
 *     WmipPrepareForWnodeAD @ 0x140632E80 (WmipPrepareForWnodeAD.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     WmipSendWmiIrp @ 0x1407576DC (WmipSendWmiIrp.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipQueryAllData(PVOID Object, IRP *a2, KPROCESSOR_MODE a3, __int64 a4, unsigned int a5, _DWORD *a6)
{
  char v9; // r15
  void *v10; // rcx
  NTSTATUS v11; // edi
  int v12; // eax
  unsigned int v13; // ebx
  char v14; // r9
  unsigned int v15; // r12d
  _BYTE *v16; // rsi
  _BYTE *v17; // r13
  __int128 v18; // xmm6
  __int64 v19; // r14
  __int64 *v20; // rcx
  int v21; // r13d
  __int64 v22; // rax
  char *v23; // rax
  __int64 v24; // rdx
  IRP *v25; // rax
  int v26; // eax
  int *v27; // rax
  int v28; // ecx
  bool v29; // zf
  _DWORD *v30; // r14
  unsigned int v32; // eax
  int v33; // eax
  _DWORD *v34; // rax
  __int128 v35; // xmm0
  int v36; // [rsp+38h] [rbp-D0h] BYREF
  int v37; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v38; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE *v39; // [rsp+48h] [rbp-C0h]
  __int64 v40; // [rsp+50h] [rbp-B8h]
  PVOID v41; // [rsp+58h] [rbp-B0h] BYREF
  char *v42; // [rsp+60h] [rbp-A8h]
  PVOID P; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+70h] [rbp-98h]
  _QWORD v45[3]; // [rsp+78h] [rbp-90h] BYREF
  PIRP Irp; // [rsp+90h] [rbp-78h]
  _DWORD *v47; // [rsp+98h] [rbp-70h]
  _BYTE v48[80]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v49[128]; // [rsp+F8h] [rbp-10h] BYREF

  Irp = a2;
  v41 = Object;
  v45[0] = a6;
  v47 = (_DWORD *)a4;
  memset(v49, 0, sizeof(v49));
  memset(v48, 0, 0x48uLL);
  v9 = 0;
  LOBYTE(v36) = 0;
  *(_OWORD *)&v45[1] = 0LL;
  if ( Object )
  {
    v11 = ObReferenceObjectByPointer(Object, 1u, WmipGuidObjectType, a3);
  }
  else
  {
    v10 = *(void **)(a4 + 16);
    v41 = 0LL;
    v11 = ObReferenceObjectByHandle(v10, 1u, WmipGuidObjectType, a3, &v41, 0LL);
  }
  if ( v11 < 0 )
    return (unsigned int)v11;
  LODWORD(v38) = 16;
  P = v49;
  v11 = WmipPrepareForWnodeAD((_DWORD)v41, (unsigned int)&v45[1], (unsigned int)&v38, (unsigned int)&P, (__int64)&v36);
  if ( v11 < 0 )
    goto LABEL_35;
  v12 = *(_DWORD *)(a4 + 44);
  v37 = v12;
  if ( (_BYTE)v36 )
  {
    *(_DWORD *)(a4 + 12) = 0;
    v35 = *(_OWORD *)&v45[1];
    *(_DWORD *)(a4 + 44) = v12 | 0x100;
    v11 = 0;
    *(_OWORD *)(a4 + 24) = v35;
    *a6 = 48;
    goto LABEL_35;
  }
  v13 = 0;
  v40 = 0LL;
  v14 = 0;
  v15 = a5;
  v16 = (_BYTE *)a4;
  v17 = P;
  v11 = -1073741163;
  v39 = (_BYTE *)a4;
  LOBYTE(v36) = 0;
  if ( !(_DWORD)v38 )
    goto LABEL_34;
  v18 = *(_OWORD *)&v45[1];
  v19 = v40;
  v20 = (__int64 *)P;
  v21 = v37;
  v42 = (char *)P;
  v44 = (unsigned int)v38;
  do
  {
    v22 = *v20;
    v40 = *v20;
    if ( v9 || v14 || v15 < 0x48 )
    {
      v15 = 72;
      v16 = v48;
      memset(v48, 0, 0x48uLL);
      v22 = v40;
      LOBYTE(v36) = 1;
    }
    *(_DWORD *)v16 = 48;
    LODWORD(v38) = *(_DWORD *)(v22 + 16) & 3;
    v23 = v42;
    *((_DWORD *)v16 + 11) = v21 | ((_DWORD)v38 != 0 ? 0x80 : 0);
    *(_OWORD *)(v16 + 24) = v18;
    v24 = *(unsigned int *)(*(_QWORD *)v23 + 80LL);
    *((_DWORD *)v16 + 3) = 0;
    v25 = Irp;
    *((_DWORD *)v16 + 1) = v24;
    if ( v25 )
      v26 = WmipForwardWmiIrp(v25, v15, (__int64)v16);
    else
      v26 = WmipSendWmiIrp(0LL, v24, v16 + 24, v15, v16, &v45[1]);
    *((_DWORD *)v16 + 1) = 0;
    if ( v26 < 0 )
      goto LABEL_48;
    if ( (*((_DWORD *)v16 + 11) & 0x20) != 0 )
    {
      if ( *((_DWORD *)v16 + 12) <= v15 )
        v26 = -1073741823;
    }
    else if ( !*((_DWORD *)v16 + 13) )
    {
      v26 = -1073741163;
    }
    if ( v26 < 0 )
      goto LABEL_48;
    if ( (*((_DWORD *)v16 + 11) & 0x20) != 0 )
    {
      v32 = *((_DWORD *)v16 + 12);
    }
    else
    {
      if ( !(_BYTE)v36 )
      {
        if ( v19 )
          *(_DWORD *)(v19 + 12) = (_DWORD)v16 - v19;
        v19 = (__int64)v16;
        if ( (_DWORD)v38 )
        {
          WmipInsertStaticNames((int *)v16, v15, v40);
          if ( (*((_DWORD *)v16 + 11) & 0x20) != 0 )
          {
            v9 = 1;
            v27 = (int *)(v16 + 48);
          }
          else
          {
            v27 = (int *)v16;
          }
          v28 = *v27;
        }
        else
        {
          v28 = *(_DWORD *)v16;
        }
        LODWORD(v38) = v28;
        WmipAlign(8, (int *)&v38);
        v13 += v38;
        if ( !v9 && v15 >= (unsigned int)v38 )
        {
          v15 -= v38;
          v16 = &v39[(unsigned int)v38];
          v39 = v16;
          goto LABEL_29;
        }
        goto LABEL_47;
      }
      v32 = *(_DWORD *)v16;
    }
    if ( v32 < 0x48 )
      v32 = 72;
    v37 = v32 + v13;
    if ( (_DWORD)v38 )
    {
      WmipAlign(4, &v37);
      v33 = WmipStaticInstanceNameSize(v40);
      v37 += v33;
    }
    WmipAlign(8, &v37);
    v13 = v37;
LABEL_47:
    v9 = 1;
LABEL_48:
    v16 = v39;
LABEL_29:
    WmipUnreferenceEntry(&WmipISChunkInfo, v40);
    v14 = v36;
    v20 = (__int64 *)(v42 + 8);
    v29 = v44-- == 1;
    v42 += 8;
  }
  while ( !v29 );
  v30 = v47;
  v17 = P;
  if ( v13 )
  {
    if ( v9 )
    {
      if ( v13 <= a5 )
        v13 = a5 + 64;
      v34 = (_DWORD *)v45[0];
      *v47 = 56;
      v30[11] = 32;
      v30[12] = v13;
      *v34 = 56;
    }
    else
    {
      *(_DWORD *)v45[0] = v13;
    }
    v11 = 0;
  }
LABEL_34:
  if ( v17 != v49 && v17 )
    ExFreePoolWithTag(v17, 0);
LABEL_35:
  HalPutDmaAdapter((PADAPTER_OBJECT)v41);
  return (unsigned int)v11;
}
