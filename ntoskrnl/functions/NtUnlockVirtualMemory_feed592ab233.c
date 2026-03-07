__int64 __fastcall NtUnlockVirtualMemory(ULONG_PTR BugCheckParameter1, unsigned __int64 *a2, _QWORD *a3)
{
  __int64 result; // rax
  unsigned __int64 v5; // r12
  int v6; // edi
  __int64 v7; // r13
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rsi
  bool v10; // zf
  PVOID v11; // r14
  _QWORD *v12; // rbx
  __int64 v13; // rax
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // r11
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rbx
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rsi
  unsigned __int64 k; // r12
  unsigned __int64 v24; // r13
  __int64 v25; // r15
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rbx
  __int64 v28; // r15
  __int64 v29; // rbx
  __int64 v30; // r9
  unsigned __int64 valid; // rax
  unsigned __int64 Address; // rbx
  unsigned __int64 v33; // rcx
  _QWORD **v34; // rax
  _QWORD *i; // rcx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v37; // rax
  __int64 v38; // r8
  struct _LIST_ENTRY *v39; // rax
  __int64 v40; // rax
  char v41; // rdx^7
  unsigned __int64 v42; // rcx
  _QWORD **v43; // rax
  _QWORD *j; // rcx
  unsigned __int8 v45; // [rsp+40h] [rbp-1A8h]
  __int64 v46; // [rsp+48h] [rbp-1A0h]
  unsigned __int64 v47; // [rsp+50h] [rbp-198h]
  unsigned __int64 v48; // [rsp+50h] [rbp-198h]
  int v49; // [rsp+58h] [rbp-190h]
  char v50; // [rsp+5Ch] [rbp-18Ch]
  __int64 v51; // [rsp+60h] [rbp-188h] BYREF
  _QWORD *v52; // [rsp+68h] [rbp-180h]
  PVOID Object; // [rsp+70h] [rbp-178h] BYREF
  __int64 v54; // [rsp+78h] [rbp-170h] BYREF
  __int64 v55; // [rsp+80h] [rbp-168h] BYREF
  unsigned __int64 v56; // [rsp+88h] [rbp-160h]
  __int64 v57; // [rsp+90h] [rbp-158h]
  unsigned __int64 v58; // [rsp+98h] [rbp-150h]
  _QWORD *v59; // [rsp+A0h] [rbp-148h]
  unsigned __int64 *v60; // [rsp+A8h] [rbp-140h]
  $115DCDF994C6370D29323EAB0E0C9502 v61; // [rsp+B0h] [rbp-138h] BYREF
  int v62; // [rsp+E0h] [rbp-108h] BYREF
  __int16 v63; // [rsp+E4h] [rbp-104h]
  __int16 v64; // [rsp+E6h] [rbp-102h]
  __int64 v65; // [rsp+E8h] [rbp-100h]
  __int64 v66; // [rsp+F0h] [rbp-F8h]
  __int64 v67; // [rsp+F8h] [rbp-F0h]
  _BYTE v68[152]; // [rsp+100h] [rbp-E8h] BYREF

  v59 = a3;
  v60 = a2;
  v51 = 0LL;
  v54 = 0LL;
  Object = 0LL;
  memset(&v61, 0, sizeof(v61));
  v64 = 0;
  memset(v68, 0, sizeof(v68));
  result = MiLockUnlockCommon(BugCheckParameter1, (__int64)&v54, (__int64)&v51, (__int64)&Object);
  v49 = result;
  if ( (int)result < 0 )
    return result;
  v5 = 0LL;
  v56 = 0LL;
  v6 = 0;
  v50 = 0;
  v7 = v54;
  v8 = (v54 + v51 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v51 = v8;
  v58 = v54 & 0xFFFFFFFFFFFFF000uLL;
  v9 = v54 & 0xFFFFFFFFFFFFF000uLL;
  v10 = BugCheckParameter1 == -1LL;
  v11 = Object;
  if ( !v10 )
  {
    KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v61);
    v6 = 2;
    v50 = 2;
  }
  v65 = 20LL;
  v62 = 1;
  v63 = 4;
  v66 = 0LL;
  v67 = 0LL;
  v12 = 0LL;
  v52 = 0LL;
  v13 = MiLockVadRange(v11, v9, v8, 0LL);
  v57 = v13;
  if ( !v13 )
    goto LABEL_64;
  v47 = 0LL;
  v46 = (__int64)v11 + 1664;
  v45 = MiLockWorkingSetShared((__int64)v11 + 1664);
  if ( v9 > v8 )
    goto LABEL_17;
  v14 = 0xFFFFF68000000000uLL;
  v15 = 0xFFFFF6FB40000000uLL;
  v16 = 0LL;
  do
  {
    if ( (((unsigned __int8)(v9 >> 12) + 1) & 0xF) == 0 )
    {
      if ( !MiWorkingSetIsContended(v46) )
      {
        if ( (!v16 || !(unsigned int)MiPageTableLockIsContended(v30, v16)) && !KeShouldYieldProcessor() )
        {
LABEL_54:
          v15 = 0xFFFFF6FB40000000uLL;
          v14 = 0xFFFFF68000000000uLL;
          goto LABEL_8;
        }
        v30 = v46;
      }
      if ( HIDWORD(v65) )
        MiFreeWsleList(v30, (__int64)&v62, 0);
      if ( v16 )
      {
        MiUnlockPageTableInternal(v46, v16);
        v16 = 0LL;
        v47 = 0LL;
      }
      MiUnlockWorkingSetShared(v46, v45);
      MiLockWorkingSetShared(v46);
      goto LABEL_54;
    }
LABEL_8:
    if ( v9 > v5 || !v12 )
    {
      if ( v12 )
      {
        v33 = (unsigned __int64)v12;
        v34 = (_QWORD **)v12[1];
        if ( v34 )
        {
          Address = v12[1];
          v52 = v34;
          for ( i = *v34; i; i = (_QWORD *)*i )
          {
            Address = (unsigned __int64)i;
            v52 = i;
          }
        }
        else
        {
          Address = v12[2] & 0xFFFFFFFFFFFFFFFCuLL;
          v52 = (_QWORD *)Address;
          if ( Address )
          {
            do
            {
              if ( *(_QWORD *)Address == v33 )
                break;
              v33 = Address;
              Address = *(_QWORD *)(Address + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            }
            while ( Address );
            v52 = (_QWORD *)Address;
          }
        }
      }
      else
      {
        Address = (unsigned __int64)MiLocateAddress(v9);
        v52 = (_QWORD *)Address;
      }
      v6 &= ~4u;
      v50 = v6;
      if ( (*(_DWORD *)(Address + 48) & 0x70) == 0x40 )
      {
        v6 |= 4u;
        v50 = v6;
      }
      else if ( !(unsigned int)MiVadPagesTradable(Address) )
      {
        break;
      }
      v56 = (*(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32)) << 12;
    }
    v17 = v14 + ((v9 >> 9) & 0x7FFFFFFFF8LL);
    v18 = v15 + ((v9 >> 18) & 0x3FFFFFF8);
    if ( v16 == v18 )
      goto LABEL_11;
    if ( v16 )
    {
      if ( HIDWORD(v65) )
        MiFreeWsleList(v46, (__int64)&v62, 0);
      MiUnlockPageTableInternal(v46, v16);
    }
    valid = MiLockLowestValidPageTable(v46, v17, (unsigned __int64 *)&v55);
    v16 = valid;
    v47 = valid;
    if ( valid == v18 )
    {
LABEL_11:
      v19 = *(_QWORD *)v17;
      if ( v17 >= 0xFFFFF6FB7DBED000uLL
        && v17 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v19 & 1) != 0
        && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v37 = *((_QWORD *)&Flink->Flink + ((v17 >> 3) & 0x1FF));
          v38 = v19 | 0x20;
          if ( (v37 & 0x20) == 0 )
            v38 = *(_QWORD *)v17;
          v19 = v38;
          if ( (v37 & 0x42) != 0 )
            v19 = v38 | 0x42;
        }
      }
      v55 = v19;
      if ( (v19 & 1) != 0 )
      {
        v27 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v55) >> 12) & 0xFFFFFFFFFFLL)
            - 0x220000000000LL;
        v28 = *(_QWORD *)(v27 + 8);
        if ( (v6 & 4) == 0 || !(unsigned int)MiRotatedToFrameBuffer(v17) )
        {
          if ( (*(_QWORD *)(v27 + 40) & 0x10000000000LL) == 0 && v28 >= 0 && v28 )
            MiDemoteCombinedPte(v46, v17, v28 | 0x8000000000000000uLL);
          v29 = *(_QWORD *)v17;
          if ( MiPteInShadowRange(v17)
            && (MiFlags & 0x600000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v29 & 1) != 0
            && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
          {
            v39 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v39 )
            {
              v40 = *((_QWORD *)&v39->Flink + ((v17 >> 3) & 0x1FF));
              v41 = HIBYTE(v29);
              if ( (v40 & 0x20) == 0 )
                v41 = HIBYTE(v29);
              HIBYTE(v29) = v41;
              if ( (v40 & 0x42) != 0 )
                HIBYTE(v29) = v41;
            }
          }
          if ( (HIBYTE(v29) & 0xF) != 8 )
          {
            MiInsertTbFlushEntry((__int64)&v62, v9, 1LL, 0);
            if ( HIDWORD(v65) == (_DWORD)v65 )
              MiFreeWsleList(v46, (__int64)&v62, 0);
            v49 = -1073741782;
          }
        }
        v8 = v51;
      }
      else
      {
        v49 = -1073741782;
      }
      v14 = 0xFFFFF68000000000uLL;
      v9 += 4096LL;
    }
    else
    {
      MiUnlockPageTableInternal(v46, valid);
      v16 = 0LL;
      v47 = 0LL;
      v14 = 0xFFFFF68000000000uLL;
      v9 = (__int64)((v18 << 25) + 0x10000000) >> 16 << 25 >> 16;
      v49 = -1073741782;
    }
    v5 = v56;
    v12 = v52;
    v15 = 0xFFFFF6FB40000000uLL;
  }
  while ( v9 <= v8 );
  v11 = Object;
  v7 = v54;
