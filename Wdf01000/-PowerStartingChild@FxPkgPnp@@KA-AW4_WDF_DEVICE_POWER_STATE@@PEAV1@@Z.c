__int64 __fastcall FxPkgPnp::PowerStartingChild(FxPkgPnp *This)
{
  FxPkgPnp_vtbl *v1; // rax
  __int64 v3; // rdx
  const void *_a1; // rax
  __int64 _a2; // r8
  int _a3; // r10d
  unsigned __int8 waitForParentOn; // [rsp+50h] [rbp+8h] BYREF

  v1 = This->__vftable;
  waitForParentOn = 0;
  if ( v1->PowerCheckParentOverload(This, &waitForParentOn) >= 0 )
    return waitForParentOn != 0 ? 873 : 783;
  FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(*(FxObject **)(*(_QWORD *)(v3 + 224) + 96LL));
  WPP_IFR_SF_qid(This->m_Globals, 2u, 0xCu, 0x14u, WPP_PowerStateMachine_cpp_Traceguids, _a1, _a2, _a3);
  return 837LL;
}
