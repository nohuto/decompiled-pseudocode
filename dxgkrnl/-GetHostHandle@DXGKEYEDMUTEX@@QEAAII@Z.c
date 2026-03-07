__int64 __fastcall DXGKEYEDMUTEX::GetHostHandle(DXGKEYEDMUTEX *this, int a2)
{
  struct _KTHREAD **v2; // rsi
  unsigned int v5; // edi
  __int64 **v6; // rbx
  __int64 *i; // rax

  v2 = (struct _KTHREAD **)((char *)this + 112);
  v5 = 0;
  DXGFASTMUTEX::Acquire((DXGKEYEDMUTEX *)((char *)this + 112));
  v6 = (__int64 **)((char *)this + 40);
  for ( i = *v6; i != (__int64 *)v6; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 4) == a2 )
    {
      v5 = *((_DWORD *)i + 5);
      break;
    }
  }
  DXGFASTMUTEX::Release(v2);
  return v5;
}
