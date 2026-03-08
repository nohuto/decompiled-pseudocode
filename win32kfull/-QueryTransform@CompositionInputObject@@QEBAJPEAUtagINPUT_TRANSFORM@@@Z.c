/*
 * XREFs of ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0007B18
 * Callers:
 *     ?GetTransform@InputTransform@@YAHPEBUtagWND@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0007A70 (-GetTransform@InputTransform@@YAHPEBUtagWND@@PEAUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CompositionInputObject::QueryTransform(CompositionInputObject *this, struct tagINPUT_TRANSFORM *a2)
{
  int v3; // ebx
  const struct CInputSink *v4; // rcx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  const struct CInputSink *v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  v3 = CompositionInputObject::LockForRead(this, &v9);
  if ( v3 >= 0 )
  {
    v4 = v9;
    v5 = *(_OWORD *)((char *)v9 + 104);
    *(_OWORD *)a2 = *(_OWORD *)((char *)v9 + 88);
    v6 = *(_OWORD *)((char *)v4 + 120);
    *((_OWORD *)a2 + 1) = v5;
    v7 = *(_OWORD *)((char *)v4 + 136);
    *((_OWORD *)a2 + 2) = v6;
    *((_OWORD *)a2 + 3) = v7;
    CInputSink::UnlockAndRelease(v4);
  }
  return (unsigned int)v3;
}
