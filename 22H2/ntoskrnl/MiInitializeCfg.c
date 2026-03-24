/*
 * XREFs of MiInitializeCfg @ 0x140A54F90
 * Callers:
 *     MiInitSystem @ 0x140A53E5C (MiInitSystem.c)
 * Callees:
 *     MiSectionControlArea @ 0x1402958E0 (MiSectionControlArea.c)
 *     MmCreateSection @ 0x140701F50 (MmCreateSection.c)
 */

__int64 MiInitializeCfg()
{
  __int64 result; // rax
  unsigned __int64 *v1; // rbx
  int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // [rsp+50h] [rbp+8h] BYREF
  __int64 v5; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0LL;
  v5 = 0x20000000000LL;
  result = MmCreateSection((int)&v4, 983071LL, 0, &v5, 4, 0x4000000, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    qword_140C4CC20 = v4;
    qword_140C4CC28 = MiSectionControlArea(v4);
    v1 = (unsigned __int64 *)&unk_140C4CBC0;
    v2 = 0;
    v5 = 0x4000000LL;
    while ( 1 )
    {
      result = MmCreateSection((int)&v4, 983071LL, 0, &v5, 4, 0x4000000, 0LL, 0LL);
      if ( (int)result < 0 )
        break;
      v3 = v4;
      *(v1 - 1) = v4;
      *v1 = MiSectionControlArea(v3);
      ++v2;
      v1 += 8;
      if ( v2 )
        return 0LL;
    }
  }
  return result;
}
