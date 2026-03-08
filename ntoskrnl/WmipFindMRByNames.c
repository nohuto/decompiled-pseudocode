/*
 * XREFs of WmipFindMRByNames @ 0x140819B9C
 * Callers:
 *     WmipAddMofResource @ 0x1408199DC (WmipAddMofResource.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402046C0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     WmipReferenceEntry @ 0x14069C27C (WmipReferenceEntry.c)
 */

_QWORD *__fastcall WmipFindMRByNames(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rbx
  unsigned __int16 *v5; // rax
  __int64 v6; // rdx
  int v7; // r8d
  int v8; // ecx
  unsigned __int16 *v10; // rax
  __int64 v11; // rdx
  int v12; // r8d
  int v13; // ecx

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v4 = *(_QWORD **)WmipMRHeadPtr;
  if ( *(_QWORD *)WmipMRHeadPtr == WmipMRHeadPtr )
  {
LABEL_7:
    v4 = 0LL;
  }
  else
  {
    while ( 1 )
    {
      v5 = (unsigned __int16 *)v4[5];
      v6 = a1 - (_QWORD)v5;
      do
      {
        v7 = *(unsigned __int16 *)((char *)v5 + v6);
        v8 = *v5 - v7;
        if ( v8 )
          break;
        ++v5;
      }
      while ( v7 );
      if ( !v8 )
      {
        v10 = (unsigned __int16 *)v4[6];
        v11 = a2 - (_QWORD)v10;
        do
        {
          v12 = *(unsigned __int16 *)((char *)v10 + v11);
          v13 = *v10 - v12;
          if ( v13 )
            break;
          ++v10;
        }
        while ( v12 );
        if ( !v13 )
          break;
      }
      v4 = (_QWORD *)*v4;
      if ( v4 == (_QWORD *)WmipMRHeadPtr )
        goto LABEL_7;
    }
    WmipReferenceEntry((ULONG_PTR)v4);
  }
  KeReleaseMutex(&WmipSMMutex, 0);
  return v4;
}
