__int64 __fastcall EdgyUnregisterListener(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v4; // rcx
  struct tagEDGY_DATA *Listener; // rax
  Edgy *v6; // rcx
  struct tagEDGY_LISTENER *v7; // r8

  v1 = 0;
  if ( !a1 )
    return 0LL;
  v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 240LL);
  if ( v4 )
  {
    Listener = (struct tagEDGY_DATA *)Edgy::_FindListener(v4, *(_QWORD *)a1, *(_DWORD *)(a1 + 16));
    if ( Listener )
    {
      Edgy::_RemoveListenerCore(v6, Listener, v7);
      return 1;
    }
  }
  return v1;
}
