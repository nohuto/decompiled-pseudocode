HRGN __fastcall GreHRGNFromRegionCore(struct RGNCOREOBJ *a1)
{
  HRGN result; // rax
  __int64 v2; // rdi
  HRGN v4; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  result = *(HRGN *)a1;
  v2 = 0LL;
  if ( *(_QWORD *)a1 )
  {
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v5, *(_DWORD *)result);
    if ( v5 )
    {
      v6 = v5 + 24;
      RGNCOREOBJ::vCopy((RGNCOREOBJ *)&v6, a1);
      v4 = RGNOBJ::hrgnAssociate((RGNOBJ *)&v5);
      if ( v4 )
        RGNCOREOBJ::vDeleteRGNCOREOBJ(a1);
      return v4;
    }
    return (HRGN)v2;
  }
  return result;
}
