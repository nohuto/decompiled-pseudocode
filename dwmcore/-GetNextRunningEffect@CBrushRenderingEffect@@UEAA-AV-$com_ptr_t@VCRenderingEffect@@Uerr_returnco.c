/*
 * XREFs of ?GetNextRunningEffect@CBrushRenderingEffect@@UEAA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAVCRenderingEffect@@PEA_N@Z @ 0x1800B53B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@Z @ 0x1800B5814 (--0-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall CBrushRenderingEffect::GetNextRunningEffect(__int64 a1, _QWORD *a2, _QWORD *a3, _BYTE *a4)
{
  __int64 v9; // rax
  _QWORD *v10; // rdx
  unsigned int v11; // ebp
  unsigned int v12; // r14d
  _BYTE *v13; // r12
  __int64 v14; // r8
  _BYTE *v15; // r10
  _BYTE *v16; // r9
  char *v17; // r11
  float *v18; // rdx
  __int64 v19; // rax
  bool v20; // zf

  *a4 = 0;
  if ( (*(unsigned __int16 (__fastcall **)(_QWORD *))(*a3 + 72LL))(a3) == 3 )
  {
    if ( a3 != (_QWORD *)a1 )
    {
      v9 = *(_QWORD *)(a1 + 16);
      if ( v9 != a3[2] )
      {
LABEL_6:
        v10 = a3;
LABEL_7:
        wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(
          a2,
          v10);
        return a2;
      }
      v11 = *(_DWORD *)(v9 + 76);
      v12 = 0;
      if ( v11 )
      {
        v13 = (_BYTE *)(a1 + 260);
        v14 = a1 - (_QWORD)a3;
        v15 = (char *)a3 + 121;
        v16 = (_BYTE *)(a1 + 40);
        v17 = (char *)a3 - a1;
        v18 = (float *)(a3 + 17);
        while ( *(float *)((char *)v18 + v14 - 4) == *(v18 - 1)
             && *(float *)((char *)v18 + v14) == *v18
             && *(float *)((char *)v18 + v14 + 4) == v18[1]
             && *(float *)((char *)v18 + v14 + 8) == v18[2] )
        {
          v19 = *((_QWORD *)v16 - 2);
          v20 = v19
              ? v19 == *(_QWORD *)&v16[(_QWORD)v17 - 16]
              : *(_QWORD *)&v16[(_QWORD)v17 - 8 + v14] == *(_QWORD *)&v16[(_QWORD)v17 - 8];
          if ( !v20
            || *v16 != v16[(_QWORD)v17]
            || v15[v14 - 1] != *(v15 - 1)
            || v15[v14] != *v15
            || v15[v14 + 1] != v15[1]
            || *v13 != v17[(_QWORD)v13] )
          {
            break;
          }
          ++v12;
          v15 += 3;
          v18 += 8;
          v16 += 24;
          ++v13;
          if ( v12 >= v11 )
            goto LABEL_8;
        }
        goto LABEL_6;
      }
    }
LABEL_8:
    *a4 = 1;
    v10 = (_QWORD *)a1;
    goto LABEL_7;
  }
  *a2 = a3;
  (*(void (__fastcall **)(_QWORD *))*a3)(a3);
  return a2;
}
