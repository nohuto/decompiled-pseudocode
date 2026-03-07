__int64 __fastcall SdbpGetStringTableItemFromStringRef(
        union _RTL_RUN_ONCE *Parameter,
        int a2,
        _DWORD *a3,
        union _RTL_RUN_ONCE **a4)
{
  union _RTL_RUN_ONCE *v4; // rbx
  int v9; // ebp
  union _RTL_RUN_ONCE *Ptr; // r14
  NTSTATUS v11; // edi
  int v12; // eax
  bool v13; // sf
  int v14; // eax
  unsigned int v15; // edi
  __int64 result; // rax
  int *v17; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0LL;
  v9 = 0;
  Ptr = 0LL;
  v17 = 0LL;
  if ( LODWORD(Parameter[2].Ptr) )
  {
    if ( !Parameter[330].Value )
    {
      AslLogCallPrintf(1LL);
      v11 = -1073741275;
      goto LABEL_8;
    }
    Ptr = (union _RTL_RUN_ONCE *)Parameter[330].Ptr;
    v12 = 6;
  }
  else
  {
    v11 = RtlRunOnceExecuteOnce(
            Parameter + 328,
            (PRTL_RUN_ONCE_INIT_FN)InitOnceGetStringTableOffset,
            Parameter,
            (PVOID *)&v17);
    if ( v11 < 0 )
    {
      AslLogCallPrintf(1LL);
      goto LABEL_8;
    }
    if ( !v17 || (v12 = *v17) == 0 )
    {
      AslLogCallPrintf(1LL);
      v11 = -1073741271;
      goto LABEL_8;
    }
    Ptr = Parameter;
  }
  v9 = v12 + a2;
  if ( (unsigned __int16)SdbGetTagFromTagID((__int64)Ptr, v12 + a2) == 0x8801 )
  {
    v11 = 0;
  }
  else
  {
    AslLogCallPrintf(1LL);
    v11 = -1073741788;
  }
LABEL_8:
  v13 = v11 < 0;
  v14 = 0;
  v15 = ~v11;
  if ( !v13 )
  {
    v14 = v9;
    v4 = Ptr;
  }
  *a3 = v14;
  result = v15 >> 31;
  *a4 = v4;
  return result;
}
