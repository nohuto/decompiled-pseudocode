/*
 * XREFs of Concat @ 0x1C0068C00
 * Callers:
 *     <none>
 * Callees:
 *     IsCompatableDSDTRevision @ 0x1C00022D4 (IsCompatableDSDTRevision.c)
 *     FreeDataBuffs @ 0x1C0003350 (FreeDataBuffs.c)
 *     HeapAlloc @ 0x1C0008E30 (HeapAlloc.c)
 *     ValidateArgTypes @ 0x1C0009F50 (ValidateArgTypes.c)
 *     WriteObject @ 0x1C000AC60 (WriteObject.c)
 *     ValidateTarget @ 0x1C000B264 (ValidateTarget.c)
 *     ConvertToInteger @ 0x1C000C190 (ConvertToInteger.c)
 *     LogError @ 0x1C002A2EC (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B810 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C540 (PrintDebugMessage.c)
 *     memmove @ 0x1C00321C0 (memmove.c)
 *     CheckAndPromoteAliasedObjects @ 0x1C006512C (CheckAndPromoteAliasedObjects.c)
 *     GetObjectTypeName @ 0x1C0065458 (GetObjectTypeName.c)
 *     ConvertToBuffer @ 0x1C006B288 (ConvertToBuffer.c)
 *     ConvertToString @ 0x1C006B458 (ConvertToString.c)
 */

__int64 __fastcall Concat(struct _SLIST_ENTRY *a1, __int64 a2)
{
  __int64 v3; // rdx
  char v5; // r12
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // r15
  __int16 v10; // ax
  _OWORD *v11; // rbp
  int v12; // eax
  __int16 v13; // cx
  __int64 v14; // r11
  const void *ObjectTypeName; // rbx
  const void *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // edx
  __int64 v21; // rax
  __int16 v22; // cx
  bool v23; // al
  _QWORD *v24; // rdx
  size_t v25; // r8
  const void *v26; // rdx
  bool v27; // zf
  void *v28; // rcx
  void *v29; // rcx
  _OWORD v31[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v32; // [rsp+50h] [rbp-38h]
  __int64 v33; // [rsp+98h] [rbp+10h] BYREF

  v33 = 0LL;
  v3 = *(_QWORD *)(a2 + 80);
  memset(v31, 0, sizeof(v31));
  v32 = 0LL;
  v5 = 0;
  v6 = ValidateArgTypes((__int64)a1, v3, 0, "DD");
  if ( v6 )
    return v6;
  v6 = ValidateTarget((__int64)a1, *(_QWORD *)(a2 + 80) + 80LL, 0x87u, (__int64)&v33);
  if ( v6 )
    return v6;
  v8 = *(_QWORD *)(a2 + 80);
  v9 = v33;
  if ( *(_WORD *)(v8 + 82) != 128 )
  {
    CheckAndPromoteAliasedObjects(*(__int16 **)(a2 + 80), v7, v33);
    v8 = *(_QWORD *)(a2 + 80);
  }
  v10 = *(_WORD *)(v8 + 2);
  v11 = (_OWORD *)(v8 + 40);
  if ( v10 != *(_WORD *)(v8 + 42) )
  {
    switch ( v10 )
    {
      case 1:
        v12 = ConvertToInteger(v8 + 40, (__int64)v31);
        break;
      case 2:
        v12 = ConvertToString(v8 + 40, 0LL, v31);
        break;
      case 3:
        v12 = ConvertToBuffer(v8 + 40, v31);
        break;
      default:
LABEL_13:
        v11 = v31;
        v5 = 1;
        goto LABEL_14;
    }
    v6 = v12;
    if ( v12 >= 0 )
      goto LABEL_13;
  }
LABEL_14:
  v13 = *(_WORD *)(v8 + 2);
  if ( v13 == *((_WORD *)v11 + 1) )
  {
    v17 = *(_QWORD *)(a2 + 88);
    if ( v13 == 1 )
    {
      *(_WORD *)(v17 + 2) = 3;
      *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = IsCompatableDSDTRevision() ? 16 : 8;
    }
    else
    {
      *(_WORD *)(v17 + 2) = v13;
      *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = *((_DWORD *)v11 + 6) + *(_DWORD *)(v8 + 24);
      v18 = *(_QWORD *)(a2 + 88);
      if ( *(_WORD *)(v18 + 2) == 2 )
        --*(_DWORD *)(v18 + 24);
    }
    v19 = *(_QWORD *)(a2 + 88);
    v20 = 1381258056;
    if ( *(_WORD *)(v19 + 2) != 2 )
      v20 = 1179992648;
    v21 = HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, v20, *(_DWORD *)(v19 + 24));
    *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v21;
    if ( v21 )
    {
      v22 = *(_WORD *)(v8 + 2);
      if ( v22 == 1 )
      {
        v23 = IsCompatableDSDTRevision();
        v24 = *(_QWORD **)(*(_QWORD *)(a2 + 88) + 32LL);
        if ( v23 )
        {
          *v24 = *(_QWORD *)(v8 + 16);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) + 8LL) = *((_QWORD *)v11 + 2);
        }
        else
        {
          *(_DWORD *)v24 = *(_DWORD *)(v8 + 16);
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) + 4LL) = *((_DWORD *)v11 + 4);
        }
      }
      else
      {
        v25 = *(unsigned int *)(v8 + 24);
        v26 = *(const void **)(v8 + 32);
        v27 = v22 == 2;
        v28 = *(void **)(*(_QWORD *)(a2 + 88) + 32LL);
        if ( v27 )
        {
          memmove(v28, v26, (unsigned int)(v25 - 1));
          v29 = (void *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) - 1LL + *(unsigned int *)(v8 + 24));
        }
        else
        {
          memmove(v28, v26, v25);
          v29 = (void *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) + *(unsigned int *)(v8 + 24));
        }
        memmove(v29, *((const void **)v11 + 4), *((unsigned int *)v11 + 6));
      }
      if ( !v6 )
        v6 = WriteObject(a1, v9, *(_QWORD *)(a2 + 88));
    }
    else
    {
      v6 = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError((__int64)a1, -1073741670);
      PrintDebugMessage(27, 0LL, 0LL, 0LL, 0LL);
    }
  }
  else
  {
    v6 = -1072431095;
    LogError(-1072431095);
    AcpiDiagTraceAmlError((__int64)a1, -1072431095);
    ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(*(_QWORD *)(a2 + 80) + 42LL));
    v16 = (const void *)GetObjectTypeName(*(unsigned __int16 *)(v14 + 2));
    PrintDebugMessage(26, v16, ObjectTypeName, 0LL, 0LL);
  }
  if ( v5 )
    FreeDataBuffs((__int64)v31, 1u);
  return v6;
}
