/*
 * XREFs of RtlCopySidAndAttributesArray @ 0x1405DC280
 * Callers:
 *     SepCreateTokenEx @ 0x140201AA0 (SepCreateTokenEx.c)
 *     CmpBuildAdminInformation @ 0x1405D9BE0 (CmpBuildAdminInformation.c)
 *     SepFilterToken @ 0x1405DB0FC (SepFilterToken.c)
 *     SepCopyTokenAccessInformation @ 0x1405DBD68 (SepCopyTokenAccessInformation.c)
 *     SeQueryInformationToken @ 0x140656BD0 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140657DF0 (NtQueryInformationToken.c)
 * Callees:
 *     memmove @ 0x140413F40 (memmove.c)
 */

__int64 __fastcall RtlCopySidAndAttributesArray(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        char *a5,
        _QWORD *a6,
        unsigned int *a7)
{
  unsigned int v8; // r15d
  _DWORD *v11; // rdi
  __int64 v12; // r14
  unsigned int v13; // ebp
  unsigned __int8 *v14; // rdx
  unsigned int v15; // eax

  v8 = 0;
  if ( a1 )
  {
    v11 = (_DWORD *)(a4 + 8);
    v12 = a2 - a4;
    while ( 1 )
    {
      v13 = 4 * *(unsigned __int8 *)(*(_QWORD *)((char *)v11 + v12 - 8) + 1LL) + 8;
      if ( v13 > a3 )
        return 3221225507LL;
      *((_QWORD *)v11 - 1) = a5;
      a3 -= v13;
      *v11 = *(_DWORD *)((char *)v11 + v12);
      v14 = *(unsigned __int8 **)((char *)v11 + v12 - 8);
      v15 = 4 * v14[1] + 8;
      if ( v15 <= v13 )
        memmove(a5, v14, v15);
      ++v8;
      a5 += v13;
      v11 += 4;
      if ( v8 >= a1 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    *a6 = a5;
    *a7 = a3;
    return 0LL;
  }
}
