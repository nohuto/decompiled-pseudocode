_BOOL8 __fastcall IsVSlick(struct tagWND *a1)
{
  __int64 v2; // rax
  unsigned __int32 v3; // r8d
  unsigned __int32 v4; // r9d
  _BOOL8 result; // rax
  __m128i v6; // [rsp+20h] [rbp-28h]
  __m128i v7; // [rsp+30h] [rbp-18h] BYREF

  v6 = *GetScreenRectForWindow(&v7, a1);
  result = 0;
  if ( *(_DWORD *)*gpDispInfo == 1 )
  {
    v2 = *((_QWORD *)a1 + 5);
    v3 = *(_DWORD *)(v2 + 88);
    if ( v3 > v6.m128i_i32[2] )
    {
      v4 = *(_DWORD *)(v2 + 92);
      if ( v4 > v6.m128i_i32[3] && v4 == v6.m128i_i32[3] + 100 && v3 == v6.m128i_i32[2] + 100 )
        return 1;
    }
  }
  return result;
}
