/*
 * XREFs of LogOp2_32 @ 0x1C0002198
 * Callers:
 *     LogOp2 @ 0x1C0009AD0 (LogOp2.c)
 * Callees:
 *     IsCompatableDSDTRevision @ 0x1C00022D4 (IsCompatableDSDTRevision.c)
 *     ValidateArgTypes @ 0x1C0009F50 (ValidateArgTypes.c)
 *     LogError @ 0x1C002A2EC (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B810 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C540 (PrintDebugMessage.c)
 *     memcmp @ 0x1C00320A0 (memcmp.c)
 */

__int64 __fastcall LogOp2_32(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  int v3; // edi
  unsigned int v4; // ebx
  __int64 v7; // rcx
  __int16 v8; // ax
  unsigned int v9; // ebp
  unsigned int v10; // ebx
  size_t v11; // r8
  const void *v12; // rdx
  const void *v13; // rcx
  int v14; // eax
  bool v15; // cc
  bool v16; // zf
  __int64 v18; // r9
  __int16 v19; // ax
  unsigned int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  unsigned int v23; // ebx
  unsigned int v24; // eax
  unsigned int v25; // edx
  bool v26; // cc
  unsigned int v27; // ebp
  unsigned int v28; // ebx
  size_t v29; // r8
  int v30; // eax
  bool v31; // cc
  __int64 v32; // rcx
  __int16 v33; // ax
  unsigned int v34; // eax
  int v35; // eax
  __int64 v36; // rcx
  unsigned int v37; // edx
  unsigned int v38; // r8d
  bool v39; // cc
  unsigned int v40; // ebp
  unsigned int v41; // ebx
  size_t v42; // r8
  const void *v43; // rdx
  const void *v44; // rcx
  unsigned __int8 *v45; // rax
  __int64 v46; // r8
  int v47; // edx
  int v48; // ecx
  __int64 v49; // rax

  v2 = a2[7];
  v3 = 0;
  LOBYTE(v4) = 0;
  if ( *(_DWORD *)(v2 + 8) == 144 )
  {
    LOBYTE(v2) = 1;
    v3 = ValidateArgTypes(a1, a2[10], v2, "II");
    if ( v3 < 0 )
      return (unsigned int)v3;
    v49 = a2[10];
    if ( !*(_DWORD *)(v49 + 16) )
      goto LABEL_15;
LABEL_92:
    if ( !*(_DWORD *)(v49 + 56) )
      goto LABEL_15;
LABEL_93:
    LOBYTE(v4) = 1;
    goto LABEL_15;
  }
  if ( *(_DWORD *)(v2 + 8) == 145 )
  {
    LOBYTE(v2) = 1;
    v3 = ValidateArgTypes(a1, a2[10], v2, "II");
    if ( v3 < 0 )
      return (unsigned int)v3;
    v49 = a2[10];
    if ( *(_DWORD *)(v49 + 16) )
      goto LABEL_93;
    goto LABEL_92;
  }
  if ( *(_DWORD *)(v2 + 8) != 147 )
  {
    if ( *(_DWORD *)(v2 + 8) == 148 )
    {
      LOBYTE(v2) = 1;
      v3 = ValidateArgTypes(a1, a2[10], v2, "DD");
      if ( v3 < 0 )
        return (unsigned int)v3;
      v32 = a2[10];
      v33 = *(_WORD *)(v32 + 2);
      if ( v33 != 1 )
      {
        if ( v33 == 2 )
        {
          if ( *(_WORD *)(v32 + 42) != 2 )
            goto LABEL_20;
          v34 = *(_DWORD *)(v32 + 64);
          if ( *(_DWORD *)(v32 + 24) <= v34 )
            v34 = *(_DWORD *)(v32 + 24);
          v35 = strncmp(*(const char **)(v32 + 32), *(const char **)(v32 + 72), v34);
          v36 = a2[10];
          v37 = *(_DWORD *)(v36 + 24);
          v38 = *(_DWORD *)(v36 + 64);
          v39 = v37 <= v38;
          if ( v37 < v38 )
          {
            if ( !v35 )
              v35 = -1;
            v39 = v37 <= v38;
          }
        }
        else
        {
          if ( v33 != 3 || *(_WORD *)(v32 + 42) != 3 )
            goto LABEL_20;
          v40 = *(_DWORD *)(v32 + 24);
          v41 = *(_DWORD *)(v32 + 64);
          v42 = v41;
          v43 = *(const void **)(v32 + 72);
          v44 = *(const void **)(v32 + 32);
          if ( v40 <= v41 )
            v42 = v40;
          v35 = memcmp(v44, v43, v42);
          v39 = v40 <= v41;
          if ( v40 < v41 )
          {
            if ( !v35 )
              v35 = -1;
            v39 = v40 <= v41;
          }
        }
        if ( !v39 && !v35 )
          v35 = 1;
        LOBYTE(v4) = v35 > 0;
        goto LABEL_15;
      }
      if ( *(_WORD *)(v32 + 42) == 1 )
      {
        LOBYTE(v4) = *(_DWORD *)(v32 + 16) > *(_DWORD *)(v32 + 56);
        goto LABEL_15;
      }
    }
    else
    {
      if ( *(_DWORD *)(v2 + 8) != 149 )
        goto LABEL_15;
      LOBYTE(v2) = 1;
      v3 = ValidateArgTypes(a1, a2[10], v2, "DD");
      if ( v3 < 0 )
        return (unsigned int)v3;
      v18 = a2[10];
      v19 = *(_WORD *)(v18 + 2);
      if ( v19 == 1 )
      {
        if ( *(_WORD *)(v18 + 42) == 1 )
        {
          LOBYTE(v4) = *(_DWORD *)(v18 + 16) < *(_DWORD *)(v18 + 56);
          goto LABEL_15;
        }
      }
      else if ( v19 == 2 )
      {
        if ( *(_WORD *)(v18 + 42) == 2 )
        {
          v20 = *(_DWORD *)(v18 + 64);
          if ( *(_DWORD *)(v18 + 24) <= v20 )
            v20 = *(_DWORD *)(v18 + 24);
          v21 = strncmp(*(const char **)(v18 + 32), *(const char **)(v18 + 72), v20);
          v22 = a2[10];
          v23 = v21;
          v24 = *(_DWORD *)(v22 + 24);
          v25 = *(_DWORD *)(v22 + 64);
          v26 = v24 <= v25;
          if ( v24 < v25 )
          {
            if ( !v23 )
              v23 = -1;
            v26 = v24 <= v25;
          }
          if ( !v26 && !v23 )
            v23 = 1;
          v4 = v23 >> 31;
          goto LABEL_15;
        }
      }
      else if ( v19 == 3 && *(_WORD *)(v18 + 42) == 3 )
      {
        v27 = *(_DWORD *)(v18 + 24);
        v28 = *(_DWORD *)(v18 + 64);
        v29 = v28;
        if ( v27 <= v28 )
          v29 = v27;
        v30 = memcmp(*(const void **)(v18 + 32), *(const void **)(v18 + 72), v29);
        v31 = v27 <= v28;
        if ( v27 < v28 )
        {
          if ( !v30 )
            v30 = -1;
          v31 = v27 <= v28;
        }
        if ( !v31 && !v30 )
          v30 = 1;
        LOBYTE(v4) = v30 < 0;
        goto LABEL_15;
      }
    }
LABEL_20:
    v3 = -1073741811;
    LogError(3221225485LL);
    AcpiDiagTraceAmlError(a1, 3221225485LL);
    PrintDebugMessage(238, 0, 0, 0, 0LL);
    return (unsigned int)v3;
  }
  LOBYTE(v2) = 1;
  v3 = ValidateArgTypes(a1, a2[10], v2, "DD");
  if ( v3 < 0 )
    return (unsigned int)v3;
  v7 = a2[10];
  v8 = *(_WORD *)(v7 + 2);
  if ( v8 == 1 )
  {
    if ( *(_WORD *)(v7 + 42) != 1 )
      goto LABEL_20;
    v16 = *(_DWORD *)(v7 + 16) == *(_DWORD *)(v7 + 56);
  }
  else
  {
    if ( v8 != 2 )
    {
      if ( v8 == 3 && *(_WORD *)(v7 + 42) == 3 )
      {
        v9 = *(_DWORD *)(v7 + 24);
        v10 = *(_DWORD *)(v7 + 64);
        v11 = v10;
        v12 = *(const void **)(v7 + 72);
        v13 = *(const void **)(v7 + 32);
        if ( v9 <= v10 )
          v11 = v9;
        v14 = memcmp(v13, v12, v11);
        v15 = v9 <= v10;
        if ( v9 < v10 )
        {
          if ( !v14 )
            v14 = -1;
          v15 = v9 <= v10;
        }
        if ( !v15 && !v14 )
          v14 = 1;
        v16 = v14 == 0;
        goto LABEL_14;
      }
      goto LABEL_20;
    }
    if ( *(_WORD *)(v7 + 42) != 2 )
      goto LABEL_20;
    v45 = *(unsigned __int8 **)(v7 + 32);
    v46 = *(_QWORD *)(v7 + 72) - (_QWORD)v45;
    do
    {
      v47 = v45[v46];
      v48 = *v45 - v47;
      if ( v48 )
        break;
      ++v45;
    }
    while ( v47 );
    v16 = v48 == 0;
  }
LABEL_14:
  LOBYTE(v4) = v16;
LABEL_15:
  *(_WORD *)(a2[11] + 2LL) = 1;
  if ( (_BYTE)v4 )
    IsCompatableDSDTRevision();
  *(_DWORD *)(a2[11] + 16LL) = -((_BYTE)v4 != 0);
  return (unsigned int)v3;
}
