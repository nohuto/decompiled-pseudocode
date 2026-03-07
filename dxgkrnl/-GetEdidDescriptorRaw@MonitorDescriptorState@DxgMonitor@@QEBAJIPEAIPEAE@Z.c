__int64 __fastcall DxgMonitor::MonitorDescriptorState::GetEdidDescriptorRaw(
        DxgMonitor::MonitorDescriptorState *this,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int8 *a4)
{
  unsigned int v4; // esi
  __int64 v8; // rcx
  void *v9; // rbp
  unsigned int v10; // eax
  void *Src; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  if ( !a3 || !a4 || !a2 )
    return 3221225485LL;
  v8 = *((_QWORD *)this + 16);
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v8 + 232LL))(v8, &Src);
    v9 = Src;
    if ( Src )
    {
      v10 = *a3;
      if ( a2 < *a3 )
      {
        *a3 = a2;
        v4 = -2147483643;
        v10 = a2;
      }
      memmove(a4, v9, v10);
    }
    else
    {
      v4 = -1073741801;
    }
    Src = 0LL;
    if ( v9 )
      operator delete(v9);
    return v4;
  }
  else
  {
    *a3 = 0;
    return 3223126017LL;
  }
}
