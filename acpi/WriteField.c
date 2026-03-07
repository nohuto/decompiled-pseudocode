__int64 __fastcall WriteField(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned int v5; // r14d
  __int64 v8; // r12
  unsigned int v9; // ebx
  __int64 ObjectTypeName; // rdx
  int v11; // ecx
  int v12; // esi
  __int64 v13; // r15
  bool v14; // al
  __int64 v15; // rax
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF

  v4 = a4;
  v5 = (unsigned int)(*(_DWORD *)(a3 + 8) + 7) >> 3;
  v8 = a1;
  if ( (*(_DWORD *)(a3 + 12) & 0xFu) > 4 )
  {
    if ( *(_WORD *)(a2 + 2) != 5 )
    {
      v9 = -1072431087;
      LogError(-1072431087);
      AcpiDiagTraceAmlError(v8, -1072431087);
      ObjectTypeName = *(unsigned int *)(a3 + 12);
      v11 = 213;
      goto LABEL_18;
    }
    return (unsigned int)RawFieldAccess(a1, 1u, a2, a4);
  }
  v17 = 0LL;
  if ( *(_WORD *)(a4 + 2) == 1 )
  {
    v12 = 8;
    v13 = a4 + 16;
    if ( v5 < 8 )
      v12 = v5;
  }
  else
  {
    if ( *(_WORD *)(a4 + 2) == 2 )
    {
      v12 = *(_DWORD *)(a4 + 24) - 1;
    }
    else
    {
      if ( *(_WORD *)(a4 + 2) != 3 )
      {
        v9 = -1072431095;
        LogError(-1072431095);
        AcpiDiagTraceAmlError(v8, -1072431095);
        ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(v4 + 2));
        v11 = 214;
LABEL_18:
        PrintDebugMessage(v11, (const void *)ObjectTypeName, 0LL, 0LL, 0LL);
        return v9;
      }
      v12 = *(_DWORD *)(a4 + 24);
    }
    v13 = *(_QWORD *)(a4 + 32);
  }
  v14 = SupportsOnlyRawAccess(a2);
  a1 = v8;
  if ( v14 )
  {
    a4 = v4;
    return (unsigned int)RawFieldAccess(a1, 1u, a2, a4);
  }
  v9 = PushFrame(v8, 1279677015, 64, (unsigned int)WriteFieldLoop, (__int64)&v17);
  if ( !v9 )
  {
    v15 = v17;
    *(_QWORD *)(v17 + 32) = a2;
    *(_QWORD *)(v15 + 40) = a3;
    *(_QWORD *)(v15 + 48) = v13;
    *(_DWORD *)(v15 + 56) = v12;
    *(_DWORD *)(v15 + 60) = v5;
  }
  return v9;
}
