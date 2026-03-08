/*
 * XREFs of IopGetEnvironmentVariableTrEE @ 0x14094DED0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     IopIssueTrEERequest @ 0x140559560 (IopIssueTrEERequest.c)
 *     IopEfiStatusToNTSTATUS @ 0x14094D674 (IopEfiStatusToNTSTATUS.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopGetEnvironmentVariableTrEE(
        __int64 a1,
        __int64 a2,
        _WORD *a3,
        _OWORD *a4,
        void *a5,
        _DWORD *a6,
        _DWORD *a7)
{
  __int64 v9; // rax
  unsigned int v12; // esi
  unsigned int v13; // edi
  __int64 Pool2; // rax
  _OWORD *v15; // rbp
  int v16; // edi
  unsigned int v17; // r14d
  __int64 v18; // rbx
  size_t v19; // r8
  int v21[4]; // [rsp+50h] [rbp-38h] BYREF

  v21[0] = 0;
  v9 = -1LL;
  do
    ++v9;
  while ( a3[v9] );
  v12 = 2 * v9 + 2;
  v13 = 2 * v9 + 18;
  Pool2 = ExAllocatePool2(256LL, v13, 2035511113LL);
  v15 = (_OWORD *)Pool2;
  if ( Pool2 )
  {
    memmove((void *)(Pool2 + 16), a3, v12);
    *v15 = *a4;
    v17 = *a6 + 24;
    v18 = ExAllocatePool2(256LL, v17, 2035511113LL);
    if ( v18 )
    {
      v16 = IopIssueTrEERequest(0, a1, a2, (__int64)v15, v13, v18, v17, 0x18u, v21);
      if ( v16 >= 0 )
      {
        if ( *(_QWORD *)v18 )
        {
          if ( *(_QWORD *)v18 == 0x8000000000000005uLL )
          {
            v16 = -1073741789;
            *a6 = *(_DWORD *)(v18 + 16);
          }
          else
          {
            *a6 = 0;
            v16 = IopEfiStatusToNTSTATUS(*(_QWORD *)v18);
          }
        }
        else
        {
          if ( a7 )
            *a7 = *(_DWORD *)(v18 + 8);
          v19 = (unsigned int)*a6;
          if ( v19 >= *(_QWORD *)(v18 + 16) )
            v19 = *(_QWORD *)(v18 + 16);
          memmove(a5, (const void *)(v18 + 24), v19);
          *a6 = *(_DWORD *)(v18 + 16);
        }
      }
      else
      {
        *a6 = 0;
      }
    }
    else
    {
      v16 = -1073741670;
    }
    ExFreePoolWithTag(v15, 0);
    if ( v18 )
      ExFreePoolWithTag((PVOID)v18, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v16;
}
