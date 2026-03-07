char *__fastcall FxObjectGetTypedContext(FxObject *Object, const _WDF_OBJECT_CONTEXT_TYPE_INFO *TypeInfo)
{
  __int64 m_ObjectSize; // rax
  char *v3; // rax
  const char *ContextName; // rax
  const char *_a1; // rdx

  m_ObjectSize = Object->m_ObjectSize;
  if ( (_WORD)m_ObjectSize && (v3 = (char *)Object + m_ObjectSize) != 0LL )
  {
    while ( *((const _WDF_OBJECT_CONTEXT_TYPE_INFO **)v3 + 4) != TypeInfo )
    {
      v3 = (char *)*((_QWORD *)v3 + 1);
      if ( !v3 )
        goto LABEL_5;
    }
    return v3 + 48;
  }
  else
  {
LABEL_5:
    ContextName = TypeInfo->ContextName;
    _a1 = "<no typename given>";
    if ( ContextName )
      _a1 = ContextName;
    WPP_IFR_SF_sq(Object->m_Globals, 3u, 0xBu, 0xDu, WPP_HandleAPI_cpp_Traceguids, _a1, Object);
    return 0LL;
  }
}
