__int64 __fastcall Concat(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int16 *v9; // rcx
  __int64 v10; // r13
  __int64 v11; // rbp
  __int16 v12; // ax
  _OWORD *v13; // rsi
  int v14; // eax
  __int16 v15; // ax
  __int64 v16; // r11
  const void *ObjectTypeName; // rbx
  const void *v18; // rax
  __int64 v19; // rcx
  bool v20; // zf
  int v21; // eax
  unsigned int *v22; // r14
  unsigned int *v23; // r15
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // edx
  __int64 v27; // rax
  __int16 v28; // ax
  bool v29; // al
  _QWORD *v30; // rcx
  size_t v31; // r8
  const void *v32; // rdx
  void *v33; // rcx
  void *v34; // rcx
  _OWORD v36[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v37; // [rsp+50h] [rbp-48h]
  char v38; // [rsp+A8h] [rbp+10h]
  __int64 v39; // [rsp+B0h] [rbp+18h] BYREF

  v39 = 0LL;
  v38 = 0;
  v3 = *(_QWORD *)(a2 + 80);
  memset(v36, 0, sizeof(v36));
  v37 = 0LL;
  v5 = ValidateArgTypes(a1, v3, 0, "DD");
  if ( v5 )
    return v5;
  v5 = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 80LL, 135, (__int64)&v39);
  if ( v5 )
    return v5;
  v9 = *(__int16 **)(a2 + 80);
  v10 = v39;
  if ( v9[41] != 128 )
    CheckAndPromoteAliasedObjects(v9, v6, v39);
  v11 = *(_QWORD *)(a2 + 80);
  v12 = *(_WORD *)(v11 + 2);
  v13 = (_OWORD *)(v11 + 40);
  if ( v12 != *(_WORD *)(v11 + 42) )
  {
    switch ( v12 )
    {
      case 1:
        v14 = ConvertToInteger(v11 + 40, v36, v7, v8);
        break;
      case 2:
        v14 = ConvertToString(v11 + 40, 0LL, v36, v8);
        break;
      case 3:
        v14 = ConvertToBuffer(v11 + 40, v36, v7, v8);
        break;
      default:
LABEL_13:
        v13 = v36;
        v38 = 1;
        goto LABEL_14;
    }
    v5 = v14;
    if ( v14 >= 0 )
      goto LABEL_13;
  }
LABEL_14:
  v15 = *(_WORD *)(v11 + 2);
  if ( v15 == *((_WORD *)v13 + 1) )
  {
    v19 = *(_QWORD *)(a2 + 88);
    if ( v15 == 1 )
    {
      *(_WORD *)(v19 + 2) = 3;
      v20 = !IsCompatableDSDTRevision();
      v21 = 16;
      if ( v20 )
        v21 = 8;
      *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v21;
      v22 = (unsigned int *)(v11 + 24);
      v23 = (unsigned int *)v13 + 6;
    }
    else
    {
      *(_WORD *)(v19 + 2) = v15;
      v22 = (unsigned int *)(v11 + 24);
      v23 = (unsigned int *)v13 + 6;
      *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = *(_DWORD *)(v11 + 24) + *((_DWORD *)v13 + 6);
      v24 = *(_QWORD *)(a2 + 88);
      if ( *(_WORD *)(v24 + 2) == 2 )
        --*(_DWORD *)(v24 + 24);
    }
    v25 = *(_QWORD *)(a2 + 88);
    v26 = 1381258056;
    if ( *(_WORD *)(v25 + 2) != 2 )
      v26 = 1179992648;
    v27 = HeapAlloc(gpheapGlobal, v26, *(_DWORD *)(v25 + 24));
    *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v27;
    if ( v27 )
    {
      v28 = *(_WORD *)(v11 + 2);
      if ( v28 == 1 )
      {
        v29 = IsCompatableDSDTRevision();
        v30 = *(_QWORD **)(*(_QWORD *)(a2 + 88) + 32LL);
        if ( v29 )
        {
          *v30 = *(_QWORD *)(v11 + 16);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) + 8LL) = *((_QWORD *)v13 + 2);
        }
        else
        {
          *(_DWORD *)v30 = *(_DWORD *)(v11 + 16);
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) + 4LL) = *((_DWORD *)v13 + 4);
        }
      }
      else
      {
        v31 = *v22;
        v32 = *(const void **)(v11 + 32);
        v33 = *(void **)(*(_QWORD *)(a2 + 88) + 32LL);
        if ( v28 == 2 )
        {
          memmove(v33, v32, (unsigned int)(v31 - 1));
          v34 = (void *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) - 1LL + *v22);
        }
        else
        {
          memmove(v33, v32, v31);
          v34 = (void *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) + *v22);
        }
        memmove(v34, *((const void **)v13 + 4), *v23);
      }
      if ( !v5 )
        v5 = WriteObject(a1, v10, *(_QWORD *)(a2 + 88));
    }
    else
    {
      v5 = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError(a1, -1073741670);
      PrintDebugMessage(27, 0LL, 0LL, 0LL, 0LL);
    }
  }
  else
  {
    v5 = -1072431095;
    LogError(-1072431095);
    AcpiDiagTraceAmlError(a1, -1072431095);
    ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(*(_QWORD *)(a2 + 80) + 42LL));
    v18 = (const void *)GetObjectTypeName(*(unsigned __int16 *)(v16 + 2));
    PrintDebugMessage(26, v18, ObjectTypeName, 0LL, 0LL);
  }
  if ( v38 )
    FreeDataBuffs((__int64)v36, 1u);
  return v5;
}
