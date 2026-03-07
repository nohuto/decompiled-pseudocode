__int64 DynArrayImpl<0>::AddMultipleAndSet(__int64 a1, int a2, int a3, ...)
{
  int v6; // esi
  void *Src; // [rsp+58h] [rbp+20h] BYREF
  va_list Srca; // [rsp+58h] [rbp+20h]
  va_list va1; // [rsp+60h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(Srca, a3);
  Src = va_arg(va1, void *);
  v6 = DynArrayImpl<0>::Grow(a1, a2, a3, 0, (__int64)Srca);
  if ( v6 >= 0 )
  {
    memcpy_0((void *)(*(_QWORD *)a1 + (unsigned int)(*(_DWORD *)(a1 + 24) * a2)), Src, (unsigned int)(a3 * a2));
    *(_DWORD *)(a1 + 24) += a3;
  }
  return (unsigned int)v6;
}
