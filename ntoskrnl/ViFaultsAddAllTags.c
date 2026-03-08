/*
 * XREFs of ViFaultsAddAllTags @ 0x140AD3400
 * Callers:
 *     VfFaultsSetParameters @ 0x140AD3148 (VfFaultsSetParameters.c)
 *     ViFaultsInitializeTagsList @ 0x140AD387C (ViFaultsInitializeTagsList.c)
 * Callees:
 *     ViFaultsAddTagNoDuplicates @ 0x140AD3600 (ViFaultsAddTagNoDuplicates.c)
 */

__int64 __fastcall ViFaultsAddAllTags(unsigned __int16 *a1, int a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rdi
  __int64 v4; // rbp
  unsigned __int64 v5; // rdx
  unsigned __int16 *i; // rbx
  unsigned __int64 v7; // rdx
  int v8; // eax

  v2 = 0LL;
  v3 = (unsigned __int64)&a1[a2];
  if ( (unsigned __int64)a1 < v3 )
  {
    v4 = 0x100002601LL;
    do
    {
      v5 = *a1;
      if ( (unsigned int)v5 <= 0x20 && _bittest64(&v4, v5) || (_WORD)v5 == 12288 )
      {
        i = a1;
      }
      else
      {
        for ( i = a1; (unsigned __int64)i < v3; ++i )
        {
          v7 = *i;
          if ( (unsigned int)v7 <= 0x20 && _bittest64(&v4, v7) )
            break;
          if ( (_WORD)v7 == 12288 )
            break;
        }
        v8 = ViFaultsAddTagNoDuplicates(a1, i - a1, v2);
        v2 = (unsigned int)v8;
        if ( v8 < 0 )
          return (unsigned int)v2;
      }
      a1 = i + 1;
    }
    while ( (unsigned __int64)(i + 1) < v3 );
  }
  return (unsigned int)v2;
}
