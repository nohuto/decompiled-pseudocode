char __fastcall CComposition::AreAnimateUpdatesRequired(CComposition *this)
{
  char v1; // si
  unsigned int v2; // r14d
  char v3; // bl
  __int64 i; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax

  v1 = 0;
  v2 = *((_DWORD *)this + 178);
  v3 = BYTE2(Microsoft_Windows_Dwm_CoreEnableBits) & 1;
  for ( i = 0LL; (!v1 || v3) && (unsigned int)i < v2; i = (unsigned int)(i + 1) )
  {
    v7 = *(_QWORD *)(*((_QWORD *)this + 86) + 8 * i);
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7) )
    {
      v1 = 1;
      if ( v3 )
      {
        v8 = *(_QWORD *)(*((_QWORD *)this + 86) + 8 * i);
        v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        if ( v9 )
        {
          ++*(_DWORD *)(v9 + 92);
          *((_BYTE *)this + 1273) = 1;
        }
      }
    }
  }
  return v1;
}
