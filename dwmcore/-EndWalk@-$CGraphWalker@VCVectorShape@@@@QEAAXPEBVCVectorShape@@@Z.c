/*
 * XREFs of ?EndWalk@?$CGraphWalker@VCVectorShape@@@@QEAAXPEBVCVectorShape@@@Z @ 0x1800D8E6C
 * Callers:
 *     ??$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingContext@@@Z @ 0x1800D89A0 (--$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingCo.c)
 * Callees:
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18004891C (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

void __fastcall CGraphWalker<CVectorShape>::EndWalk(__int64 a1, void *a2)
{
  int v2; // edi
  int v4; // eax
  __int64 v5; // rsi
  int v6; // eax
  __int64 v7; // rcx
  void *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v2 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  v4 = *(_DWORD *)(a1 + 40);
  if ( v4 == 10 )
  {
    v5 = 64LL;
    if ( *(_DWORD *)(a1 + 56) > 0x40u )
      v5 = *(unsigned int *)(a1 + 56);
    if ( (unsigned __int64)(3 * v5) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0, -2147024362, 0x106u, 0LL);
    }
    else if ( (unsigned int)(3 * v5) <= *(_DWORD *)(a1 + 36) )
    {
      v8 = 0LL;
      v6 = HrMalloc(0x10uLL, (unsigned int)v5, &v8);
      if ( v6 >= 0 )
      {
        operator delete(*(void **)(a1 + 48));
        *(_QWORD *)(a1 + 48) = v8;
        *(_DWORD *)(a1 + 36) = v5;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x116u, 0LL);
      }
    }
    *(_DWORD *)(a1 + 56) = 0;
  }
  else
  {
    v2 = v4 + 1;
  }
  *(_DWORD *)(a1 + 40) = v2;
}
