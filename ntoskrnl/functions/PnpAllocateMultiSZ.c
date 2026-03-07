__int64 __fastcall PnpAllocateMultiSZ(void *Src, __int64 a2, __int64 a3, _QWORD *a4)
{
  NTSTATUS MultiSzLength; // ebx
  ULONGLONG v7; // rdi
  void *Pool2; // rax
  __int64 v9; // rdi
  __int64 v10; // rcx
  ULONGLONG pullResult; // [rsp+40h] [rbp+8h] BYREF
  ULONGLONG ullMultiplicand; // [rsp+58h] [rbp+20h] BYREF

  ullMultiplicand = 0LL;
  pullResult = 0LL;
  MultiSzLength = 0;
  *a4 = 0LL;
  if ( Src )
  {
    MultiSzLength = PnpGetMultiSzLength(Src, a2, &ullMultiplicand);
    if ( MultiSzLength >= 0 )
    {
      v7 = ullMultiplicand;
      if ( ullMultiplicand > 2 )
      {
        MultiSzLength = RtlULongLongMult(ullMultiplicand, 2uLL, &pullResult);
        if ( MultiSzLength >= 0 )
        {
          Pool2 = (void *)ExAllocatePool2(256LL, pullResult, 1466986064LL);
          *a4 = Pool2;
          if ( Pool2 )
          {
            memmove(Pool2, Src, pullResult);
            v9 = 2 * v7;
            v10 = 2LL;
            do
            {
              v9 -= 2LL;
              *(_WORD *)(v9 + *a4) = 0;
              --v10;
            }
            while ( v10 );
          }
          else
          {
            return (unsigned int)-1073741670;
          }
        }
      }
    }
  }
  return (unsigned int)MultiSzLength;
}
