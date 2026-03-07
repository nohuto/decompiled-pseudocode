void __fastcall CInputQueueProp::DetachInputQueue(CInputQueueProp *this, struct IInputQueue *a2, __int64 a3)
{
  __int64 v4; // r9
  unsigned int v5; // ecx
  __int64 v7; // rdx
  __int64 v8; // rcx

  v4 = 0LL;
  v5 = *((_DWORD *)this + 8);
  if ( v5 )
  {
    v7 = *((_QWORD *)this + 3);
    while ( a2 != *(struct IInputQueue **)(v7 + 8 * v4) )
    {
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= v5 )
        return;
    }
    *((_DWORD *)this + 8) = v5 - 1;
    if ( (unsigned int)v4 < v5 - 1 )
    {
      do
      {
        v7 = *((_QWORD *)this + 3);
        a3 = (unsigned int)(v4 + 1);
        v8 = (unsigned int)v4;
        v4 = a3;
        *(_QWORD *)(v7 + 8 * v8) = *(_QWORD *)(v7 + 8 * a3);
      }
      while ( (unsigned int)a3 < *((_DWORD *)this + 8) );
    }
    (*(void (__fastcall **)(struct IInputQueue *, __int64, __int64, __int64))(*(_QWORD *)a2 + 8LL))(a2, v7, a3, v4);
  }
}
