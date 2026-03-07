__int64 __fastcall EtwpSetCoverageSamplerInformation(_OWORD *Address, SIZE_T Length, KPROCESSOR_MODE AccessMode)
{
  SIZE_T v4; // r15
  _OWORD *v5; // r14
  char *v6; // rsi
  int inserted; // edi
  _OWORD *v8; // rax
  _OWORD *v9; // rcx
  __int64 v10; // r13
  __int64 v11; // rdx
  unsigned int v12; // r8d
  unsigned int v13; // r11d
  unsigned int v14; // r11d
  unsigned int v15; // r8d
  char v16; // cl
  unsigned int v17; // r8d
  unsigned int v18; // r9d
  unsigned int v19; // r8d
  unsigned int v20; // r9d
  unsigned int v21; // r8d
  unsigned int v22; // r9d
  unsigned int v23; // r9d
  unsigned int v24; // r8d
  unsigned int v25; // r9d
  unsigned int v26; // r8d
  unsigned int v27; // r9d
  unsigned int v28; // r8d
  unsigned int v29; // r9d
  unsigned int v30; // r8d
  unsigned int v31; // r9d
  unsigned int v32; // eax
  unsigned int v33; // edi
  unsigned int v34; // r9d
  unsigned int v35; // r8d
  unsigned int v36; // r9d
  char v37; // r11
  unsigned int v38; // r8d
  char i; // cl
  unsigned int v40; // edx
  _OWORD *v41; // rcx
  char *v42; // rax
  __int64 v43; // rdx
  _OWORD *v44; // rax
  PVOID *Object; // [rsp+20h] [rbp-558h]
  char v47; // [rsp+50h] [rbp-528h]
  PVOID v48; // [rsp+58h] [rbp-520h] BYREF
  HANDLE v49; // [rsp+60h] [rbp-518h] BYREF
  HANDLE Handle[2]; // [rsp+68h] [rbp-510h] BYREF
  __int128 v51; // [rsp+78h] [rbp-500h] BYREF
  __int128 v52; // [rsp+88h] [rbp-4F0h] BYREF
  __int128 v53; // [rsp+98h] [rbp-4E0h]
  _BYTE v54[8]; // [rsp+B0h] [rbp-4C8h] BYREF
  HANDLE v55; // [rsp+B8h] [rbp-4C0h]
  char v56; // [rsp+C0h] [rbp-4B8h] BYREF
  unsigned int v57; // [rsp+C8h] [rbp-4B0h] BYREF
  unsigned int v58; // [rsp+CCh] [rbp-4ACh] BYREF
  unsigned int v59; // [rsp+D0h] [rbp-4A8h] BYREF
  unsigned int v60; // [rsp+D4h] [rbp-4A4h] BYREF
  unsigned int v61; // [rsp+D8h] [rbp-4A0h] BYREF
  unsigned int v62; // [rsp+DCh] [rbp-49Ch] BYREF
  unsigned int v63; // [rsp+E0h] [rbp-498h] BYREF
  unsigned int v64; // [rsp+E4h] [rbp-494h] BYREF
  unsigned int v65; // [rsp+E8h] [rbp-490h] BYREF
  unsigned int v66; // [rsp+ECh] [rbp-48Ch] BYREF
  unsigned int v67; // [rsp+F0h] [rbp-488h] BYREF
  unsigned int v68; // [rsp+F4h] [rbp-484h] BYREF
  unsigned int v69; // [rsp+F8h] [rbp-480h] BYREF
  unsigned int v70; // [rsp+FCh] [rbp-47Ch] BYREF
  unsigned int v71; // [rsp+100h] [rbp-478h] BYREF
  unsigned int v72; // [rsp+104h] [rbp-474h] BYREF
  unsigned int v73; // [rsp+108h] [rbp-470h] BYREF
  unsigned int v74[129]; // [rsp+10Ch] [rbp-46Ch] BYREF
  __int16 v75; // [rsp+312h] [rbp-266h]
  __int16 v76; // [rsp+512h] [rbp-66h]
  _QWORD v77[5]; // [rsp+518h] [rbp-60h] BYREF

  v4 = (unsigned int)Length;
  v5 = Address;
  v6 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  DWORD1(v51) = 0;
  HIDWORD(v52) = 0;
  v47 = 0;
  if ( (unsigned int)Length < 0x10 )
    goto LABEL_2;
  *(_OWORD *)Handle = *Address;
  if ( BYTE5(Handle[0]) != 0xCF )
    goto LABEL_4;
  if ( BYTE4(Handle[0]) )
  {
    if ( BYTE4(Handle[0]) != 2 )
    {
      if ( BYTE4(Handle[0]) != 3 )
      {
        inserted = -1073741821;
        goto LABEL_51;
      }
LABEL_4:
      inserted = -1073741637;
      goto LABEL_51;
    }
    inserted = ExCheckFullProcessInformationAccess(AccessMode);
    if ( inserted < 0 )
      goto LABEL_51;
    if ( (_DWORD)v4 == 40 )
    {
      v51 = *v5;
      v52 = v5[1];
      *(_QWORD *)&v53 = *((_QWORD *)v5 + 4);
      v48 = 0LL;
      inserted = ObReferenceObjectByHandle(Handle[1], 1u, qword_140C31870, AccessMode, &v48, 0LL);
      v6 = (char *)v48;
      if ( inserted >= 0 )
      {
        inserted = EtwpCoverageSamplerSetBloomFilter((ULONG_PTR)v48, (__int64)&v52, AccessMode);
        if ( inserted >= 0 )
        {
LABEL_50:
          inserted = 0;
          goto LABEL_51;
        }
      }
      goto LABEL_51;
    }
LABEL_2:
    inserted = -1073741820;
    goto LABEL_51;
  }
  if ( !AccessMode )
    goto LABEL_4;
  inserted = ExCheckFullProcessInformationAccess(AccessMode);
  if ( inserted < 0 )
    goto LABEL_51;
  if ( (unsigned int)v4 < 0x488 )
    goto LABEL_2;
  ProbeForWrite(v5, v4, 4u);
  v8 = v5;
  v9 = v54;
  v10 = 9LL;
  v11 = 9LL;
  do
  {
    *v9 = *v8;
    v9[1] = v8[1];
    v9[2] = v8[2];
    v9[3] = v8[3];
    v9[4] = v8[4];
    v9[5] = v8[5];
    v9[6] = v8[6];
    v9 += 8;
    *(v9 - 1) = v8[7];
    v8 += 8;
    --v11;
  }
  while ( v11 );
  *(_QWORD *)v9 = *(_QWORD *)v8;
  EtwpCovSampApplyBounds(&v57, 0x400u, 0x10u, 0x4000u);
  EtwpCovSampApplyBounds(&v73, 0x100u, v12, v13);
  EtwpCovSampApplyBounds(v74, 0x800u, v14, 0x10000u);
  v15 = v74[0];
  if ( ((v74[0] - 1) & v74[0]) != 0 )
  {
    v16 = -1;
    if ( v74[0] )
    {
      do
      {
        ++v16;
        v15 >>= 1;
      }
      while ( v15 );
    }
    v15 = 1 << v16;
  }
  if ( (v56 & 0x40) != 0 )
    v15 = 0;
  v74[0] = v15;
  EtwpCovSampApplyBounds(&v65, 0x3E8u, 1u, 0x6B49D200u);
  EtwpCovSampApplyBounds(&v67, 1u, v17, v18);
  EtwpCovSampApplyBounds(&v69, 1u, v19, v20);
  EtwpCovSampApplyBounds(&v71, 1u, v21, v22);
  EtwpCovSampApplyBounds(&v66, 0, 0, v23);
  EtwpCovSampApplyBounds(&v68, 0, v24, v25);
  EtwpCovSampApplyBounds(&v70, 0, v26, v27);
  EtwpCovSampApplyBounds(&v72, 0, v28, v29);
  EtwpCovSampApplyBounds(&v60, 8u, 1u, 0x80u);
  EtwpCovSampApplyBounds(&v61, 0x20000u, 0x4000u, 0x100000u);
  EtwpCovSampApplyBounds(&v62, 4u, 2u, 0x100u);
  v32 = v62;
  if ( v56 < 0 )
    v32 = 0;
  v62 = v32;
  v33 = v30 + 2;
  EtwpCovSampApplyBounds(&v63, v30 + 2, v30, v31);
  EtwpCovSampApplyBounds(&v64, 0x10u, v33, v34);
  EtwpCovSampApplyBounds(&v58, 0x400u, 0x10u, 0x8000000u);
  EtwpCovSampApplyBounds(&v59, 0x10000u, v35, v36);
  v38 = 4 * v73;
  if ( v58 >= 4 * v73 )
    v38 = v58;
  if ( ((v38 - 1) & v38) != 0 )
  {
    for ( i = v37; v38; v38 >>= 1 )
      ++i;
    v38 = 1 << i;
  }
  v58 = v38;
  v40 = v59;
  if ( ((v59 - 1) & v59) != 0 )
  {
    if ( v59 )
    {
      do
      {
        ++v37;
        v40 >>= 1;
      }
      while ( v40 );
    }
    v40 = 1 << v37;
  }
  if ( v40 < v38 )
    v40 = v38;
  v59 = v40;
  v76 = 0;
  v75 = 0;
  LODWORD(v51) = 48;
  *((_QWORD *)&v51 + 1) = 0LL;
  DWORD2(v52) = 0;
  *(_QWORD *)&v52 = 0LL;
  v53 = 0LL;
  inserted = ObCreateObjectEx(0, qword_140C31870, (__int64)&v51, AccessMode, (__int64)Object, 1736, 0, 0, &v48, 0LL);
  v6 = (char *)v48;
  if ( inserted >= 0 )
  {
    EtwpCoverageSamplerInitialize((__int64)v48);
    v41 = v6 + 24;
    v42 = &v56;
    v43 = 8LL;
    do
    {
      *v41 = *(_OWORD *)v42;
      v41[1] = *((_OWORD *)v42 + 1);
      v41[2] = *((_OWORD *)v42 + 2);
      v41[3] = *((_OWORD *)v42 + 3);
      v41[4] = *((_OWORD *)v42 + 4);
      v41[5] = *((_OWORD *)v42 + 5);
      v41[6] = *((_OWORD *)v42 + 6);
      v41 += 8;
      *(v41 - 1) = *((_OWORD *)v42 + 7);
      v42 += 128;
      --v43;
    }
    while ( v43 );
    *v41 = *(_OWORD *)v42;
    v41[1] = *((_OWORD *)v42 + 1);
    v41[2] = *((_OWORD *)v42 + 2);
    v41[3] = *((_OWORD *)v42 + 3);
    v41[4] = *((_OWORD *)v42 + 4);
    *((_DWORD *)v41 + 20) = *((_DWORD *)v42 + 20);
    *((_DWORD *)v6 + 411) = EtwpCovSampSplitSegments((wchar_t *)v6 + 310, (__int64)(v6 + 1480));
    *((_DWORD *)v6 + 410) = EtwpCovSampSplitSegments((wchar_t *)v6 + 54, (__int64)(v6 + 1320));
    if ( !v77[0]
      || (inserted = EtwpCoverageSamplerSetBloomFilter((ULONG_PTR)v6, (__int64)v77, AccessMode), inserted >= 0) )
    {
      Handle[0] = 0LL;
      inserted = ObReferenceObjectByHandle(
                   (HANDLE)v77[3],
                   0x1F0003u,
                   (POBJECT_TYPE)ExEventObjectType,
                   AccessMode,
                   Handle,
                   0LL);
      *((HANDLE *)v6 + 209) = Handle[0];
      if ( inserted >= 0 )
      {
        v47 = 1;
        inserted = EtwpCoverageSamplerStart(v6);
        if ( inserted >= 0 )
        {
          ObfReferenceObject(v6);
          inserted = ObInsertObjectEx(v6, 0LL, 1u, 0, 0, 0LL, &v49);
          if ( inserted >= 0 )
          {
            v55 = v49;
            v54[6] = 0;
            v44 = v54;
            do
            {
              *v5 = *v44;
              v5[1] = v44[1];
              v5[2] = v44[2];
              v5[3] = v44[3];
              v5[4] = v44[4];
              v5[5] = v44[5];
              v5[6] = v44[6];
              v5 += 8;
              *(v5 - 1) = v44[7];
              v44 += 8;
              --v10;
            }
            while ( v10 );
            *(_QWORD *)v5 = *(_QWORD *)v44;
            v49 = 0LL;
            goto LABEL_50;
          }
        }
      }
    }
  }
LABEL_51:
  if ( v49 )
    NtClose(v49);
  if ( v6 )
  {
    if ( inserted < 0 && v47 )
      EtwpCoverageSamplerStop((__int64)v6);
    ObfDereferenceObject(v6);
  }
  return (unsigned int)inserted;
}
