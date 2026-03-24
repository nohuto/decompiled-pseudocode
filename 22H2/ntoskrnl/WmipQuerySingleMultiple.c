/*
 * XREFs of WmipQuerySingleMultiple @ 0x140932EDC
 * Callers:
 *     WmipIoControl @ 0x14068B1D0 (WmipIoControl.c)
 *     IoWMIQuerySingleInstanceMultiple @ 0x140931140 (IoWMIQuerySingleInstanceMultiple.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     WmipQuerySetExecuteSI @ 0x140756A60 (WmipQuerySetExecuteSI.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WmipQuerySingleMultiple(
        IRP *a1,
        KPROCESSOR_MODE a2,
        char *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        int *a9)
{
  char *v9; // rsi
  int v10; // edi
  __int64 v11; // rdx
  _WORD *PoolWithTag; // rax
  _WORD *v13; // r14
  int v14; // r15d
  char v15; // r13
  unsigned int *v16; // r8
  _BYTE *v17; // r12
  unsigned int v18; // r9d
  unsigned int v19; // eax
  unsigned __int16 v20; // dx
  unsigned int v21; // esi
  unsigned int *v22; // r13
  void *v23; // rdx
  unsigned int v24; // eax
  unsigned int *i; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  char *v28; // rsi
  int v29; // eax
  char v31; // [rsp+40h] [rbp-338h]
  unsigned __int16 v33; // [rsp+42h] [rbp-336h]
  unsigned int v34; // [rsp+44h] [rbp-334h] BYREF
  int v35; // [rsp+48h] [rbp-330h]
  unsigned int v36; // [rsp+4Ch] [rbp-32Ch]
  int v37; // [rsp+50h] [rbp-328h]
  void *v38; // [rsp+58h] [rbp-320h]
  int v39; // [rsp+60h] [rbp-318h]
  int v40; // [rsp+64h] [rbp-314h]
  unsigned int v41; // [rsp+68h] [rbp-310h]
  int v42; // [rsp+6Ch] [rbp-30Ch]
  void *Src; // [rsp+70h] [rbp-308h]
  unsigned int *v44; // [rsp+78h] [rbp-300h]
  __int64 v45; // [rsp+80h] [rbp-2F8h]
  char *v46; // [rsp+88h] [rbp-2F0h]
  unsigned int v47; // [rsp+90h] [rbp-2E8h]
  __int128 v48; // [rsp+98h] [rbp-2E0h]
  __int64 v49; // [rsp+A8h] [rbp-2D0h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+B0h] [rbp-2C8h]
  PVOID v51; // [rsp+B8h] [rbp-2C0h]
  PVOID v52; // [rsp+C0h] [rbp-2B8h]
  int *v53; // [rsp+C8h] [rbp-2B0h]
  __int64 v54; // [rsp+D0h] [rbp-2A8h]
  PIRP Irp; // [rsp+D8h] [rbp-2A0h]
  char *v56; // [rsp+E0h] [rbp-298h]
  __int64 v57; // [rsp+E8h] [rbp-290h]
  _BYTE P[592]; // [rsp+F0h] [rbp-288h] BYREF

  v36 = a4;
  v9 = a3;
  v46 = a3;
  Irp = a1;
  v53 = a9;
  v57 = (__int64)a9;
  v56 = a3;
  v47 = a6;
  v45 = a7;
  v54 = a8;
  v34 = 0;
  v40 = 0;
  v48 = 0LL;
  memset(P, 0, 0x248uLL);
  v10 = 0;
  v37 = 0;
  v11 = a7;
  if ( a7 )
  {
    v13 = 0LL;
    v51 = 0LL;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 24LL * a6, 0x70696D57u);
    v13 = PoolWithTag;
    v51 = PoolWithTag;
    if ( PoolWithTag )
      memmove(PoolWithTag, (const void *)(a5 + 8), 24LL * a6);
    else
      v10 = -1073741670;
    v9 = v46;
    v11 = v45;
  }
  if ( v10 < 0 )
    return (unsigned int)v10;
  v14 = 0;
  v35 = 0;
  v15 = 0;
  v31 = 0;
  v44 = 0LL;
  v16 = (unsigned int *)v9;
  v38 = v9;
  v17 = P;
  v52 = P;
  v18 = 580;
  v42 = 580;
  v19 = 0;
  DmaAdapter = 0LL;
  while ( 1 )
  {
    v41 = v19;
    if ( v19 >= v47 )
      break;
    if ( v11 )
    {
      v48 = *(_OWORD *)(v54 + 16LL * v19);
      DmaAdapter = *(PADAPTER_OBJECT *)(v11 + 8LL * v19);
      v49 = 0LL;
      Src = (void *)*((_QWORD *)&v48 + 1);
      v20 = v48;
    }
    else
    {
      v20 = v13[12 * v19 + 4];
      LODWORD(v48) = *(_DWORD *)&v13[12 * v19 + 4];
      Src = *(void **)&v13[12 * v19 + 8];
      *((_QWORD *)&v48 + 1) = Src;
      v49 = *(_QWORD *)&v13[12 * v19];
      v16 = (unsigned int *)v38;
    }
    v33 = v20;
    v21 = (v20 + 73) & 0xFFFFFFF8;
    if ( v15 || v36 < v21 )
    {
      if ( v21 > v18 )
      {
        if ( v17 != P )
          ExFreePoolWithTag(v17, 0);
        v17 = ExAllocatePoolWithTag(NonPagedPoolNx, v21, 0x70696D57u);
        v52 = v17;
        if ( !v17 )
        {
          v10 = -1073741670;
          break;
        }
        v42 = v21;
      }
      v22 = (unsigned int *)v17;
      v39 = v21;
      v44 = 0LL;
      v31 = 1;
    }
    else
    {
      v22 = v16;
      v39 = v36;
    }
    memset(v22, 0, 0x40uLL);
    v22[11] = 2;
    *v22 = v21;
    *((_QWORD *)v22 + 2) = v49;
    v22[12] = 64;
    v22[14] = v21;
    *((_WORD *)v22 + 32) = v33;
    if ( a2 == 1 && v33 )
    {
      if ( (BYTE8(v48) & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v23 = Src;
      if ( (unsigned __int64)Src + v33 > 0x7FFFFFFF0000LL || (char *)Src + v33 < Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    else
    {
      v23 = Src;
    }
    memmove((char *)v22 + 66, v23, v33);
    v34 = *v22;
    if ( (int)WmipQuerySetExecuteSI(DmaAdapter, Irp, a2, 1u, (__int64)v22, v39, &v34) < 0 )
      goto LABEL_37;
    v24 = v22[11];
    if ( (v24 & 0x100) != 0 )
      goto LABEL_37;
    ++v37;
    if ( (v24 & 0x20) != 0 )
    {
      v14 += (v22[12] + 7) & 0xFFFFFFF8;
      v35 = v14;
      v15 = 1;
      v31 = 1;
      goto LABEL_38;
    }
    if ( v31 )
    {
      v14 += (v34 + 7) & 0xFFFFFFF8;
      v35 = v14;
LABEL_37:
      v15 = v31;
LABEL_38:
      v16 = (unsigned int *)v38;
      goto LABEL_39;
    }
    if ( v44 )
      v44[3] = v40;
    for ( i = v22; ; i = (unsigned int *)((char *)i + v26) )
    {
      v44 = i;
      v26 = i[3];
      if ( !(_DWORD)v26 )
        break;
    }
    v27 = (v34 + 7) & 0xFFFFFFF8;
    v14 += v27;
    v35 = v14;
    v36 -= v27;
    v16 = (unsigned int *)((char *)v38 + v27);
    v38 = v16;
    v40 = (_DWORD)v16 - (_DWORD)i;
    v15 = 0;
LABEL_39:
    v19 = v41 + 1;
    v18 = v42;
    v11 = v45;
  }
  v28 = v46;
  if ( v17 != P )
    ExFreePoolWithTag(v17, 0);
  if ( !v37 )
    v10 = -1073741163;
  if ( v10 >= 0 && v15 )
  {
    v29 = 56;
    *(_DWORD *)v28 = 56;
    *((_DWORD *)v28 + 11) = 32;
    *((_DWORD *)v28 + 12) = v14;
  }
  else
  {
    v29 = v14;
  }
  *v53 = v29;
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  return (unsigned int)v10;
}
