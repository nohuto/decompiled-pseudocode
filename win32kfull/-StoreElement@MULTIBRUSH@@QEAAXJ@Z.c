void __fastcall MULTIBRUSH::StoreElement(MULTIBRUSH *this, int a2)
{
  __int64 v2; // rax
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    v4 = *((_QWORD *)this + 4);
    if ( v4 )
    {
      if ( *((_QWORD *)this + 5) != -1LL )
      {
        *(_QWORD *)(v4 + 16 * (a2 + 1LL)) = *(_QWORD *)(v2 + 32);
        *(_QWORD *)(*((_QWORD *)this + 1) + 32LL) = *((_QWORD *)this + 5);
        *((_QWORD *)this + 5) = -1LL;
      }
      *(_QWORD *)(*((_QWORD *)this + 4) + 16LL * a2 + 8) = *(_QWORD *)(*((_QWORD *)this + 1) + 8LL);
      v5 = *((_QWORD *)this + 2);
      if ( v5 )
        *(_QWORD *)(*((_QWORD *)this + 1) + 80LL) = v5;
      v6 = *((_QWORD *)this + 3);
      if ( v6 )
        *(_QWORD *)(*((_QWORD *)this + 1) + 88LL) = v6;
    }
    **((_DWORD **)this + 1) = *((_DWORD *)this + 1);
    *(_QWORD *)(*((_QWORD *)this + 1) + 8LL) = *((_QWORD *)this + 4);
  }
}
