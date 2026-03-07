char __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitSetRequestedScaleAnimation(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  __int64 v4; // rcx
  _DWORD *v5; // rcx
  char *v6; // rdx
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rax
  void *v11; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x40000) != 0 )
    return 1;
  v4 = *((_QWORD *)this + 28);
  if ( !v4
    || (v5 = *(_DWORD **)(v4 + 16)) == 0LL
    || v5[9] != 92
    || (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 40LL))(v5) )
  {
    v11 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v11) )
    {
      v6 = (char *)v11;
      *(_DWORD *)v11 = 36;
      *(_OWORD *)(v6 + 4) = 0LL;
      *(_OWORD *)(v6 + 20) = 0LL;
      *((_DWORD *)v6 + 1) = 218;
      v7 = *((_DWORD *)this + 8);
      *((_DWORD *)v6 + 3) = 0;
      *((_DWORD *)v6 + 2) = v7;
      v6[16] = (*((_BYTE *)this + 464) & 2) == 0;
      *((_DWORD *)v6 + 5) = *((_DWORD *)this + 45);
      *((_DWORD *)v6 + 6) = *((_DWORD *)this + 46);
      *((_DWORD *)v6 + 8) = *((_DWORD *)this + 44);
      v8 = *((_QWORD *)this + 28);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 16);
        if ( v9 )
          *((_DWORD *)v6 + 3) = *(_DWORD *)(v9 + 32);
      }
      *((_BYTE *)this + 464) |= 2u;
      *((_DWORD *)this + 4) |= 0x40000u;
      return 1;
    }
  }
  return 0;
}
