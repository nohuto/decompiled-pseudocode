__int64 __fastcall SeCaptureUnicodeStringStructures(ULONGLONG a1, unsigned int a2, char a3, _QWORD *a4)
{
  _OWORD *Pool2; // r10
  NTSTATUS v8; // ebx
  ULONGLONG v9; // r15
  __int64 i; // rax
  ULONGLONG pullResult; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v13; // [rsp+68h] [rbp+20h]

  v13 = a4;
  Pool2 = 0LL;
  pullResult = 0LL;
  *a4 = 0LL;
  if ( !a1 && a2 )
    goto LABEL_21;
  if ( !a1 )
    goto LABEL_23;
  if ( !a2 )
  {
LABEL_21:
    v8 = -1073741811;
    goto LABEL_17;
  }
  if ( !a3 )
  {
    *a4 = a1;
LABEL_23:
    v8 = 0;
    goto LABEL_17;
  }
  v8 = RtlULongLongMult(0x10uLL, a2, &pullResult);
  if ( v8 >= 0 )
  {
    v9 = pullResult;
    Pool2 = (_OWORD *)ExAllocatePool2(256LL, pullResult, 1934976339LL);
    if ( Pool2 )
    {
      if ( v9 )
      {
        if ( (a1 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v9 + a1 > 0x7FFFFFFF0000LL || v9 + a1 < a1 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      for ( i = 0LL; (unsigned int)i < a2; i = (unsigned int)(i + 1) )
        Pool2[i] = *(_OWORD *)(a1 + 16 * i);
      *a4 = Pool2;
      Pool2 = 0LL;
    }
    else
    {
      v8 = -1073741670;
    }
  }
LABEL_17:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v8;
}
