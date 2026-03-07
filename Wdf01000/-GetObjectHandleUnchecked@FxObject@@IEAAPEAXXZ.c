unsigned __int64 __fastcall FxObject::GetObjectHandleUnchecked(FxObject *this)
{
  if ( this->m_ObjectSize )
    return (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    return 0LL;
}
