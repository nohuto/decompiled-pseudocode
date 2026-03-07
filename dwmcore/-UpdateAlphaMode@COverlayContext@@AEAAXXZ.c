void __fastcall COverlayContext::UpdateAlphaMode(COverlayContext *this)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 (__fastcall ***v5)(_QWORD, _BYTE *); // rcx
  _BYTE v6[16]; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_QWORD *)this + 914) == *((_QWORD *)this + 913) )
    v2 = *((_DWORD *)this + 2);
  else
    v2 = 1;
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 176LL))(*(_QWORD *)this);
  v4 = v3;
  if ( v3 )
  {
    v5 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*(int *)(*(_QWORD *)(v3 + 8) + 8LL) + v3 + 8);
    if ( *(_DWORD *)((**v5)(v5, v6) + 4) != v2 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 120LL))(v4, v2);
      *((_BYTE *)this + 11310) = 1;
    }
  }
}
