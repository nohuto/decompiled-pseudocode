/*
 * XREFs of BiAddBootEntryToNvramDisplayOrder @ 0x140A5AC9C
 * Callers:
 *     BiBindEfiEntries @ 0x14082D024 (BiBindEfiEntries.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     BiQueryBootEntryOrder @ 0x14082BC18 (BiQueryBootEntryOrder.c)
 *     BiSetBootEntryOrder @ 0x140A5C048 (BiSetBootEntryOrder.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiAddBootEntryToNvramDisplayOrder(__int64 a1)
{
  _DWORD *v2; // rdi
  int v3; // eax
  void *v4; // rbp
  unsigned int v5; // esi
  __int64 v6; // rbx
  __int64 Pool2; // rax
  unsigned int v9; // [rsp+48h] [rbp+10h] BYREF
  void *Src; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0;
  Src = 0LL;
  v2 = 0LL;
  v3 = BiQueryBootEntryOrder(&Src, &v9);
  v4 = Src;
  v5 = v3;
  if ( v3 >= 0 )
  {
    v6 = 0LL;
    if ( v9 )
    {
      while ( *((_DWORD *)Src + v6) != *(_DWORD *)(*(_QWORD *)(a1 + 40) + 8LL) )
      {
        v6 = (unsigned int)(v6 + 1);
        if ( (unsigned int)v6 >= v9 )
          goto LABEL_5;
      }
    }
    else
    {
LABEL_5:
      Pool2 = ExAllocatePool2(258LL, 4LL * (unsigned int)(v6 + 1), 1262764866LL);
      v2 = (_DWORD *)Pool2;
      if ( Pool2 )
      {
        if ( (_DWORD)v6 )
          memmove((void *)(Pool2 + 4), v4, 4LL * (unsigned int)v6);
        *v2 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
        v5 = BiSetBootEntryOrder(v2, (unsigned int)(v6 + 1));
      }
      else
      {
        v5 = -1073741801;
      }
    }
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4B444342u);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x4B444342u);
  return v5;
}
