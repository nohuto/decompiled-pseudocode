/*
 * XREFs of CmpFreeLineList @ 0x140B4ED2C
 * Callers:
 *     CmpFreeSectionList @ 0x140B4ECD4 (CmpFreeSectionList.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFreeLineList(_QWORD *P)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rsi
  void *v3; // rcx
  _QWORD *v4; // rdi
  _QWORD *v5; // rbp
  void *v6; // rcx

  if ( P )
  {
    v1 = P;
    do
    {
      v2 = (_QWORD *)*v1;
      if ( *((_BYTE *)v1 + 24) )
      {
        v3 = (void *)v1[1];
        if ( v3 )
          ExFreePoolWithTag(v3, 0);
      }
      v4 = (_QWORD *)v1[2];
      if ( v4 )
      {
        do
        {
          v5 = (_QWORD *)*v4;
          if ( *((_BYTE *)v4 + 16) )
          {
            v6 = (void *)v4[1];
            if ( v6 )
              ExFreePoolWithTag(v6, 0);
          }
          ExFreePoolWithTag(v4, 0);
          v4 = v5;
        }
        while ( v5 );
      }
      ExFreePoolWithTag(v1, 0);
      v1 = v2;
    }
    while ( v2 );
  }
}
