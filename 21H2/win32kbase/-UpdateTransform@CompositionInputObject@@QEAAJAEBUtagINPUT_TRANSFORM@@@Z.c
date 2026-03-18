/*
 * XREFs of ?UpdateTransform@CompositionInputObject@@QEAAJAEBUtagINPUT_TRANSFORM@@@Z @ 0x1C0095FF0
 * Callers:
 *     NtUpdateInputSinkTransforms @ 0x1C0095E60 (NtUpdateInputSinkTransforms.c)
 * Callees:
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C0096060 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?LockForWrite@CompositionInputObject@@QEAAJPEAPEAVCInputSink@@@Z @ 0x1C00960F0 (-LockForWrite@CompositionInputObject@@QEAAJPEAPEAVCInputSink@@@Z.c)
 */

__int64 __fastcall CompositionInputObject::UpdateTransform(
        CompositionInputObject *this,
        const struct tagINPUT_TRANSFORM *a2)
{
  int v3; // ebx
  CInputSink *v4; // rcx
  CInputSink *v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  v3 = CompositionInputObject::LockForWrite(this, &v6);
  if ( v3 >= 0 )
  {
    v4 = v6;
    *(_OWORD *)((char *)v6 + 88) = *(_OWORD *)a2;
    *(_OWORD *)((char *)v4 + 104) = *((_OWORD *)a2 + 1);
    *(_OWORD *)((char *)v4 + 120) = *((_OWORD *)a2 + 2);
    *(_OWORD *)((char *)v4 + 136) = *((_OWORD *)a2 + 3);
    CInputSink::UnlockAndRelease(v4);
  }
  return (unsigned int)v3;
}
