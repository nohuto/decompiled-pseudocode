BOOL __stdcall PATHOBJ_bEnum(PATHOBJ *ppo, PATHDATA *ppd)
{
  PATHOBJ v2; // r11
  BOOL v3; // r8d
  __int64 v5; // r9
  FLONG fl; // ecx
  __int64 *i; // rax
  int v8; // edx
  _DWORD *j; // rcx
  BOOL result; // eax

  v2 = ppo[1];
  v3 = 0;
  v5 = *(_QWORD *)(*(_QWORD *)&v2 + 72LL);
  if ( !v5 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)&v2 + 32LL);
    if ( !v5 )
    {
      *(_QWORD *)&ppd->flags = 0LL;
      result = 0;
      ppd->pptfx = 0LL;
      return result;
    }
    *(_QWORD *)(*(_QWORD *)&v2 + 72LL) = v5;
  }
  ppd->count = *(_DWORD *)(v5 + 20);
  ppd->flags = *(_DWORD *)(v5 + 16);
  ppd->pptfx = (POINTFIX *)(v5 + 24);
  *(_QWORD *)(*(_QWORD *)&v2 + 72LL) = *(_QWORD *)v5;
  fl = ppo->fl;
  if ( (fl & 0xC) == 4 )
  {
    ppo->fl = fl & 0xFFFFFFFB;
    for ( i = *(__int64 **)(*(_QWORD *)&v2 + 32LL); i; i = (__int64 *)*i )
    {
      v8 = *((_DWORD *)i + 5);
      for ( j = i + 3; v8; --v8 )
      {
        *j *= 16;
        j[1] *= 16;
        j += 2;
      }
    }
  }
  LOBYTE(v3) = *(_QWORD *)(*(_QWORD *)&v2 + 72LL) != 0LL;
  return v3;
}
