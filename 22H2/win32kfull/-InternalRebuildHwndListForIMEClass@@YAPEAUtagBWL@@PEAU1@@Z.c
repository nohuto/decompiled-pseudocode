/*
 * XREFs of ?InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@@Z @ 0x1C01D1CC0
 * Callers:
 *     BuildHwndList @ 0x1C006CAC0 (BuildHwndList.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 */

struct tagBWL *__fastcall InternalRebuildHwndListForIMEClass(struct tagBWL *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // r15
  char *v4; // rbx
  unsigned __int64 v5; // rax
  __int64 *v6; // r14
  __int64 v7; // rdx
  bool i; // zf
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rcx
  signed __int64 v13; // rbx

  v2 = (_QWORD *)Win32AllocPool(*((_QWORD *)a1 + 2) - (_QWORD)a1 + 8LL, 1819767637LL);
  v3 = v2;
  if ( v2 )
  {
    v4 = (char *)a1 + 32;
    v5 = *((_QWORD *)a1 + 4);
    v6 = (__int64 *)((char *)a1 + 32);
    while ( v5 != 1 )
    {
      v7 = HMValidateHandleNoSecure(v5, 1);
      for ( i = v7 == 0; !i; i = v7 == 0 )
      {
        v9 = *(_QWORD *)(*(_QWORD *)(v7 + 136) + 8LL);
        if ( (*(_BYTE *)(v9 + 10) & 1) != 0 || *(_WORD *)v9 == *(_WORD *)(gpsi + 898LL) )
          goto LABEL_9;
        v7 = *(_QWORD *)(v7 + 120);
      }
      v7 = 0LL;
LABEL_9:
      v10 = *v6;
      if ( v7 )
      {
        *v3++ = v10;
      }
      else
      {
        *(_QWORD *)v4 = v10;
        v4 += 8;
      }
      v5 = *++v6;
    }
    *v3 = 0LL;
    v11 = v2;
    v12 = *v2;
    if ( *v2 )
    {
      v13 = v4 - (char *)v2;
      do
      {
        *(__int64 *)((char *)v11++ + v13) = v12;
        v12 = *v11;
      }
      while ( *v11 );
    }
    Win32FreePool(v2);
  }
  return a1;
}
