/*
 * XREFs of SeCaptureSecurityDescriptor @ 0x1406D4920
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x140345AC0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     AlpcpConnectPort @ 0x1405DF5BC (AlpcpConnectPort.c)
 *     NtCreateWnfStateName @ 0x14060DB30 (NtCreateWnfStateName.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1406265D0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     NtSetSecurityObject @ 0x14067B860 (NtSetSecurityObject.c)
 *     NtOpenObjectAuditAlarm @ 0x14068BC10 (NtOpenObjectAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14069F338 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     ObpCaptureObjectCreateInformation @ 0x1406CF200 (ObpCaptureObjectCreateInformation.c)
 *     PipGetRegistrySecurityWithFallback @ 0x14073AB68 (PipGetRegistrySecurityWithFallback.c)
 *     IopQuerySecureDeviceClassState @ 0x14073C03C (IopQuerySecureDeviceClassState.c)
 *     CmpCopySaclToVirtualKey @ 0x140871814 (CmpCopySaclToVirtualKey.c)
 * Callees:
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     RtlValidAcl @ 0x1406D5380 (RtlValidAcl.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SeCaptureSecurityDescriptor(__int64 a1, char a2, POOL_TYPE a3, char a4, _QWORD *a5)
{
  unsigned int v6; // r11d
  unsigned int v7; // r9d
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  char v10; // r14
  unsigned __int8 *v11; // rdx
  _BYTE *v12; // r8
  unsigned __int16 *v13; // r12
  unsigned __int16 *v14; // rsi
  unsigned __int64 v15; // rdx
  unsigned int v16; // r13d
  unsigned int v17; // r15d
  unsigned int v18; // ecx
  unsigned int v19; // r9d
  unsigned int v20; // ebx
  __int16 v21; // r14
  unsigned __int64 v22; // rsi
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned int v25; // ebx
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // rdx
  int v29; // r9d
  SIZE_T v30; // rbx
  char *PoolWithTag; // rax
  char *v32; // rdi
  ACL *v33; // rbx
  char v34; // r12
  int v35; // ecx
  int v36; // ebx
  unsigned __int64 v38; // r12
  __int64 v39; // rax
  int v40; // edx
  size_t Size; // [rsp+20h] [rbp-D8h]
  unsigned int v42; // [rsp+28h] [rbp-D0h]
  int v43; // [rsp+30h] [rbp-C8h]
  int v44; // [rsp+34h] [rbp-C4h]
  size_t v45; // [rsp+38h] [rbp-C0h]
  char v46; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v47; // [rsp+50h] [rbp-A8h]
  void *v48; // [rsp+58h] [rbp-A0h]
  __int128 v49; // [rsp+60h] [rbp-98h]
  unsigned __int64 v50; // [rsp+70h] [rbp-88h]
  unsigned __int16 *v51; // [rsp+78h] [rbp-80h]
  unsigned __int16 *Src; // [rsp+80h] [rbp-78h]
  unsigned int v53; // [rsp+88h] [rbp-70h]
  unsigned int v54; // [rsp+8Ch] [rbp-6Ch]
  unsigned int v55; // [rsp+90h] [rbp-68h]
  __int128 v56; // [rsp+98h] [rbp-60h]
  __int16 v57; // [rsp+100h] [rbp+8h]

  DWORD1(v49) = 0;
  v6 = 0;
  LOBYTE(v43) = 0;
  v46 = 0;
  v42 = 0;
  LOBYTE(v44) = 0;
  Size = 0LL;
  if ( !a1 )
  {
    *a5 = 0LL;
    return 0LL;
  }
  if ( a2 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v56 = *(_OWORD *)a1;
    v7 = *(_DWORD *)(a1 + 16);
    v8 = *(_QWORD *)a1;
    if ( (WORD1(*(_OWORD *)a1) & 0x8000u) == 0 && (a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    LOBYTE(v43) = 0;
    LOBYTE(v44) = 0;
    Size = 0LL;
  }
  else
  {
    if ( !a4 )
    {
      *a5 = a1;
      return 0LL;
    }
    v56 = *(_OWORD *)a1;
    v7 = *(_DWORD *)(a1 + 16);
    v8 = *(_QWORD *)a1;
  }
  if ( (_BYTE)v56 != 1 )
    return 3221225560LL;
  LOBYTE(v49) = 1;
  BYTE1(v49) = BYTE1(v8);
  v9 = v8 >> 16;
  v10 = BYTE2(v8);
  WORD1(v49) = WORD1(v8) & 0x7FFF;
  if ( (v8 & 0x80000000) != 0 )
  {
    v15 = HIDWORD(v8);
    if ( (_DWORD)v15 )
      v11 = (unsigned __int8 *)(a1 + v15);
    else
      v11 = 0LL;
  }
  else
  {
    v11 = *(unsigned __int8 **)(a1 + 8);
  }
  v47 = v11;
  *((_QWORD *)&v49 + 1) = v11;
  if ( (v9 & 0x8000u) == 0LL )
  {
    v12 = *(_BYTE **)(a1 + 16);
    goto LABEL_16;
  }
  if ( DWORD2(v56) )
  {
    v12 = (_BYTE *)(a1 + DWORD2(v56));
LABEL_16:
    v48 = v12;
    goto LABEL_17;
  }
  v12 = 0LL;
  v48 = 0LL;
LABEL_17:
  v50 = (unsigned __int64)v12;
  if ( (v9 & 0x10) != 0 )
  {
    if ( (v9 & 0x8000u) == 0LL )
    {
      v13 = *(unsigned __int16 **)(a1 + 24);
    }
    else if ( HIDWORD(v56) )
    {
      v13 = (unsigned __int16 *)(a1 + HIDWORD(*((_QWORD *)&v56 + 1)));
    }
    else
    {
      v13 = 0LL;
    }
  }
  else
  {
    v13 = 0LL;
  }
  v51 = v13;
  if ( (v9 & 4) != 0 )
  {
    if ( (v9 & 0x8000u) == 0LL )
    {
      v14 = *(unsigned __int16 **)(a1 + 32);
    }
    else if ( v7 )
    {
      v14 = (unsigned __int16 *)(a1 + v7);
    }
    else
    {
      v14 = 0LL;
    }
  }
  else
  {
    v14 = 0LL;
  }
  Src = v14;
  v16 = 0;
  v45 = 0LL;
  v17 = 0;
  v53 = 0;
  v18 = 0;
  v54 = 0;
  v19 = 0;
  v20 = 0;
  v55 = 0;
  v57 = v10 & 0x10;
  if ( (v10 & 0x10) != 0 && v13 )
  {
    if ( a2 )
    {
      v38 = (unsigned __int64)(v13 + 1);
      if ( v38 >= 0x7FFFFFFF0000LL )
        v38 = 0x7FFFFFFF0000LL;
      v39 = *(unsigned __int16 *)v38;
      v16 = *(unsigned __int16 *)v38;
      LODWORD(v45) = v16;
      if ( *(_WORD *)v38 )
      {
        if ( ((unsigned __int8)v51 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v13 = v51;
        if ( (unsigned __int64)v51 + v39 > 0x7FFFFFFF0000LL || (unsigned __int16 *)((char *)v51 + v39) < v51 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      else
      {
        v13 = v51;
      }
      v48 = v12;
      v47 = v11;
      v10 = BYTE2(v49);
      v17 = 0;
      LOBYTE(v43) = 0;
      LOBYTE(v44) = 0;
      Size = 0LL;
    }
    else
    {
      v16 = v13[1];
      LODWORD(v45) = v16;
    }
    v6 = (v16 + 3) & 0xFFFFFFFC;
    v53 = v6;
    if ( v6 - 8 > 0xFFF7 )
      return 3221225591LL;
  }
  else
  {
    v13 = 0LL;
    v51 = 0LL;
  }
  v21 = v10 & 4;
  if ( v21 && v14 )
  {
    if ( a2 )
    {
      v22 = (unsigned __int64)(v14 + 1);
      if ( v22 >= 0x7FFFFFFF0000LL )
        v22 = 0x7FFFFFFF0000LL;
      v23 = *(unsigned __int16 *)v22;
      v17 = *(unsigned __int16 *)v22;
      HIDWORD(v45) = v17;
      if ( *(_WORD *)v22 )
      {
        if ( ((unsigned __int8)Src & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v14 = Src;
        if ( (unsigned __int64)Src + v23 > 0x7FFFFFFF0000LL || (unsigned __int16 *)((char *)Src + v23) < Src )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      else
      {
        v14 = Src;
      }
      v13 = v51;
      v48 = v12;
      v47 = v11;
      v16 = v45;
      LOBYTE(v43) = 0;
      LOBYTE(v44) = 0;
      Size = 0LL;
    }
    else
    {
      v17 = v14[1];
      HIDWORD(v45) = v17;
    }
    v18 = (v17 + 3) & 0xFFFFFFFC;
    v54 = v18;
    if ( v18 - 8 > 0xFFF7 )
      return 3221225591LL;
  }
  else
  {
    v14 = 0LL;
    Src = 0LL;
  }
  if ( v11 )
  {
    if ( a2 )
    {
      v24 = (unsigned __int64)(v11 + 1);
      if ( v24 >= 0x7FFFFFFF0000LL )
        v24 = 0x7FFFFFFF0000LL;
      v43 = *(unsigned __int8 *)v24;
      v46 = *(_BYTE *)v24;
      v25 = 4 * v43 + 8;
      HIDWORD(Size) = v25;
      v42 = v25;
      if ( 4 * v43 == -8 )
      {
        v47 = (unsigned __int8 *)*((_QWORD *)&v49 + 1);
      }
      else
      {
        if ( (BYTE8(v49) & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v47 = (unsigned __int8 *)*((_QWORD *)&v49 + 1);
        v26 = *((_QWORD *)&v49 + 1) + v25;
        if ( v26 > 0x7FFFFFFF0000LL || v26 < *((_QWORD *)&v49 + 1) )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v14 = Src;
      v13 = v51;
      v12 = (_BYTE *)v50;
      v48 = (void *)v50;
      v16 = v45;
      v17 = HIDWORD(v45);
      LOBYTE(v44) = 0;
      LODWORD(Size) = 0;
    }
    else
    {
      v40 = v11[1];
      LOBYTE(v43) = v40;
      v46 = v40;
      v25 = 4 * v40 + 8;
      v42 = v25;
      HIDWORD(Size) = v25;
    }
    v20 = (v25 + 3) & 0xFFFFFFFC;
    v55 = v20;
  }
  if ( v12 )
  {
    if ( a2 )
    {
      v27 = (unsigned __int64)(v12 + 1);
      if ( v27 >= 0x7FFFFFFF0000LL )
        v27 = 0x7FFFFFFF0000LL;
      v44 = *(unsigned __int8 *)v27;
      LODWORD(Size) = 4 * v44 + 8;
      if ( 4 * v44 == -8 )
      {
        v48 = (void *)v50;
      }
      else
      {
        if ( (v50 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v48 = (void *)v50;
        v28 = v50 + (unsigned int)(4 * v44 + 8);
        if ( v28 > 0x7FFFFFFF0000LL || v28 < v50 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v14 = Src;
      v13 = v51;
      v47 = (unsigned __int8 *)*((_QWORD *)&v49 + 1);
      v16 = v45;
      v17 = HIDWORD(v45);
      LOBYTE(v43) = v46;
      HIDWORD(Size) = v42;
      v29 = 4 * v44 + 8;
    }
    else
    {
      LOBYTE(v44) = v12[1];
      v29 = 4 * (unsigned __int8)v44 + 8;
      LODWORD(Size) = v29;
    }
    v19 = (v29 + 3) & 0xFFFFFFFC;
  }
  v30 = v6 + 20 + v18 + v19 + v20;
  PoolWithTag = (char *)ExAllocatePoolWithTag(a3, v30, 0x63536553u);
  v32 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, (unsigned int)v30);
  *(_OWORD *)v32 = v49;
  *((_DWORD *)v32 + 4) = v50;
  v33 = (ACL *)(v32 + 20);
  *((_WORD *)v32 + 1) |= 0x8000u;
  if ( !v57 || !v13 )
  {
    *((_DWORD *)v32 + 3) = 0;
    v34 = a2;
    goto LABEL_80;
  }
  memmove(v32 + 20, v13, v16);
  v34 = a2;
  if ( !a2 || v16 >= 8 && v16 == *((unsigned __int16 *)v32 + 11) && RtlValidAcl((PACL)(v32 + 20)) )
  {
    *((_DWORD *)v32 + 3) = 20;
    *((_WORD *)v32 + 11) = v53;
    v33 = (ACL *)((char *)v33 + v53);
LABEL_80:
    if ( !v21 || !v14 )
    {
      *((_DWORD *)v32 + 4) = 0;
LABEL_87:
      if ( v47 )
      {
        memmove(v33, v47, HIDWORD(Size));
        v33->Sbz1 = v43;
        if ( v34
          && ((unsigned __int64)v33 <= 0x7FFFFFFF0000LL || (unsigned __int8)v43 > 0xFu || (v33->AclRevision & 0xF) != 1) )
        {
          goto LABEL_131;
        }
        v35 = (_DWORD)v33 - (_DWORD)v32;
        v33 = (ACL *)((char *)v33 + v55);
      }
      else
      {
        v35 = 0;
      }
      *((_DWORD *)v32 + 1) = v35;
      if ( !v48 )
      {
        v36 = 0;
        goto LABEL_99;
      }
      memmove(v33, v48, (unsigned int)Size);
      v33->Sbz1 = v44;
      if ( !v34
        || (unsigned __int64)v33 > 0x7FFFFFFF0000LL && (unsigned __int8)v44 <= 0xFu && (v33->AclRevision & 0xF) == 1 )
      {
        v36 = (_DWORD)v33 - (_DWORD)v32;
LABEL_99:
        *((_DWORD *)v32 + 2) = v36;
        *a5 = v32;
        return 0LL;
      }
LABEL_131:
      ExFreePoolWithTag(v32, 0);
      return 3221225592LL;
    }
    memmove(v33, v14, v17);
    if ( !v34 || v17 >= 8 && v17 == v33->AclSize && RtlValidAcl(v33) )
    {
      *((_DWORD *)v32 + 4) = (_DWORD)v33 - (_DWORD)v32;
      v33->AclSize = v54;
      v33 = (ACL *)((char *)v33 + v54);
      goto LABEL_87;
    }
  }
  ExFreePoolWithTag(v32, 0);
  return 3221225591LL;
}
