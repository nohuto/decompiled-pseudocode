char __fastcall CDrawListBitmap::IsOpaque(CDrawListBitmap *this)
{
  __int64 v2; // rcx
  __int64 (__fastcall ***v4)(_QWORD, _BYTE *); // rcx
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_BYTE *)this + 16) )
    return 1;
  v2 = *(_QWORD *)this;
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64, CDrawListBitmap *))(*(_QWORD *)v2 + 8LL))(v2, this);
  v4 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*((_QWORD *)this + 1)
                                                 + 8LL
                                                 + *(int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL) + 8LL));
  return *(_DWORD *)((**v4)(v4, v5) + 4) == 3;
}
