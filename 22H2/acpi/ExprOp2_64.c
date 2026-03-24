/*
 * XREFs of ExprOp2_64 @ 0x1C0020F60
 * Callers:
 *     ExprOp2 @ 0x1C00212B0 (ExprOp2.c)
 * Callees:
 *     IsCompatableDSDTRevision @ 0x1C00022D4 (IsCompatableDSDTRevision.c)
 *     FreeDataBuffs @ 0x1C0003350 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C00033D0 (FreeObjData.c)
 *     FreeData @ 0x1C00036E8 (FreeData.c)
 *     ValidateArgTypes @ 0x1C0009F50 (ValidateArgTypes.c)
 *     DupObjData @ 0x1C000A400 (DupObjData.c)
 *     NewObjData @ 0x1C000A9E8 (NewObjData.c)
 *     MatchObjType @ 0x1C000ABEC (MatchObjType.c)
 *     WriteField @ 0x1C0022B30 (WriteField.c)
 *     CopyObjBuffer @ 0x1C0022C68 (CopyObjBuffer.c)
 *     PushFrame @ 0x1C0022DD8 (PushFrame.c)
 *     LogError @ 0x1C002A2EC (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B810 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C540 (PrintDebugMessage.c)
 *     memmove @ 0x1C00321C0 (memmove.c)
 *     GetObjectTypeName @ 0x1C0065458 (GetObjectTypeName.c)
 *     DumpObject @ 0x1C0067738 (DumpObject.c)
 */

__int64 __fastcall ExprOp2_64(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // edi
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rbp
  int v9; // r14d
  unsigned int v10; // r10d
  int v11; // ecx
  unsigned __int16 v12; // ax
  int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int16 v16; // ax
  struct _SLIST_ENTRY *v17; // r14
  unsigned int v18; // ebp
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int16 v21; // r10
  bool v22; // al
  size_t v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  int ObjectTypeName; // eax
  int v28; // r11d
  int v29; // r8d
  int v30; // ecx
  __int64 v31; // rcx
  __int64 v32; // rax
  unsigned __int64 v33; // rcx
  int v34; // edx
  int v35; // eax
  void *v36; // rax
  _QWORD *v37; // rcx
  _QWORD *v38; // rcx
  _DWORD *v39; // rsi
  int v40; // r15d
  _DWORD *v41; // rcx
  _DWORD *v42; // r12
  __int64 v43; // [rsp+68h] [rbp+10h] BYREF

  v3 = 0;
  v4 = 0LL;
  result = ValidateArgTypes(a1, a2[10], 0, "II");
  if ( (int)result >= 0 )
  {
    v8 = a2[10];
    v9 = 0;
    v10 = *(unsigned __int16 *)(v8 + 82);
    if ( (_WORD)v10 == 128 )
    {
      v4 = *(_QWORD *)(v8 + 96) + 64LL;
    }
    else if ( (_WORD)v10 == 129 )
    {
      v4 = *(_QWORD *)(v8 + 96);
    }
    else
    {
      if ( v10 > 0x10 || (v11 = 81921, !_bittest(&v11, v10)) )
      {
        v9 = -1072431094;
        LogError(3222536202LL);
        AcpiDiagTraceAmlError(a1, 3222536202LL);
        ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(v8 + 82));
        v29 = 0;
        v30 = 208;
        goto LABEL_65;
      }
      v4 = v8 + 80;
    }
    if ( (_WORD)v10 != 128 )
    {
LABEL_8:
      v12 = *(_WORD *)(v4 + 2);
      if ( v12 == 133 )
        goto LABEL_11;
      if ( !v12 )
        goto LABEL_10;
      if ( v12 <= 4u )
        goto LABEL_11;
      if ( v12 != 5 && v12 != 14 )
      {
LABEL_10:
        if ( !v12 )
        {
LABEL_11:
          if ( (*(_BYTE *)v4 & 1) != 0 )
          {
            v31 = *(_QWORD *)(v4 + 8);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v31 + 8), 0xFFFFFFFF) == 1
              && (*(_BYTE *)v31 & 8) != 0 )
            {
              FreeData(v31);
            }
          }
          else if ( *(_QWORD *)(v4 + 32) && *(int *)(v4 + 8) <= 0 )
          {
            if ( *(_WORD *)(v4 + 2) == 4 )
              FreeDataBuffs(*(_QWORD *)(v4 + 32) + 8LL, **(_DWORD **)(v4 + 32));
            FreeObjData(v4);
          }
          *(_OWORD *)v4 = 0LL;
          *(_OWORD *)(v4 + 16) = 0LL;
          *(_QWORD *)(v4 + 32) = 0LL;
        }
      }
