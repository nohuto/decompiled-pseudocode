/*
 * XREFs of ?Uninitialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x1801943B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B028 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??R?$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecognizerHandler@@@Z @ 0x18007ACD0 (--R-$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecogni.c)
 */

void __fastcall MPCGamepadProcessor::Uninitialize3DComponents(MPCGamepadProcessor *this)
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // rdx
  __int64 (__fastcall ***v3)(_QWORD, __int64); // rdx
  _QWORD *v4; // rdi
  std::_Ref_count_base *v5; // rcx

  v1 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 640);
  *((_QWORD *)this + 640) = 0LL;
  if ( v1 )
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()((__int64)this, v1);
  v3 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 641);
  *((_QWORD *)this + 641) = 0LL;
  if ( v3 )
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()((__int64)this, v3);
  v4 = (_QWORD *)*((_QWORD *)this + 642);
  *((_QWORD *)this + 642) = 0LL;
  if ( v4 )
  {
    v5 = (std::_Ref_count_base *)v4[3];
    if ( v5 )
      std::_Ref_count_base::_Decref(v5);
    operator delete(v4, (const struct std::nothrow_t *)0x20);
  }
  MPCInputProviderBase::Uninitialize3DComponents(this);
}
