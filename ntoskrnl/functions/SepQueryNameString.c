__int64 __fastcall SepQueryNameString(char *a1, PVOID *a2)
{
  int v4; // eax
  int v5; // ebx
  __int64 Pool2; // rax
  unsigned int v8; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v8 = 0;
  v4 = ObQueryNameStringMode(a1, 0LL, 0, &v8, 0);
  v5 = v4;
  if ( v4 == -1073741820 || v4 == -1073741789 )
  {
    Pool2 = ExAllocatePool2(256LL, v8, 1850697043LL);
    *a2 = (PVOID)Pool2;
    if ( Pool2 )
    {
      v5 = ObQueryNameStringMode(a1, Pool2, v8, &v8, 0);
      if ( v5 < 0 || !*(_WORD *)*a2 )
      {
        ExFreePoolWithTag(*a2, 0);
        *a2 = 0LL;
        if ( v5 >= 0
          && (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a1 - 48) >> 8)] == PsProcessType )
        {
          PsGetAllocatedFullProcessImageNameEx(a1, a2);
        }
        return 0;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v5;
}
