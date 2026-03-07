PMDL __fastcall IovAllocateMdl(unsigned __int64 a1, ULONG a2, BOOLEAN a3, BOOLEAN a4, IRP *a5, __int64 a6)
{
  PMDL result; // rax
  __int16 v10; // r14
  unsigned __int64 v11; // rbx
  _QWORD **MdlAddress; // r8
  _QWORD *i; // rdx
  __int64 v14; // [rsp+40h] [rbp-28h] BYREF
  int v15; // [rsp+48h] [rbp-20h]
  int v16; // [rsp+4Ch] [rbp-1Ch]

  v16 = 0;
  if ( (VfRuleClasses & 1) == 0 )
    return IoAllocateMdl((PVOID)a1, a2, a3, a4, a5);
  v10 = a1;
  v14 = 1LL;
  v15 = 32;
  v11 = ((a1 & 0xFFF) + a2 + 4095LL) >> 12;
  result = (PMDL)VfHandlePoolAlloc(NonPagedPool, LowPoolPriority, (__int64)&v14, 1, a6);
  if ( result )
  {
    result->Next = 0LL;
    result->Size = 8 * (v11 + 6);
    result->MdlFlags = 0;
    result->StartVa = (PVOID)(a1 & 0xFFFFFFFFFFFFF000uLL);
    result->ByteOffset = v10 & 0xFFF;
    result->ByteCount = a2;
    if ( a5 )
    {
      if ( a3 )
      {
        MdlAddress = (_QWORD **)a5->MdlAddress;
        for ( i = *MdlAddress; i; i = (_QWORD *)*i )
          MdlAddress = (_QWORD **)i;
        *MdlAddress = &result->Next;
      }
      else
      {
        a5->MdlAddress = result;
      }
    }
  }
  return result;
}
