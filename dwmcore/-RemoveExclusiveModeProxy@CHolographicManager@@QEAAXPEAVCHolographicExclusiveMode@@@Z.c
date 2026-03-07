void __fastcall CHolographicManager::RemoveExclusiveModeProxy(
        CHolographicManager *this,
        struct CHolographicExclusiveMode *a2)
{
  char *v2; // rdi
  struct CHolographicExclusiveMode **i; // rbx
  char v4; // [rsp+50h] [rbp+8h] BYREF

  v2 = (char *)this + 80;
  for ( i = (struct CHolographicExclusiveMode **)*((_QWORD *)this + 10);
        i != *((struct CHolographicExclusiveMode ***)this + 11);
        ++i )
  {
    if ( *i == a2 )
    {
      if ( *((_QWORD *)this + 6) )
      {
        if ( *((_BYTE *)this + 240) )
          CHolographicInteropTaskQueue::PostMessageW(
            *((CHolographicInteropTaskQueue **)this + 6),
            0x1Eu,
            (struct IUnknown *)(((unsigned __int64)a2 + 64) & -(__int64)(a2 != 0LL)),
            0LL,
            0LL,
            0LL,
            0LL);
      }
      std::vector<wil::com_ptr_t<CHolographicExclusiveMode,wil::err_returncode_policy>>::erase(v2, &v4, i);
      return;
    }
  }
}
