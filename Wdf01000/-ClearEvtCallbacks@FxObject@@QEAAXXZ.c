void __fastcall FxObject::ClearEvtCallbacks(FxObject *this)
{
  __int64 m_ObjectSize; // rax
  _QWORD *i; // rax

  m_ObjectSize = this->m_ObjectSize;
  if ( (_WORD)m_ObjectSize )
  {
    for ( i = (FxObject_vtbl **)((char *)&this->__vftable + m_ObjectSize); i; i = (_QWORD *)i[1] )
    {
      i[3] = 0LL;
      i[2] = 0LL;
    }
  }
  this->m_ObjectFlags &= ~0x400u;
}
