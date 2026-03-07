__int64 __fastcall DXGSYNCOBJECT::GetHostHandle(DXGSYNCOBJECT *this, int a2)
{
  struct _KTHREAD **v5; // rsi
  unsigned int v6; // edi
  __int64 **v7; // rbx
  __int64 *i; // rax

  if ( (*((_BYTE *)this + 204) & 1) == 0 )
    return *((unsigned int *)this + 24);
  v5 = (struct _KTHREAD **)((char *)this + 32);
  v6 = 0;
  DXGFASTMUTEX::Acquire((DXGSYNCOBJECT *)((char *)this + 32));
  v7 = (__int64 **)((char *)this + 104);
  for ( i = *v7; i != (__int64 *)v7; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 4) == a2 )
    {
      v6 = *((_DWORD *)i + 5);
      break;
    }
  }
  DXGFASTMUTEX::Release(v5);
  return v6;
}