LABEL_14:
      if ( v9 < 0 )
        return (unsigned int)v9;
      *(_WORD *)(a2[11] + 2LL) = 1;
      v13 = *(_DWORD *)(a2[7] + 8LL);
      if ( v13 == 123 )
      {
        v14 = *(_QWORD *)(a2[10] + 16LL) & *(_QWORD *)(a2[10] + 56LL);
LABEL_17:
        *(_QWORD *)(a2[11] + 16LL) = v14;
      }
      else
      {
        switch ( v13 )
        {
          case 114:
            v14 = *(_QWORD *)(a2[10] + 16LL) + *(_QWORD *)(a2[10] + 56LL);
            goto LABEL_17;
          case 116:
            v7 = *(_QWORD *)(a2[10] + 16LL) - *(_QWORD *)(a2[10] + 56LL);
            *(_QWORD *)(a2[11] + 16LL) = v7;
            break;
          case 119:
            v14 = *(_QWORD *)(a2[10] + 16LL) * *(_QWORD *)(a2[10] + 56LL);
            goto LABEL_17;
          case 121:
            v19 = a2[10];
            v20 = *(_QWORD *)(v19 + 56);
            if ( v20 >= 0x40 )
              v7 = 0LL;
            else
              v7 = *(_QWORD *)(v19 + 16) << v20;
            *(_QWORD *)(a2[11] + 16LL) = v7;
            break;
          case 122:
            v25 = a2[10];
            v26 = *(_QWORD *)(v25 + 56);
            if ( v26 >= 0x40 )
              v7 = 0LL;
            else
              v7 = *(_QWORD *)(v25 + 16) >> v26;
            *(_QWORD *)(a2[11] + 16LL) = v7;
            break;
          case 124:
            v14 = ~(*(_QWORD *)(a2[10] + 16LL) & *(_QWORD *)(a2[10] + 56LL));
            goto LABEL_17;
          case 125:
            v7 = *(_QWORD *)(a2[10] + 16LL) | *(_QWORD *)(a2[10] + 56LL);
            *(_QWORD *)(a2[11] + 16LL) = v7;
            break;
          case 126:
            v7 = ~(*(_QWORD *)(a2[10] + 16LL) | *(_QWORD *)(a2[10] + 56LL));
            *(_QWORD *)(a2[11] + 16LL) = v7;
            break;
          case 127:
            v7 = *(_QWORD *)(a2[10] + 16LL) ^ *(_QWORD *)(a2[10] + 56LL);
            *(_QWORD *)(a2[11] + 16LL) = v7;
            break;
          case 133:
            v32 = a2[10];
            v33 = *(_QWORD *)(v32 + 56);
            if ( v33 )
            {
              v7 = *(_QWORD *)(v32 + 16) % v33;
              *(_QWORD *)(a2[11] + 16LL) = v7;
            }
            else
            {
              *(_QWORD *)(a2[11] + 16LL) = 0LL;
            }
            break;
          default:
            break;
        }
      }
      v15 = a2[11];
      v43 = 0LL;
      while ( 1 )
      {
        while ( 1 )
        {
          v16 = *(_WORD *)(v4 + 2);
          if ( v16 != 128 )
            break;
          v4 = *(_QWORD *)(v4 + 16) + 64LL;
        }
        if ( v16 != 129 )
          break;
        v4 = *(_QWORD *)(v4 + 16);
      }
      if ( *(_WORD *)(v4 + 2) )
      {
        switch ( *(_WORD *)(v4 + 2) )
        {
          case 1:
            v22 = IsCompatableDSDTRevision();
            v23 = 4LL;
            if ( v22 )
              v23 = 8LL;
            v3 = CopyObjBuffer((void *)(v4 + 16), v23);
            break;
          case 2:
            v34 = *(_DWORD *)(v4 + 24);
            if ( v34 )
              v3 = CopyObjBuffer(*(void **)(v4 + 32), (unsigned int)(v34 - 1));
            else
              v3 = -1073741811;
            break;
          case 3:
            v3 = CopyObjBuffer(*(void **)(v4 + 32), *(unsigned int *)(v4 + 24));
            break;
          case 5:
            v3 = PushFrame(a1, 1430668097, 48, (unsigned int)AccFieldUnit, (__int64)&v43);
            if ( !v3 )
            {
              v24 = v43;
              *(_QWORD *)(v43 + 32) = v4;
              *(_QWORD *)(v24 + 40) = v15;
            }
            break;
          case 0xE:
            v3 = WriteField(a1, v4, *(_QWORD *)(v4 + 32) + 12LL, v15);
            break;
          case 0x10:
            if ( (gDebugger & 0x20000) != 0 )
              DumpObject(v15, v7, 0LL);
            break;
          default:
            LogError(3222536201LL);
            AcpiDiagTraceAmlError(a1, 3222536201LL);
            v35 = GetObjectTypeName(*(unsigned __int16 *)(v4 + 2));
            PrintDebugMessage(215, v35, 0, 0, 0LL);
            v3 = -1072431095;
            break;
        }
        return v3;
      }
      v17 = (struct _SLIST_ENTRY *)gpheapGlobal;
      v18 = 0;
      if ( v4 == v15 )
        return v18;
      *(_OWORD *)v4 = *(_OWORD *)v15;
      *(_OWORD *)(v4 + 16) = *(_OWORD *)(v15 + 16);
      *(_QWORD *)(v4 + 32) = *(_QWORD *)(v15 + 32);
      if ( !*(_QWORD *)(v15 + 32) )
        return v18;
      v36 = (void *)NewObjData(v17, v15);
      *(_QWORD *)(v4 + 32) = v36;
      if ( !v36 )
      {
        v18 = -1073741670;
        LogError(3221225626LL);
        AcpiDiagTraceAmlError(0LL, 3221225626LL);
        PrintDebugMessage(43, 0, 0, 0, 0LL);
        return v18;
      }
      memmove(v36, *(const void **)(v15 + 32), *(unsigned int *)(v15 + 24));
      switch ( *(_WORD *)(v4 + 2) )
      {
        case 4:
          v39 = *(_DWORD **)(v15 + 32);
          v40 = 0;
          v41 = *(_DWORD **)(v4 + 32);
          *v41 = *v39;
          if ( (int)*v39 > 0 )
          {
            v42 = v41 + 2;
            do
            {
              v18 = DupObjData(v17, (__int64)&v42[10 * v40], (__int64)&v39[10 * v40 + 2]);
              if ( v18 )
                break;
              ++v40;
            }
            while ( v40 < *v39 );
          }
          break;
        case 5:
          goto LABEL_97;
        case 0x82:
          v38 = *(_QWORD **)(v4 + 32);
          if ( (gdwfAMLI & 4) != 0 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(*v38 + 112LL));
            v38 = *(_QWORD **)(v4 + 32);
          }
          if ( (gdwfAMLI & 4) != 0 )
            _InterlockedIncrement((volatile signed __int32 *)(v38[1] + 112LL));
          break;
        case 0x83:
