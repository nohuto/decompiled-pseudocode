__int64 **__fastcall CVisual::FindTreeData(CVisual *this, const struct CVisualTree *a2)
{
  __int64 v4; // rbx
  __int64 v6; // r8
  __int64 v7; // rcx
  _BYTE *v8; // rdx
  unsigned int i; // eax
  __int64 ****v10; // rcx
  __int64 ***v11; // rcx
  __int64 **j; // rax

  v4 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2) )
    return (__int64 **)((char *)this + 336);
  v6 = *((_QWORD *)this + 29);
  if ( *(int *)v6 < 0 )
  {
    v7 = *(unsigned int *)(v6 + 4);
    v8 = (_BYTE *)(v6 + 8);
    for ( i = 0; i < (unsigned int)v7; ++v8 )
    {
      if ( *v8 == 1 )
        break;
      ++i;
    }
    v10 = i >= (unsigned int)v7 ? 0LL : (__int64 ****)(v7 + 15 + v6 + 8LL * i - (((_BYTE)v7 + 15) & 7));
    v11 = *v10;
    if ( v11 )
    {
      for ( j = *v11; j != (__int64 **)v11; j = (__int64 **)*j )
      {
        if ( j[4] == (__int64 *)a2 )
          return j - 45;
      }
    }
  }
  return (__int64 **)v4;
}
