void __fastcall KiSaveIptState(unsigned __int64 *a1)
{
  char v1; // r9
  unsigned __int64 v2; // rax
  unsigned __int64 *v3; // r8
  unsigned __int64 v4; // rax
  _QWORD *v5; // r8
  unsigned int i; // r10d
  int v7; // eax
  unsigned __int64 v8; // rax

  v1 = 0;
  if ( KiXSaveAreaLength )
  {
    v2 = __readmsr(0x570u);
    *a1 = v2;
    v3 = a1 + 1;
    if ( (v2 & 1) != 0 )
      __writemsr(0x570u, v2 - 1);
    if ( (KiIptMsrMask & 2) != 0 )
    {
      *v3 = __readmsr(0x560u);
      v3 = a1 + 2;
    }
    if ( (KiIptMsrMask & 4) != 0 )
      *v3++ = __readmsr(0x561u);
    v4 = __readmsr(0x571u);
    *v3 = ((unsigned __int64)HIDWORD(v4) << 32) | (unsigned int)v4;
    v5 = v3 + 1;
    if ( (KiIptMsrMask & 0x10) != 0 )
      *v5++ = __readmsr(0x572u);
    for ( i = 1409; i < 0x589; i += 2 )
    {
      v7 = KiIptMsrMask;
      if ( !_bittest(&v7, (unsigned __int8)(v1 + 5)) )
        break;
      *v5 = __readmsr(i - 1);
      v8 = __readmsr(i);
      ++v1;
      v5[1] = v8;
      v5 += 2;
    }
  }
}
