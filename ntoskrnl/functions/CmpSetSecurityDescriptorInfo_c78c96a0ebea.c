__int64 CmpSetSecurityDescriptorInfo(ULONG_PTR a1, _DWORD *a2, ...)
{
  __int64 v3; // r15
  ULONG_PTR v4; // rdi
  unsigned int v5; // esi
  bool v6; // zf
  __int64 CellPaged; // rax
  __int64 v8; // r13
  unsigned int v9; // r12d
  __int64 CellFlat; // rax
  unsigned int *v11; // r14
  struct _PRIVILEGE_SET *Pool; // rax
  __int64 v13; // rsi
  int Cell; // esi
  unsigned int v15; // r15d
  __int64 v16; // rbx
  ULONG_PTR BugCheckParameter4; // r12
  __int64 v18; // rbx
  struct _PRIVILEGE_SET *v19; // rax
  __int64 v21; // rax
  unsigned int v22; // eax
  ULONG_PTR v23; // r12
  __int64 v24; // r13
  int v25; // eax
  __int64 v26; // rax
  unsigned int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rcx
  _DWORD *v30; // rdx
  __int64 v31; // rdx
  _DWORD *v32; // rax
  _DWORD *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // [rsp+48h] [rbp-81h]
  unsigned int v36; // [rsp+50h] [rbp-79h]
  unsigned int v37; // [rsp+54h] [rbp-75h]
  PVOID P; // [rsp+58h] [rbp-71h] BYREF
  _DWORD v39[2]; // [rsp+60h] [rbp-69h] BYREF
  __int64 v40; // [rsp+68h] [rbp-61h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+70h] [rbp-59h]
  _DWORD v42[2]; // [rsp+78h] [rbp-51h] BYREF
  ULONG_PTR v43; // [rsp+80h] [rbp-49h] BYREF
  unsigned int v44; // [rsp+88h] [rbp-41h] BYREF
  __int64 v45; // [rsp+90h] [rbp-39h]
  _DWORD v46[2]; // [rsp+98h] [rbp-31h] BYREF
  _DWORD v47[2]; // [rsp+A0h] [rbp-29h] BYREF
  _DWORD *v48; // [rsp+A8h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-19h] BYREF
  size_t Size; // [rsp+128h] [rbp+5Fh] BYREF
  va_list Sizea; // [rsp+128h] [rbp+5Fh]
  __int64 v54; // [rsp+130h] [rbp+67h] BYREF
  va_list va1; // [rsp+130h] [rbp+67h]
  __int64 v56; // [rsp+138h] [rbp+6Fh]
  __int64 v57; // [rsp+140h] [rbp+77h]
  __int64 v58; // [rsp+148h] [rbp+7Fh]
  __int64 v59; // [rsp+150h] [rbp+87h]
  __int64 v60; // [rsp+158h] [rbp+8Fh]
  va_list va2; // [rsp+160h] [rbp+97h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(Sizea, a2);
  Size = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v54 = va_arg(va2, _QWORD);
  v56 = va_arg(va2, _QWORD);
  v57 = va_arg(va2, _QWORD);
  v58 = va_arg(va2, _QWORD);
  v59 = va_arg(va2, _QWORD);
  v60 = va_arg(va2, _QWORD);
  P = 0LL;
  v39[1] = 0;
  v42[1] = 0;
  v39[0] = -1;
  v42[0] = -1;
  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(_DWORD *)(a1 + 40);
  v46[0] = -1;
  v47[0] = -1;
  v46[1] = 0;
  v47[1] = 0;
  DestinationString = 0LL;
  v6 = (*(_BYTE *)(v4 + 140) & 1) == 0;
  v44 = 0;
  v37 = 0;
  v48 = 0LL;
  LOBYTE(v54) = 0;
  v35 = 0LL;
  v40 = 0LL;
  Privileges = 0LL;
  v43 = v5;
  if ( v6 )
    CellPaged = HvpGetCellPaged(v4);
  else
    CellPaged = HvpGetCellFlat(v4, v5);
  v45 = CellPaged;
  if ( !CellPaged )
    return 3221225626LL;
  CmpUpdateKeyNodeAccessBits(v4, CellPaged, v5);
  v8 = v58;
  v9 = *(_DWORD *)CmGetKCBCacheSecurity(a1, v58);
  v36 = v9;
  if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v4, v9);
  else
    CellFlat = HvpGetCellPaged(v4);
  v11 = (unsigned int *)CellFlat;
  if ( !CellFlat
    || (Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(256LL, *(unsigned int *)(CellFlat + 16), 909659459LL),
        (Privileges = Pool) == 0LL) )
  {
    Cell = -1073741670;
    goto LABEL_87;
  }
  memmove(Pool, v11 + 5, v11[4]);
  v13 = v60;
  if ( (*a2 & 4) != 0 )
  {
    SeCheckForCriticalAceRemoval(Privileges, Size, v60, (__int64 *)va1);
    if ( (_BYTE)v54 )
    {
      Size = 0LL;
      CmpConstructNameWithStatus(a1, (size_t *)Sizea);
      if ( Size )
      {
        Cell = -1073741822;
        CmpFreeTransientPoolWithTag((void *)Size, 0x624E4D43u);
      }
      else
      {
        RtlInitUnicodeString(&DestinationString, L"<Unknown registry key>");
        Cell = -1073741822;
      }
      goto LABEL_87;
    }
  }
  P = Privileges;
  Cell = RtlpSetSecurityObject(0, *a2, Size, (unsigned int)&P, 0, v56, v57, v13);
  if ( Cell >= 0 )
  {
    Cell = CmpTraceSecurityChanging(a1, (_DWORD)Privileges, *a2, Size, (__int64)P);
    if ( Cell >= 0 )
    {
      LODWORD(Size) = RtlLengthSecurityDescriptorStrict();
      if ( v8 )
        v15 = 1;
      else
        v15 = (unsigned int)v43 >> 31;
      v16 = MEMORY[0xFFFFF78000000014];
      if ( v8 )
      {
        Cell = HvpMarkCellDirty(v4, v9);
        if ( Cell < 0 )
          goto LABEL_107;
        v28 = v59;
        *(_DWORD *)(v59 + 96) = -1;
        *(_QWORD *)(v28 + 88) = 0LL;
        *(_DWORD *)(v28 + 68) = 9;
        *(_BYTE *)(v28 + 100) = 0;
      }
      else
      {
        Cell = HvpMarkCellDirty(v4, (unsigned int)v43);
        if ( Cell < 0 )
          goto LABEL_107;
        Cell = HvpMarkCellDirty(v4, v9);
        if ( Cell < 0 )
          goto LABEL_107;
      }
      if ( (unsigned __int8)CmpFindMatchingDescriptorCell(v4, P, v15, (char *)&v43 + 4, &v48) )
      {
        BugCheckParameter4 = HIDWORD(v43);
        if ( HIDWORD(v43) == v36 )
        {
          v3 = v40;
          if ( v8 )
          {
            v31 = v59;
            ++v11[3];
            v32 = v48;
            *(_DWORD *)(v31 + 96) = BugCheckParameter4;
            *(_QWORD *)(v31 + 88) = v32;
          }
          else
          {
            *(_QWORD *)(v45 + 4) = v16;
            *(_QWORD *)(a1 + 168) = v16;
          }
          goto LABEL_21;
        }
        Cell = HvpMarkCellDirty(v4, HIDWORD(v43));
        if ( Cell >= 0 )
        {
          if ( v8 )
          {
            v33 = v48;
            v34 = v59;
            *(_DWORD *)(v59 + 96) = *v48;
            *(_QWORD *)(v34 + 88) = v33;
            goto LABEL_43;
          }
          if ( v11[3] != 1
            || (Cell = HvpMarkCellDirty(v4, v11[1]), Cell >= 0) && (Cell = HvpMarkCellDirty(v4, v11[2]), Cell >= 0) )
          {
LABEL_43:
            if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
              v21 = HvpGetCellFlat(v4, (unsigned int)BugCheckParameter4);
            else
              v21 = HvpGetCellPaged(v4);
            v3 = v21;
            if ( v21 )
            {
              if ( !v8 )
              {
                v22 = v11[3];
                if ( v22 == 1 )
                {
                  if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
                    HvpReleaseCellFlat(v4, v39);
                  else
                    HvpReleaseCellPaged(v4, v39);
                  v11 = 0LL;
                  CmpRemoveSecurityCellList(v4, v36);
                  HvFreeCell(v4, v36);
                }
                else
                {
                  v11[3] = v22 - 1;
                }
                *(_DWORD *)(v45 + 44) = BugCheckParameter4;
              }
              ++*(_DWORD *)(v3 + 12);
              v35 = 0LL;
              LODWORD(v23) = v36;
              if ( !v8 )
              {
                v24 = v45;
LABEL_54:
                *(_QWORD *)(v24 + 4) = v16;
                ++*(_QWORD *)(a1 + 304);
                *(_QWORD *)(a1 + 168) = v16;
                CmpAssignSecurityToKcb(a1, *(unsigned int *)(v24 + 44), 0);
                v37 = 0;
LABEL_21:
                v18 = v35;
                goto LABEL_22;
              }
              v29 = v59;
              goto LABEL_80;
            }
            if ( !v8 )
              KeBugCheckEx(0x51u, 4uLL, 5uLL, v4, BugCheckParameter4);
LABEL_97:
            Cell = -1073741670;
            goto LABEL_21;
          }
        }
LABEL_107:
        v3 = v40;
        goto LABEL_21;
      }
      v25 = RtlLengthSecurityDescriptorStrict();
      Cell = HvAllocateCell(v4, v25 + 20, v15, (unsigned int)&v44, (__int64)&v40, (__int64)v42);
      if ( Cell < 0 )
        goto LABEL_107;
      v23 = v44;
      v37 = v44;
      if ( v8 )
      {
        v3 = v40;
        *(_DWORD *)(v40 + 8) = v44;
        *(_DWORD *)(v3 + 4) = v23;
      }
      else
      {
        Cell = HvpMarkCellDirty(v4, v11[1]);
        if ( Cell < 0 )
          goto LABEL_107;
        if ( v11[3] == 1 )
        {
          Cell = HvpMarkCellDirty(v4, v11[2]);
          if ( Cell < 0 )
            goto LABEL_107;
        }
        if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
          v26 = HvpGetCellFlat(v4, v11[1]);
        else
          v26 = HvpGetCellPaged(v4);
        v3 = v40;
        v35 = v26;
        if ( !v26 )
          goto LABEL_97;
        *(_DWORD *)(v40 + 4) = v11[1];
        *(_DWORD *)(v3 + 8) = v36;
        v11[1] = v23;
        *(_DWORD *)(v26 + 8) = v23;
        --v11[3];
      }
      *(_WORD *)v3 = 27507;
      v27 = Size;
      *(_DWORD *)(v3 + 12) = 1;
      *(_DWORD *)(v3 + 16) = v27;
      memmove((void *)(v3 + 20), P, v27);
      if ( (int)CmpAddSecurityCellToCache(v4, (unsigned int)v23) >= 0 )
      {
        if ( !v8 )
        {
          v24 = v45;
          *(_DWORD *)(v45 + 44) = v23;
          if ( !v11[3] )
          {
            if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v4, v39);
            else
              HvpReleaseCellPaged(v4, v39);
            v11 = 0LL;
            CmpRemoveSecurityCellList(v4, v36);
            HvFreeCell(v4, v36);
          }
          goto LABEL_54;
        }
        LODWORD(Size) = 0;
        if ( !CmpFindSecurityCellCacheIndex(v4, v23, (size_t *)Sizea) )
          KeBugCheckEx(0x51u, 4uLL, 3uLL, a1, v23);
        v29 = v59;
        v30 = *(_DWORD **)(*(_QWORD *)(v4 + 1888) + 16LL * (unsigned int)Size + 8);
        *(_QWORD *)(v59 + 88) = v30;
        *(_DWORD *)(v29 + 96) = *v30;
LABEL_80:
        v37 = 0;
        Cell = CmAddLogForAction(v29, 1LL);
        if ( Cell < 0 )
        {
          v6 = (*(_DWORD *)(v3 + 12))-- == 1;
          v37 = 0;
          if ( v6 )
          {
            CmpRemoveSecurityCellList(v4, (unsigned int)v23);
            HvFreeCell(v4, (unsigned int)v23);
            v37 = 0;
          }
        }
        goto LABEL_21;
      }
      v18 = v35;
      if ( !v8 )
      {
        ++v11[3];
        v11[1] = *(_DWORD *)(v3 + 4);
        *(_DWORD *)(v35 + 8) = *(_DWORD *)(v3 + 8);
      }
      Cell = -1073741670;
LABEL_22:
      if ( P )
        ExFreePoolWithTag(P, 0);
      v19 = Privileges;
      if ( !Privileges )
        goto LABEL_26;
      goto LABEL_25;
    }
LABEL_87:
    v18 = 0LL;
    goto LABEL_22;
  }
  P = 0LL;
  v18 = 0LL;
  v19 = Privileges;
LABEL_25:
  CmSiFreeMemory(v19);
LABEL_26:
  if ( v37 )
    HvFreeCell(v4, v37);
  if ( v18 )
  {
    if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v4, v46);
    else
      HvpReleaseCellPaged(v4, v46);
  }
  if ( v3 )
  {
    if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v4, v42);
    else
      HvpReleaseCellPaged(v4, v42);
  }
  if ( v11 )
  {
    if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v4, v39);
    else
      HvpReleaseCellPaged(v4, v39);
  }
  if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v4, v47);
  else
    HvpReleaseCellPaged(v4, v47);
  return (unsigned int)Cell;
}
