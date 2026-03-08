/*
 * XREFs of ??$_Insertion_sort_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAPEAUInstance_Pos4_QRot_ColorDW_Size2@@QEAU1@0P6A_NAEBU1@1@Z@Z @ 0x180204940
 * Callers:
 *     ??$_Sort_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos4_QRot_ColorDW_Size2@@0_JP6A_NAEBU1@2@Z@Z @ 0x18020525C (--$_Sort_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos.c)
 * Callees:
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char *__fastcall std::_Insertion_sort_unchecked<Instance_Pos4_QRot_ColorDW_Size2 *,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
        char *Src,
        char *a2,
        unsigned __int8 (__fastcall *a3)(__int128 *, char *))
{
  char *v6; // r15
  char *i; // rbx
  char *v8; // rbp
  __int128 v9; // xmm1
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  char *j; // r14
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v16; // [rsp+20h] [rbp-48h] BYREF
  __int128 v17; // [rsp+30h] [rbp-38h]
  __int128 v18; // [rsp+40h] [rbp-28h]

  if ( Src != a2 )
  {
    v6 = Src + 48;
    for ( i = Src + 48; i != a2; i += 48 )
    {
      v8 = i;
      v9 = *((_OWORD *)i + 1);
      v16 = *(_OWORD *)i;
      v18 = *((_OWORD *)i + 2);
      v17 = v9;
      if ( a3(&v16, Src) )
      {
        memmove_0(v6, Src, i - Src);
        v10 = v17;
        *(_OWORD *)Src = v16;
        v11 = v18;
        *((_OWORD *)Src + 1) = v10;
        *((_OWORD *)Src + 2) = v11;
      }
      else
      {
        for ( j = i; ; v8 = j )
        {
          j -= 48;
          if ( !a3(&v16, j) )
            break;
          *(_OWORD *)v8 = *(_OWORD *)j;
          *((_OWORD *)v8 + 1) = *((_OWORD *)j + 1);
          *((_OWORD *)v8 + 2) = *((_OWORD *)j + 2);
        }
        v13 = v17;
        *(_OWORD *)v8 = v16;
        v14 = v18;
        *((_OWORD *)v8 + 1) = v13;
        *((_OWORD *)v8 + 2) = v14;
      }
    }
  }
  return a2;
}
