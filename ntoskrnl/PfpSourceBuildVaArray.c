/*
 * XREFs of PfpSourceBuildVaArray @ 0x14097BD58
 * Callers:
 *     PfpPrefetchPrivatePages @ 0x14097B268 (PfpPrefetchPrivatePages.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpSourceBuildVaArray(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rbp
  unsigned int v3; // ebx
  PVOID *v6; // rdi
  __int64 Pool2; // rax
  unsigned int v8; // eax
  unsigned int v9; // r8d
  _QWORD *i; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx

  v2 = *(unsigned int *)(a1 + 24);
  v3 = 0;
  if ( (_DWORD)v2 )
  {
    v6 = (PVOID *)(a2 + 2);
    if ( a2[1] < (unsigned int)v2 )
    {
      if ( *v6 )
      {
        ExFreePoolWithTag(*v6, 0);
        *v6 = 0LL;
        a2[1] = 0;
      }
      if ( (unsigned __int64)(16 * v2) > 0xFFFFFFFF )
        return (unsigned int)-1073741675;
      Pool2 = ExAllocatePool2(64LL, (unsigned int)(16 * v2), 1096181328LL);
      *v6 = (PVOID)Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      a2[1] = v2;
    }
    v8 = *(_DWORD *)(a1 + 24);
    v9 = 0;
    for ( i = *v6; v9 < v8; v8 = *(_DWORD *)(a1 + 24) )
    {
      v11 = v9++;
      v12 = *(_QWORD *)(a1 + 32) + 16 * v11;
      *i = *(_QWORD *)v12;
      i += 2;
      *(i - 1) = *(unsigned int *)(v12 + 8);
    }
    *a2 = v8;
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v3;
}
