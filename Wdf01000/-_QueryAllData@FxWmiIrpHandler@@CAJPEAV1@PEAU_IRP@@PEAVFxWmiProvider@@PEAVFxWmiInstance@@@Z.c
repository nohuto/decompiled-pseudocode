__int64 __fastcall FxWmiIrpHandler::_QueryAllData(
        FxWmiIrpHandler *This,
        _IRP *Irp,
        FxWmiProvider *Provider,
        FxWmiInstance *Instance)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  unsigned int _a3; // edi
  bool v8; // cf
  int v9; // ebx
  __int64 _a2; // r12
  unsigned __int8 v11; // r8
  unsigned __int8 FxVerboseOn; // al
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *v14; // r10
  const void *ObjectHandleUnchecked; // rax
  const _GUID *traceGuid; // rdx
  _FX_DRIVER_GLOBALS *v17; // r10
  _NAMED_PIPE_CREATE_PARAMETERS *v18; // r10
  unsigned int v19; // eax
  unsigned int v20; // ebp
  unsigned int LowPart; // r12d
  unsigned int v22; // r12d
  __int64 v23; // r11
  unsigned int *p_OutboundQuota; // rsi
  unsigned int m_MinInstanceBufferSize; // r9d
  unsigned __int64 v26; // rdx
  unsigned int v27; // eax
  FxWmiInstance *InstanceReferenced; // rax
  unsigned int v29; // r8d
  const void *v30; // rax
  int v31; // edx
  unsigned int *v32; // rax
  int v33; // eax
  signed int v34; // edx
  const void *v35; // rax
  int v36; // edx
  const void *v37; // rax
  unsigned __int8 v38; // dl
  int v39; // r8d
  unsigned int *v40; // rax
  const void *v41; // rax
  const void *v42; // rax
  int v43; // r8d
  const void *v44; // rax
  _FX_DRIVER_GLOBALS *v45; // r10
  const void *v46; // rax
  const _GUID *v47; // rdx
  char v49; // [rsp+50h] [rbp-68h]
  unsigned __int8 irql[3]; // [rsp+51h] [rbp-67h] BYREF
  unsigned int m_NumInstances; // [rsp+54h] [rbp-64h]
  unsigned int tmpSize; // [rsp+58h] [rbp-60h] BYREF
  unsigned int v53; // [rsp+5Ch] [rbp-5Ch]
  unsigned int v54; // [rsp+60h] [rbp-58h]
  __int64 v55; // [rsp+68h] [rbp-50h]
  unsigned int *v56; // [rsp+70h] [rbp-48h]
  unsigned int *v57; // [rsp+78h] [rbp-40h]
  FxObject *v58; // [rsp+80h] [rbp-38h]
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // [rsp+88h] [rbp-30h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  _a3 = 0;
  v54 = 0;
  irql[0] = 0;
  v49 = 0;
  v8 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart < 0x48;
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  if ( v8 )
  {
    v9 = -1073741823;
    return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v9, _a3);
  }
  FxNonPagedObject::Lock(This, irql, (unsigned __int8)Provider);
  m_NumInstances = Provider->m_NumInstances;
  _a2 = m_NumInstances;
  FxNonPagedObject::Unlock(This, irql[0], v11);
  FxVerboseOn = This->m_Globals->FxVerboseOn;
  if ( !(_DWORD)_a2 )
  {
    v9 = -1073741162;
    if ( FxVerboseOn )
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(Provider);
      WPP_IFR_SF_qd(v14, 5u, 0xCu, 0xFu, WPP_FxWmiIrpHandler_cpp_Traceguids, _a1, -1073741162);
    }
    return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v9, _a3);
  }
  if ( FxVerboseOn )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(Provider);
    WPP_IFR_SF_qd(v17, 5u, 0xCu, 0x10u, traceGuid, ObjectHandleUnchecked, _a2);
  }
  v18 = Parameters;
  v19 = 8 * _a2;
  Parameters[1].ReadMode &= ~0x10u;
  v18[1].MaximumInstances = _a2;
  if ( (unsigned __int64)(8 * _a2) > 0xFFFFFFFF
    || v19 >= 0xFFFFFFC4
    || (v20 = (v19 + 75) & 0xFFFFFFF0, v9 = 0, v20 < v19 + 60) )
  {
    v9 = -1073741675;
    v46 = (const void *)FxObject::GetObjectHandleUnchecked(Provider);
    WPP_IFR_SF_dqd(This->m_Globals, 2u, 0xCu, 0x11u, v47, _a2, v46, -1073741675);
    return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v9, _a3);
  }
  v18[1].CompletionMode = v20;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( v20 > LowPart )
  {
    p_OutboundQuota = 0LL;
    v49 = 1;
    v23 = 0LL;
    v9 = -1073741789;
    v22 = 0;
  }
  else
  {
    v22 = LowPart - v20;
    v23 = (__int64)v18 + v20;
    p_OutboundQuota = &v18[1].OutboundQuota;
  }
  m_MinInstanceBufferSize = Provider->m_MinInstanceBufferSize;
  v55 = v23;
  v56 = p_OutboundQuota;
  if ( m_MinInstanceBufferSize )
  {
    v26 = (m_NumInstances - 1) * (unsigned __int64)((m_MinInstanceBufferSize + 15) & 0xFFFFFFF0);
    if ( v26 > 0xFFFFFFFF
      || (v55 = v23, v56 = p_OutboundQuota, m_MinInstanceBufferSize + (unsigned int)v26 < (unsigned int)v26) )
    {
      v9 = -1073741675;
      return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v9, _a3);
    }
    v9 = 0;
    if ( v22 < m_MinInstanceBufferSize + (unsigned int)v26 )
    {
      _a3 = m_MinInstanceBufferSize + v26;
      v9 = -1073741789;
      return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v9, _a3);
    }
  }
  v27 = 0;
  v53 = 0;
  if ( m_NumInstances )
  {
    v57 = p_OutboundQuota;
    do
    {
      InstanceReferenced = FxWmiProvider::GetInstanceReferenced(Provider, v27, Irp);
      v58 = InstanceReferenced;
      if ( !InstanceReferenced )
        break;
      if ( InstanceReferenced->IsQueryInstanceSupported(InstanceReferenced) )
      {
        tmpSize = 0;
        v9 = ((__int64 (__fastcall *)(FxObject *, _QWORD, __int64, unsigned int *))v58->__vftable[1].~FxObject)(
               v58,
               v22,
               v55,
               &tmpSize);
        if ( (int)(v9 + 0x80000000) < 0 || v9 == -1073741789 )
        {
          v29 = (tmpSize + 15) & 0xFFFFFFF0;
          if ( v29 >= tmpSize )
          {
            v54 = v29 - tmpSize;
            if ( v9 < 0 || v49 )
            {
              v49 = 1;
            }
            else
            {
              v32 = v57;
              v57[1] = tmpSize;
              *v32 = v20;
              v55 += v29;
            }
            v33 = -1;
            if ( v29 > v22 )
            {
              if ( v22 + v20 >= v20 )
                v33 = v22 + v20;
              v34 = v22 + v20 < v20 ? 0xC0000095 : 0;
              v22 = 0;
            }
            else
            {
              v22 -= v29;
              if ( v29 + v20 >= v20 )
                v33 = v29 + v20;
              v34 = v29 + v20 < v20 ? 0xC0000095 : 0;
            }
            v20 = v33;
            if ( v34 >= 0 )
            {
              if ( v29 + _a3 < _a3 )
              {
                _a3 = -1;
                v9 = -1073741675;
                v37 = (const void *)FxObject::GetObjectHandleUnchecked(Provider);
                WPP_IFR_SF_qddd(
                  This->m_Globals,
                  v38,
                  0xCu,
                  0x14u,
                  WPP_FxWmiIrpHandler_cpp_Traceguids,
                  v37,
                  -1,
                  v39,
                  -1073741675);
              }
              else
              {
                _a3 += v29;
              }
            }
            else
            {
              v9 = v34;
              v35 = (const void *)FxObject::GetObjectHandleUnchecked(Provider);
              WPP_IFR_SF_qd(This->m_Globals, 2u, 0xCu, 0x13u, WPP_FxWmiIrpHandler_cpp_Traceguids, v35, v36);
            }
          }
          else
          {
            v9 = -1073741675;
            v30 = (const void *)FxObject::GetObjectHandleUnchecked(v58);
            WPP_IFR_SF_qdd(This->m_Globals, 2u, 0xCu, 0x12u, WPP_FxWmiIrpHandler_cpp_Traceguids, v30, v31, 0xC0000095);
          }
        }
      }
      else if ( v56 )
      {
        v40 = v57;
        v57[1] = 0;
        *v40 = v20;
      }
      v58->Release(v58, Irp, 1178, "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiirphandler.cpp");
      if ( (int)(v9 + 0x80000000) >= 0 && v9 != -1073741789 )
        goto LABEL_54;
      v57 += 2;
      v27 = v53 + 1;
      v53 = v27;
    }
    while ( v27 < m_NumInstances );
    v18 = Parameters;
  }
  if ( v9 != -1073741789 )
  {
    if ( v9 < 0 )
    {
LABEL_54:
      v41 = (const void *)FxObject::GetObjectHandleUnchecked(Provider);
      WPP_IFR_SF_qd(This->m_Globals, 2u, 0xCu, 0x16u, WPP_FxWmiIrpHandler_cpp_Traceguids, v41, v9);
      _a3 = 0;
      goto LABEL_56;
    }
    if ( !v49 )
    {
      _a3 = v20 - v54 - v18[1].CompletionMode;
      goto LABEL_56;
    }
  }
  _a3 -= v54;
  v9 = -1073741789;
  v42 = (const void *)FxObject::GetObjectHandleUnchecked(Provider);
  WPP_IFR_SF_qdd(This->m_Globals, 4u, 0xCu, 0x15u, WPP_FxWmiIrpHandler_cpp_Traceguids, v42, v43, _a3);
LABEL_56:
  if ( This->m_Globals->FxVerboseOn )
  {
    v44 = (const void *)FxObject::GetObjectHandleUnchecked(Provider);
    WPP_IFR_SF_qdd(v45, 5u, 0xCu, 0x17u, WPP_FxWmiIrpHandler_cpp_Traceguids, v44, v9, _a3);
  }
  return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v9, _a3);
}
