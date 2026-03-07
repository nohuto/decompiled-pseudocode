__int64 __fastcall ExAllocatePoolSanityChecks(int a1, ULONG_PTR a2, _DWORD *a3, __int64 a4)
{
  __int64 v5; // rbx
  ULONG_PTR v6; // r8
  unsigned int v8; // ecx
  unsigned int v9; // edx
  __int64 result; // rax
  ULONG_PTR v11; // rdx

  v5 = a1;
  v6 = (unsigned int)*a3;
  if ( (_DWORD)v6 )
  {
    if ( (_DWORD)v6 == 541542722 )
    {
      if ( (MmVerifierData & 1) != 0 )
        VerifierBugCheckIfAppropriate(0xC2u, 0x9CuLL, a1 & 0xFFFFFFFFFFFFFF7FuLL, a2, a4);
      *a3 = 828662082;
    }
    else
    {
      v8 = 0;
      while ( 1 )
      {
        v9 = (unsigned int)v6 >> v8;
        if ( (unsigned __int8)(((unsigned int)v6 >> v8) - 97) <= 0x19u )
          LOBYTE(v9) = v9 - 32;
        if ( (unsigned __int8)(v9 - 48) <= 9u || (unsigned __int8)(v9 - 65) <= 0x19u )
          break;
        v8 += 8;
        if ( v8 >= 0x20 )
        {
          if ( (MmVerifierData & 1) != 0 )
            VerifierBugCheckIfAppropriate(0xC2u, 0x9DuLL, v6, v5 & 0xFFFFFFFFFFFFFF7FuLL, a4);
          *a3 = 845439298;
          break;
        }
      }
    }
  }
  else
  {
    if ( (MmVerifierData & 1) != 0 )
      VerifierBugCheckIfAppropriate(0xC2u, 0x9BuLL, a1 & 0xFFFFFFFFFFFFFF7FuLL, a2, a4);
    *a3 = 811884866;
  }
  if ( !a2 && (MmVerifierData & 1) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0LL, KeGetCurrentIrql(), v5 & 0xFFFFFFFFFFFFFF7FuLL, 0LL);
  result = KeGetCurrentIrql();
  if ( (v5 & 1) != 0 )
  {
    if ( (unsigned __int8)result > 1u )
    {
      result = (unsigned int)MmVerifierData;
      if ( (MmVerifierData & 1) != 0 )
      {
        v11 = 1LL;
        return VerifierBugCheckIfAppropriate(0xC4u, v11, KeGetCurrentIrql(), v5 & 0xFFFFFFFFFFFFFF7FuLL, a2);
      }
    }
  }
  else
  {
    v11 = 2LL;
    if ( (unsigned __int8)result > 2u )
    {
      result = (unsigned int)MmVerifierData;
      if ( (MmVerifierData & 1) != 0 )
        return VerifierBugCheckIfAppropriate(0xC4u, v11, KeGetCurrentIrql(), v5 & 0xFFFFFFFFFFFFFF7FuLL, a2);
    }
  }
  return result;
}
