__int64 __fastcall ProcessorMsiSupported(__int64 *a1, _BYTE *a2)
{
  unsigned __int8 v3; // di
  __int64 v4; // rbx
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v6; // rdx
  struct _PROCESSOR_NUMBER v8; // [rsp+30h] [rbp+8h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  v4 = *a1;
  v8 = (struct _PROCESSOR_NUMBER)*((unsigned __int16 *)a1 + 4);
  *a2 = 1;
  while ( v4 )
  {
    if ( _bittest64(&v4, v3) )
    {
      v8.Number = v3;
      ProcNumber = v8;
      ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
      if ( ProcessorIndexFromNumber == -1
        || ProcessorIndexFromNumber >= ProcessorInstanceCount
        || (_mm_lfence(), (v6 = *((_QWORD *)ProcessorByNtNumber + ProcessorIndexFromNumber)) == 0)
        || (*(_DWORD *)(v6 + 76) & 1) == 0 )
      {
        *a2 = 0;
        return 0LL;
      }
    }
    v4 &= ~(1LL << v3++);
  }
  return 0LL;
}
