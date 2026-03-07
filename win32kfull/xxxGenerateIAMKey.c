__int64 __fastcall xxxGenerateIAMKey(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  v1 = a1 + 264;
  if ( (unsigned int)SystemPrng(&v3, 8LL) )
  {
    result = v3;
    *(_QWORD *)(v1 + 8) = v3;
LABEL_3:
    *(_DWORD *)v1 = 1;
    return result;
  }
  result = xxxCallGenerateIAMKey((struct tagIAM_KKEY *)v1);
  if ( (int)result >= 0 )
    goto LABEL_3;
  return result;
}