LABEL_97:
          if ( (gdwfAMLI & 4) != 0 )
            _InterlockedIncrement((volatile signed __int32 *)(**(_QWORD **)(v4 + 32) + 112LL));
          break;
        case 0x84:
          v37 = *(_QWORD **)(v4 + 32);
          if ( (gdwfAMLI & 4) != 0 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v37[1] + 112LL));
            v37 = *(_QWORD **)(v4 + 32);
          }
          if ( (gdwfAMLI & 4) != 0 )
            _InterlockedIncrement((volatile signed __int32 *)(*v37 + 112LL));
          break;
      }
      *(_WORD *)v4 &= ~1u;
      _InterlockedExchange((volatile __int32 *)(v4 + 8), 0);
      return v18;
    }
    if ( MatchObjType(*(unsigned __int16 *)(v4 + 2), 135) )
    {
      if ( v21 == 128 )
        goto LABEL_14;
      goto LABEL_8;
    }
    v9 = -1072431094;
    LogError(3222536202LL);
    AcpiDiagTraceAmlError(a1, 3222536202LL);
    GetObjectTypeName(135LL);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(v4 + 2));
    v29 = v28;
    v30 = 207;
LABEL_65:
    PrintDebugMessage(v30, ObjectTypeName, v29, 0, 0LL);
    goto LABEL_14;
  }
  return result;
}
