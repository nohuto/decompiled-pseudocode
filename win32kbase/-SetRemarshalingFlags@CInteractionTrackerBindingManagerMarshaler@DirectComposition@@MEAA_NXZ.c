char __fastcall DirectComposition::CInteractionTrackerBindingManagerMarshaler::SetRemarshalingFlags(
        DirectComposition::CInteractionTrackerBindingManagerMarshaler *this)
{
  char v1; // bl
  unsigned int v3; // esi
  __int64 v4; // rdx
  size_t v5; // r8
  __int128 *v6; // rcx
  __int128 v7; // xmm0
  unsigned __int64 v8; // rax
  __int128 Src; // [rsp+20h] [rbp-28h] BYREF
  __int128 v11; // [rsp+30h] [rbp-18h]

  v1 = 0;
  v3 = 0;
  if ( *((_QWORD *)this + 12) )
  {
    v4 = 0LL;
    do
    {
      v5 = *((_QWORD *)this + 13);
      v6 = (__int128 *)(*((_QWORD *)this + 9) + v4 * v5);
      v7 = *v6;
      v11 = v6[1];
      DWORD1(v11) = 0;
      Src = v7;
      memmove(v6, &Src, v5);
      v8 = *((_QWORD *)this + 12);
      v4 = ++v3;
    }
    while ( v3 < v8 );
    if ( v8 )
      *((_DWORD *)this + 4) |= 0x40u;
  }
  if ( DirectComposition::CNotificationResourceMarshaler::SetRemarshalingFlags(this)
    || (*((_DWORD *)this + 4) & 0x40) != 0 )
  {
    return 1;
  }
  return v1;
}
