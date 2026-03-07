__int64 __fastcall FxWmiInstanceExternal::QueryInstance(
        FxWmiInstanceExternal *this,
        unsigned int OutBufferSize,
        void *OutBuffer,
        unsigned int *BufferUsed)
{
  char *v4; // rdi
  unsigned int v7; // esi
  const void *_a2; // rax
  int _a3; // edx
  int _a4; // r10d
  __int64 m_ObjectSize; // rax
  unsigned int v12; // ebp
  unsigned __int8 *v13; // r15
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(unsigned __int64, _QWORD, unsigned __int8 *, unsigned int *); // r10
  const void *v16; // rax
  int v17; // edx
  const void *v18; // rax
  int v19; // edx
  FxWmiProvider *m_Provider; // rcx
  const void *v21; // rax
  const void *v22; // rdx
  unsigned int v23; // r8d
  unsigned __int16 v24; // r9
  const void *ObjectHandleUnchecked; // rax
  const _GUID *_a1; // [rsp+20h] [rbp-58h]
  unsigned __int8 dummy[16]; // [rsp+50h] [rbp-28h] BYREF

  v4 = 0LL;
  if ( this->m_UseContextForQuery )
  {
    *BufferUsed = this->m_ContextLength;
    if ( OutBufferSize >= this->m_ContextLength )
    {
      m_ObjectSize = this->m_ObjectSize;
      v7 = 0;
      if ( (_WORD)m_ObjectSize )
        v4 = (char *)this + m_ObjectSize;
      memmove(OutBuffer, v4 + 48, this->m_ContextLength);
    }
    else
    {
      v7 = -1073741789;
      _a2 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qddd(this->m_Globals, _a3, 0x12u, 0x12u, WPP_FxWmiInstance_cpp_Traceguids, _a2, _a3, _a4, -1073741789);
    }
    return v7;
  }
  if ( !this->m_QueryInstanceCallback.m_Method )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qq(
      this->m_Globals,
      2u,
      0xCu,
      0x17u,
      WPP_FxWmiInstance_cpp_Traceguids,
      ObjectHandleUnchecked,
      this->m_ExecuteMethodCallback.m_Method);
    v7 = 0;
    goto LABEL_23;
  }
  dummy[0] = 0;
  v12 = 1;
  v13 = dummy;
  if ( OutBufferSize )
  {
    v12 = OutBufferSize;
    v13 = (unsigned __int8 *)OutBuffer;
  }
  v14 = FxObject::GetObjectHandleUnchecked(this);
  v7 = v15(v14, v12, v13, BufferUsed);
  if ( v7 == 259 )
  {
    v16 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x13u, WPP_FxWmiInstance_cpp_Traceguids, v16, v17);
LABEL_12:
    FxVerifierDbgBreakPoint(this->m_Globals);
    v7 = -1073741823;
LABEL_23:
    *BufferUsed = 0;
    return v7;
  }
  if ( (v7 & 0x80000000) != 0 )
  {
    if ( v7 == -1073741789 )
    {
      m_Provider = this->m_Provider;
      if ( m_Provider->m_MinInstanceBufferSize )
      {
        FxObject::GetObjectHandleUnchecked(m_Provider);
        v21 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_qddq(this->m_Globals, (unsigned __int8)v22, v23, v24, _a1, v21, -1073741789, v23, v22);
        WPP_IFR_SF_(this->m_Globals, 2u, 0xCu, 0x16u, WPP_FxWmiInstance_cpp_Traceguids);
        FxVerifierDbgBreakPoint(this->m_Globals);
      }
    }
  }
  else
  {
    if ( *BufferUsed > v12 )
    {
      v18 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qddd(this->m_Globals, v19, 0xCu, 0x14u, WPP_FxWmiInstance_cpp_Traceguids, v18, v12, v19, v7);
      goto LABEL_12;
    }
    if ( v13 == dummy && *BufferUsed )
      return (unsigned int)-1073741789;
  }
  return v7;
}
