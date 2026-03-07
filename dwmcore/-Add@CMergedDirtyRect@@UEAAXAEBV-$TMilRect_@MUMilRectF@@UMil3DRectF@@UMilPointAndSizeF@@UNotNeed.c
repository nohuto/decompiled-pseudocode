__int64 __fastcall CMergedDirtyRect::Add(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rax

  v2 = 0LL;
  v5 = 0LL;
  if ( g_pComposition )
    v5 = *((_QWORD *)g_pComposition + 62);
  if ( a1[11] != v5 )
  {
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
    if ( g_pComposition )
      v2 = *((_QWORD *)g_pComposition + 62);
    a1[11] = v2;
  }
  return CMergedRectBase<4>::Add(a1, a2);
}
