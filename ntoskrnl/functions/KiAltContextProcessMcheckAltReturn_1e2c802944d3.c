_UNKNOWN **__fastcall KiAltContextProcessMcheckAltReturn(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  __int64 v3; // r9
  __int64 v5; // rdi
  char v6; // si
  unsigned int v7; // edx
  int v8; // r14d
  __int64 v9; // r8
  unsigned int *v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // r8
  __int64 v13; // r9
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = *(_QWORD *)(a2 + 32);
  v5 = 0LL;
  v6 = *(_BYTE *)(a2 + 24) & 0x10;
  v7 = 0;
  v8 = -1073741823;
  v9 = *(unsigned __int16 *)(v3 + 10);
  v10 = (unsigned int *)(v3 + 128);
  if ( *(_WORD *)(v3 + 10) )
  {
    while ( 1 )
    {
      result = (_UNKNOWN **)(*((_QWORD *)v10 + 2) - *(_QWORD *)&XPF_MCA_SECTION_GUID.Data1);
      if ( !result )
        result = (_UNKNOWN **)(*((_QWORD *)v10 + 3) - *(_QWORD *)XPF_MCA_SECTION_GUID.Data4);
      if ( !result )
        break;
      v10 += 18;
      if ( ++v7 >= (unsigned int)v9 )
        goto LABEL_12;
    }
    v5 = v3 + *v10;
  }
  if ( v7 < (unsigned int)v9 )
  {
    LOBYTE(v3) = v6;
    v11 = *(_QWORD *)(v5 + 48) >> 12;
    LOBYTE(v9) = 1;
    result = (_UNKNOWN **)WheaAttemptPhysicalPageOffline(v11, 0LL, v9, v3);
    v8 = (int)result;
    if ( !(_DWORD)result || !v6 )
    {
      LOBYTE(v13) = v6;
      result = (_UNKNOWN **)WheaExecuteRowFailureCheck(v11, *(_QWORD *)(v5 + 48), v12, v13);
    }
  }
LABEL_12:
  *(_DWORD *)(a2 + 40) = v8;
  _InterlockedDecrement((volatile signed __int32 *)(a2 + 16));
  return result;
}
