__int64 __fastcall LogOp2_32(__int64 a1, _QWORD *a2)
{
  int v2; // ebx
  __int64 v5; // r9
  int v6; // edi
  __int16 v7; // cx
  _WORD *v8; // rax
  unsigned int v9; // eax
  unsigned int v10; // r9d
  __int64 v11; // rax
  unsigned int v12; // edx
  bool v13; // zf
  bool v14; // zf
  unsigned int v15; // r14d
  unsigned int v16; // ebp
  size_t v17; // r8
  int v18; // eax
  __int64 v19; // rcx
  __int16 v20; // dx
  _WORD *v21; // rax
  unsigned int v22; // eax
  int v23; // r9d
  __int64 v24; // rax
  unsigned int v25; // edx
  bool v26; // zf
  bool v27; // sf
  bool v28; // zf
  unsigned int v29; // r14d
  unsigned int v30; // ebp
  size_t v31; // r8
  const void *v32; // rdx
  const void *v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  __int16 v36; // dx
  _WORD *v37; // rax
  bool v38; // zf
  unsigned __int8 *v39; // rax
  __int64 v40; // r8
  int v41; // edx
  int v42; // ecx
  unsigned int v43; // r14d
  unsigned int v44; // ebp
  size_t v45; // r8
  const void *v46; // rdx
  const void *v47; // rcx
  int v48; // eax
  int v49; // r9d
  __int64 v50; // rax
  __int64 v51; // rax

  v2 = 0;
  LOBYTE(v5) = 0;
  v6 = 0;
  switch ( *(_DWORD *)(a2[7] + 8LL) )
  {
    case 0x90:
      v6 = ValidateArgTypes(a1, a2[10], 1, "II");
      if ( v6 < 0 )
        return (unsigned int)v6;
      v51 = a2[10];
      if ( *(_DWORD *)(v51 + 16) )
      {
        LOBYTE(v5) = 1;
        if ( *(_DWORD *)(v51 + 56) )
          break;
      }
      goto LABEL_87;
    case 0x91:
      v6 = ValidateArgTypes(a1, a2[10], 1, "II");
      if ( v6 < 0 )
        return (unsigned int)v6;
      v50 = a2[10];
      if ( *(_DWORD *)(v50 + 16) || *(_DWORD *)(v50 + 56) )
      {
        LOBYTE(v5) = 1;
        break;
      }
LABEL_87:
      LOBYTE(v5) = 0;
      break;
    case 0x93:
      v6 = ValidateArgTypes(a1, a2[10], 1, "DD");
      if ( v6 < 0 )
        return (unsigned int)v6;
      v35 = a2[10];
      v36 = *(_WORD *)(v35 + 2);
      v37 = (_WORD *)(v35 + 42);
      if ( v36 == 1 && *v37 == 1 )
      {
        v38 = *(_DWORD *)(v35 + 16) == *(_DWORD *)(v35 + 56);
      }
      else if ( v36 == 2 )
      {
        if ( *v37 != 2 )
          goto LABEL_57;
        v39 = *(unsigned __int8 **)(v35 + 32);
        v40 = *(_QWORD *)(v35 + 72) - (_QWORD)v39;
        do
        {
          v41 = v39[v40];
          v42 = *v39 - v41;
          if ( v42 )
            break;
          ++v39;
        }
        while ( v41 );
        v38 = v42 == 0;
      }
      else
      {
        if ( v36 != 3 || *v37 != 3 )
          goto LABEL_57;
        v43 = *(_DWORD *)(v35 + 24);
        v44 = *(_DWORD *)(v35 + 64);
        v45 = v44;
        v46 = *(const void **)(v35 + 72);
        v47 = *(const void **)(v35 + 32);
        if ( v43 <= v44 )
          v45 = v43;
        v48 = memcmp(v47, v46, v45);
        v49 = v48;
        if ( v43 >= v44 )
        {
          if ( v43 > v44 && !v48 )
            v49 = 1;
        }
        else if ( !v48 )
        {
          v49 = -1;
        }
        v38 = v49 == 0;
      }
      LOBYTE(v5) = v38;
      break;
    case 0x94:
      v6 = ValidateArgTypes(a1, a2[10], 1, "DD");
      if ( v6 < 0 )
        return (unsigned int)v6;
      v19 = a2[10];
      v20 = *(_WORD *)(v19 + 2);
      v21 = (_WORD *)(v19 + 42);
      if ( v20 == 1 && *v21 == 1 )
      {
        LOBYTE(v5) = *(_DWORD *)(v19 + 16) > *(_DWORD *)(v19 + 56);
        break;
      }
      if ( v20 == 2 )
      {
        if ( *v21 != 2 )
          goto LABEL_57;
        v22 = *(_DWORD *)(v19 + 64);
        if ( *(_DWORD *)(v19 + 24) <= v22 )
          v22 = *(_DWORD *)(v19 + 24);
        v23 = strncmp(*(const char **)(v19 + 32), *(const char **)(v19 + 72), v22);
        v24 = a2[10];
        v25 = *(_DWORD *)(v24 + 24);
        if ( v25 < *(_DWORD *)(v24 + 64) )
        {
          v26 = v23 == 0;
          v27 = v23 < 0;
          if ( v23 )
          {
LABEL_56:
            LOBYTE(v5) = !v27 && !v26;
            break;
          }
          goto LABEL_50;
        }
        if ( v25 > *(_DWORD *)(v24 + 64) )
        {
          v28 = v23 == 0;
          goto LABEL_53;
        }
      }
      else
      {
        if ( v20 != 3 || *v21 != 3 )
          goto LABEL_57;
        v29 = *(_DWORD *)(v19 + 24);
        v30 = *(_DWORD *)(v19 + 64);
        v31 = v30;
        v32 = *(const void **)(v19 + 72);
        v33 = *(const void **)(v19 + 32);
        if ( v29 <= v30 )
          v31 = v29;
        v34 = memcmp(v33, v32, v31);
        v23 = v34;
        if ( v29 >= v30 )
        {
          if ( v29 <= v30 )
            goto LABEL_55;
          v28 = v34 == 0;
LABEL_53:
          if ( v28 )
            v23 = 1;
          goto LABEL_55;
        }
        if ( !v34 )
LABEL_50:
          v23 = -1;
      }
LABEL_55:
      v26 = v23 == 0;
      v27 = v23 < 0;
      goto LABEL_56;
    case 0x95:
      v6 = ValidateArgTypes(a1, a2[10], 1, "DD");
      if ( v6 < 0 )
        return (unsigned int)v6;
      v5 = a2[10];
      v7 = *(_WORD *)(v5 + 2);
      v8 = (_WORD *)(v5 + 42);
      if ( v7 == 1 && *v8 == 1 )
      {
        LOBYTE(v5) = *(_DWORD *)(v5 + 16) < *(_DWORD *)(v5 + 56);
        break;
      }
      if ( v7 == 2 )
      {
        if ( *v8 == 2 )
        {
          v9 = *(_DWORD *)(v5 + 64);
          if ( *(_DWORD *)(v5 + 24) <= v9 )
            v9 = *(_DWORD *)(v5 + 24);
          v10 = strncmp(*(const char **)(v5 + 32), *(const char **)(v5 + 72), v9);
          v11 = a2[10];
          v12 = *(_DWORD *)(v11 + 24);
          if ( v12 < *(_DWORD *)(v11 + 64) )
          {
            v13 = v10 == 0;
            goto LABEL_24;
          }
          if ( v12 > *(_DWORD *)(v11 + 64) )
          {
            v14 = v10 == 0;
            goto LABEL_28;
          }
          goto LABEL_30;
        }
      }
      else if ( v7 == 3 && *v8 == 3 )
      {
        v15 = *(_DWORD *)(v5 + 24);
        v16 = *(_DWORD *)(v5 + 64);
        v17 = v16;
        if ( v15 <= v16 )
          v17 = v15;
        v18 = memcmp(*(const void **)(v5 + 32), *(const void **)(v5 + 72), v17);
        v10 = v18;
        if ( v15 < v16 )
        {
          v13 = v18 == 0;
LABEL_24:
          if ( v13 )
            v10 = -1;
          goto LABEL_30;
        }
        if ( v15 > v16 )
        {
          v14 = v18 == 0;
LABEL_28:
          if ( v14 )
            v10 = 1;
        }
LABEL_30:
        LODWORD(v5) = v10 >> 31;
        break;
      }
LABEL_57:
      v6 = -1073741811;
      LogError(-1073741811);
      AcpiDiagTraceAmlError(a1, -1073741811);
      PrintDebugMessage(238, 0LL, 0LL, 0LL, 0LL);
      return (unsigned int)v6;
  }
  *(_WORD *)(a2[11] + 2LL) = 1;
  if ( (_BYTE)v5 )
  {
    IsCompatableDSDTRevision();
    v2 = -1;
  }
  *(_DWORD *)(a2[11] + 16LL) = v2;
  return (unsigned int)v6;
}