LABEL_17:
  if ( HIDWORD(v65) )
    MiFreeWsleList(v46, (__int64)&v62, 0);
  v20 = v47;
  if ( v47 )
  {
    MiUnlockPageTableInternal(v46, v47);
    v20 = 0LL;
    v47 = 0LL;
  }
  if ( v49 == -1073741782 )
  {
    MiUnlockWorkingSetShared(v46, v45);
    v13 = v57;
LABEL_64:
    MiUnlockVadRange(v11, v7, v13, 0LL);
    if ( (v6 & 2) != 0 )
      KiUnstackDetachProcess(&v61);
    ObfDereferenceObjectWithTag(v11, 0x6D566D4Du);
    return 3221225514LL;
  }
  v21 = v58;
  v22 = 0LL;
  k = 0LL;
  if ( v58 > v8 )
    goto LABEL_36;
  v24 = v47;
  while ( 2 )
  {
    if ( v21 <= v22 && k )
    {
LABEL_29:
      if ( v24 == ((v21 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
      {
        v25 = v46;
      }
      else
      {
        if ( v24 )
          MiUnlockPageTableInternal(v46, v24);
        v25 = v46;
        v24 = MiLockLowestValidPageTable(v46, ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (unsigned __int64 *)&v55);
      }
      MiUnlockVa(v25, v21);
      v21 += 4096LL;
      if ( (v21 & 0xF000) == 0
        && (MiWorkingSetIsContended(v25)
         || (unsigned int)MiPageTableLockIsContended(v25, v24)
         || KeShouldYieldProcessor()) )
      {
        MiUnlockPageTableInternal(v25, v24);
        v24 = 0LL;
        MiUnlockWorkingSetShared(v25, v45);
        MiLockWorkingSetShared(v25);
      }
      v8 = v51;
      if ( v21 > v51 )
        goto LABEL_35;
      continue;
    }
    break;
  }
  if ( k )
  {
    v42 = k;
    v43 = *(_QWORD ***)(k + 8);
    if ( v43 )
    {
      k = *(_QWORD *)(k + 8);
      for ( j = *v43; j; j = (_QWORD *)*j )
        k = (unsigned __int64)j;
    }
    else
    {
      for ( k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL; k; k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_QWORD *)k == v42 )
          break;
        v42 = k;
      }
    }
  }
  else
  {
    k = (unsigned __int64)MiLocateAddress(v21);
  }
  if ( (unsigned int)MiVadPagesTradable(k) )
  {
    v22 = (*(unsigned int *)(k + 28) | ((unsigned __int64)*(unsigned __int8 *)(k + 33) << 32)) << 12;
    goto LABEL_29;
  }
LABEL_35:
  v48 = v24;
  LOBYTE(v6) = v50;
  v11 = Object;
  v7 = v54;
  v20 = v48;
LABEL_36:
  if ( v20 )
    MiUnlockPageTableInternal(v46, v20);
  MiUnlockWorkingSetShared(v46, v45);
  MiUnlockVadRange(v11, v7, v57, 0LL);
  if ( (v6 & 2) != 0 )
    KiUnstackDetachProcess(&v61);
  ObfDereferenceObjectWithTag(v11, 0x6D566D4Du);
  v26 = v58;
  *v59 = v8 - v58 + 4096;
  *v60 = v26;
  return 0LL;
}
