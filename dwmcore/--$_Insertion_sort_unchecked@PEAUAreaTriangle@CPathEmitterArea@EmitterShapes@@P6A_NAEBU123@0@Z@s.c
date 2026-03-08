/*
 * XREFs of ??$_Insertion_sort_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@QEAU123@0P6A_NAEBU123@1@Z@Z @ 0x1802654F0
 * Callers:
 *     ??$_Sort_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAXPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@0_JP6A_NAEBU123@2@Z@Z @ 0x180265DA8 (--$_Sort_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAXPEA.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char *__fastcall std::_Insertion_sort_unchecked<EmitterShapes::CPathEmitterArea::AreaTriangle *,bool (*)(EmitterShapes::CPathEmitterArea::AreaTriangle const &,EmitterShapes::CPathEmitterArea::AreaTriangle const &)>(
        char *Src,
        char *a2,
        unsigned __int8 (__fastcall *a3)(__int128 *, char *))
{
  char *v6; // r15
  char *i; // rbx
  char *v8; // rbp
  int v9; // eax
  __int64 v10; // xmm1_8
  int v11; // eax
  __int64 v12; // xmm1_8
  char *j; // r14
  int v14; // eax
  __int64 v15; // xmm1_8
  __int128 v17; // [rsp+20h] [rbp-58h] BYREF
  __int64 v18; // [rsp+30h] [rbp-48h]
  int v19; // [rsp+38h] [rbp-40h]

  if ( Src != a2 )
  {
    v6 = Src + 28;
    for ( i = Src + 28; i != a2; i += 28 )
    {
      v8 = i;
      v9 = *((_DWORD *)i + 6);
      v10 = *((_QWORD *)i + 2);
      v17 = *(_OWORD *)i;
      v19 = v9;
      v18 = v10;
      if ( a3(&v17, Src) )
      {
        memmove_0(v6, Src, i - Src);
        v11 = v19;
        v12 = v18;
        *(_OWORD *)Src = v17;
        *((_QWORD *)Src + 2) = v12;
        *((_DWORD *)Src + 6) = v11;
      }
      else
      {
        for ( j = i; ; v8 = j )
        {
          j -= 28;
          if ( !a3(&v17, j) )
            break;
          *(_OWORD *)v8 = *(_OWORD *)j;
          *((_QWORD *)v8 + 2) = *((_QWORD *)j + 2);
          *((_DWORD *)v8 + 6) = *((_DWORD *)j + 6);
        }
        v14 = v19;
        v15 = v18;
        *(_OWORD *)v8 = v17;
        *((_QWORD *)v8 + 2) = v15;
        *((_DWORD *)v8 + 6) = v14;
      }
    }
  }
  return a2;
}
