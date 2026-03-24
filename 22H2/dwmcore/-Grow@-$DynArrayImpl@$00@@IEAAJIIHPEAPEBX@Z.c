/*
 * XREFs of ?Grow@?$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z @ 0x180036960
 * Callers:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800368F8 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x1800D9908 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     ?ProcessSetCreationParams@CCompositionCubeMap@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONCUBEMAP_SETCREATIONPARAMS@@@Z @ 0x1801B9270 (-ProcessSetCreationParams@CCompositionCubeMap@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIO.c)
 * Callees:
 *     ?HrAlloc@@YAJ_KPEAPEAX@Z @ 0x1800373B8 (-HrAlloc@@YAJ_KPEAPEAX@Z.c)
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x18004610C (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x1800E7F5C (memset_0.c)
 *     memcpy_0 @ 0x1800F400B (memcpy_0.c)
 */

__int64 __fastcall DynArrayImpl<1>::Grow(__int64 a1, unsigned int a2, int a3, int a4, unsigned __int64 *a5)
{
  unsigned int v5; // eax
  __int64 v7; // rdi
  unsigned int v9; // ebp
  unsigned int v10; // r9d
  unsigned int v11; // ebx
  unsigned __int64 v12; // r8
  unsigned int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // edx
  int v17; // eax
  unsigned int v18; // ecx
  int v19; // ecx
  char *v20; // rsi
  char *v22; // rax
  unsigned int v23; // ecx
  unsigned __int64 v24; // rdx
  unsigned int v25; // [rsp+20h] [rbp-28h]
  void *v26; // [rsp+50h] [rbp+8h] BYREF

  v5 = *(_DWORD *)(a1 + 24);
  v26 = 0LL;
  v7 = a1;
  v9 = v5 + a3;
  if ( v5 + a3 < v5 )
  {
    v25 = 213;
LABEL_33:
    v11 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024362, v25, 0LL);
    return v11;
  }
  v10 = *(_DWORD *)(a1 + 20);
  v11 = 0;
  if ( v9 <= v10 )
    return v11;
  v12 = a2 * (unsigned __int64)v9;
  if ( v12 > 0xFFFFFFFF )
  {
    v25 = 222;
    goto LABEL_33;
  }
  if ( !a4 )
  {
    v14 = 16;
    v15 = 8092;
    v16 = v9 - v10;
    if ( v10 > 0x10 )
      v14 = v10;
    if ( v14 < 0x1F9C )
      v15 = v14;
    if ( v16 <= v15 )
      v16 = v15;
    LODWORD(a1) = v16 + v10;
    if ( v16 + v10 >= v10 && a2 * (unsigned __int64)(unsigned int)a1 <= 0xFFFFFFFF )
    {
      v9 = v16 + v10;
      LODWORD(v12) = a2 * a1;
    }
  }
  if ( v9 > 0xFFFFFFFF / a2 )
  {
    v25 = 248;
    goto LABEL_33;
  }
  if ( *(_QWORD *)v7 == *(_QWORD *)(v7 + 8) )
  {
    v17 = HrAlloc((unsigned int)v12, &v26);
    v11 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xFFu, 0LL);
      return v11;
    }
    v19 = *(_DWORD *)(v7 + 24);
    v20 = (char *)v26;
    if ( v19 )
      memcpy_0(v26, *(const void **)v7, a2 * v19);
  }
  else
  {
    v22 = (char *)DefaultHeap::Realloc(*(void **)v7, (unsigned int)v12);
    v20 = v22;
    if ( !v22 )
    {
      v11 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, -2147024882, 0x111u, 0LL);
      return v11;
    }
    if ( v22 != *(char **)v7 )
    {
      if ( a5 )
      {
        v24 = *a5;
        if ( *a5 >= *(_QWORD *)v7 && v24 < *(_QWORD *)v7 + (unsigned __int64)(a2 * *(_DWORD *)(v7 + 20)) )
          *a5 = (unsigned __int64)&v22[v24 - *(_QWORD *)v7];
      }
    }
  }
  memset_0(&v20[a2 * *(_DWORD *)(v7 + 20)], 0, a2 * (v9 - *(_DWORD *)(v7 + 20)));
  *(_DWORD *)(v7 + 20) = v9;
  *(_QWORD *)v7 = v20;
  return v11;
}
