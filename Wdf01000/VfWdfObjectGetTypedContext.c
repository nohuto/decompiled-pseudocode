char *__fastcall VfWdfObjectGetTypedContext(void *Handle, const _WDF_OBJECT_CONTEXT_TYPE_INFO *TypeInfo)
{
  FxObject *ObjectFromHandle; // rax
  __int64 v4; // r11
  FxObject *v5; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  __int64 v7; // rcx
  __int64 m_ObjectSize; // rax
  char *v9; // rax
  const char *_a1; // rcx
  ULONG_PTR retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int16 offset; // [rsp+50h] [rbp+8h] BYREF

  offset = 0;
  ObjectFromHandle = FxObject::_GetObjectFromHandle((unsigned __int64)Handle, &offset);
  v5 = ObjectFromHandle;
  m_Globals = ObjectFromHandle->m_Globals;
  if ( !v7 )
    FxVerifierNullBugCheck(ObjectFromHandle->m_Globals, retaddr);
  if ( !v4 )
    FxVerifierNullBugCheck(ObjectFromHandle->m_Globals, retaddr);
  m_ObjectSize = ObjectFromHandle->m_ObjectSize;
  if ( (_WORD)m_ObjectSize && (v9 = (char *)v5 + m_ObjectSize) != 0LL )
  {
    while ( *((_QWORD *)v9 + 4) != v4 )
    {
      v9 = (char *)*((_QWORD *)v9 + 1);
      if ( !v9 )
        goto LABEL_9;
    }
    return v9 + 48;
  }
  else
  {
LABEL_9:
    _a1 = "<no typename given>";
    if ( *(_QWORD *)(v4 + 8) )
      _a1 = *(const char **)(v4 + 8);
    WPP_IFR_SF_sq(m_Globals, 3u, 0x12u, 0xAu, WPP_Verifier_cpp_Traceguids, _a1, Handle);
    return 0LL;
  }
}
