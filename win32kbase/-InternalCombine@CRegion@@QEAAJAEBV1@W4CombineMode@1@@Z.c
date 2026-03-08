/*
 * XREFs of ?InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C003E878
 * Callers:
 *     ?Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z @ 0x1C003E860 (-Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z.c)
 * Callees:
 *     ?vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ @ 0x1C001CA1C (-vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C003E764 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     RGNCOREOBJ::bMerge__lambda_4f08034d680f118a0a3da8ec85dc396d___ @ 0x1C0042368 (RGNCOREOBJ--bMerge__lambda_4f08034d680f118a0a3da8ec85dc396d___.c)
 *     ??0RGNCOREMEMOBJ@@QEAA@K@Z @ 0x1C00A8764 (--0RGNCOREMEMOBJ@@QEAA@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ?bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z @ 0x1C019A510 (-bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z.c)
 */

__int64 __fastcall CRegion::InternalCombine(CRegion *a1, __int64 a2, int a3)
{
  _DWORD *v4; // rdi
  int v5; // ecx
  unsigned int v6; // ebx
  int v7; // r14d
  void *v9; // rbx
  __int64 v10; // rax
  int v11; // r9d
  PVOID v12; // rax
  int v14[2]; // [rsp+30h] [rbp-10h] BYREF
  PVOID v15; // [rsp+70h] [rbp+30h] BYREF
  void *v16; // [rsp+88h] [rbp+48h] BYREF

  v4 = (_DWORD *)(a2 + 12);
  v5 = *((_DWORD *)a1 + 3);
  v6 = 0;
  v7 = a3;
  if ( v5 == 2 && *v4 == 2 )
    goto LABEL_6;
  if ( !*v4 )
  {
    if ( a3 != 5 )
      goto LABEL_6;
    goto LABEL_26;
  }
  if ( *v4 == 1 )
  {
    switch ( a3 )
    {
      case 1:
        goto LABEL_6;
      case 2:
LABEL_22:
        (*(void (__fastcall **)(CRegion *))(*(_QWORD *)a1 + 32LL))(a1);
        goto LABEL_6;
      case 3:
        return (unsigned int)-2147020579;
    }
    if ( a3 != 4 )
    {
      if ( a3 != 5 )
        return (unsigned int)-1073741811;
      goto LABEL_22;
    }
LABEL_26:
    (*(void (__fastcall **)(CRegion *))(*(_QWORD *)a1 + 16LL))(a1);
    goto LABEL_6;
  }
  if ( !v5 )
    goto LABEL_5;
  if ( v5 != 1 )
    return (unsigned int)-1073741595;
  if ( a3 != 1 )
  {
    if ( a3 == 2 )
      goto LABEL_6;
    if ( a3 != 3 && a3 != 4 )
    {
      if ( a3 != 5 )
        return (unsigned int)-1073741811;
      goto LABEL_35;
    }
    return (unsigned int)-2147020579;
  }
LABEL_35:
  v7 = 5;
LABEL_5:
  v6 = CRegion::InitializeFromRect(a1, (struct _RECTL *)&CRegion::sc_rcEmpty);
  if ( (v6 & 0x80000000) != 0 )
    return v6;
LABEL_6:
  if ( *((_DWORD *)a1 + 3) != 2 || *v4 != 2 )
    return v6;
  v9 = (void *)*((_QWORD *)a1 + 2);
  v10 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)v14 = v10;
  v16 = v9;
  if ( !v9 || !v10 || (unsigned int)(v7 - 1) > 4 )
    return (unsigned int)-1073741811;
  if ( v7 == 5 )
  {
    if ( RGNCOREOBJ::bCopy((RGNCOREOBJ *)&v16, (const struct RGNCOREOBJ *)v14) )
    {
      v6 = 0;
      *((_QWORD *)a1 + 2) = v16;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    RGNCOREMEMOBJ::RGNCOREMEMOBJ((RGNCOREMEMOBJ *)&v15, 0x70u);
    if ( v15 )
    {
      LOBYTE(v11) = byte_1C028B390[v7];
      if ( (unsigned __int8)RGNCOREOBJ::bMerge__lambda_4f08034d680f118a0a3da8ec85dc396d___(
                              (int)&v15,
                              (int)&v16,
                              (int)v14,
                              v11,
                              (struct RGNCOREOBJ *)&v15) )
      {
        v12 = v15;
        v15 = v9;
        v6 = 0;
        *((_QWORD *)a1 + 2) = v12;
      }
      else
      {
        v6 = -1073741823;
      }
    }
    else
    {
      v6 = -1073741801;
    }
    RGNCOREOBJ::vDeleteRGNCOREOBJ(&v15);
  }
  return v6;
}
