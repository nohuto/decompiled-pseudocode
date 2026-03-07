__int64 __fastcall KiTpWriteBreakpoint(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // si
  _BYTE *v5; // rdi
  __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  int *v9; // r9
  int v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = a2;
  if ( *(_BYTE *)(a1 + 50) || !VslVsmEnabled )
    goto LABEL_12;
  v5 = (_BYTE *)(a1 + 49);
  if ( !(_BYTE)a2 || *v5 )
    a2 = 0LL;
  else
    LOBYTE(a2) = 1;
  LOBYTE(a3) = v3;
  result = MmWriteSystemImageTracepoint(*(_QWORD *)(a1 + 8), a2, a3);
  if ( !*v5 && (int)result >= 0 )
  {
    *v5 = 1;
    return result;
  }
  if ( (_DWORD)result == -1073741637 || (_DWORD)result == -1073741667 )
  {
LABEL_12:
    v7 = *(_QWORD *)(a1 + 8);
    LOBYTE(a2) = *(_BYTE *)(a1 + 50);
    v8 = *(_QWORD *)(a1 + 16);
    if ( v3 )
    {
      v10 = 204;
      v9 = &v10;
    }
    else
    {
      v9 = (int *)(a1 + 51);
    }
    return KiTpWriteMemory(v8, a2, v7, v9);
  }
  return result;
}
