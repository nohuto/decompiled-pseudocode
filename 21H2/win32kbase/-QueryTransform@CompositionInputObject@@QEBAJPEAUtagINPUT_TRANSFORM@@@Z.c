/*
 * XREFs of ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0095DA0
 * Callers:
 *     NtQueryCompositionInputQueueAndTransform @ 0x1C0095C00 (NtQueryCompositionInputQueueAndTransform.c)
 *     ?GetTransformFromInputSink@@YAJPEAXPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0144DE8 (-GetTransformFromInputSink@@YAJPEAXPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?GetTransform@CDesktopInputSink@@SA_NPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01E46A0 (-GetTransform@CDesktopInputSink@@SA_NPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?GetInputRectFromInputSinkInScreenSpace@CPalmRejectZoneInfo@@AEAA?AUtagRECT@@PEBUCompositionInputObject@@U2@@Z @ 0x1C01E5C58 (-GetInputRectFromInputSinkInScreenSpace@CPalmRejectZoneInfo@@AEAA-AUtagRECT@@PEBUCompositionInpu.c)
 *     ?GetTransform@InputObjectMap@@SAJAEBU_LUID@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x1C023D544 (-GetTransform@InputObjectMap@@SAJAEBU_LUID@@PEAUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C0096060 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z @ 0x1C0096200 (-LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z.c)
 */

__int64 __fastcall CompositionInputObject::QueryTransform(CompositionInputObject *this, struct tagINPUT_TRANSFORM *a2)
{
  int v3; // ebx
  CInputSink *v4; // rcx
  CInputSink *v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  v3 = CompositionInputObject::LockForRead(this, &v6);
  if ( v3 >= 0 )
  {
    v4 = v6;
    *(_OWORD *)a2 = *(_OWORD *)((char *)v6 + 88);
    *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)v4 + 104);
    *((_OWORD *)a2 + 2) = *(_OWORD *)((char *)v4 + 120);
    *((_OWORD *)a2 + 3) = *(_OWORD *)((char *)v4 + 136);
    CInputSink::UnlockAndRelease(v4);
  }
  return (unsigned int)v3;
}
