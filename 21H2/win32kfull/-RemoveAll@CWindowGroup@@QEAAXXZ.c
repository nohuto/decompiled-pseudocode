/*
 * XREFs of ?RemoveAll@CWindowGroup@@QEAAXXZ @ 0x1C0240814
 * Callers:
 *     _lambda_61241d85ba638410c71ba06bf69ceb6b_::operator() @ 0x1C023FB08 (_lambda_61241d85ba638410c71ba06bf69ceb6b_--operator().c)
 *     ?Cleanup@CWindowGroupManager@@QEAAXW4CleanupType@1@@Z @ 0x1C0240054 (-Cleanup@CWindowGroupManager@@QEAAXW4CleanupType@1@@Z.c)
 * Callees:
 *     ?_FreeWindow@CWindowGroup@@AEAAXPEAPEAVCWindow@@@Z @ 0x1C0240C3C (-_FreeWindow@CWindowGroup@@AEAAXPEAPEAVCWindow@@@Z.c)
 */

void __fastcall CWindowGroup::RemoveAll(CWindowGroup *this)
{
  _QWORD *v1; // rsi
  CWindowGroup *v3; // rbx
  CWindowGroup *v4; // rcx
  _QWORD *i; // rdx
  struct CWindow *v6; // rdx
  CWindowGroup *j; // rcx
  struct CWindow *v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = (_QWORD *)*((_QWORD *)this + 4);
  v3 = (CWindowGroup *)v1;
  while ( 1 )
  {
    if ( !v3 )
      goto LABEL_7;
    v4 = *(CWindowGroup **)v3;
    if ( (*(_QWORD *)v3 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v4 = *(CWindowGroup **)v3;
    if ( ((unsigned __int8)v4 & 1) != 0 )
    {
LABEL_7:
      for ( i = v1 + 1; ; ++i )
      {
        if ( (unsigned __int64)i >= *((_QWORD *)this + 4) + 8 * ((unsigned __int64)*((unsigned int *)this + 7) >> 5) )
        {
          v4 = 0LL;
          goto LABEL_12;
        }
        if ( (*i & 1) == 0 )
          break;
      }
      v3 = (CWindowGroup *)*i;
      v1 = i;
      v4 = (CWindowGroup *)*i;
    }
    else
    {
      v3 = v4;
    }
LABEL_12:
    if ( !v4 )
      break;
    v6 = v3;
    for ( j = (CWindowGroup *)v1; (*(_QWORD *)j & 1) == 0; j = *(CWindowGroup **)j )
    {
      if ( *(CWindowGroup **)j == v3 )
      {
        *(_QWORD *)j = *(_QWORD *)v3;
        --*((_DWORD *)this + 6);
        *(_QWORD *)v3 |= 0x8000000000000002uLL;
        v3 = j;
        goto LABEL_20;
      }
    }
    v6 = 0LL;
LABEL_20:
    v8 = v6;
    CWindowGroup::_FreeWindow(j, &v8);
  }
  *(_OWORD *)((char *)this + 40) = 0LL;
}
