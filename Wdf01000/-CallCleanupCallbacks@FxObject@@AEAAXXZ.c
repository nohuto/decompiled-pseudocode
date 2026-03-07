void __fastcall FxObject::CallCleanupCallbacks(FxObject *this)
{
  unsigned __int64 ObjectHandleUnchecked; // rsi
  char *i; // rbx
  void (__fastcall *v4)(unsigned __int64); // rax

  if ( (this->m_ObjectFlags & 8) != 0 )
  {
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
    if ( this->m_ObjectSize )
    {
      for ( i = (char *)this + this->m_ObjectSize; i; i = (char *)*((_QWORD *)i + 1) )
      {
        v4 = (void (__fastcall *)(unsigned __int64))*((_QWORD *)i + 2);
        if ( v4 )
        {
          v4(ObjectHandleUnchecked);
          *((_QWORD *)i + 2) = 0LL;
        }
      }
    }
    this->m_ObjectFlags &= ~0x400u;
  }
}
